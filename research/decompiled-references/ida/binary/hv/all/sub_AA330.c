unsigned __int64 __fastcall sub_AA330(
        __int64 a1,
        _BYTE *a2,
        unsigned __int64 a3,
        __m128i *a4,
        unsigned __int64 a5,
        int a6)
{
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // r10
  __int64 v17; // rax
  _BOOL4 v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // r8
  int v24; // eax
  unsigned __int64 v25; // rax
  _BYTE *v26; // rsi
  __int64 v27; // r10
  char *v28; // rcx
  _BYTE *v29; // rax
  unsigned int v30; // eax
  char v31; // cl
  int v32; // eax
  __int64 v33; // rax
  _BYTE *v34; // r11
  int v35; // edx
  unsigned __int64 v36; // rax
  __int64 v37; // [rsp-30h] [rbp-F8h]
  __int64 v38; // [rsp+0h] [rbp-C8h]
  unsigned __int64 v39; // [rsp+0h] [rbp-C8h]
  _BYTE *v40; // [rsp+0h] [rbp-C8h]
  int v41; // [rsp+8h] [rbp-C0h]
  unsigned __int64 v42; // [rsp+10h] [rbp-B8h]
  _BYTE *v43; // [rsp+18h] [rbp-B0h]
  int v44; // [rsp+24h] [rbp-A4h]
  __int64 v45; // [rsp+28h] [rbp-A0h]
  _DWORD *v46; // [rsp+28h] [rbp-A0h]
  _BYTE *v47; // [rsp+30h] [rbp-98h]
  __int64 v48; // [rsp+30h] [rbp-98h]
  __int64 v49; // [rsp+38h] [rbp-90h]
  __int64 v50; // [rsp+40h] [rbp-88h]
  __int64 v51; // [rsp+48h] [rbp-80h]
  __int64 v52; // [rsp+50h] [rbp-78h]
  __int64 v53; // [rsp+58h] [rbp-70h]
  _BYTE v54[16]; // [rsp+60h] [rbp-68h] BYREF
  unsigned __int64 v55; // [rsp+70h] [rbp-58h]
  __int64 v56; // [rsp+78h] [rbp-50h]
  int v57; // [rsp+80h] [rbp-48h]
  unsigned __int64 v58; // [rsp+88h] [rbp-40h]

  v58 = __readfsqword(0x28u);
  v12 = sub_A81A0(a1, a4, a5);
  v13 = v12;
  if ( v12 > 0xFFFFFFFFFFFFFF88LL )
    return v13;
  v14 = *(_DWORD *)(a1 + 912);
  if ( v12 == 1 )
  {
    v13 = -106;
    if ( v14 )
      return v13;
    goto LABEL_8;
  }
  v15 = *(_QWORD *)(a1 + 3200);
  if ( v14 )
  {
    v13 = sub_A8CA0((_QWORD *)(a1 + 912), (__int64 *)(a1 + 952), v15 + 5616);
    if ( v13 <= 0xFFFFFFFFFFFFFF88LL )
    {
      v33 = *(_QWORD *)(a1 + 3200);
      *(_QWORD *)(a1 + 3200) = *(_QWORD *)(a1 + 3208);
      v13 = 0;
      *(_QWORD *)(a1 + 3208) = v33;
    }
    return v13;
  }
  v18 = 1;
  v44 = *(_DWORD *)(a1 + 8);
  v49 = *(_QWORD *)(a1 + 3520);
  v38 = *(_QWORD *)(a1 + 3208);
  v19 = *(_QWORD *)(a1 + 976);
  v41 = *(_DWORD *)(a1 + 260);
  v50 = *(_QWORD *)(a1 + 952);
  v20 = *(_QWORD *)(a1 + 960) - v50;
  v51 = *(_QWORD *)(a1 + 1000);
  v52 = *(_QWORD *)(a1 + 984);
  v53 = *(_QWORD *)(a1 + 992);
  v21 = *(_QWORD *)(a1 + 968);
  v22 = v19 - v21;
  v23 = v20 >> 3;
  v42 = v20 >> 3;
  if ( v20 >> 3 )
  {
    v24 = *(_DWORD *)(a1 + 304);
    v18 = v22 / v23 > 0x13;
    if ( v24 != 1 )
    {
LABEL_13:
      if ( v24 == 2 )
      {
        v14 = 1;
      }
      else if ( v41 == 1 )
      {
        v14 = *(_DWORD *)(a1 + 256) != 0;
      }
    }
  }
  else
  {
    v24 = *(_DWORD *)(a1 + 304);
    if ( v24 != 1 )
      goto LABEL_13;
  }
  v45 = v15;
  v25 = sub_B20B0((_DWORD)a2, a3, v21, v22, (int)v49 + 212, 8708, v15, v38, v41, v14, v18, v44);
  v13 = v25;
  if ( v25 > 0xFFFFFFFFFFFFFF88LL )
    goto LABEL_41;
  v26 = &a2[v25];
  v27 = v45;
  if ( (__int64)(a3 - v25) <= 3 )
  {
    if ( a5 > a3 )
    {
      v17 = *(_QWORD *)(a1 + 3200);
      v13 = -70;
      goto LABEL_9;
    }
LABEL_42:
    if ( a6 && !*(_DWORD *)(a1 + 944) && (unsigned int)sub_A7AF0(a4->m128i_i8, a5) )
      goto LABEL_45;
LABEL_8:
    v17 = *(_QWORD *)(a1 + 3200);
    v13 = 0;
    goto LABEL_9;
  }
  v28 = (char *)(v45 + 2064);
  v46 = (_DWORD *)(v38 + 2064);
  if ( v42 > 0x7F )
  {
    if ( v42 > 0x7EFF )
    {
      *v26 = -1;
      *(_WORD *)(v26 + 1) = v42 - 32512;
      v29 = v26 + 3;
    }
    else
    {
      v26[1] = v42;
      *v26 = BYTE1(v42) + 0x80;
      v29 = v26 + 2;
    }
  }
  else
  {
    v29 = v26 + 1;
    *v26 = v42;
    if ( !v42 )
    {
      *(_QWORD *)(v38 + 2064) = *(_QWORD *)(v27 + 2064);
      *(_QWORD *)(v38 + 5608) = *(_QWORD *)(v27 + 5608);
      v13 = v29 - a2;
      qmemcpy(
        (void *)((v38 + 2072) & 0xFFFFFFFFFFFFFFF8LL),
        (const void *)(v28 - ((char *)v46 - ((v38 + 2072) & 0xFFFFFFFFFFFFFFF8LL))),
        8LL * (((unsigned int)v46 - (((_DWORD)v38 + 2072) & 0xFFFFFFF8) + 3552) >> 3));
      goto LABEL_21;
    }
  }
  v47 = v29;
  v43 = v29 + 1;
  sub_A9EF0(
    (__int64)v54,
    (__int64 *)(a1 + 952),
    v42,
    v28,
    v46,
    (__int64)(v29 + 1),
    (__int64)&a2[a3],
    v41,
    v49,
    v49 + 212,
    8708);
  v13 = v55;
  if ( v55 > 0xFFFFFFFFFFFFFF88LL
    || (v34 = &v43[v55],
        *v47 = 16 * v54[4] + (v54[0] << 6) + 4 * v54[8],
        v48 = v56,
        v35 = v38 + 2836,
        v37 = v38 + 4288,
        v40 = v34,
        v36 = sub_B3080(
                (_DWORD)v34,
                (int)a2 + (int)a3 - (int)v34,
                v35,
                v53,
                (_DWORD)v46,
                v51,
                v37,
                v52,
                v50,
                v42,
                v57,
                v44),
        v13 = v36,
        v36 > 0xFFFFFFFFFFFFFF88LL) )
  {
LABEL_41:
    if ( v13 == -70 && a5 <= a3 )
      goto LABEL_42;
LABEL_53:
    v17 = *(_QWORD *)(a1 + 3200);
    goto LABEL_9;
  }
  if ( v48 && v48 + v36 <= 3 )
    goto LABEL_42;
  v13 = &v40[v36] - a2;
LABEL_21:
  if ( !v13 || v13 == -70 && a5 <= a3 )
    goto LABEL_42;
  if ( v13 > 0xFFFFFFFFFFFFFF88LL )
    goto LABEL_53;
  v30 = *(_DWORD *)(a1 + 260);
  v31 = v30 - 1;
  if ( v30 <= 7 )
    v31 = 6;
  if ( a5 - 2 - (a5 >> v31) <= v13 )
    goto LABEL_42;
  if ( a6 )
  {
    if ( !*(_DWORD *)(a1 + 944) && v13 <= 0x18 )
    {
      v39 = v13;
      v32 = sub_A7AF0(a4->m128i_i8, a5);
      v13 = v39;
      if ( v32 )
      {
LABEL_45:
        v13 = 1;
        *a2 = a4->m128i_i8[0];
        v17 = *(_QWORD *)(a1 + 3200);
        goto LABEL_9;
      }
    }
  }
  if ( v13 == 1 )
  {
    v17 = *(_QWORD *)(a1 + 3200);
  }
  else
  {
    v17 = *(_QWORD *)(a1 + 3208);
    *(_QWORD *)(a1 + 3208) = *(_QWORD *)(a1 + 3200);
    *(_QWORD *)(a1 + 3200) = v17;
  }
LABEL_9:
  if ( *(_DWORD *)(v17 + 5604) == 2 )
    *(_DWORD *)(v17 + 5604) = 1;
  return v13;
}

