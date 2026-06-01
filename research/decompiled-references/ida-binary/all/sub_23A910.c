__int64 __fastcall sub_23A910(
        int a1,
        _QWORD *a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  void (__fastcall **v10)(_QWORD *, __int64, __int64 *); // rax
  __int64 (__fastcall *v11)(__int64); // rax
  __int64 *v12; // r12
  double v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  size_t v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  char v21; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  const char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-38h] BYREF
  __int128 v31; // [rsp+8h] [rbp-30h]
  int v32[2]; // [rsp+18h] [rbp-20h]
  int v33; // [rsp+20h] [rbp-18h]
  int v34; // [rsp+28h] [rbp-10h]
  __int64 v35; // [rsp+30h] [rbp-8h]

  v10 = (void (__fastcall **)(_QWORD *, __int64, __int64 *))*a2;
  *(_QWORD *)v32 = __readfsqword(0x28u);
  v11 = (__int64 (__fastcall *)(__int64))v10[9];
  if ( v11 == form_actions_impl_t__::vfunc_9 )
    v12 = (__int64 *)a2[4];
  else
    v12 = (__int64 *)v11((__int64)a2);
  if ( a1 == -1 )
  {
    v29 = sub_4A0300("Source paths...:10", v30, v31, SDWORD2(v31), v32[0], v33, v34, v35);
    if ( v29 )
    {
      *(_QWORD *)(v29 + 2152) = 2;
      *(_QWORD *)(v29 + 2144) = &off_85FCE0;
    }
    return 1;
  }
  if ( a1 == 3 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64 *))*a2)(a2, 3, &v30);
    v21 = v30;
    reg_int_op("ShowSourcePaths", 1, v30 & 1, 0);
    v28 = "disabled";
    if ( (v21 & 1) != 0 )
      v28 = "enabled";
    sub_169700(
      (int)"Displaying the paths dialog when a source file can't be found has been %s\n",
      (__int64)v28,
      v22,
      v23,
      v24,
      v25,
      a3,
      a4,
      a5,
      a6,
      v26,
      v27,
      a9,
      a10,
      v30);
    return 1;
  }
  if ( a1 != -2 )
    return 1;
  v13 = 0.0;
  v30 = 0;
  v31 = 0;
  sub_23A6F0(&v30, v12);
  if ( (unsigned __int64)v31 <= 0x5000 )
  {
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      v13 = qfree(v30, (const char *)v12);
    }
    return (unsigned __int8)sub_22E6D0(
                              v12 + 3,
                              (_BYTE *)&dword_0 + 1,
                              v13,
                              a4,
                              a5,
                              a6,
                              v18,
                              v19,
                              a9,
                              a10,
                              v14,
                              v15,
                              v16,
                              v17);
  }
  else
  {
    sub_169630(
      (int)"%s",
      (__int64)"The mappings exceeded the maximum size that can be stored inside the idb. Please reduce the number of pat"
               "hs or use idagui.cfg to store them.",
      v14,
      v15,
      v16,
      v17,
      (__m128)0LL,
      a4,
      a5,
      a6,
      v18,
      v19,
      a9,
      a10,
      v30);
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(
        v30,
        "The mappings exceeded the maximum size that can be stored inside the idb. Please reduce the number of paths or u"
        "se idagui.cfg to store them.");
    }
    return 0;
  }
}
