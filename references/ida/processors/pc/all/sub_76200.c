__int64 __fastcall sub_76200(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rax
  unsigned int v3; // eax
  __int64 i; // r12
  __int64 v5; // rbp
  __int16 v6; // ax
  _QWORD **v7; // rbp
  unsigned __int64 v8; // r13
  int *j; // r15
  unsigned __int64 v10; // rcx
  int *v11; // rax
  char v12; // si
  void *v13; // rdi
  unsigned int v15; // [rsp+8h] [rbp-1E0h]
  int v16; // [rsp+Ch] [rbp-1DCh]
  int v17; // [rsp+18h] [rbp-1D0h] BYREF
  void *v18; // [rsp+20h] [rbp-1C8h]
  int *v19; // [rsp+28h] [rbp-1C0h]
  int *v20; // [rsp+30h] [rbp-1B8h]
  __int64 v21; // [rsp+38h] [rbp-1B0h]
  __int128 v22; // [rsp+40h] [rbp-1A8h] BYREF
  unsigned __int64 v23; // [rsp+50h] [rbp-198h]
  __int64 v24; // [rsp+58h] [rbp-190h]
  __int64 v25; // [rsp+60h] [rbp-188h]
  _QWORD v26[5]; // [rsp+68h] [rbp-180h] BYREF
  char v27; // [rsp+91h] [rbp-157h]
  __int64 v28; // [rsp+98h] [rbp-150h]
  unsigned __int64 v29; // [rsp+1A8h] [rbp-40h] BYREF

  v2 = v26;
  v29 = __readfsqword(0x28u);
  v22 = -1;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  do
  {
    *(_WORD *)v2 = 0;
    v2 += 5;
    *((_WORD *)v2 - 19) = 0;
    *((_WORD *)v2 - 18) = 0;
    *((_DWORD *)v2 - 2) = 0;
    *((_WORD *)v2 - 17) = 0;
    *((_OWORD *)v2 - 2) = 0;
    *(v2 - 2) = 0;
  }
  while ( &v29 != v2 );
  v3 = decode_insn();
  if ( !v3 )
    return 0;
  for ( i = v3 + a2; ; i += v5 )
  {
    v5 = (unsigned int)decode_insn();
    v6 = v24;
    if ( !(_DWORD)v5 || (_WORD)v24 != 210 && (_WORD)v24 != 122 )
      break;
  }
  if ( (_WORD)v24 == 6 && BYTE1(v26[0]) == 1 && HIWORD(v26[0]) == 4 && v27 == 5 )
  {
    v15 = v28;
    if ( (v24 & 0x1800000000LL) == 0 )
      return (unsigned int)(__int16)v28;
    return v15;
  }
  v17 = 0;
  v18 = 0;
  v19 = &v17;
  v20 = &v17;
  v21 = 0;
  v16 = 0;
  v15 = 0;
  if ( (_WORD)v24 == 134 )
    goto LABEL_25;
  while ( 1 )
  {
    v7 = (_QWORD **)v18;
    if ( v6 != 86 )
      break;
    v8 = v23;
    if ( !v18 )
    {
      if ( v19 == &v17 )
        goto LABEL_23;
      goto LABEL_28;
    }
    for ( j = (int *)v18; ; j = v11 )
    {
      v10 = *((_QWORD *)j + 4);
      v11 = (int *)*((_QWORD *)j + 2);
      v12 = 1;
      if ( v23 >= v10 )
      {
        v11 = (int *)*((_QWORD *)j + 3);
        v12 = 0;
      }
      if ( !v11 )
        break;
    }
    if ( v12 )
    {
      if ( v19 == j )
        goto LABEL_23;
LABEL_28:
      v10 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    }
    if ( v10 >= v8 )
      break;
LABEL_23:
    *(_QWORD *)(operator new(0x28u) + 32) = v23;
    std::_Rb_tree_insert_and_rebalance();
    ++v21;
    sub_7F350(a1, &v22, v26);
    if ( !(unsigned int)decode_insn() )
    {
LABEL_26:
      v7 = (_QWORD **)v18;
      break;
    }
    while ( 1 )
    {
      v6 = v24;
      if ( (_WORD)v24 != 134 )
        break;
LABEL_25:
      if ( (v26[0] & 0xFFFF00000000FF00LL) == 0x1000000000100LL )
      {
        v15 += sub_22C00((__int64)&v22);
        decode_insn();
        if ( ++v16 != 2 )
          continue;
      }
      goto LABEL_26;
    }
  }
  while ( v7 )
  {
    sub_69F00(v7[3]);
    v13 = v7;
    v7 = (_QWORD **)v7[2];
    operator delete(v13, 0x28u);
  }
  return v15;
}
