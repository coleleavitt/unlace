__int64 __fastcall sub_6076C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  unsigned __int64 *v3; // rax
  unsigned __int64 *v5; // rax
  char *v6; // rax
  unsigned __int64 *v7; // rax
  __int64 v8; // [rsp+0h] [rbp-1A8h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-1A0h]
  char v10; // [rsp+10h] [rbp-198h]
  char v11; // [rsp+11h] [rbp-197h]
  __int128 v12; // [rsp+20h] [rbp-188h] BYREF
  __int64 v13; // [rsp+30h] [rbp-178h]
  __int64 v14; // [rsp+38h] [rbp-170h]
  __int64 v15; // [rsp+40h] [rbp-168h]
  char v16; // [rsp+48h] [rbp-160h] BYREF
  _QWORD v17[4]; // [rsp+188h] [rbp-20h] BYREF

  v17[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)xrefblk_t_first_from(&v8, a2, 1) )
    return 0;
  if ( v10 )
    goto LABEL_3;
  v13 = -1;
  v6 = &v16;
  v14 = 0;
  v15 = 0;
  v12 = -1;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 40;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *((_QWORD *)v6 - 2) = 0;
  }
  while ( v17 != (_QWORD *)v6 );
  if ( (unsigned int)decode_insn(&v12, a2, v17, 0, 0, v2, 0.0) && (unsigned __int8)is_call_insn(&v12) )
    goto LABEL_3;
  if ( (unsigned __int8)segtype(v9) != 1 )
  {
LABEL_3:
    if ( v11 == 17 )
    {
      v5 = sub_5CAA10(a1, v9);
      if ( v5 && (v5[2] & 2) != 0 )
        return (unsigned int)((int)get_frame_retsize((__int64)v5) / 2);
    }
    else if ( (unsigned __int8)(v11 - 18) <= 1u )
    {
      v3 = sub_5CAA10(a1, v9);
      if ( v3 )
        return sub_5B7840(a1, (__int64)v3);
    }
    return 0;
  }
  v7 = sub_505D70(a1 + 1624, v9);
  if ( v7 )
    return (unsigned int)((1 << (*((_BYTE *)v7 + 43) + 4)) / 8);
  else
    return 2;
}
