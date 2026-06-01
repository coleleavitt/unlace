unsigned __int64 __fastcall sub_4355B0(
        __int64 *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _QWORD *v10; // rax
  __m128 v11; // xmm0
  __int64 v12; // r15
  __int64 v13; // rbx
  __int64 v14; // r13
  const char *v15; // rsi
  const char *v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  char v24; // [rsp+0h] [rbp-60h]
  __int64 vault_filesys; // [rsp+8h] [rbp-58h]
  const char *v26; // [rsp+10h] [rbp-50h] BYREF
  __int128 v27; // [rsp+18h] [rbp-48h]
  unsigned __int64 v28; // [rsp+28h] [rbp-38h]

  v28 = __readfsqword(0x28u);
  v10 = sub_426230(a1, a2);
  v11 = 0;
  v26 = nullptr;
  v12 = (__int64)v10;
  v27 = 0;
  vault_filesys = get_vault_filesys(&v26, 0, 0);
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    *(double *)v11.m128_u64 = qfree(v26, nullptr);
  }
  v13 = *a1;
  v14 = *a1 + 48 * a1[1];
  if ( v14 != *a1 )
  {
    do
    {
      sub_417500((__int64)&v26, v12, v13);
      v16 = &s1;
      if ( (_QWORD)v27 )
        v16 = v26;
      if ( (*(unsigned int (__fastcall **)(__int64, _QWORD, const char *))(*(_QWORD *)vault_filesys + 96LL))(
             vault_filesys,
             0,
             v16) )
      {
        v15 = &s1;
        if ( (_QWORD)v27 )
          v15 = v26;
        sub_169700(
          (int)"can't open file: %s doesn't exist\n",
          (__int64)v15,
          v17,
          v18,
          v19,
          v20,
          v11,
          a4,
          a5,
          a6,
          v21,
          v22,
          a9,
          a10,
          v24);
      }
      else
      {
        v15 = (const char *)&v26;
        sub_434A50(
          0,
          (const char *)&v26,
          nullptr,
          0,
          0,
          0,
          *(double *)v11.m128_u64,
          a4,
          a5,
          a6,
          *(double *)v21.m128_u64,
          *(double *)v22.m128_u64,
          a9,
          a10,
          0,
          0,
          0);
      }
      if ( v26 )
      {
        *(_QWORD *)&v27 = 0;
        *(double *)v11.m128_u64 = qfree(v26, v15);
      }
      v13 += 48;
    }
    while ( v14 != v13 );
  }
  return v28 - __readfsqword(0x28u);
}
