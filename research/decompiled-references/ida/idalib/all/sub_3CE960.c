unsigned __int64 __fastcall sub_3CE960(_QWORD *a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rax
  _QWORD *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // r13
  __int64 v14; // rax
  int v15; // r13d
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  _QWORD *v18; // rsi
  _QWORD *v19; // rdi
  __int64 v20; // rcx
  bool v21; // cc
  __int64 range; // rdx
  int v23; // eax
  unsigned __int64 v24; // [rsp+0h] [rbp-48h] BYREF
  __int64 v25; // [rsp+8h] [rbp-40h]
  int v26; // [rsp+10h] [rbp-38h]
  unsigned __int64 v27; // [rsp+18h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( a1[128] != a3 )
  {
    v7 = a1[129];
    if ( v7 <= 0xFFFFFFFFFFFFFFFDLL )
    {
      v11 = nullptr;
    }
    else
    {
      v11 = a1 + 113;
      if ( v7 == -1 )
        v11 = a1 + 119;
    }
    v12 = a1[125];
    v13 = v11[3];
    while ( 1 )
    {
      if ( v12 == v13 )
        goto LABEL_10;
      v12 = std::_Rb_tree_decrement(v12);
      v14 = *(_QWORD *)(v12 + 40);
      if ( v14 )
        break;
      if ( (*(_DWORD *)(v12 + 48) & 0x600) != 0x200 )
        goto LABEL_10;
    }
    if ( (_QWORD *)v12 == v11 + 1 )
    {
LABEL_10:
      v15 = 0;
      if ( !a1[146] )
        goto LABEL_11;
      goto LABEL_23;
    }
    v15 = (a3 < *(_QWORD *)(v12 + 32) + v14) << 9;
    if ( !a1[146] )
      goto LABEL_11;
LABEL_23:
    range = rangeset_t_find_range(a1 + 145, a3);
    v23 = v15;
    if ( range )
    {
      BYTE1(v23) = BYTE1(v15) | 1;
      v15 = v23;
    }
LABEL_11:
    v16 = (_QWORD *)a2[2];
    v17 = a2 + 1;
    v24 = a3;
    v25 = 0;
    v18 = a2 + 1;
    v26 = v15;
    if ( !v16 )
      goto LABEL_20;
    do
    {
      while ( 1 )
      {
        v19 = (_QWORD *)v16[2];
        v20 = v16[3];
        if ( v16[4] < a3 )
          break;
        v18 = v16;
        v16 = (_QWORD *)v16[2];
        if ( !v19 )
          goto LABEL_16;
      }
      v16 = (_QWORD *)v16[3];
    }
    while ( v20 );
LABEL_16:
    if ( v18 == v17 || a3 < v18[4] )
    {
LABEL_20:
      v19 = a2;
      v18 = sub_3CD760(a2, v18, (__int64)&v24);
    }
    v21 = a1[129] <= 0xFFFFFFFFFFFFFFFDLL;
    a1[125] = v18;
    if ( v21 )
      sub_3B8CD0(v19, v18, v16, v20, a5, a6, v24, v25, v26);
    a1[128] = a3;
  }
  return v27 - __readfsqword(0x28u);
}
