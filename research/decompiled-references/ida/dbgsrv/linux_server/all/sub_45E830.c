/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45E830
// Address: 0x000000000045E830

//----- (000000000045E830) ----------------------------------------------------
__int64 __fastcall sub_45E830(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v10; // rdi
  void *v11; // rbp
  double v12; // xmm4_8
  double v13; // xmm5_8
  int v14; // eax
  __int64 v15; // r13
  char *v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r12
  char *v19; // rbx
  void *v20; // rdi
  void *v21; // rdi
  __int64 (__fastcall **v23)(); // [rsp+0h] [rbp-508h] BYREF
  void *v24; // [rsp+8h] [rbp-500h]
  __int128 v25; // [rsp+10h] [rbp-4F8h]
  __int64 v26; // [rsp+248h] [rbp-2C0h]
  _BYTE v27[32]; // [rsp+260h] [rbp-2A8h] BYREF
  void *v28; // [rsp+280h] [rbp-288h]
  __int64 v29; // [rsp+288h] [rbp-280h]
  __int64 v30; // [rsp+298h] [rbp-270h]
  void *v31; // [rsp+2D0h] [rbp-238h]
  __int64 v32; // [rsp+2D8h] [rbp-230h]
  void *v33; // [rsp+380h] [rbp-188h]
  __int64 v34; // [rsp+388h] [rbp-180h]
  void *ptr; // [rsp+4A0h] [rbp-68h]
  __int64 v36; // [rsp+4A8h] [rbp-60h]
  __int64 v37; // [rsp+4B8h] [rbp-50h]
  unsigned __int64 v38; // [rsp+4D8h] [rbp-30h]

  v38 = __readfsqword(0x28u);
  v10 = s1;
  if ( *(_QWORD *)(a1 + 8) )
    v10 = *(const char **)a1;
  v11 = (void *)sub_47F560(v10, 0);
  if ( !v11 )
    return 0;
  v14 = *(_DWORD *)(a1 + 24);
  if ( v14 == 11 )
  {
    v23 = off_4C33F8;
    v24 = nullptr;
    v25 = 0;
    v15 = 0;
    if ( (unsigned __int8)sub_45D5F0((__int64)&v23, (__int64)v11, 1u, 1u, (__m128)0LL, a3, a4, a5, v12, v13, a8, a9) )
      v15 = v26;
    v23 = off_4C33F8;
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      j__free(v24);
    }
  }
  else if ( v14 == 18 )
  {
    sub_428130((__int64)v27, (__int64)v11, 0);
    sub_424C30((__int64)v27, nullptr);
    if ( (unsigned __int8)sub_424C50((__int64)v27)
      && (unsigned __int8)sub_4251B0((__int64)v27)
      && (unsigned __int8)sub_428380((__int64)v27) )
    {
      v15 = v30;
    }
    else
    {
      v15 = 0;
    }
    if ( v37 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    if ( ptr )
    {
      v36 = 0;
      j__free(ptr);
    }
    v16 = (char *)v33;
    if ( v33 )
    {
      v17 = v34;
      if ( v34 )
      {
        v18 = 0;
        do
        {
          v19 = &v16[96 * v18];
          v20 = *((void **)v19 + 3);
          if ( v20 )
          {
            *((_QWORD *)v19 + 4) = 0;
            j__free(v20);
          }
          v21 = *(void **)v19;
          if ( *(_QWORD *)v19 )
          {
            *((_QWORD *)v19 + 1) = 0;
            j__free(v21);
          }
          ++v18;
          v16 = (char *)v33;
        }
        while ( v17 != v18 );
      }
      v34 = 0;
      j__free(v16);
    }
    if ( v31 )
    {
      v32 = 0;
      j__free(v31);
    }
    if ( v28 )
    {
      v29 = 0;
      j__free(v28);
    }
  }
  else
  {
    v15 = 0;
  }
  sub_47F680(v11);
  return v15;
}
// 45EA18: variable 'v12' is possibly undefined
// 45EA18: variable 'v13' is possibly undefined
// 4C33F8: using guessed type __int64 (__fastcall *off_4C33F8[2])();
