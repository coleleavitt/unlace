unsigned __int64 __fastcall sub_979BF0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  _WORD *v11; // r13
  __int64 v12; // r12
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r15d
  _QWORD *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rcx
  __int64 v20; // rsi
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _WORD *v28; // r15
  __int64 v29; // r13
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  bool v33; // zf
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned __int16 v41; // ax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __m128 v46; // [rsp+0h] [rbp-68h] BYREF
  __int64 i; // [rsp+18h] [rbp-50h]
  __int64 v48; // [rsp+20h] [rbp-48h]
  int v49; // [rsp+2Ch] [rbp-3Ch]

  v6 = a2;
  v46.m128_u64[0] = a3;
  for ( i = a5; ; i = v43 )
  {
    v11 = (_WORD *)sub_BD7CB0(*(_QWORD *)(v6 + 24));
    if ( ((*v11 + 394) & 0x1FFu) > 1 || ((v11[1] >> 3) & 0x3Fu) - 19 > 1 )
    {
      v12 = sub_975DE0(a1, a2, v7, v8, v9, v10);
      v15 = sub_974040((__int64 *)a1, (__int64)v11);
      if ( v15 < 0 )
        v15 = sub_974040((__int64 *)a1, v6);
      if ( !v46.m128_u64[0] )
      {
        sub_975B20(v12, a4, 2LL * (a4 == 0), (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL), v13, v14);
        goto LABEL_10;
      }
      *(_QWORD *)(v12 + 32) = v46.m128_u64[0] & 0xFFFFFFFFFFFFFFF9LL;
      v16 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      if ( v15 )
      {
        sub_975B20(v12, a4, 2LL * (a4 == 0), v16, v13, v14);
        v19 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
        if ( v15 == 1 )
        {
          v20 = 0;
          v21 = i & 0xFFFFFFFFFFFFFFF9LL | 2;
          goto LABEL_9;
        }
      }
      else
      {
        sub_975B20(v12, 0, a4 & 0xFFFFFFFFFFFFFFF9LL | 2, v16, v13, v14);
        v19 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      }
      v20 = i;
      v21 = 2LL * ((v15 == 1) | (unsigned __int8)(i == 0));
LABEL_9:
      sub_975B20(v12, v20, v21, v19, v17, v18);
LABEL_10:
      *(_QWORD *)(a1 + 16) = v12;
      a2 = (__int64)v11;
      v46.m128_u64[0] = sub_979740(a1, (__int64)v11, 1, 0, v22, v23);
      goto LABEL_11;
    }
    a2 = (__int64)v11;
    v46.m128_u64[0] = sub_979BF0(a1, v11, v46.m128_u64[0], a4, i);
    v12 = v35;
LABEL_11:
    if ( *(_BYTE *)(a1 + 320) )
      goto LABEL_14;
    v28 = (_WORD *)sub_BD7CB0(*(_QWORD *)(v6 + 16));
    if ( ((*v28 + 394) & 0x1FFu) > 1 || ((v28[1] >> 3) & 0x3Fu) - 19 > 1 )
      break;
    v41 = *(_WORD *)(v6 + 2);
    v42 = v46.m128_u64[0];
    v46.m128_u64[0] = v6;
    v6 = (__int64)v28;
    v33 = ((v41 >> 3) & 0x3F) == 20;
    v43 = i;
    if ( v33 )
      v43 = v42;
    else
      a4 = v42;
  }
  v29 = sub_975DE0(a1, a2, v24, v25, v26, v27);
  *(_QWORD *)(v29 + 32) = v6 & 0xFFFFFFFFFFFFFFF9LL;
  *(_QWORD *)(a1 + 16) = v29;
  v32 = sub_979740(a1, (__int64)v28, 1, 0, v30, v31);
  v33 = *(_BYTE *)(a1 + 320) == 0;
  v48 = v32;
  if ( !v33 )
  {
LABEL_14:
    v46 = 0u;
    return v46.m128_u64[0];
  }
  v36 = sub_974040((__int64 *)a1, (__int64)v28);
  if ( ((*(_WORD *)(v6 + 2) >> 3) & 0x3F) == 0x14 )
  {
    LODWORD(i) = v36;
    sub_975C50(a1, v29, a4, v36 != 0, v37, v38);
    sub_975C50(a1, v29, v46.m128_i64[0], (_DWORD)i != 1, v44, v45);
  }
  else
  {
    v49 = v36;
    sub_975C50(a1, v29, v46.m128_i64[0], v36 != 0, v37, v38);
    sub_975C50(a1, v29, i, v49 != 1, v39, v40);
  }
  v46.m128_u64[0] = v12;
  v46 = _mm_loadh_ps((const double *)v46.m128_u64);
  return v46.m128_u64[0];
}

