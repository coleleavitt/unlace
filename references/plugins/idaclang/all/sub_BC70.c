__int64 __fastcall sub_BC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int128 a7)
{
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // eax
  unsigned int v13; // edx
  __int64 v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __m128i v20[2]; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v21; // [rsp+48h] [rbp-10h]

  while ( 1 )
  {
    v21 = __readfsqword(0x28u);
    v7 = sub_BB20();
    v12 = sub_A1A0(v7, a7, v8, v9, v10, v11, (__int128)v20[0], (__int128)v20[1]);
    v13 = 0;
    if ( !v12 )
      break;
    v15 = sub_BB20();
    v16 = sub_A170(v15);
    v13 = 1;
    if ( v16 > 0x20 )
    {
      if ( v16 == 601 )
        return v13;
    }
    else if ( v16 > 0x1D )
    {
      return v13;
    }
    v17 = sub_BB20();
    sub_B370((__int64)v20, v17, v18, v19);
    LODWORD(a7) = _mm_load_si128(v20).m128i_u32[0];
  }
  return v13;
}
