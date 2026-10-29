void __fastcall sub_235140(__int64 a1, char a2, __int64 a3, double a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx

  v6 = *(_QWORD *)(a1 + 240);
  if ( v6 )
  {
    v7 = *(_QWORD **)(v6 + 8);
    if ( v7 )
    {
      v8 = *(unsigned int *)(v6 + 4);
      if ( !(_DWORD)v8 )
        goto LABEL_37;
      v9 = qword_8CC430;
      a3 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
      if ( qword_8CC430 == a3 )
        goto LABEL_37;
      while ( (_DWORD)v8 != *(_DWORD *)v9 )
      {
        v9 += 256;
        if ( a3 == v9 )
          goto LABEL_37;
      }
      if ( !v9 )
      {
LABEL_37:
        if ( under_debugger )
          BUG();
        interr(40047, v8, a3, v7, a4);
        sub_235300();
        return;
      }
      v10 = *(_QWORD **)(v9 + 248);
      if ( v10 )
      {
        v11 = nullptr;
        while ( 1 )
        {
          v12 = v10[1];
          if ( v7 == v10 )
            break;
          v11 = v10;
          if ( !v12 )
            goto LABEL_17;
          v10 = (_QWORD *)v10[1];
        }
        if ( v11 )
          v11[1] = v12;
        else
          *(_QWORD *)(v9 + 248) = v12;
        (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      }
    }
LABEL_17:
    operator delete((void *)v6, 0x20u);
    *(_QWORD *)(a1 + 240) = 0;
  }
  v13 = *(_QWORD *)(a1 + 248);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( a2 )
        break;
      v15 = *(_QWORD *)(a1 + 248);
      if ( v15 )
        goto LABEL_21;
LABEL_28:
      v13 = v14;
      if ( !v14 )
        return;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(v13 + 100) & 4) == 0 )
      {
        v15 = *(_QWORD *)(a1 + 248);
        if ( v15 )
          break;
      }
      if ( !v14 )
        return;
      v13 = v14;
      v14 = *(_QWORD *)(v14 + 8);
    }
LABEL_21:
    v16 = 0;
    while ( 1 )
    {
      v17 = *(_QWORD *)(v15 + 8);
      if ( v13 == v15 )
        break;
      v16 = v15;
      if ( !v17 )
        goto LABEL_28;
      v15 = *(_QWORD *)(v15 + 8);
    }
    if ( v16 )
      *(_QWORD *)(v16 + 8) = v17;
    else
      *(_QWORD *)(a1 + 248) = v17;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    goto LABEL_28;
  }
}
