__int64 __fastcall sub_1BCB000(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v11; // rax
  unsigned int v12; // edi
  __int64 v13; // rsi
  int v14; // edx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v20; // rsi
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 *v31; // rax
  __int64 *v32; // rdi
  unsigned __int64 v33; // rsi
  __int64 *v34; // rax
  __int64 *v35; // rax
  unsigned __int64 v36; // [rsp+0h] [rbp-A8h]
  unsigned int v37; // [rsp+Ch] [rbp-9Ch]
  __int64 v38; // [rsp+10h] [rbp-98h]
  _QWORD *v39; // [rsp+18h] [rbp-90h]
  _QWORD *v40; // [rsp+18h] [rbp-90h]
  unsigned __int8 v42; // [rsp+2Bh] [rbp-7Dh]
  unsigned int v43; // [rsp+2Ch] [rbp-7Ch]
  __int64 v44; // [rsp+38h] [rbp-70h]
  int v45; // [rsp+40h] [rbp-68h] BYREF
  __int64 v46; // [rsp+48h] [rbp-60h]
  unsigned __int64 v47; // [rsp+50h] [rbp-58h]
  int v48; // [rsp+58h] [rbp-50h]
  unsigned __int64 v49; // [rsp+60h] [rbp-48h]

  v36 = a5;
  v11 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v43 = a6;
  if ( *(_BYTE *)(v11 + 16) != 26 )
    v11 = sub_F63050(v11, a2, a3, a4);
  v12 = *(unsigned __int16 *)(v11 + 22);
  v13 = v36;
  v14 = v36;
  v37 = v12;
  if ( v12 > (unsigned int)v36 )
    v14 = *(unsigned __int16 *)(v11 + 22);
  v15 = *(unsigned int *)(a2 + 8) + (unsigned __int64)(unsigned int)(*(_DWORD *)(a2 + 8) + v14);
  if ( v15 > *(unsigned int *)(a2 + 12) )
  {
    v13 = a2 + 16;
    sub_2237220(a2, a2 + 16, v15, 8);
  }
  if ( !v12 )
    return 0;
  v16 = 0;
  v42 = 0;
  while ( 1 )
  {
    v26 = *(_QWORD *)(a3 + 120);
    v27 = *(_QWORD *)(v26 + 8 * v16);
    if ( v36 > v16 )
    {
      v17 = *(_QWORD **)(a1 + 248);
      v18 = *(_QWORD *)(v27 + 48);
      v38 = *(_QWORD *)(8 * v16 + a4);
      if ( (*(_BYTE *)(v17[290] + 107LL) & 4) != 0 && (*(_BYTE *)(v27 + 29) & 1) != 0 )
      {
        v44 = *(_QWORD *)(v27 + 48);
        v40 = *(_QWORD **)(a1 + 248);
        v31 = sub_B8C3D0(v27, v13, v18, (__int64)v17, a5, a6);
        v17 = v40;
        v18 = v44;
        v32 = (__int64 *)*v31;
        v33 = *v31 + 8LL * *((unsigned int *)v31 + 2);
        if ( *v31 < v33 )
        {
          v35 = (__int64 *)*v31;
          while ( 1 )
          {
            a5 = *v35;
            if ( *(_WORD *)(*v35 + 36) == 99 )
              break;
            if ( (__int64 *)v33 == ++v35 )
              goto LABEL_11;
          }
          v19 = 4LL * (v35 != (__int64 *)v33);
          goto LABEL_12;
        }
        if ( v32 != (__int64 *)v33 )
        {
          if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 99 )
          {
LABEL_29:
            v19 = 4LL * (v32 != (__int64 *)v33);
            goto LABEL_12;
          }
          v34 = (__int64 *)(v33 + 8);
          while ( 1 )
          {
            v33 = (unsigned __int64)v34;
            if ( v32 == v34 )
              break;
            a5 = *v34++;
            if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 99 )
              goto LABEL_29;
          }
        }
      }
LABEL_11:
      v19 = 0;
LABEL_12:
      v48 = 0;
      v45 = 1;
      v46 = 0;
      v20 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v20 + 8) & 0xF) != 0 )
      {
        v39 = v17;
        v29 = sub_F64F00(v18, v20, v18, (__int64)v17, a5);
        v17 = v39;
        v21 = v29 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v22 = sub_A73320(v17, v21);
      v13 = (__int64)&v45;
      v47 = v22;
      v49 = v27 & 0xFFFFFFFFFFFFFFFBLL | v19;
      v23 = sub_1A24E20(a1, (__int64)&v45, 0, v38, 0, 0, a7, a8);
      v42 |= v23 == 1;
      v24 = v23 & 0xFFFFFFFFFFFFFFFELL;
      goto LABEL_15;
    }
    v13 = v43;
    v28 = sub_190FB60(a1, v43, a3, *(_QWORD *)(v26 + 8 * v16), nullptr, *(double *)a7.m128_u64, a8);
    if ( v28 == 1 )
      return 1;
    v24 = v28 & 0xFFFFFFFFFFFFFFFELL;
LABEL_15:
    v25 = *(unsigned int *)(a2 + 8);
    if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
    {
      v13 = a2 + 16;
      ++v16;
      sub_2237220(a2, a2 + 16, v25 + 1, 8);
      *(_QWORD *)(*(_QWORD *)a2 + 8LL * (unsigned int)(*(_DWORD *)(a2 + 8))++) = v24;
      if ( v37 == (_DWORD)v16 )
        return v42;
    }
    else
    {
      ++v16;
      *(_QWORD *)(*(_QWORD *)a2 + 8 * v25) = v24;
      ++*(_DWORD *)(a2 + 8);
      if ( v37 == (_DWORD)v16 )
        return v42;
    }
  }
}
