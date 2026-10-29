void __fastcall sub_17A9820(__int64 a1, __int64 a2, void (__fastcall *a3)(__int64, __int64, __m128 *), __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 j; // r14
  int v17; // eax
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  __int64 *v26; // rsi
  __int64 v27; // rdi
  unsigned __int64 v28; // rax
  _QWORD *v29; // rdx
  int v30; // edx
  char v31; // al
  int v32; // edx
  __int64 v33; // rsi
  __m128i v34; // xmm0
  __int64 *v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 *v40; // rax
  unsigned __int64 *v41; // rax
  __int64 *v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 *i; // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rcx
  unsigned __int64 v54; // rax
  int v55; // esi
  int v56; // edi
  __int64 v57; // r9
  __int64 *v58; // rax
  __int64 *v59; // rax
  __int64 **v60; // rax
  unsigned __int64 v61; // [rsp+8h] [rbp-A0h]
  _BYTE *v62; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int64 v63; // [rsp+18h] [rbp-90h]
  __m128i v64; // [rsp+30h] [rbp-78h] BYREF
  int v65; // [rsp+40h] [rbp-68h]
  __m128 v66; // [rsp+50h] [rbp-58h] BYREF
  int v67; // [rsp+60h] [rbp-48h]

  if ( !sub_B8C090((_BYTE *)a2) || !*(_QWORD *)(a2 + 40) )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v35 = sub_B8C3D0(a2, a2, v8, v9, v10, v11);
    v38 = *v35;
    v39 = *v35 + 8LL * *((unsigned int *)v35 + 2);
    if ( *v35 >= v39 )
    {
      for ( ; v38 != v39; v39 += 8LL )
      {
        if ( *(_WORD *)(*(_QWORD *)v39 + 36LL) == 174 )
          return;
      }
    }
    else
    {
      v40 = (__int64 *)*v35;
      while ( 1 )
      {
        v38 = *v40;
        if ( *(_WORD *)(*v40 + 36) == 174 )
          break;
        if ( (__int64 *)v39 == ++v40 )
          goto LABEL_40;
      }
      if ( (__int64 *)v39 != v40 )
        return;
    }
LABEL_40:
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v41 = sub_B8C3D0(a2, a2, v38, v39, v36, v37);
      v42 = (__int64 *)*v41;
      v43 = *v41 + 8LL * *((unsigned int *)v41 + 2);
      if ( *v41 >= v43 )
      {
        if ( v42 != (__int64 *)v43 )
        {
          if ( *(_WORD *)(*(_QWORD *)v43 + 36LL) == 389 )
            return;
          for ( i = (__int64 *)(v43 + 8); v42 != i; ++i )
          {
            v46 = *i;
            if ( *(_WORD *)(v46 + 36) == 389 )
              return;
          }
        }
      }
      else
      {
        v44 = *v41;
        while ( *(_WORD *)(*(_QWORD *)v44 + 36LL) != 389 )
        {
          v44 += 8LL;
          if ( v43 == v44 )
            goto LABEL_4;
        }
        if ( v43 != v44 )
          return;
      }
    }
  }
LABEL_4:
  v12 = *(_QWORD *)(a1 + 232);
  if ( sub_B72A20(a2, v12) )
    return;
  for ( j = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        ;
        j = *(_QWORD *)(*(_QWORD *)(j + 32) & 0xFFFFFFFFFFFFFFF0LL) )
  {
    if ( (unsigned __int8)(*(_BYTE *)(j + 16) - 2) <= 4u )
      continue;
    v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned __int8)(v17 - 2) > 4u )
      goto LABEL_12;
    v18 = sub_F63050(j, v12, (unsigned int)(v17 - 2), v13);
    if ( !v18 )
      break;
    j = v18;
  }
  v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_12:
  if ( (unsigned int)(v17 - 43) <= 1 || (*(_BYTE *)(j + 17) & 4) != 0 )
    return;
  v19 = j;
  v20 = (unsigned int)*(unsigned __int8 *)(j + 16) - 47;
  if ( (unsigned int)v20 <= 1 || (unsigned int)(v17 - 47) <= 1 && (v19 = sub_F63050(j, v12, v20, v13)) != 0 )
  {
    v21 = sub_F60F10(v19, v12, v20, (__int64)v13, v14, v15);
    v22 = (__int64)v21;
    if ( (*((_BYTE *)v21 + 29) & 1) == 0 )
    {
      if ( (*((_BYTE *)v21 + 28) & 0x7Fu) - 59 > 2 )
        goto LABEL_17;
      return;
    }
    if ( sub_179AC50((__int64)v21, v12, v20, (__int64)v13, v14, v15) )
      return;
    if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 59 <= 2 )
    {
      if ( (*(_BYTE *)(v22 + 29) & 1) == 0 )
        return;
      v58 = sub_B8C3D0(v22, v12, v20, (__int64)v13, v14, v15);
      v20 = *v58;
      v13 = (__int64 *)(*v58 + 8LL * *((unsigned int *)v58 + 2));
      if ( *v58 >= (unsigned __int64)v13 )
      {
        if ( (__int64 *)v20 == v13 )
          return;
        if ( *(_WORD *)(*v13 + 36) != 397 )
        {
          v60 = (__int64 **)(v13 + 1);
          while ( (__int64 **)v20 != v60 )
          {
            v13 = *v60++;
            if ( *((_WORD *)v13 + 18) == 397 )
              goto LABEL_17;
          }
          return;
        }
      }
      else
      {
        v59 = (__int64 *)*v58;
        while ( 1 )
        {
          v20 = *v59;
          if ( *(_WORD *)(*v59 + 36) == 397 )
            break;
          if ( v13 == ++v59 )
            return;
        }
        if ( v13 == v59 )
          return;
      }
    }
  }
