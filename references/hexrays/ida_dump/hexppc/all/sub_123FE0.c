__int64 __fastcall sub_123FE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v5; // r14
  char v10; // al
  __int64 v11; // r14
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // r14
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v19; // r14
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rax
  int v24; // edx
  int v25; // esi
  char v26; // al
  unsigned int v27; // r15d
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // rax
  _BYTE *v31; // rdi
  __int64 v32; // [rsp+0h] [rbp-C8h]
  __int64 v33; // [rsp+8h] [rbp-C0h]
  __int64 v34; // [rsp+8h] [rbp-C0h]
  __int64 n; // [rsp+10h] [rbp-B8h]
  __int64 v36; // [rsp+18h] [rbp-B0h]
  __int64 v37; // [rsp+28h] [rbp-A0h] BYREF
  void *v38; // [rsp+30h] [rbp-98h] BYREF
  __int128 v39; // [rsp+38h] [rbp-90h]
  __m128i si128; // [rsp+50h] [rbp-78h] BYREF
  __int64 v41; // [rsp+60h] [rbp-68h] BYREF
  __int128 v42; // [rsp+68h] [rbp-60h]
  char v43; // [rsp+78h] [rbp-50h]
  __int64 v44; // [rsp+80h] [rbp-48h]
  unsigned __int64 v45; // [rsp+88h] [rbp-40h]

  v4 = a3 + 32;
  v5 = a3 + 32;
  v45 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v10 = *(_BYTE *)(a3 + 32);
  if ( v10 == 4 )
  {
LABEL_4:
    sub_1245A0(a2, a1, v5, a4);
  }
  else
  {
    while ( v10 == 14 )
    {
      sub_1254A0(a2, a1, *(_QWORD *)(v5 + 8), a4);
      v11 = *(_QWORD *)(v5 + 8);
      v10 = *(_BYTE *)(v11 + 16);
      v5 = v11 + 16;
      if ( v10 == 4 )
        goto LABEL_4;
    }
  }
  v12 = *(_BYTE *)(a3 + 48);
  v13 = a3 + 48;
  if ( v12 == 4 )
  {
LABEL_8:
    sub_1245A0(a2, a1, v13, a4);
  }
  else
  {
    while ( v12 == 14 )
    {
      sub_1254A0(a2, a1, *(_QWORD *)(v13 + 8), a4);
      v14 = *(_QWORD *)(v13 + 8);
      v12 = *(_BYTE *)(v14 + 16);
      v13 = v14 + 16;
      if ( v12 == 4 )
        goto LABEL_8;
    }
  }
  v15 = *(_QWORD *)(a2 + 480);
  v16 = *(_QWORD *)(v15 + 112);
  switch ( *(_DWORD *)a3 )
  {
    case 0:
    case 0x2A:
    case 0x2B:
    case 0x2C:
    case 0x2D:
    case 0x2E:
    case 0x2F:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x36:
      return a1;
    case 1:
      goto LABEL_39;
    case 8:
    case 9:
      v17 = a3 + 64;
      if ( (a4 & 0x100) != 0 )
        goto LABEL_12;
      v34 = *(_QWORD *)(v15 + 112);
      v26 = sub_1239E0(v4, v34, (unsigned __int8 *)(a3 + 64));
      v17 = a3 + 64;
      if ( !v26 )
        goto LABEL_12;
      v27 = *(_DWORD *)(a3 + 36);
      if ( *(_BYTE *)(a3 + 32) == 14 )
        v27 >>= 1;
      sub_120000((__int64)&si128, (unsigned __int8 *)(a3 + 64));
      if ( (unsigned __int8)sub_123E10((unsigned __int64)&si128, v34, *(_DWORD *)(a3 + 68) - v27, 0) )
      {
        sub_1245A0(a2, a1, &si128, a4);
        sub_119360((__int64)&si128);
      }
      else
      {
        sub_119360((__int64)&si128);
        v17 = a3 + 64;
LABEL_12:
        sub_1245A0(a2, a1, v17, a4);
      }
      break;
    case 0x38:
    case 0x39:
      if ( !*(_BYTE *)(a3 + 64) && (a4 & 1) != 0 && *(_BYTE *)(a3 + 32) != 11 )
      {
        si128 = 0u;
        v42 = 0;
        v41 = 0;
        v37 = 0;
        if ( !(unsigned __int8)sub_F4920(v15, &v37, a3) )
          clear_tinfo_t(&v37);
        sub_135680(*(_QWORD *)(a2 + 64), 0, &si128, &v37, *(_QWORD *)(a3 + 24), 0);
        if ( (a4 & 0x2000) == 0 )
        {
          v28 = *(_QWORD *)(a2 + 64);
          v38 = nullptr;
          v39 = 0;
          v29 = *(_QWORD *)(v28 + 216);
          if ( v29 )
          {
            v36 = v28;
            v32 = *(_QWORD *)(v28 + 216);
            n = 16 * v29;
            v38 = (void *)qalloc_or_throw(16 * v29);
            *((_QWORD *)&v39 + 1) = v32;
            memcpy(v38, *(const void **)(v36 + 208), n);
            v28 = v36;
            *(_QWORD *)&v39 = v32;
          }
          sub_313A50(&v38, v28 + 600);
          sub_313AE0(&v41, &v38);
          if ( v38 )
          {
            *(_QWORD *)&v39 = 0;
            qfree(v38);
          }
        }
        sub_60840((__int64 *)a1, si128.m128i_i64);
        sub_312B30(a1 + 16, &v41);
        clear_tinfo_t(&v37);
        if ( v41 )
        {
          *(_QWORD *)&v42 = 0;
          qfree(v41);
        }
        qfree(si128.m128i_i64[0]);
      }
      goto LABEL_11;
    case 0x3B:
      v19 = *(_QWORD **)(a2 + 64);
      v33 = *(_QWORD *)(v15 + 112);
      v20 = *(int *)(a3 + 36);
      v21 = sub_1CC170(v19, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v21 += *(int *)(v19[188] + 80LL);
      v22 = *(int *)(a3 + 36);
      v23 = *(_QWORD *)(*(_QWORD *)(v19[187] + 24LL) + 16LL) & (v19[180] + v21);
      *(_QWORD *)&v39 = v20;
      v38 = (void *)(v23 - v22);
      sub_312A30(a1 + 16, &v38);
      v16 = v33;
      goto LABEL_17;
    case 0x3C:
LABEL_17:
      v24 = *(_DWORD *)(v16 + 84);
      v25 = *(_DWORD *)(v16 + 60);
      si128 = 0u;
      sub_60440(si128.m128i_i64, v25, v24);
      v41 = 0;
      v42 = 0;
      sub_60840((__int64 *)a1, si128.m128i_i64);
      sub_312B30(a1 + 16, &v41);
      if ( v41 )
      {
        *(_QWORD *)&v42 = 0;
        qfree(v41);
      }
      qfree(si128.m128i_i64[0]);
      v17 = a3 + 64;
      goto LABEL_12;
    case 0x3D:
      if ( (a4 & 1) == 0 )
        goto LABEL_11;
      v17 = a3 + 64;
      if ( *(_BYTE *)(a3 + 64) != 4 || **(_DWORD **)(a3 + 72) != 2 )
        goto LABEL_12;
      si128 = _mm_load_si128((const __m128i *)&xmmword_411C00);
      sub_312A30(a1 + 16, &si128);
      break;
    case 0x3E:
      if ( (*(_BYTE *)(a3 + 5) & 0x10) == 0 )
        goto LABEL_11;
LABEL_39:
      if ( (a4 & 1) != 0 )
      {
        sub_312B30(a1 + 16, *(_QWORD *)(a2 + 64) + 232LL);
        if ( *(_BYTE *)(a3 + 64) == 4 )
        {
          v30 = *(_QWORD *)(a2 + 64);
          v31 = *(_BYTE **)(a3 + 72);
          v41 = 0;
          v42 = 0u;
          v43 = 0;
          si128.m128i_i64[0] = (__int64)&off_4CA7E8;
          v44 = a1;
          si128.m128i_i64[1] = v30;
          sub_11AEC0(v31, (__int64)&si128);
        }
      }
      return a1;
    default:
LABEL_11:
      v17 = a3 + 64;
      goto LABEL_12;
  }
  return a1;
}
