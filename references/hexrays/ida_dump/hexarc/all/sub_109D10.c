unsigned __int64 __fastcall sub_109D10(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // r14
  unsigned __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // r15
  int v9; // edx
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __m128i v13; // xmm1
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // r12
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v23; // [rsp+8h] [rbp-2C0h]
  _QWORD v24[17]; // [rsp+20h] [rbp-2A8h] BYREF
  __int64 v25; // [rsp+A8h] [rbp-220h]
  __int64 (__fastcall **v26)(); // [rsp+180h] [rbp-148h]
  __int64 v27; // [rsp+188h] [rbp-140h] BYREF
  __int128 v28; // [rsp+190h] [rbp-138h]
  _QWORD v29[2]; // [rsp+1A0h] [rbp-128h] BYREF
  int v30; // [rsp+1B0h] [rbp-118h]
  __int64 v31; // [rsp+1B8h] [rbp-110h]
  __int64 v32; // [rsp+1C0h] [rbp-108h]
  int v33; // [rsp+1C8h] [rbp-100h]
  int v34; // [rsp+1D0h] [rbp-F8h]
  _QWORD *v35; // [rsp+1D8h] [rbp-F0h]
  __int64 (__fastcall **v36)(); // [rsp+1E0h] [rbp-E8h] BYREF
  __int64 v37; // [rsp+1E8h] [rbp-E0h] BYREF
  __int128 v38; // [rsp+1F0h] [rbp-D8h]
  _QWORD v39[2]; // [rsp+200h] [rbp-C8h] BYREF
  int v40; // [rsp+210h] [rbp-B8h]
  __int64 v41; // [rsp+218h] [rbp-B0h]
  __int64 v42; // [rsp+220h] [rbp-A8h]
  int v43; // [rsp+228h] [rbp-A0h]
  int v44; // [rsp+230h] [rbp-98h]
  _QWORD *v45; // [rsp+238h] [rbp-90h]
  __int64 v46; // [rsp+240h] [rbp-88h] BYREF
  __int128 v47; // [rsp+248h] [rbp-80h]
  int v48; // [rsp+258h] [rbp-70h]
  __int64 v49; // [rsp+260h] [rbp-68h] BYREF
  __m128i v50; // [rsp+268h] [rbp-60h] BYREF
  int v51; // [rsp+278h] [rbp-50h]
  unsigned __int64 v52; // [rsp+288h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 40);
  v52 = __readfsqword(0x28u);
  v23 = v3;
  sub_1085B0((__int64)v24, v3, -1, a3 | 1);
  v5 = *(int *)(v3 + 64);
  v26 = (__int64 (__fastcall **)())&unk_4B7CE0;
  v27 = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30 = v25;
  v31 = 0;
  v32 = 0;
  v33 = v25;
  v34 = 1;
  v28 = 0;
  if ( v5 )
  {
    v6 = qvector_reserve(&v27, 0, v5, 24);
    v7 = v28;
    v27 = v6;
    if ( (unsigned __int64)v28 < v5 )
    {
      while ( 1 )
      {
        v8 = v6 + 24 * v7;
        sub_5DA80((__int64 *)v8, (__int64)v29);
        ++v7;
        *(_DWORD *)(v8 + 16) = v30;
        if ( v5 == v7 )
          break;
        v6 = v27;
      }
    }
    *(_QWORD *)&v28 = v5;
    v9 = v25;
  }
  else
  {
    v9 = v25;
  }
  v35 = v24;
  v26 = &off_4A9AD8;
  v10 = *(int *)(v23 + 64);
  v40 = v9;
  v43 = v9;
  v36 = (__int64 (__fastcall **)())&unk_4B7CE0;
  v37 = 0;
  v39[0] = 0;
  v39[1] = 0;
  v41 = 0;
  v42 = 0;
  v44 = 1;
  v38 = 0;
  sub_FED10(&v37, v10, (unsigned __int64)v39);
  v36 = &off_4A9AD8;
  v45 = v24;
  v46 = 0;
  v48 = 0;
  v49 = 0;
  v51 = 0;
  v47 = 0;
  v50 = 0;
  sub_30A7A0(a1, &v36);
  sub_109030((__int64)v24, &v37, &v49, nullptr);
  v11 = *(_QWORD *)a2;
  v12 = _mm_loadu_si128(&v50);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 8));
  *(_QWORD *)a2 = v49;
  v49 = v11;
  LODWORD(v11) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 24) = v51;
  *(__m128i *)(a2 + 8) = v12;
  v51 = v11;
  v50 = v13;
  sub_60700(&v49);
  sub_60700(&v46);
  v36 = (__int64 (__fastcall **)())&unk_4B7CE0;
  qfree(v41);
  qfree(v39[0]);
  v14 = v37;
  if ( v37 )
  {
    v15 = v38;
    if ( (_QWORD)v38 )
    {
      v16 = 0;
      do
      {
        v17 = 3 * v16++;
        qfree(*(_QWORD *)(v14 + 8 * v17));
        v14 = v37;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v38 = 0;
    qfree(v14);
  }
  v26 = (__int64 (__fastcall **)())&unk_4B7CE0;
  qfree(v31);
  qfree(v29[0]);
  v18 = v27;
  if ( v27 )
  {
    v19 = v28;
    if ( (_QWORD)v28 )
    {
      v20 = 0;
      do
      {
        v21 = 3 * v20++;
        qfree(*(_QWORD *)(v18 + 8 * v21));
        v18 = v27;
      }
      while ( v19 != v20 );
    }
    *(_QWORD *)&v28 = 0;
    qfree(v18);
  }
  sub_FCB30(v24);
  return v52 - __readfsqword(0x28u);
}
