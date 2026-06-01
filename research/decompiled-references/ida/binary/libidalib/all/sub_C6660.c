void __fastcall sub_C6660(__int64 a1, char a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx

  v4 = *(_QWORD *)(a1 + 240);
  if ( v4 )
  {
    v5 = *(_QWORD **)(v4 + 8);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v4 + 4);
      if ( !v6 )
        goto LABEL_37;
      v7 = qword_252590;
      v8 = qword_252590 + ((_QWORD)xmmword_252598 << 8);
      if ( qword_252590 == v8 )
        goto LABEL_37;
      while ( v6 != *(_DWORD *)v7 )
      {
        v7 += 256;
        if ( v8 == v7 )
          goto LABEL_37;
      }
      if ( !v7 )
      {
LABEL_37:
        if ( under_debugger )
          BUG();
        interr();
        sub_C6800(40047);
        return;
      }
      v9 = *(_QWORD **)(v7 + 248);
      if ( v9 )
      {
        v10 = nullptr;
        while ( 1 )
        {
          v11 = v9[1];
          if ( v5 == v9 )
            break;
          v10 = v9;
          if ( !v11 )
            goto LABEL_17;
          v9 = (_QWORD *)v9[1];
        }
        if ( v10 )
          v10[1] = v11;
        else
          *(_QWORD *)(v7 + 248) = v11;
        (*(void (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
      }
    }
LABEL_17:
    operator delete((void *)v4, 0x20u);
    *(_QWORD *)(a1 + 240) = 0;
  }
  v12 = *(_QWORD *)(a1 + 248);
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = *(_QWORD *)(v12 + 8);
      if ( a2 )
        break;
      v14 = *(_QWORD *)(a1 + 248);
      if ( v14 )
        goto LABEL_21;
LABEL_28:
      v12 = v13;
      if ( !v13 )
        return;
    }
    while ( 1 )
    {
      if ( (*(_BYTE *)(v12 + 100) & 4) == 0 )
      {
        v14 = *(_QWORD *)(a1 + 248);
        if ( v14 )
          break;
      }
      if ( !v13 )
        return;
      v12 = v13;
      v13 = *(_QWORD *)(v13 + 8);
    }
LABEL_21:
    v15 = 0;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v14 + 8);
      if ( v12 == v14 )
        break;
      v15 = v14;
      if ( !v16 )
        goto LABEL_28;
      v14 = *(_QWORD *)(v14 + 8);
    }
    if ( v15 )
      *(_QWORD *)(v15 + 8) = v16;
    else
      *(_QWORD *)(a1 + 248) = v16;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    goto LABEL_28;
  }
}

