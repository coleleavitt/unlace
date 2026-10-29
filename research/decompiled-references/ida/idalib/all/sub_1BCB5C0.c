char __fastcall sub_1BCB5C0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6,
        __m128 a7,
        __m128 a8,
        _QWORD *a9,
        __int64 a10)
{
  __int64 v10; // r14
  unsigned __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rbp
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  _QWORD *v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r13
  __int64 v24; // rsi
  unsigned __int64 v25; // rax
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  int v34; // ebp
  unsigned int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // r13
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-B0h]
  unsigned __int64 v42; // [rsp+8h] [rbp-B0h]
  _QWORD *v43; // [rsp+10h] [rbp-A8h]
  _QWORD *v44; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v45; // [rsp+10h] [rbp-A8h]
  __int64 v47; // [rsp+20h] [rbp-98h]
  __int64 v48; // [rsp+30h] [rbp-88h]
  unsigned int v50; // [rsp+44h] [rbp-74h]
  int v52; // [rsp+50h] [rbp-68h] BYREF
  __int64 v53; // [rsp+58h] [rbp-60h]
  unsigned __int64 v54; // [rsp+60h] [rbp-58h]
  int v55; // [rsp+68h] [rbp-50h]
  unsigned __int64 v56; // [rsp+70h] [rbp-48h]

  v10 = a2;
  v50 = a3;
  *a9 = 0;
  v12 = (unsigned int)sub_B76070(a2, a2, a3, a4);
  if ( (unsigned int)v12 > a5 )
    v12 = a5;
  if ( v12 )
  {
    v16 = 0;
    v47 = 8LL * (unsigned int)(v12 - 1) + 8;
    while ( 1 )
    {
      v20 = *(_QWORD **)(a1 + 248);
      v41 = *(_QWORD *)(a4 + v16);
      v21 = *(_QWORD *)(*(_QWORD *)(v10 + 120) + v16);
      v22 = *(_QWORD *)(v21 + 48);
      if ( (*(_BYTE *)(v20[290] + 107LL) & 4) == 0 || (*(_BYTE *)(v21 + 29) & 1) == 0 )
        break;
      v48 = *(_QWORD *)(v21 + 48);
      v44 = *(_QWORD **)(a1 + 248);
      v26 = sub_B8C3D0(*(_QWORD *)(*(_QWORD *)(v10 + 120) + v16), a2, v13, (__int64)v20, v22, v15);
      v20 = v44;
      v22 = v48;
      v27 = *v26;
      v28 = *v26 + 8LL * *((unsigned int *)v26 + 2);
      if ( v27 >= v28 )
      {
        if ( v27 == v28 )
          break;
        while ( 1 )
        {
          v13 = *(_QWORD *)v28;
          if ( *(_WORD *)(*(_QWORD *)v28 + 36LL) == 99 )
            break;
          v28 += 8LL;
          if ( v27 == v28 )
            goto LABEL_11;
        }
        v23 = 4LL * (v27 != v28);
      }
      else
      {
        v13 = v27;
        while ( *(_WORD *)(*(_QWORD *)v13 + 36LL) != 99 )
        {
          v13 += 8;
          if ( v28 == v13 )
            goto LABEL_11;
        }
        v23 = 4LL * (v13 != v28);
      }
LABEL_12:
      v55 = 0;
      v52 = 1;
      v53 = 0;
      v24 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v24 + 8) & 0xF) != 0 )
      {
        v43 = v20;
        v25 = sub_F64F00(v22, v24, v13, (__int64)v20, v22);
        v20 = v43;
        v17 = v25 & 0xFFFFFFFFFFFFFFF0LL;
      }
      else
      {
        v17 = v24 & 0xFFFFFFFFFFFFFFF0LL;
      }
      v54 = sub_A73320(v20, v17);
      v56 = v23 | v21 & 0xFFFFFFFFFFFFFFFBLL;
      v18 = sub_1A24E20(a1, (__int64)&v52, 0, v41, 0, 0, a7, a8);
      if ( v18 == 1 )
        return 0;
      v14 = *(unsigned int *)(a10 + 8);
      a2 = *(unsigned int *)(a10 + 12);
      v19 = v18 & 0xFFFFFFFFFFFFFFFELL;
      if ( v14 + 1 > a2 )
      {
        a2 = a10 + 16;
        v16 += 8;
        v42 = v19;
        sub_2237220(a10, a10 + 16, v14 + 1, 8);
        v14 = *(unsigned int *)(a10 + 8);
        v13 = *(_QWORD *)a10;
        *(_QWORD *)(*(_QWORD *)a10 + 8 * v14) = v42;
        ++*(_DWORD *)(a10 + 8);
        if ( v16 == v47 )
          goto LABEL_20;
      }
      else
      {
        v13 = *(_QWORD *)a10;
        v16 += 8;
        *(_QWORD *)(*(_QWORD *)a10 + 8 * v14) = v19;
        ++*(_DWORD *)(a10 + 8);
        if ( v47 == v16 )
          goto LABEL_20;
      }
    }
LABEL_11:
    v23 = 0;
    goto LABEL_12;
  }
LABEL_20:
  if ( a6[2] < *(_DWORD *)(*(_QWORD *)a6 + 11200LL) )
    return 0;
  if ( sub_B748A0(v10, a2, v13, v14) || a5 >= (unsigned int)sub_B76070(v10, a2, v30, v31) )
    return 1;
  v34 = sub_B76070(v10, a2, v32, v33);
  v35 = a5;
  if ( (_DWORD)a5 != v34 )
  {
    while ( 1 )
    {
      v37 = *(_QWORD *)(*(_QWORD *)(v10 + 120) + 8LL * v35);
      if ( !sub_B74820(v37) )
        break;
      v38 = sub_190FB60(a1, v50, v10, v37, nullptr, *(double *)a7.m128_u64, a8);
      if ( v38 == 1 )
        break;
      v39 = *(unsigned int *)(a10 + 8);
      v40 = v38 & 0xFFFFFFFFFFFFFFFELL;
      if ( v39 + 1 <= (unsigned __int64)*(unsigned int *)(a10 + 12) )
      {
        v36 = *(_QWORD *)a10;
      }
      else
      {
        v45 = v40;
        sub_2237220(a10, a10 + 16, v39 + 1, 8);
        v39 = *(unsigned int *)(a10 + 8);
        v36 = *(_QWORD *)a10;
        v40 = v45;
      }
      ++v35;
      *(_QWORD *)(v36 + 8 * v39) = v40;
      ++*(_DWORD *)(a10 + 8);
      if ( v34 == v35 )
        return a6[2] >= *(_DWORD *)(*(_QWORD *)a6 + 11200LL);
    }
    return 0;
  }
  return a6[2] >= *(_DWORD *)(*(_QWORD *)a6 + 11200LL);
}
