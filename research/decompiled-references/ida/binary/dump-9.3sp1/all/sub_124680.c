__int64 __fastcall sub_124680(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
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
  __int64 v19; // rdx
  size_t v20; // r8
  void *v21; // r15
  __int64 v22; // rdi
  __m128i si128; // xmm0
  __int64 v24; // r14
  int v25; // eax
  __int64 v26; // r14
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rcx
  __int128 v33; // rdi
  unsigned int v34; // r14d
  size_t n[2]; // [rsp+0h] [rbp-C8h] BYREF
  size_t v36; // [rsp+18h] [rbp-B0h]
  _QWORD v37[2]; // [rsp+20h] [rbp-A8h] BYREF
  _QWORD v38[2]; // [rsp+30h] [rbp-98h] BYREF
  __int64 (__fastcall **v39)(); // [rsp+40h] [rbp-88h] BYREF
  __int128 v40; // [rsp+48h] [rbp-80h] BYREF
  __int128 v41; // [rsp+58h] [rbp-70h]
  char v42; // [rsp+68h] [rbp-60h]
  __int64 v43; // [rsp+70h] [rbp-58h]
  unsigned int v44; // [rsp+78h] [rbp-50h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v45 = __readfsqword(0x28u);
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
      v13 = sub_1CFBB0(v10, v11);
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v13 += *(int *)(v10[188] + 80LL);
      v14 = *(_QWORD *)(*(_QWORD *)(v10[187] + 24LL) + 16LL) & (v10[180] + v13);
      v38[1] = v12;
      v38[0] = v14;
      sub_316BB0(n[0], v38);
    }
    v15 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
    v16 = *(_DWORD *)(v15 + 84);
    v17 = *(_DWORD *)(v15 + 60);
    v39 = nullptr;
    *(_QWORD *)&v40 = 0;
    sub_63E80((__int64 *)&v39, v17, v16);
    *((_QWORD *)&v40 + 1) = 0;
    v41 = 0;
    sub_64280((__int64 *)a1, (__int64 *)&v39);
    sub_316CB0(a1 + 16, (char *)&v40 + 8);
    if ( *((_QWORD *)&v40 + 1) )
    {
      *(_QWORD *)&v41 = 0;
      qfree(*((__int64 *)&v40 + 1));
    }
    qfree((__int64)v39);
    goto LABEL_6;
  }
  if ( v8 > 0x37 )
  {
    if ( (a4 & 1) != 0 && !*(_BYTE *)(a3 + 64) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 480) + 112LL);
      sub_648D0((__int64 *)a1, (__int64 *)(v18 + 144));
      v20 = *(_QWORD *)(v18 + 168);
      v21 = nullptr;
      if ( v20 )
      {
        v36 = *(_QWORD *)(v18 + 168);
        n[0] = 16 * v20;
        v21 = (void *)qalloc_or_throw(16 * v20, v18 + 144, v19, 16 * v20);
        memcpy(v21, *(const void **)(v18 + 160), n[0]);
        v20 = v36;
      }
      v22 = *(_QWORD *)(a1 + 16);
      si128 = _mm_unpacklo_epi64((__m128i)v20, (__m128i)v20);
      if ( v22 )
      {
        *(_QWORD *)(a1 + 24) = 0;
        *(__m128i *)n = si128;
        qfree(v22);
        si128 = _mm_load_si128((const __m128i *)n);
      }
      *(_QWORD *)(a1 + 16) = v21;
      *(__m128i *)(a1 + 24) = si128;
      v24 = *(_QWORD *)(a2 + 64);
      v25 = sub_1CFBB0(v24, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v25 += *(_DWORD *)(*(_QWORD *)(v24 + 1504) + 80LL);
      v26 = v25;
      v27 = a1 + 16;
      v28 = *(_QWORD *)(sub_1CFD00(*(_QWORD *)(a2 + 64), v25) + 24) - v25;
      if ( v28 > 0 )
      {
        v29 = *(_QWORD *)(a2 + 64);
        v27 = a1 + 16;
        v37[1] = v28;
        v37[0] = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 1496) + 24LL) + 16LL) & (*(_QWORD *)(v29 + 1440) + v26);
        sub_316BB0(a1 + 16, v37);
      }
      v30 = *(_QWORD *)(a2 + 64) + 232LL;
      sub_316CB0(v27, v30);
      if ( (a4 & 0x2000) != 0 )
      {
        v31 = *(_QWORD *)(a2 + 64);
        v39 = nullptr;
        v40 = 0;
        v32 = *(_QWORD *)(v31 + 216);
        if ( v32 )
        {
          n[0] = *(_QWORD *)(v31 + 216);
          v36 = 16 * v32;
          v39 = (__int64 (__fastcall **)())qalloc_or_throw(16 * v32, v30, 16 * v32, v32);
          *((_QWORD *)&v40 + 1) = n[0];
          memcpy(v39, *(const void **)(v31 + 208), v36);
          *(_QWORD *)&v40 = n[0];
        }
        sub_317BD0(&v39, v31 + 600);
        sub_316CB0(v27, &v39);
        if ( v39 )
        {
          *(_QWORD *)&v40 = 0;
          qfree((__int64)v39);
        }
      }
    }
  }
  else if ( v8 == 2 )
  {
    if ( (a4 & 1) != 0 )
      sub_316CB0(a1 + 16, *(_QWORD *)(a2 + 64) + 232LL);
  }
  else if ( v8 - 19 <= 1 && (a4 & 0x800) == 0 && (unsigned __int8)sub_11E2C0((int **)a3, v38, &v39, 0) )
  {
    *((_QWORD *)&v33 + 1) = a1;
    *(_QWORD *)&v33 = a2;
    v34 = ((_DWORD)v39 << 19) | (unsigned __int16)(8 * LOWORD(v38[0]));
    sub_123EA0(v33, a3 + 32, a4, v34);
    *((_QWORD *)&v33 + 1) = a1;
    *(_QWORD *)&v33 = a2;
    sub_123EA0(v33, a3 + 48, a4, v34);
    return a1;
  }
LABEL_6:
  *(_QWORD *)&v40 = 0;
  *((_QWORD *)&v40 + 1) = a2;
  v41 = 0u;
  v42 = 0;
  v39 = &off_4DD610;
  v43 = a1;
  v44 = a4;
  sub_11E900((_BYTE *)a3, (__int64)&v39);
  return a1;
}
