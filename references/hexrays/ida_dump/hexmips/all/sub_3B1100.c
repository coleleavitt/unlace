__int64 __fastcall sub_3B1100(__int64 a1, __int64 *a2, __int64 a3, __m128 a4)
{
  __int64 v5; // rdi
  __int64 tinfo_property; // rax
  __int64 v8; // rdi
  __m128 v9; // xmm1
  __int64 v10; // rax
  __m128i v11; // xmm1
  __m128i *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // ebx
  __m128i *v18; // [rsp+0h] [rbp-128h] BYREF
  __int64 *v19; // [rsp+8h] [rbp-120h]
  __m128i v20; // [rsp+10h] [rbp-118h] BYREF
  __int64 v21; // [rsp+28h] [rbp-100h] BYREF
  unsigned __int64 *v22[2]; // [rsp+30h] [rbp-F8h] BYREF
  const char *v23[4]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v25; // [rsp+68h] [rbp-C0h]
  __int64 v26; // [rsp+78h] [rbp-B0h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+80h] [rbp-A8h] BYREF
  int v28; // [rsp+88h] [rbp-A0h]
  __int64 v29; // [rsp+90h] [rbp-98h]
  __int128 v30; // [rsp+98h] [rbp-90h]
  __int64 v31; // [rsp+A8h] [rbp-80h]
  __int128 v32; // [rsp+B0h] [rbp-78h]
  __m128i v33; // [rsp+C0h] [rbp-68h]
  __int64 v34; // [rsp+D0h] [rbp-58h]
  _QWORD v35[10]; // [rsp+D8h] [rbp-50h] BYREF

  v5 = *a2;
  v35[2] = __readfsqword(0x28u);
  v21 = 0;
  tinfo_property = get_tinfo_property(v5, 10);
  v8 = *(_QWORD *)(a1 + 32);
  v18 = (__m128i *)&v24;
  v19 = (__int64 *)v22;
  v21 = tinfo_property;
  v22[0] = nullptr;
  v9 = _mm_loadh_ps((const double *)&v18);
  v22[1] = nullptr;
  v20 = (__m128i)v9;
  sub_386AC0(v8, v22, a1, a4);
  v10 = *(_QWORD *)(a1 + 32);
  v11 = _mm_load_si128(&v20);
  v24 = 0;
  v25 = 0;
  v26 = v10;
  if ( v10 )
    ++*(_DWORD *)(v10 + 104);
  v28 = 2;
  v29 = 0;
  v31 = 0;
  v27 = off_4C7988;
  v34 = a3;
  v35[0] = 0;
  v30 = 0;
  v32 = 0;
  v33 = v11;
  copy_tinfo_t(v35, &v21);
  set_tinfo_property(v35, 6, 64);
  sub_251200((__int64 *)&v27, *(_QWORD *)(a1 + 32) + 16LL, 0);
  sub_3A51B0((__int64)v23, &v21, a3);
  v12 = v18;
  v16 = sub_3B07D0(a1, v18, v23[0], v13, v14, v15);
  if ( v23[0] )
  {
    v23[1] = nullptr;
    qfree(v23[0]);
  }
  v27 = off_4C7988;
  clear_tinfo_t(v35);
  v27 = (__int64 (__fastcall **)())&off_4BD5C0;
  sub_76280(&v27);
  sub_13BF40(&v26, (__int64)v12);
  if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree(v24);
  }
  sub_38C250(v19);
  clear_tinfo_t(&v21);
  return v16;
}
