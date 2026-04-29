unsigned __int64 __fastcall sub_10BDB0(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r13
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbx
  __int64 v17; // rax
  _QWORD v19[17]; // [rsp+10h] [rbp-2A8h] BYREF
  __int64 v20; // [rsp+98h] [rbp-220h]
  __int64 (__fastcall **v21)(); // [rsp+170h] [rbp-148h] BYREF
  __int64 v22; // [rsp+178h] [rbp-140h] BYREF
  __int128 v23; // [rsp+180h] [rbp-138h]
  _QWORD v24[2]; // [rsp+190h] [rbp-128h] BYREF
  int v25; // [rsp+1A0h] [rbp-118h]
  __int64 v26; // [rsp+1A8h] [rbp-110h]
  __int64 v27; // [rsp+1B0h] [rbp-108h]
  int v28; // [rsp+1B8h] [rbp-100h]
  int v29; // [rsp+1C0h] [rbp-F8h]
  _QWORD *v30; // [rsp+1C8h] [rbp-F0h]
  __int64 (__fastcall **v31)(); // [rsp+1D0h] [rbp-E8h]
  __int64 v32; // [rsp+1D8h] [rbp-E0h] BYREF
  __int128 v33; // [rsp+1E0h] [rbp-D8h]
  _QWORD v34[2]; // [rsp+1F0h] [rbp-C8h] BYREF
  int v35; // [rsp+200h] [rbp-B8h]
  __int64 v36; // [rsp+208h] [rbp-B0h]
  __int64 v37; // [rsp+210h] [rbp-A8h]
  int v38; // [rsp+218h] [rbp-A0h]
  int v39; // [rsp+220h] [rbp-98h]
  _QWORD *v40; // [rsp+228h] [rbp-90h]
  __int64 v41; // [rsp+230h] [rbp-88h] BYREF
  __m128i v42; // [rsp+238h] [rbp-80h] BYREF
  int v43; // [rsp+248h] [rbp-70h]
  __int64 v44; // [rsp+250h] [rbp-68h] BYREF
  __int128 v45; // [rsp+258h] [rbp-60h]
  int v46; // [rsp+268h] [rbp-50h]
  unsigned __int64 v47; // [rsp+278h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 40);
  v47 = __readfsqword(0x28u);
  sub_10AA70((__int64)v19, v3, -1, a3 & 0xFFFFFFFE);
  v5 = *(int *)(v3 + 64);
  v21 = (__int64 (__fastcall **)())&unk_4CBD20;
  v25 = v20;
  v28 = v20;
  v22 = 0;
  v24[0] = 0;
  v24[1] = 0;
  v26 = 0;
  v27 = 0;
  v29 = 1;
  v23 = 0;
  sub_1011D0(&v22, v5, (unsigned __int64)v24);
  v30 = v19;
  v21 = &off_4BDA18;
  v6 = *(int *)(v3 + 64);
  v31 = (__int64 (__fastcall **)())&unk_4CBD20;
  v32 = 0;
  v34[0] = 0;
  v34[1] = 0;
  v35 = v20;
  v36 = 0;
  v37 = 0;
  v38 = v20;
  v39 = 1;
  v33 = 0;
  sub_1011D0(&v32, v6, (unsigned __int64)v34);
  v31 = &off_4BDA18;
  v40 = v19;
  v41 = 0;
  v43 = 0;
  v44 = 0;
  v46 = 0;
  v42 = 0;
  v45 = 0;
  sub_30C9E0(a1, &v21);
  sub_10B4F0((__int64)v19, &v22, &v41, nullptr);
  v7 = *(_QWORD *)a2;
  v8 = _mm_loadu_si128(&v42);
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v41;
  v41 = v7;
  LODWORD(v7) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v43;
  *(__m128i *)(a2 + 8) = v8;
  v43 = v7;
  v42 = v9;
  sub_62A80(&v44);
  sub_62A80(&v41);
  v31 = (__int64 (__fastcall **)())&unk_4CBD20;
  qfree(v36);
  qfree(v34[0]);
  v10 = v32;
  if ( v32 )
  {
    v11 = v33;
    if ( (_QWORD)v33 )
    {
      v12 = 0;
      do
      {
        v13 = 3 * v12++;
        qfree(*(_QWORD *)(v10 + 8 * v13));
        v10 = v32;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v33 = 0;
    qfree(v10);
  }
  v21 = (__int64 (__fastcall **)())&unk_4CBD20;
  qfree(v26);
  qfree(v24[0]);
  v14 = v22;
  if ( v22 )
  {
    v15 = v23;
    if ( (_QWORD)v23 )
    {
      v16 = 0;
      do
      {
        v17 = 3 * v16++;
        qfree(*(_QWORD *)(v14 + 8 * v17));
        v14 = v22;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v23 = 0;
    qfree(v14);
  }
  sub_FEFF0(v19);
  return v47 - __readfsqword(0x28u);
}
