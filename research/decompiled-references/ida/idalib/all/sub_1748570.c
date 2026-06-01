__int64 __fastcall sub_1748570(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdx
  int v16; // esi
  int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // r8
  _QWORD *v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // eax
  __int64 v26; // rdi
  unsigned int v27; // ecx
  _QWORD *v28; // rsi
  __int64 v29; // r8
  int v30; // r11d
  _QWORD *v31; // r10
  int v32; // ecx
  bool v33; // zf
  int v34; // esi
  _QWORD *v35; // [rsp+0h] [rbp-68h] BYREF
  __int64 v36; // [rsp+8h] [rbp-60h] BYREF
  __int64 v37; // [rsp+10h] [rbp-58h] BYREF
  char v38; // [rsp+18h] [rbp-50h]
  __m128 v39[4]; // [rsp+20h] [rbp-48h] BYREF

  v36 = a2;
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v8 = *(unsigned int *)(a1 + 15728);
  v9 = *(_QWORD *)(a1 + 15712);
  v36 = v7;
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v7 == *v11 )
    {
LABEL_3:
      sub_1745720(v39, v11, (_QWORD *)(16 * v8 + v9), a1 + 15712, 1);
      v13 = v39[0].m128_u64[0];
      goto LABEL_4;
    }
    v16 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v17 = v16 + 1;
        v10 = (v8 - 1) & (v16 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v18 = *v11;
        if ( v7 == *v11 )
          goto LABEL_3;
        v16 = v17;
      }
      while ( v18 != -4096 );
    }
  }
  sub_1745720(v39, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), a1 + 15712, 1);
  v13 = v39[0].m128_u64[0];
LABEL_4:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 15712) + 16LL * *(unsigned int *)(a1 + 15728));
  sub_1745720(v39, v14, v14, a1 + 15712, 1);
  if ( v39[0].m128_u64[0] == v13 )
  {
    v19 = a4;
    v20 = nullptr;
    sub_1748E30(&v37, a1, v36, a3, v19);
    if ( v38 )
    {
      v20 = (_QWORD *)sub_1744E40((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 8, 3u);
      *v20 = v37;
      v37 = 0;
    }
    v25 = *(_DWORD *)(a1 + 15728);
    if ( v25 )
    {
      v21 = v36;
      v26 = *(_QWORD *)(a1 + 15712);
      v27 = (v25 - 1) & (((unsigned int)v36 >> 9) ^ ((unsigned int)v36 >> 4));
      v28 = (_QWORD *)(v26 + 16LL * v27);
      v29 = *v28;
      if ( v36 == *v28 )
      {
LABEL_14:
        sub_1745720(v39, v28, (_QWORD *)(v26 + 16LL * v25), a1 + 15712, 1);
        v13 = v39[0].m128_u64[0];
        return *(_QWORD *)(v13 + 8);
      }
      v30 = 1;
      v31 = nullptr;
      if ( v29 != -4096 )
      {
        while ( 1 )
        {
          if ( !v31 && v29 == -8192 )
            v31 = v28;
          v27 = (v25 - 1) & (v30 + v27);
          v28 = (_QWORD *)(v26 + 16LL * v27);
          v29 = *v28;
          if ( v36 == *v28 )
            goto LABEL_14;
          if ( v29 == -4096 )
          {
            if ( v31 )
              v28 = v31;
            break;
          }
          ++v30;
        }
      }
      v32 = *(_DWORD *)(a1 + 15720);
      v23 = 3 * v25;
      v39[0].m128_u64[0] = (unsigned __int64)v28;
      v22 = (unsigned int)(v32 + 1);
      v24 = (unsigned int)(4 * v22);
      if ( (unsigned int)v24 < (unsigned int)v23 )
      {
        v23 = v25 - *(_DWORD *)(a1 + 15724) - (unsigned int)v22;
        v24 = v25 >> 3;
        if ( (unsigned int)v23 > (unsigned int)v24 )
        {
LABEL_18:
          v33 = *v28 == -4096;
          *(_DWORD *)(a1 + 15720) = v22;
          if ( !v33 )
            --*(_DWORD *)(a1 + 15724);
          v35 = v20;
          *(__m128 *)v28 = _mm_loadh_ps((const double *)&v35);
          goto LABEL_14;
        }
        v34 = v25;
LABEL_23:
        sub_1748360(a1 + 15712, v34, v21, v22, v23, v24);
        sub_1744A70((__int64 *)(a1 + 15712), &v36, v39);
        v26 = *(_QWORD *)(a1 + 15712);
        v25 = *(_DWORD *)(a1 + 15728);
        LODWORD(v22) = *(_DWORD *)(a1 + 15720) + 1;
        v28 = (_QWORD *)v39[0].m128_u64[0];
        goto LABEL_18;
      }
    }
    else
    {
      v39[0].m128_u64[0] = 0;
    }
    v34 = 2 * v25;
    goto LABEL_23;
  }
  return *(_QWORD *)(v13 + 8);
}
