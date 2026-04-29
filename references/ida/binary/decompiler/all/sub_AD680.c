__int64 __fastcall sub_AD680(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // r14d
  int v7; // esi
  int v9; // ecx
  __int64 v10; // r14
  char v11; // dl
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rdx
  bool v17; // zf
  __int64 v18; // rsi
  __int64 v19; // rax
  int v20; // ecx
  int v21; // eax
  void *v22; // rax
  const void *v23; // rsi
  __int64 n; // [rsp+8h] [rbp-128h]
  __int64 v25; // [rsp+18h] [rbp-118h]
  __int64 v26; // [rsp+18h] [rbp-118h]
  __int64 v27; // [rsp+20h] [rbp-110h]
  __int64 v28; // [rsp+28h] [rbp-108h]
  __int64 v29; // [rsp+28h] [rbp-108h]
  int v30; // [rsp+40h] [rbp-F0h]
  __int64 v31; // [rsp+40h] [rbp-F0h]
  __int64 v33; // [rsp+58h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-C8h] BYREF
  _QWORD v36[2]; // [rsp+70h] [rbp-C0h] BYREF
  __int64 v37; // [rsp+80h] [rbp-B0h] BYREF
  __int128 v38; // [rsp+88h] [rbp-A8h]
  _QWORD v39[2]; // [rsp+A0h] [rbp-90h] BYREF
  __int64 v40; // [rsp+B0h] [rbp-80h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-78h]
  __int64 v42[2]; // [rsp+D0h] [rbp-60h] BYREF
  void *v43; // [rsp+E0h] [rbp-50h]
  __int128 v44; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v45; // [rsp+F8h] [rbp-38h]

  v45 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 4 || *(_DWORD *)a3 != 4 )
    return 0;
  v4 = 0;
  if ( *(char *)(a2 + 4) < 0 )
    return v4;
  v7 = *(_DWORD *)(a2 + 68);
  v9 = *(_DWORD *)(a3 + 68);
  v10 = a3 + 64;
  v36[0] = 0;
  v30 = v9;
  v36[1] = 0;
  v37 = 0;
  v39[0] = 0;
  v39[1] = 0;
  v40 = 0;
  v38 = 0;
  v41 = 0;
  sub_125AC0(a1, v36, a3 + 64, 1);
  v28 = a2 + 64;
  sub_125AC0(a1, v39, a2 + 64, 1);
  if ( v30 >= v7 )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_63F20(v36, v39) )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_3149F0(&v40, &v37) )
    goto LABEL_8;
  v27 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  if ( (unsigned __int8)sub_63E80((_QWORD *)(v27 + 104), v39)
    || (unsigned __int8)sub_314F20(v27 + 120, &v40)
    || !(unsigned __int8)sub_156D50(a3 + 32, &v34, 0)
    || !(unsigned __int8)sub_156D50(a2 + 32, &v33, 0) )
  {
    goto LABEL_8;
  }
  v25 = -1;
  if ( (unsigned __int64)(8 * v30) <= 0x3F )
    v25 = (1LL << (8 * (unsigned __int8)v30)) - 1;
  v4 = sub_12DA50(v27, (unsigned int)&v35, a1, a2, v28, a3, v10);
  if ( !(_BYTE)v4 )
    goto LABEL_8;
  if ( v35 < 0 || v30 + v35 > v7 )
  {
    if ( !under_debugger )
      sub_37EA20(51665);
    BUG();
  }
  v11 = sub_11A810(v28, *(_QWORD *)(a1 + 480), 0);
  v12 = v35;
  if ( v11 )
    v12 = v7 - (__int64)v30 - v35;
  v35 = 8 * v12;
  v31 = v25 << (8 * (unsigned __int8)v12);
  v13 = v34 << (8 * (unsigned __int8)v12);
  v34 = v13;
  if ( !v35 && *(_BYTE *)(a2 + 32) == 10 && *(_BYTE *)(a3 + 32) == 2 )
    goto LABEL_8;
  if ( v13 == (v33 & v31) )
  {
LABEL_39:
    sub_11B160(a3);
    v21 = *(_DWORD *)(a1 + 24);
    BYTE1(v21) &= ~2u;
    LOBYTE(v21) = v21 | 0x80;
    *(_DWORD *)(a1 + 24) = v21;
    goto LABEL_9;
  }
  v29 = *(_QWORD *)(a2 + 8);
  sub_63700(v42, a4);
  v14 = *(_QWORD *)(a4 + 24);
  v43 = 0;
  v44 = 0;
  if ( v14 )
  {
    v26 = v14;
    n = 16 * v14;
    v22 = (void *)qalloc_or_throw();
    v23 = *(const void **)(a4 + 16);
    v43 = v22;
    *((_QWORD *)&v44 + 1) = v26;
    memcpy(v22, v23, n);
    *(_QWORD *)&v44 = v26;
  }
  v15 = sub_A9010(a1, v42, v29, a3, 1u);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    qfree();
  }
  qfree();
  if ( !v15 )
  {
    v16 = v34 | v33 & ~v31;
    v17 = *(_BYTE *)(a2 + 32) == 2;
    v33 = v16;
    if ( v17 )
    {
      *(__m128i *)(*(_QWORD *)(a2 + 40) + 16LL) = _mm_unpacklo_epi64(
                                                    (__m128i)(unsigned __int64)v16,
                                                    (__m128i)(unsigned __int64)v16);
    }
    else if ( *(_BYTE *)(a3 + 32) == 2 )
    {
      sub_11E5D0(a2 + 32, v27, v16, *(unsigned int *)(a2 + 36), *(_QWORD *)(a2 + 24), 0);
    }
    else
    {
      v18 = *(_QWORD *)(a2 + 40);
      *(_BYTE *)v18 = 6;
      v19 = 0;
      v20 = 8 * *(_DWORD *)(v27 + 84);
      if ( (unsigned __int64)v20 <= 0x3F )
        v19 = 1LL << v20;
      *(_QWORD *)(v18 + 8) = v16 & (v19 - 1);
    }
    goto LABEL_39;
  }
LABEL_8:
  v4 = 0;
LABEL_9:
  if ( v40 )
  {
    *(_QWORD *)&v41 = 0;
    qfree();
  }
  qfree();
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree();
  }
  qfree();
  return v4;
}
