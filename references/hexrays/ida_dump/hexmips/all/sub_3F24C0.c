unsigned __int64 __fastcall sub_3F24C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  unsigned __int64 *v7; // rax
  __int64 v8; // rdx
  __int128 v10; // [rsp+0h] [rbp-1A8h] BYREF
  __int64 v11; // [rsp+10h] [rbp-198h]
  __int64 v12; // [rsp+18h] [rbp-190h]
  __int64 v13; // [rsp+20h] [rbp-188h]
  char v14; // [rsp+28h] [rbp-180h] BYREF
  char v15; // [rsp+29h] [rbp-17Fh]
  __int16 v16; // [rsp+2Eh] [rbp-17Ah]
  char v17; // [rsp+51h] [rbp-157h]
  __int16 v18; // [rsp+56h] [rbp-152h]
  char v19; // [rsp+79h] [rbp-12Fh]
  __int16 v20; // [rsp+7Eh] [rbp-12Ah]
  unsigned __int64 v21; // [rsp+168h] [rbp-40h] BYREF

  v21 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 40);
  if ( v6 <= 0xFFFFFFFFFFFFFFEFLL )
  {
    do
    {
      v11 = -1;
      v7 = (unsigned __int64 *)&v14;
      v12 = 0;
      v13 = 0;
      v10 = -1;
      do
      {
        *(_WORD *)v7 = 0;
        v7 += 5;
        *((_WORD *)v7 - 19) = 0;
        *((_WORD *)v7 - 18) = 0;
        *((_DWORD *)v7 - 2) = 0;
        *((_WORD *)v7 - 17) = 0;
        *((_OWORD *)v7 - 2) = 0;
        *(v7 - 2) = 0;
      }
      while ( &v21 != v7 );
      if ( !(unsigned int)decode_insn(&v10, v6, 0, 0, a5, a6, 0.0) )
        return v21 - __readfsqword(0x28u);
      if ( (_WORD)v12 == 135 )
        goto LABEL_15;
      if ( (unsigned __int16)v12 > 0x87u )
      {
        if ( (unsigned __int16)(v12 - 204) > 1u )
          return v21 - __readfsqword(0x28u);
LABEL_15:
        if ( v15 == 1 && v16 == 25 )
          return v21 - __readfsqword(0x28u);
        goto LABEL_12;
      }
      if ( (unsigned __int16)(v12 - 2) > 0x1Fu )
        return v21 - __readfsqword(0x28u);
      v8 = 0x280000024LL;
      if ( !_bittest64(&v8, (unsigned __int16)v12) )
        return v21 - __readfsqword(0x28u);
      if ( v15 == 1 )
      {
        if ( v16 == 25 )
          return v21 - __readfsqword(0x28u);
        if ( v17 != 1 )
          goto LABEL_11;
      }
      else if ( v17 != 1 )
      {
        goto LABEL_11;
      }
      if ( v18 == 25 )
        goto LABEL_21;
LABEL_11:
      if ( v19 == 1 && v20 == 25 )
      {
LABEL_21:
        *(_DWORD *)(a1 + 128) |= 4u;
        return v21 - __readfsqword(0x28u);
      }
LABEL_12:
      v6 += WORD1(v12);
    }
    while ( v6 < *(_QWORD *)(a2 + 40) + 16LL );
  }
  return v21 - __readfsqword(0x28u);
}
