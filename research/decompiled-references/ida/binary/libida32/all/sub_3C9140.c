unsigned __int64 __fastcall sub_3C9140(__int64 a1, _QWORD *a2, unsigned int a3)
{
  unsigned __int64 v4; // rax
  __int64 v8; // r15
  _DWORD *v9; // rdi
  _DWORD *v10; // r13
  _DWORD *v11; // rax
  int v12; // r14d
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _DWORD *v15; // rsi
  _QWORD *v16; // rdi
  __int64 v17; // rcx
  bool v18; // cc
  __int64 range; // rdx
  int v20; // eax
  _DWORD v21[3]; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 1016) != a3 )
  {
    v4 = *(_QWORD *)(a1 + 1024);
    if ( v4 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v8 = 0;
    }
    else
    {
      v8 = a1 + 896;
      if ( v4 == -1 )
        v8 = a1 + 944;
    }
    v9 = *(_DWORD **)(a1 + 992);
    v10 = *(_DWORD **)(v8 + 24);
    while ( 1 )
    {
      if ( v9 == v10 )
        goto LABEL_26;
      v11 = (_DWORD *)std::_Rb_tree_decrement();
      v12 = v11[9];
      v9 = v11;
      if ( v12 )
        break;
      if ( (v11[10] & 0x600) != 0x200 )
        goto LABEL_10;
    }
    if ( v11 == (_DWORD *)(v8 + 8) )
    {
LABEL_26:
      v12 = 0;
LABEL_10:
      if ( !*(_QWORD *)(a1 + 1160) )
        goto LABEL_11;
      goto LABEL_23;
    }
    v12 = (a3 < v11[8] + v12) << 9;
    if ( !*(_QWORD *)(a1 + 1160) )
      goto LABEL_11;
LABEL_23:
    range = rangeset_t_find_range(a1 + 1152, a3);
    v20 = v12;
    if ( range )
    {
      BYTE1(v20) = BYTE1(v12) | 1;
      v12 = v20;
    }
LABEL_11:
    v13 = a2[2];
    v14 = a2 + 1;
    v21[0] = a3;
    v21[1] = 0;
    v15 = a2 + 1;
    v21[2] = v12;
    if ( !v13 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v16 = *(_QWORD **)(v13 + 16);
        v17 = *(_QWORD *)(v13 + 24);
        if ( *(_DWORD *)(v13 + 32) < a3 )
          break;
        v15 = (_DWORD *)v13;
        v13 = *(_QWORD *)(v13 + 16);
        if ( !v16 )
          goto LABEL_16;
      }
      v13 = *(_QWORD *)(v13 + 24);
    }
    while ( v17 );
LABEL_16:
    if ( v15 == (_DWORD *)v14 || a3 < v15[8] )
    {
LABEL_20:
      v16 = a2;
      v15 = sub_3C8070(a2, (__int64)v15, (__int64)v21);
    }
    v18 = *(_QWORD *)(a1 + 1024) <= 0xFFFFFFFFFFFFFFFDLL;
    *(_QWORD *)(a1 + 992) = v15;
    if ( v18 )
      sub_3B4540(v16, v15, v13, v17);
    *(_DWORD *)(a1 + 1016) = a3;
  }
  return v22 - __readfsqword(0x28u);
}