LABEL_17:
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    if ( sub_179AE90(a2, v12, v20, (__int64)v13, v14, v15)
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
    {
      return;
    }
    if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
    {
      v51 = sub_B8C3D0(a2, v12, v47, v48, v49, v50);
      v52 = *v51;
      v53 = *v51 + 8LL * *((unsigned int *)v51 + 2);
      if ( *v51 >= v53 )
      {
        if ( v52 != v53 )
        {
          while ( *(_WORD *)(*(_QWORD *)v53 + 36LL) != 312 )
          {
            v53 += 8LL;
            if ( v52 == v53 )
              goto LABEL_18;
          }
          goto LABEL_72;
        }
      }
      else
      {
        v54 = *v51;
        while ( *(_WORD *)(*(_QWORD *)v54 + 36LL) != 312 )
        {
          v54 += 8LL;
          if ( v53 == v54 )
            goto LABEL_18;
        }
        if ( v53 != v54 )
        {
LABEL_72:
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(j + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
            return;
        }
      }
    }
  }
LABEL_18:
  v23 = *(unsigned int *)(a1 + 4504);
  v24 = *(_QWORD *)(a1 + 4488);
  if ( !(_DWORD)v23 )
    goto LABEL_78;
  v25 = (v23 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v26 = (__int64 *)(v24 + 16LL * v25);
  v27 = *v26;
  if ( a2 == *v26 )
    goto LABEL_20;
  v55 = 1;
  if ( v27 == -4096 )
  {
LABEL_78:
    sub_17A9350(&v66, (_QWORD *)(v24 + 16 * v23), (_QWORD *)(v24 + 16 * v23), a1 + 4488, 1);
    v28 = v66.m128_u64[0];
  }
  else
  {
    while ( 1 )
    {
      v56 = v55 + 1;
      v25 = (v23 - 1) & (v55 + v25);
      v26 = (__int64 *)(v24 + 16LL * v25);
      v57 = *v26;
      if ( a2 == *v26 )
        break;
      v55 = v56;
      if ( v57 == -4096 )
        goto LABEL_78;
    }
LABEL_20:
    sub_17A9350(&v66, v26, (_QWORD *)(16 * v23 + v24), a1 + 4488, 1);
    v28 = v66.m128_u64[0];
  }
  v61 = v28;
  v29 = (_QWORD *)(*(_QWORD *)(a1 + 4488) + 16LL * *(unsigned int *)(a1 + 4504));
  sub_17A9350(&v66, v29, v29, a1 + 4488, 1);
  if ( v66.m128_u64[0] == v61 )
    return;
  v30 = *(_DWORD *)(v61 + 8);
  v31 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v30 <= 0 )
  {
    v32 = (v31 != 43) + 7515;
  }
  else
  {
    if ( v31 == 43 || (*(_BYTE *)(a2 + 98) & 0x40) == 0 || v30 != 1 )
      return;
    v32 = 7516;
  }
  sub_168B9B0((__int64)&v62, a1 + 8, v32);
  sub_AE9DF0(&v62, a2, 0xAu);
  sub_1582CA0((__int64)&v64, &v62);
  v33 = *(unsigned int *)(a2 + 24);
  v34 = _mm_load_si128(&v64);
  v64.m128i_i64[0] = 0;
  v67 = v65;
  v66 = (__m128)v34;
  a3(a4, v33, &v66);
  if ( v66.m128_u64[0] && v66.m128_u64[1] )
    sub_1580C40(v66.m128_u64[1], v66.m128_u64[0]);
  if ( v64.m128i_i64[0] && v64.m128i_i64[1] )
    sub_1580C40(v64.m128i_u64[1], v64.m128i_u64[0]);
  if ( v62 )
  {
    if ( v63 )
      sub_1580C40(v63, (unsigned __int64)v62);
  }
}
