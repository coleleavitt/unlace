unsigned __int64 __fastcall sub_72440(__int64 a1, __int64 a2, __int64 *a3, int a4, __int64 a5)
{
  __int64 v6; // rax
  char *v7; // rax
  __int64 v8; // rbx
  int v9; // r12d
  unsigned __int64 *v10; // rax
  __int64 v11; // rax
  char i; // al
  _BYTE *v13; // r14
  int v14; // r15d
  int v15; // eax
  char refinfo; // dl
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-3B0h]
  __int64 v21; // [rsp+10h] [rbp-3A0h]
  _QWORD v22[2]; // [rsp+28h] [rbp-388h] BYREF
  __int16 v23; // [rsp+38h] [rbp-378h]
  __int64 v24; // [rsp+50h] [rbp-360h]
  __int64 v25; // [rsp+68h] [rbp-348h] BYREF
  __int64 v26; // [rsp+70h] [rbp-340h]
  __int128 v27; // [rsp+78h] [rbp-338h]
  __int64 v28; // [rsp+88h] [rbp-328h]
  __int128 v29; // [rsp+98h] [rbp-318h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-308h]
  __int64 v31; // [rsp+B0h] [rbp-300h]
  __int64 v32; // [rsp+B8h] [rbp-2F8h]
  _BYTE v33[6]; // [rsp+C0h] [rbp-2F0h] BYREF
  unsigned __int16 v34; // [rsp+C6h] [rbp-2EAh]
  char v35; // [rsp+E9h] [rbp-2C7h]
  __int64 v36; // [rsp+F0h] [rbp-2C0h]
  char v37; // [rsp+200h] [rbp-1B0h] BYREF
  __int128 v38; // [rsp+208h] [rbp-1A8h] BYREF
  __int64 v39; // [rsp+218h] [rbp-198h]
  __int64 v40; // [rsp+220h] [rbp-190h]
  __int64 v41; // [rsp+228h] [rbp-188h]
  _BYTE v42[320]; // [rsp+230h] [rbp-180h] BYREF
  unsigned __int64 v43; // [rsp+370h] [rbp-40h] BYREF

  v19 = a5;
  v43 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26);
  v30 = -1;
  v31 = 0;
  v32 = 0;
  v21 = v6;
  v7 = v33;
  v29 = -1;
  do
  {
    *(_WORD *)v7 = 0;
    v7 += 40;
    *((_WORD *)v7 - 19) = 0;
    *((_WORD *)v7 - 18) = 0;
    *((_DWORD *)v7 - 2) = 0;
    *((_WORD *)v7 - 17) = 0;
    *((_OWORD *)v7 - 2) = 0;
    *((_QWORD *)v7 - 2) = 0;
  }
  while ( &v37 != v7 );
  v8 = a5;
  v9 = 10;
  while ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0
       && (unsigned int)decode_insn()
       && (unsigned __int16)(v31 - 53) > 0x24u
       && (unsigned __int16)(v31 - 16) > 2u
       && (unsigned __int16)(v31 - 108) > 0xBu )
  {
    if ( v33[1] == 1 && a4 == v34 && v35 == 5 )
    {
      if ( (_WORD)v31 == 6 )
      {
        if ( (get_flags_ex() & 0xF000000) == 0 )
        {
          DWORD2(v27) = 2;
          v26 = v21;
          v25 = -1;
          *(_QWORD *)&v27 = 0;
          op_offset_ex();
        }
        v19 = v30 + WORD1(v31);
        v21 += v36;
        break;
      }
      if ( (_WORD)v31 == 209 )
      {
        if ( (get_flags_ex() & 0xF000000) == 0 )
        {
          DWORD2(v27) = 258;
          v26 = v21;
          v25 = -1;
          *(_QWORD *)&v27 = 0;
          op_offset_ex();
        }
        v19 = v30 + WORD1(v31);
        v21 -= v36;
        break;
      }
    }
    LODWORD(v25) = a4;
    if ( (unsigned int)sub_72130(a1, (__int64)&v29, (int *)&v25, 1) == -1 )
    {
      v8 += WORD1(v31);
      if ( --v9 )
        continue;
    }
    break;
  }
  v22[0] = v21;
  v22[1] = v19;
  v23 = a4;
  sub_6B570(a1, v19, (__int64)v22, 1);
  sub_6B570(a1, *a3, (__int64)v22, 1);
  v10 = (unsigned __int64 *)v42;
  v39 = -1;
  v40 = 0;
  v41 = 0;
  v38 = -1;
  do
  {
    *(_WORD *)v10 = 0;
    v10 += 5;
    *((_WORD *)v10 - 19) = 0;
    *((_WORD *)v10 - 18) = 0;
    *((_DWORD *)v10 - 2) = 0;
    *((_WORD *)v10 - 17) = 0;
    *((_OWORD *)v10 - 2) = 0;
    *(v10 - 2) = 0;
  }
  while ( &v43 != v10 );
  LODWORD(v26) = -1;
  v25 = 0;
  v27 = 0;
  if ( v19 == -1 && a3 )
    v11 = *a3;
  else
    v11 = v19;
  v28 = v11;
  for ( i = func_tail_iterator_set(); i; i = func_item_iterator_next() )
  {
    if ( (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0 )
    {
      decode_insn();
      v13 = v42;
      v14 = 0;
      do
      {
        if ( (unsigned __int8)is_off() && sub_6D5F0((__int64)&v38, (__int64)v13, (__int16)a4, 0) )
        {
          refinfo = get_refinfo();
          v18 = -1;
          if ( refinfo )
            v18 = v24;
          if ( v21 != v18 )
            clr_op_type();
        }
        v15 = v14 + 1;
        v13 += 40;
        v14 = 1;
      }
      while ( v15 != 2 );
    }
  }
  if ( v25 )
    lock_func_range();
  return v43 - __readfsqword(0x28u);
}
