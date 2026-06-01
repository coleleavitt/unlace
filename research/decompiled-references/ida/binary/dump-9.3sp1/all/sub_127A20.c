__int64 __fastcall sub_127A20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r15
  __int64 v7; // r14
  unsigned int v11; // r13d
  char v12; // al
  __int64 v13; // r14
  char v14; // al
  __int64 v15; // r14
  __int64 v16; // r14
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v21; // r14
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  int v26; // edx
  int v27; // esi
  char v28; // al
  __int64 v29; // rdx
  __int64 v30; // rcx
  unsigned int v31; // r15d
  int v32; // r8d
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  _BYTE *v36; // rdi
  unsigned __int8 *v37; // [rsp+0h] [rbp-C8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  __int64 v39; // [rsp+8h] [rbp-C0h]
  __int64 n; // [rsp+10h] [rbp-B8h]
  __int64 v41; // [rsp+18h] [rbp-B0h]
  __int64 v42; // [rsp+20h] [rbp-A8h]
  __int64 v43; // [rsp+28h] [rbp-A0h] BYREF
  void *v44; // [rsp+30h] [rbp-98h] BYREF
  __int128 v45; // [rsp+38h] [rbp-90h]
  __m128i si128; // [rsp+50h] [rbp-78h] BYREF
  __int64 v47; // [rsp+60h] [rbp-68h] BYREF
  __int128 v48; // [rsp+68h] [rbp-60h]
  char v49; // [rsp+78h] [rbp-50h]
  __int64 v50; // [rsp+80h] [rbp-48h]
  unsigned __int64 v51; // [rsp+88h] [rbp-40h]

  v6 = a3 + 32;
  v7 = a3 + 32;
  v51 = __readfsqword(0x28u);
  v11 = a4;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 24) = 0;
  v12 = *(_BYTE *)(a3 + 32);
  if ( v12 == 4 )
  {
LABEL_4:
    sub_127FE0(a2, a1, v7, v11, a5, a6, (int)v37, v39, n, v41, v42);
  }
  else
  {
    while ( v12 == 14 )
    {
      sub_128EE0(a2, a1, *(_QWORD *)(v7 + 8), v11);
      v13 = *(_QWORD *)(v7 + 8);
      v12 = *(_BYTE *)(v13 + 16);
      v7 = v13 + 16;
      if ( v12 == 4 )
        goto LABEL_4;
    }
  }
  v14 = *(_BYTE *)(a3 + 48);
  v15 = a3 + 48;
  if ( v14 == 4 )
  {
LABEL_8:
    sub_127FE0(a2, a1, v15, v11, a5, a6, (int)v37, v39, n, v41, v42);
  }
  else
  {
    while ( v14 == 14 )
    {
      sub_128EE0(a2, a1, *(_QWORD *)(v15 + 8), v11);
      v16 = *(_QWORD *)(v15 + 8);
      v14 = *(_BYTE *)(v16 + 16);
      v15 = v16 + 16;
      if ( v14 == 4 )
        goto LABEL_8;
    }
  }
  v17 = *(_QWORD *)(a2 + 480);
  v18 = *(_QWORD *)(v17 + 112);
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
      v19 = a3 + 64;
      if ( (v11 & 0x100) != 0 )
        goto LABEL_12;
      v37 = (unsigned __int8 *)(a3 + 64);
      v39 = *(_QWORD *)(v17 + 112);
      v28 = sub_127420(v6, v39, (unsigned __int8 *)(a3 + 64), a4);
      v19 = a3 + 64;
      if ( !v28 )
        goto LABEL_12;
      v31 = *(_DWORD *)(a3 + 36);
      if ( *(_BYTE *)(a3 + 32) == 14 )
        v31 >>= 1;
      sub_123A40((__int64)&si128, v37, v29, v30);
      if ( (unsigned __int8)sub_127850((unsigned __int64)&si128, v39, *(_DWORD *)(a3 + 68) - v31, 0) )
      {
        sub_127FE0(a2, a1, (__int64)&si128, v11, v32, (int)v37, (int)v37, v39, n, v41, v42);
        sub_11CDA0((__int64)&si128);
      }
      else
      {
        sub_11CDA0((__int64)&si128);
        v19 = a3 + 64;
LABEL_12:
        sub_127FE0(a2, a1, v19, v11, v18, v19, (int)v37, v39, n, v41, v42);
      }
      break;
    case 0x38:
    case 0x39:
      if ( !*(_BYTE *)(a3 + 64) && (v11 & 1) != 0 && *(_BYTE *)(a3 + 32) != 11 )
      {
        si128 = 0u;
        v48 = 0;
        v47 = 0;
        v43 = 0;
        if ( !(unsigned __int8)sub_F8360(v17, (__int64)&v43, (_DWORD *)a3) )
          clear_tinfo_t();
        sub_1390C0(*(_QWORD *)(a2 + 64), 0, &si128, &v43, *(_QWORD *)(a3 + 24), 0);
        if ( (v11 & 0x2000) == 0 )
        {
          v33 = *(_QWORD *)(a2 + 64);
          v44 = nullptr;
          v45 = 0;
          v34 = *(_QWORD *)(v33 + 216);
          if ( v34 )
          {
            v41 = v33;
            v38 = *(_QWORD *)(v33 + 216);
            n = 16 * v34;
            v44 = (void *)qalloc_or_throw(16 * v34, 0, 16 * v34, v33);
            *((_QWORD *)&v45 + 1) = v38;
            LODWORD(v39) = v38;
            memcpy(v44, *(const void **)(v41 + 208), n);
            v33 = v41;
            *(_QWORD *)&v45 = v38;
          }
          v37 = (unsigned __int8 *)&v44;
          sub_317BD0(&v44, v33 + 600);
          sub_317C60(&v47, &v44);
          if ( v44 )
          {
            *(_QWORD *)&v45 = 0;
            qfree((__int64)v44);
          }
        }
        sub_64280((__int64 *)a1, si128.m128i_i64);
        sub_316CB0(a1 + 16, &v47);
        clear_tinfo_t();
        if ( v47 )
        {
          *(_QWORD *)&v48 = 0;
          qfree(v47);
        }
        qfree(si128.m128i_i64[0]);
      }
      goto LABEL_11;
    case 0x3B:
      v21 = *(_QWORD **)(a2 + 64);
      v39 = *(_QWORD *)(v17 + 112);
      v37 = (unsigned __int8 *)(a1 + 16);
      v22 = *(int *)(a3 + 36);
      v23 = sub_1CFBB0(v21, *(_QWORD *)(a3 + 24));
      if ( (*(_BYTE *)(a3 + 4) & 0x20) != 0 )
        v23 += *(int *)(v21[188] + 80LL);
      v24 = *(int *)(a3 + 36);
      v25 = *(_QWORD *)(*(_QWORD *)(v21[187] + 24LL) + 16LL) & (v21[180] + v23);
      *(_QWORD *)&v45 = v22;
      v44 = (void *)(v25 - v24);
      sub_316BB0(v37, &v44);
      v18 = v39;
      goto LABEL_17;
    case 0x3C:
