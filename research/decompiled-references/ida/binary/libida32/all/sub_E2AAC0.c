char __fastcall sub_E2AAC0(__int64 **a1, __int64 a2, __int64 a3)
{
  char v3; // al
  char result; // al
  _QWORD *v5; // rax
  __int64 v6; // r15
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdx
  _BYTE *v11; // rbx
  __int64 v12; // [rsp+0h] [rbp-328h]
  char v13; // [rsp+0h] [rbp-328h]
  char v14; // [rsp+0h] [rbp-328h]
  int v15; // [rsp+2Ch] [rbp-2FCh]
  __int64 v16; // [rsp+48h] [rbp-2E0h] BYREF
  __int64 (__fastcall **v17)(); // [rsp+50h] [rbp-2D8h] BYREF
  int v18; // [rsp+58h] [rbp-2D0h]
  __int128 v19; // [rsp+60h] [rbp-2C8h]
  __int64 v20; // [rsp+70h] [rbp-2B8h]
  char v21; // [rsp+78h] [rbp-2B0h]
  int v22; // [rsp+7Ch] [rbp-2ACh]
  void **p_s1; // [rsp+80h] [rbp-2A8h]
  void *s1; // [rsp+90h] [rbp-298h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-290h]
  _BYTE v26[136]; // [rsp+A8h] [rbp-280h] BYREF
  void *s2; // [rsp+130h] [rbp-1F8h] BYREF
  __int128 v28; // [rsp+138h] [rbp-1F0h]
  _BYTE v29[136]; // [rsp+148h] [rbp-1E0h] BYREF
  __int64 v30; // [rsp+1D0h] [rbp-158h] BYREF
  __int64 (__fastcall ***v31)(); // [rsp+1D8h] [rbp-150h]
  __int16 v32; // [rsp+1E0h] [rbp-148h]
  char v33; // [rsp+1E2h] [rbp-146h]
  __int64 v34; // [rsp+1E8h] [rbp-140h]
  __int128 v35; // [rsp+1F0h] [rbp-138h]
  _BYTE **v36; // [rsp+200h] [rbp-128h] BYREF
  _BYTE *v37; // [rsp+208h] [rbp-120h] BYREF
  __int64 v38; // [rsp+210h] [rbp-118h]
  _BYTE v39[64]; // [rsp+218h] [rbp-110h] BYREF
  _BYTE *v40; // [rsp+258h] [rbp-D0h]
  __int64 v41; // [rsp+260h] [rbp-C8h]
  _BYTE v42[64]; // [rsp+268h] [rbp-C0h] BYREF
  _QWORD *v43; // [rsp+2A8h] [rbp-80h]
  __int64 v44; // [rsp+2B0h] [rbp-78h]
  __int64 v45; // [rsp+2B8h] [rbp-70h]
  __int64 v46; // [rsp+2C0h] [rbp-68h]
  int v47; // [rsp+2C8h] [rbp-60h]
  __int64 v48; // [rsp+2D0h] [rbp-58h]
  __int64 v49; // [rsp+2D8h] [rbp-50h]
  int v50; // [rsp+2E0h] [rbp-48h]

  v3 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v3 == 67 )
    return (*(_BYTE *)(a2 + 60) & 2) != 0;
  if ( (*(_DWORD *)a3 & 0x7FFFFFFF) == 9 )
  {
    if ( *(_DWORD *)(a3 + 4) )
      return sub_E2AAC0(a1, a2, *(_QWORD *)(a3 + 8));
    return 1;
  }
  if ( v3 == 47 )
  {
    v5 = (_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*v5 + 17LL) & 2) == 0 )
      return sub_F34140(*v5) != 0;
    return 1;
  }
  sub_EFED50(&v30, *(_QWORD *)(a3 + 8));
  v16 = v30;
  v12 = sub_EFEE90(&v16, 1);
  if ( !v12 )
    return 1;
  v6 = *(_QWORD *)(a2 + 56);
  s1 = v26;
  v18 = 2;
  s2 = v29;
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_2384D00);
  v28 = *(_OWORD *)n;
  p_s1 = &s1;
  v19 = 0;
  v17 = &off_2BC1F40;
  v21 = 0;
  v22 = 1;
  v20 = 0;
  sub_2257B70(&v17, 0, 0, 0);
  v7 = **a1;
  v35 = 0;
  v38 = 0x400000000LL;
  v30 = v7;
  v32 = 0;
  v41 = 0x400000000LL;
  v36 = &v37;
  v40 = v42;
  v43 = &v36;
  v37 = v39;
  v31 = &v17;
  v33 = 0;
  v34 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_E2A980(&v30, v6, (__m128)0LL, (__int64)&v36, (__int64)v42, (unsigned __int64)&v37, 0x400000000LL);
  sub_E176D0((__int64)&v30);
  v17 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v17);
  v8 = sub_B99A70(*(_QWORD *)(a2 + 56));
  v9 = *(_QWORD *)(v12 + 56);
  v15 = v8;
  v19 = 0;
  v17 = &off_2BC1F40;
  v18 = 2;
  v21 = 0;
  v22 = 1;
  v20 = 0;
  p_s1 = &s2;
  sub_2257B70(&v17, 0, 0, 0);
  v10 = **a1;
  v38 = 0x400000000LL;
  v37 = v39;
  v30 = v10;
  v32 = 0;
  DWORD1(v35) = v15;
  v43 = &v36;
  v40 = v42;
  v41 = 0x400000000LL;
  v36 = &v37;
  v31 = &v17;
  v33 = 0;
  v34 = 0;
  LODWORD(v35) = 0;
  *((_QWORD *)&v35 + 1) = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  sub_E2A980(&v30, v9, (__m128)0LL, (__int64)&v36, (__int64)v42, (unsigned __int64)&v37, 0x400000000LL);
  sub_E176D0((__int64)&v30);
  v17 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v17);
  result = 1;
  v11 = s2;
  if ( n[0] == (_QWORD)v28 )
  {
    result = 0;
    if ( n[0] )
      result = memcmp(s1, s2, n[0]) != 0;
  }
  if ( v11 != v29 )
  {
    v13 = result;
    free(v11);
    result = v13;
  }
  if ( s1 != v26 )
  {
    v14 = result;
    free(s1);
    return v14;
  }
  return result;
}

