char __fastcall sub_1FBAE50(__int64 *a1, __int64 a2)
{
  __int64 v4; // r13
  int v5; // ebp
  bool v6; // al
  __int64 v7; // r9
  int v8; // edi
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  char v18; // al
  __int64 v19; // rbp
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rsi
  char result; // al
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // r13
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  int v35; // edx
  __int64 v36; // rdi
  _QWORD *v37; // rcx
  __int64 *v38; // r8
  _QWORD *v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r15
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 **v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rax
  __int64 v48; // r15
  __int64 v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+8h] [rbp-70h]
  __int64 v51; // [rsp+18h] [rbp-60h] BYREF
  __m128i v52; // [rsp+20h] [rbp-58h] BYREF
  char v53; // [rsp+30h] [rbp-48h]

  v4 = *(_QWORD *)(a2 + 8) & 7LL;
  v5 = 8 * sub_B8C090((_BYTE *)a2);
  v6 = sub_B8C400(a2, 0);
  v7 = *(_QWORD *)(a2 + 16);
  v8 = 0;
  v9 = 16 * v6;
  if ( (v7 & 4) != 0 )
    v8 = (*(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFF8LL) + 8) != *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL)) << 8;
  sub_9B9C90(
    a1[3],
    v8
  | v9
  | v5
  | (((*(_BYTE *)(a2 + 29) & 0x10) != 0) << 10)
  | (((*(_BYTE *)(a2 + 29) & 2) != 0) << 7)
  | (32 * ((*(_BYTE *)(a2 + 29) >> 5) & 3))
  | (unsigned int)v4
  | ((*(_BYTE *)(a2 + 29) & 1) << 9)
  | ((unsigned int)*(char *)(a2 + 28) >> 31 << 11));
  v10 = *(_QWORD *)(a2 + 16);
  if ( (v10 & 4) != 0 )
    v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11 )
    v11 = sub_B8C1B0(v11);
  sub_1F92A90(a1[2], v11, a1[3]);
  v16 = *(_QWORD *)(a2 + 16);
  if ( (v16 & 4) != 0 )
  {
    v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    v11 = v17[1];
    if ( v11 != *v17 )
    {
      if ( v11 )
        v11 = sub_B8C1B0(v17[1]);
      sub_1F92A90(a1[2], v11, a1[3]);
    }
  }
  v18 = *(_BYTE *)(a2 + 29);
  if ( (v18 & 1) != 0 )
  {
    v45 = (__int64 **)sub_B8C3D0(a2, v11, v12, v13, v14, v15);
    sub_1F9DE20(a1 + 1, *v45, *((unsigned int *)v45 + 2));
    v18 = *(_BYTE *)(a2 + 29);
  }
  v19 = *a1;
  v20 = *(_QWORD *)(a2 + 8) & 7LL;
  if ( v18 < 0 )
  {
    v21 = 0;
    if ( v20 )
      v21 = sub_B8C660(a2);
  }
  else if ( v20 )
  {
    v21 = *(_QWORD *)(a2 - 8);
  }
  else
  {
    v21 = 0;
  }
  v22 = (unsigned int)sub_1F82CF0(v19, v21);
  sub_9B9C90(a1[3], v22);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  if ( result )
  {
    v24 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v24 = (_QWORD *)*v24;
    while ( 1 )
    {
      v29 = sub_B8EAA0((__int64)v24);
      result = *(_BYTE *)(v29 + 8) & 0x7F;
      if ( result != 24 || v29 == 48 || *(char *)(v29 - 19) >= 0 )
        return result;
      v30 = *a1;
      v31 = sub_B91570(v29, v22, v25, v26, v27, v28);
      v35 = *(_DWORD *)(v30 + 2536);
      v51 = v31;
      if ( !v35 )
        break;
      v22 = v30 + 2528;
      sub_1FBAC90(&v52, v30 + 2528, (__int64)&v51, v32, v33, v34);
      if ( v53 )
      {
        v47 = *(unsigned int *)(v30 + 2560);
        v48 = v51;
        if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(v30 + 2564) )
        {
          v22 = v30 + 2568;
          sub_2237220(v30 + 2552, v30 + 2568, v47 + 1, 8);
          v47 = *(unsigned int *)(v30 + 2560);
        }
        *(_QWORD *)(*(_QWORD *)(v30 + 2552) + 8 * v47) = v48;
        ++*(_DWORD *)(v30 + 2560);
      }
LABEL_52:
      result = sub_B8E160(v29);
      if ( !result )
        return result;
      v46 = *(_QWORD *)(sub_B8C1B0(v29) + 16);
      if ( (v46 & 4) != 0 )
        v24 = *(_QWORD **)(v46 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v24 = (_QWORD *)(v46 & 0xFFFFFFFFFFFFFFF8LL);
    }
    v36 = *(unsigned int *)(v30 + 2560);
    v37 = *(_QWORD **)(v30 + 2552);
    v38 = &v37[v36];
    v22 = (8 * v36) >> 3;
    if ( (8 * v36) >> 5 )
    {
      if ( v31 == *v37 )
      {
        v39 = *(_QWORD **)(v30 + 2552);
      }
      else if ( v31 == v37[1] )
      {
        v39 = v37 + 1;
      }
      else if ( v31 == v37[2] )
      {
        v39 = v37 + 2;
      }
      else
      {
        v22 = (__int64)&v37[4 * ((8 * v36) >> 5)];
        v39 = v37 + 3;
        if ( v31 != v37[3] )
        {
          while ( 1 )
          {
            v39 = v37 + 4;
            if ( (_QWORD *)v22 == v37 + 4 )
            {
              v22 = v38 - v39;
              goto LABEL_37;
            }
            if ( v31 == v37[4] )
              goto LABEL_51;
            if ( v31 == v37[5] )
            {
              v39 = v37 + 5;
              goto LABEL_51;
            }
            if ( v31 == v37[6] )
            {
              v39 = v37 + 6;
              goto LABEL_51;
            }
            if ( v31 == v37[7] )
              break;
            v37 += 4;
          }
          v39 = v37 + 7;
        }
      }
LABEL_51:
      if ( v38 != v39 )
        goto LABEL_52;
      goto LABEL_40;
    }
    v39 = *(_QWORD **)(v30 + 2552);
LABEL_37:
    if ( v22 != 2 )
    {
      if ( v22 != 3 )
      {
        if ( v22 != 1 )
          goto LABEL_40;
        goto LABEL_67;
      }
      if ( v31 == *v39 )
        goto LABEL_51;
      ++v39;
    }
    if ( v31 == *v39 )
      goto LABEL_51;
    ++v39;
LABEL_67:
    if ( v31 == *v39 )
      goto LABEL_51;
LABEL_40:
    if ( v36 + 1 > (unsigned __int64)*(unsigned int *)(v30 + 2564) )
    {
      v22 = v30 + 2568;
      v50 = v31;
      sub_2237220(v30 + 2552, v30 + 2568, v36 + 1, 8);
      v31 = v50;
      v38 = (__int64 *)(*(_QWORD *)(v30 + 2552) + 8LL * *(unsigned int *)(v30 + 2560));
    }
    *v38 = v31;
    v40 = (unsigned int)(*(_DWORD *)(v30 + 2560) + 1);
    *(_DWORD *)(v30 + 2560) = v40;
    if ( (unsigned int)v40 > 0x10 )
    {
      v41 = v30 + 2528;
      v49 = v30 + 2528;
      v42 = *(_QWORD *)(v30 + 2552) + 8 * v40;
      v43 = *(_QWORD *)(v30 + 2552);
      do
      {
        v22 = v49;
        v44 = v43;
        v43 += 8;
        sub_1FBAC90(&v52, v49, v44, v41, (__int64)v38, v34);
      }
      while ( v42 != v43 );
    }
    goto LABEL_52;
  }
  return result;
}