LABEL_17:
      v26 = *(_DWORD *)(v18 + 84);
      v27 = *(_DWORD *)(v18 + 60);
      si128 = 0u;
      sub_63E80(si128.m128i_i64, v27, v26);
      v47 = 0;
      v48 = 0;
      sub_64280((__int64 *)a1, si128.m128i_i64);
      sub_316CB0(a1 + 16, &v47);
      if ( v47 )
      {
        *(_QWORD *)&v48 = 0;
        qfree(v47);
      }
      qfree(si128.m128i_i64[0]);
      v19 = a3 + 64;
      goto LABEL_12;
    case 0x3D:
      if ( (v11 & 1) == 0 )
        goto LABEL_11;
      v19 = a3 + 64;
      if ( *(_BYTE *)(a3 + 64) != 4 || **(_DWORD **)(a3 + 72) != 2 )
        goto LABEL_12;
      si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
      sub_316BB0(a1 + 16, &si128);
      break;
    case 0x3E:
      if ( (*(_BYTE *)(a3 + 5) & 0x10) == 0 )
        goto LABEL_11;
LABEL_39:
      if ( (v11 & 1) != 0 )
      {
        sub_316CB0(a1 + 16, *(_QWORD *)(a2 + 64) + 232LL);
        if ( *(_BYTE *)(a3 + 64) == 4 )
        {
          v35 = *(_QWORD *)(a2 + 64);
          v36 = *(_BYTE **)(a3 + 72);
          v47 = 0;
          v48 = 0u;
          v49 = 0;
          si128.m128i_i64[0] = (__int64)&off_4DD688;
          v50 = a1;
          si128.m128i_i64[1] = v35;
          sub_11E900(v36, (__int64)&si128);
        }
      }
      return a1;
    default:
LABEL_11:
      v19 = a3 + 64;
      goto LABEL_12;
  }
  return a1;
}
