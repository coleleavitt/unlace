__int64 __fastcall sub_120480(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned int v8; // eax
  _QWORD *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  int v17; // esi
  __int64 v18; // r14
  size_t v19; // r8
  void *v20; // r15
  __int64 v21; // rdi
  __m128i si128; // xmm0
  __int64 v23; // r14
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r14
  __int64 v30; // rcx
  __int128 v31; // rdi
  unsigned int v32; // r14d
  size_t n[2]; // [rsp+0h] [rbp-C8h] BYREF
  size_t v34; // [rsp+18h] [rbp-B0h]
  _QWORD v35[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v36[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall **v37)(); // [rsp+40h] [rbp-88h] BYREF
  __int128 v38; // [rsp+48h] [rbp-80h] BYREF
  __int128 v39; // [rsp+58h] [rbp-70h]
  char v40; // [rsp+68h] [rbp-60h]
  __int64 v41; // [rsp+70h] [rbp-58h]
  unsigned int v42; // [rsp+78h] [rbp-50h]
  unsigned __int64 v43; // [rsp+88h] [rbp-40h]

  v43 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v8 = *(_DWORD *)a3;
  if ( *(_DWORD *)a3 > 0x39u )
  {
    if ( v8 != 59 )
    {
      if ( v8 != 60 )
        goto LABEL_6;
      v10 = *(_QWORD **)(a2 + 64);
      v11 = *(_QWORD *)(a3 + 24);
      n[0] = a1 + 16;
      v12 = *(int *)(a3 + 68);
      v13 = sub_1CB7F0(v10, v11);
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v13 += *(int *)(v10[188] + 80LL);
      v14 = *(_QWORD *)(*(_QWORD *)(v10[187] + 24LL) + 16LL) & (v10[180] + v13);
      v36[1] = v12;
      v36[0] = v14;
      sub_311E30(n[0], v36);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
    v16 = *(_DWORD *)(v15 + 84);
    v17 = *(_DWORD *)(v15 + 60);
    v37 = nullptr;
    *(_QWORD *)&v38 = 0;
    sub_5FC80((__int64 *)&v37, v17, v16);
    *((_QWORD *)&v38 + 1) = 0;
    v39 = 0;
    sub_60080((__int64 *)a1, (__int64 *)&v37);
    sub_311F30(a1 + 16, (char *)&v38 + 8);
    if ( *((_QWORD *)&v38 + 1) )
    {
      *(_QWORD *)&v39 = 0;
      qfree(*((_QWORD *)&v38 + 1));
    }
    qfree(v37);
    goto LABEL_6;
  }
  if ( v8 > 0x37 )
  {
    if ( (a4 & 1) != 0 && !*(_BYTE *)(a3 + 64) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
      sub_606D0((__int64 *)a1, (__int64 *)(v18 + 144));
      v19 = *(_QWORD *)(v18 + 168);
      v20 = nullptr;
      if ( v19 )
      {
        v34 = *(_QWORD *)(v18 + 168);
        n[0] = 16 * v19;
        v20 = (void *)qalloc_or_throw(16 * v19);
        memcpy(v20, *(const void **)(v18 + 160), n[0]);
        v19 = v34;
      }
      v21 = *(_QWORD *)(a1 + 16);
      si128 = _mm_unpacklo_epi64((__m128i)v19, (__m128i)v19);
      if ( v21 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        *(__m128i *)n = si128;
        qfree(v21);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(a1 + 16) = v20;
      *(__m128i *)(a1 + 24) = si128;
      v23 = *(_QWORD *)(a2 + 64);
      v24 = sub_1CB7F0(v23, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v24 += *(_DWORD *)(*(_QWORD *)(v23 + 1504) + 80LL);
      v25 = v24;
      v26 = a1 + 16;
      v27 = *(_QWORD *)(sub_1CB940(*(_QWORD *)(a2 + 64), v24) + 24) - v24;
      if ( v27 > 0 )
      {
        v28 = *(_QWORD *)(a2 + 64);
        v26 = a1 + 16;
        v35[1] = v27;
        v35[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v28 + 1440) + v25);
        sub_311E30(a1 + 16, v35);
      }
      sub_311F30(v26, *(_QWORD *)(a2 + 64) + 232LL);
      if ( (a4 & 0x2000) != 0 )
      {
        v29 = *(_QWORD *)(a2 + 64);
        v37 = nullptr;
        v38 = 0;
        v30 = *(_QWORD *)(v29 + 216);
        if ( v30 )
        {
          n[0] = *(_QWORD *)(v29 + 216);
          v34 = 16 * v30;
          v37 = (__int64 (__fastcall **)())qalloc_or_throw(16 * v30);
          *((_QWORD *)&v38 + 1) = n[0];
          memcpy(v37, *(const void **)(v29 + 208), v34);
          *(_QWORD *)&v38 = n[0];
        }
        sub_312E50(&v37, v29 + 600);
        sub_311F30(v26, &v37);
        if ( v37 )
        {
          *(_QWORD *)&v38 = 0;
          qfree(v37);
        }
      }
    }
  }
  else if ( v8 == 2 )
  {
    if ( (a4 & 1) != 0 )
      sub_311F30(a1 + 16, *(_QWORD *)(a2 + 64) + 232LL);
  }
  else if ( v8 - 19 <= 1 && (a4 & 0x800) == 0 && (unsigned __int8)sub_11A0C0((int **)a3, v36, &v37, 0) )
  {
    *((_QWORD *)&v31 + 1) = a1;
    *(_QWORD *)&v31 = a2;
    v32 = ((_DWORD)v37 << 19) | (unsigned __int16)(8 * LOWORD(v36[0]));
    sub_11FCA0(v31, a3 + 32, a4, v32);
    *((_QWORD *)&v31 + 1) = a1;
    *(_QWORD *)&v31 = a2;
    sub_11FCA0(v31, a3 + 48, a4, v32);
    return a1;
  }
LABEL_6:
  *(_QWORD *)&v38 = 0;
  *((_QWORD *)&v38 + 1) = a2;
  v39 = 0u;
  v40 = 0;
  v37 = &off_4BDD90;
  v41 = a1;
  v42 = a4;
  sub_11A700((_BYTE *)a3, (__int64)&v37);
  return a1;
}
