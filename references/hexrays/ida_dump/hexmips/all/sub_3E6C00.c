__int64 __fastcall sub_3E6C00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  char v12; // [rsp+0h] [rbp-192h] BYREF
  char v13; // [rsp+1h] [rbp-191h] BYREF
  __int64 v14; // [rsp+2h] [rbp-190h] BYREF
  __int128 v15; // [rsp+Ah] [rbp-188h] BYREF
  __int64 v16; // [rsp+1Ah] [rbp-178h]
  __int64 v17; // [rsp+22h] [rbp-170h]
  __int64 v18; // [rsp+2Ah] [rbp-168h]
  _BYTE v19[6]; // [rsp+32h] [rbp-160h] BYREF
  __int16 v20; // [rsp+38h] [rbp-15Ah]
  __int64 v21; // [rsp+3Ah] [rbp-158h]
  char v22; // [rsp+5Bh] [rbp-137h]
  __int16 v23; // [rsp+60h] [rbp-132h]
  __int64 v24; // [rsp+62h] [rbp-130h]
  char v25; // [rsp+83h] [rbp-10Fh]
  __int64 v26; // [rsp+8Ah] [rbp-108h]
  _QWORD v27[4]; // [rsp+172h] [rbp-20h] BYREF

  v27[0] = __readfsqword(0x28u);
  v6 = v19;
  v15 = -1;
  v16 = -1;
  v17 = 0;
  v18 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v27 != v6 );
  if ( !(unsigned int)decode_insn(&v15, *(_QWORD *)(a2 + 24), v27, 0, 0, a6, 0.0) )
    return 0;
  if ( (_WORD)v17 != 834 )
  {
    if ( (_WORD)v17 != 1738 )
    {
      v14 = *(_QWORD *)(a2 + 24);
      if ( *(char *)(get_ph(&v15) + 10) >= 0 )
        return 0;
      v12 = 1;
      v13 = 1;
      if ( sub_CBD70(0x2Du, &v14, &v12, &v13) != 1
        || v14 == -1
        || v14 == *(_QWORD *)(a2 + 24)
        || !(unsigned int)decode_insn(&v15, v14, v8, v9, v10, v11, 0.0)
        || (unsigned int)(unsigned __int16)v17 - 30 > 3
        || v19[1] != 1
        || v20 != 29 )
      {
        return 0;
      }
      if ( v25 )
      {
        if ( v25 == 5 && v22 == 1 && v23 == 29 )
          return v26;
        return 0;
      }
    }
    return v24;
  }
  return v21;
}
