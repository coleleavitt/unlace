void __fastcall sub_1DFEEB0(
        __int64 a1,
        unsigned __int64 a2,
        const __m128i *a3,
        __int64 a4,
        char a5,
        __m128 a6,
        __m128 a7)
{
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int16 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // r15
  unsigned __int64 v16; // r12
  __int64 v17; // r12
  char *v18; // rax
  size_t v19; // rdx
  char v20; // si
  unsigned int v21; // [rsp+0h] [rbp-58h]
  __int64 v22[9]; // [rsp+10h] [rbp-48h] BYREF

  if ( a3[2].m128i_i8[7] )
  {
    sub_18C74E0(a1, 4, 0, 4);
    v13 = sub_1DF2070(a1, a3[2].m128i_u64[1], a2, v10, v11, v12, a6, a7);
    if ( v13 != (unsigned __int16 *)((char *)&dword_0 + 1) )
      sub_18199B0(a1, a4, a3, (_DWORD *)((unsigned __int64)v13 & 0xFFFFFFFFFFFFFFFELL), a5, *(double *)a6.m128_u64);
    sub_190D5E0(a1, a6);
  }
  else
  {
    v14 = (__int64 *)sub_1DD4AE0(a1, (void **)a3[2].m128i_i64[1], a2, a3[1].m128i_i32[2], 0, 0, a6, a7);
    v15 = v14;
    if ( v14 )
    {
      v22[0] = *v14;
      v22[1] = (__int64)(v14 + 1);
      v16 = (unsigned __int64)(unsigned int)sub_F6CE20(v22) << 32;
      v17 = (unsigned int)sub_F6CCB0(v22, a6) | v16;
      v21 = a3[1].m128i_u32[2];
      v18 = sub_B09040((__int64)a3);
      v19 = 0;
      v20 = (char)v18;
      if ( v18 )
      {
        v20 = (char)v18;
        v19 = strlen(v18);
      }
      if ( !(unsigned __int8)sub_18EDCA0(a1, v20, v19, (unsigned __int64 *)v15, v21, v17) )
        sub_1819650(a1, a4, a3, v15, a5, a6);
    }
  }
}
