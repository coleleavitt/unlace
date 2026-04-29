__int64 __fastcall sub_29840(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v4; // r9
  char *v5; // rax
  __int64 v6; // r13
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  __int128 v17; // [rsp+0h] [rbp-198h] BYREF
  __int64 v18; // [rsp+10h] [rbp-188h]
  __int64 v19; // [rsp+18h] [rbp-180h]
  __int64 v20; // [rsp+20h] [rbp-178h]
  char v21; // [rsp+28h] [rbp-170h] BYREF
  char v22; // [rsp+29h] [rbp-16Fh]
  __int16 v23; // [rsp+2Eh] [rbp-16Ah]
  char v24; // [rsp+51h] [rbp-147h]
  __int16 v25; // [rsp+56h] [rbp-142h]
  __int64 v26; // [rsp+58h] [rbp-140h]
  _QWORD v27[6]; // [rsp+168h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v27[0] = __readfsqword(0x28u);
  if ( !(unsigned int)get_dword(v2 + 4) && sub_3B4D0(a1) == -1 )
  {
    v18 = -1;
    v5 = &v21;
    v19 = 0;
    v20 = 0;
    v17 = -1;
    do
    {
      *(_WORD *)v5 = 0;
      v5 += 40;
      *((_WORD *)v5 - 19) = 0;
      *((_WORD *)v5 - 18) = 0;
      *((_DWORD *)v5 - 2) = 0;
      *((_WORD *)v5 - 17) = 0;
      *((_OWORD *)v5 - 2) = 0;
      *((_QWORD *)v5 - 2) = 0;
    }
    while ( v27 != (_QWORD *)v5 );
    v6 = *(_QWORD *)(a2 + 16);
    v7 = v6 + 8;
    if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, _QWORD *, _QWORD, _QWORD, __int64, double))decode_insn)(
                         &v17,
                         v6 + 8,
                         v27,
                         0,
                         0,
                         v4,
                         0.0)
      && (_WORD)v19 == 473 )
    {
      v7 = v6 + 12;
    }
    if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, double))decode_insn)(
                         &v17,
                         v7,
                         v8,
                         v9,
                         v10,
                         v11,
                         0.0) )
    {
      if ( (_WORD)v19 == 204 && v22 == 1 && v23 == 28 && v24 == 5 )
      {
        v16 = v26;
        if ( (unsigned int)((__int64 (__fastcall *)(__int128 *, __int64, __int64, __int64, __int64, __int64, double))decode_insn)(
                             &v17,
                             v18 + WORD1(v19),
                             v12,
                             v13,
                             v14,
                             v15,
                             0.0) )
        {
          if ( ((_WORD)v19 == 2 || (_WORD)v19 == 5) && v22 == 1 && v23 == 28 && v24 == 1 && v25 == 31 )
          {
            sub_3B440(a1, v7 + v16, 1);
            sub_3B820(a1);
          }
        }
      }
    }
  }
  return 1;
}
