_BYTE *__fastcall sub_B614A0(__int64 a1, unsigned __int8 a2)
{
  _BYTE *v3; // rcx
  __int64 v4; // rax
  _BYTE *v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rax
  _BYTE *v8; // rdx
  _BYTE *result; // rax
  __int64 v11; // rdi
  __int64 (*v13)(void); // rax
  __int64 v14; // rax
  __int64 v15; // r13
  char *v16; // r14
  size_t v17; // rdx
  size_t v18; // r15
  unsigned int v19; // eax
  __int64 v20; // r8
  unsigned int v21; // r10d
  __int64 *v22; // r9
  __int64 v23; // r9
  __int64 v24; // r8
  unsigned __int64 v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rax
  _QWORD *v32; // rcx
  char *v33; // rdx
  _QWORD *v34; // r11
  unsigned int v35; // eax
  __int64 v36; // rdx
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rcx
  unsigned __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rcx
  _QWORD *v42; // rax
  __int64 v43; // rax
  _QWORD *v44; // rcx
  __int64 v45; // [rsp+8h] [rbp-70h]
  size_t v46; // [rsp+10h] [rbp-68h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v48; // [rsp+18h] [rbp-60h]
  unsigned int v49; // [rsp+18h] [rbp-60h]
  unsigned int v50; // [rsp+18h] [rbp-60h]
  __int64 *v51; // [rsp+20h] [rbp-58h]
  __int64 *v52; // [rsp+20h] [rbp-58h]
  _QWORD *v53; // [rsp+28h] [rbp-50h]
  __int64 *v54[8]; // [rsp+38h] [rbp-40h] BYREF

  v3 = *(_BYTE **)(a1 + 8);
  v4 = 16LL * *(unsigned int *)(a1 + 16);
  v5 = &v3[v4];
  v6 = v4 >> 4;
  v7 = v4 >> 6;
  if ( !v7 )
  {
    result = *(_BYTE **)(a1 + 8);
LABEL_14:
    if ( v6 != 2 )
    {
      if ( v6 != 3 )
      {
        if ( v6 != 1 )
          goto LABEL_18;
        goto LABEL_17;
      }
      if ( a2 == *result )
        goto LABEL_30;
      result += 16;
    }
    if ( a2 == *result )
      goto LABEL_30;
    result += 16;
LABEL_17:
    if ( a2 != *result )
      goto LABEL_18;
    goto LABEL_30;
  }
  if ( a2 == *v3 )
  {
    result = *(_BYTE **)(a1 + 8);
  }
  else if ( a2 == v3[16] )
  {
    result = v3 + 16;
  }
  else if ( a2 == v3[32] )
  {
    result = v3 + 32;
  }
  else
  {
    v8 = &v3[64 * v7];
    result = v3 + 48;
    if ( a2 != v3[48] )
    {
      while ( 1 )
      {
        result = v3 + 64;
        if ( v8 == v3 + 64 )
        {
          v6 = (v5 - result) >> 4;
          goto LABEL_14;
        }
        if ( a2 == v3[64] )
          goto LABEL_30;
        if ( a2 == v3[80] )
        {
          result = v3 + 80;
          goto LABEL_30;
        }
        if ( a2 == v3[96] )
        {
          result = v3 + 96;
          goto LABEL_30;
        }
        if ( a2 == v3[112] )
          break;
        v3 += 64;
      }
      result = v3 + 112;
    }
  }
LABEL_30:
  if ( v5 != result )
    return result;
LABEL_18:
  v11 = *(_QWORD *)(a1 + 104);
  v13 = *(__int64 (**)(void))(*(_QWORD *)v11 + 32LL);
  if ( (char *)v13 == (char *)sub_A01140 )
    v14 = sub_B70A60(v11);
  else
    v14 = v13();
  v45 = v14 + 64;
  v15 = *(_QWORD *)(*(_QWORD *)a1 + 17504LL);
  v16 = sub_B60270(a2);
  v46 = v17;
  v18 = v17;
  v19 = sub_2244B30(v16, v17);
  v21 = sub_2244CB0(v15, v16, v18, v19);
  v22 = (__int64 *)(*(_QWORD *)v15 + 8LL * v21);
  if ( !*v22 )
    goto LABEL_33;
  if ( *v22 == -8 )
  {
    --*(_DWORD *)(v15 + 16);
LABEL_33:
    v31 = *(_QWORD *)(v15 + 24);
    *(_QWORD *)(v15 + 104) += v18 + 17;
    v32 = (_QWORD *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v33 = (char *)v32 + v18 + 17;
    if ( *(_QWORD *)(v15 + 32) >= (unsigned __int64)v33 && v31 )
    {
      *(_QWORD *)(v15 + 24) = v33;
    }
    else
    {
      v52 = v22;
      v50 = v21;
      v43 = sub_986170(v15 + 24, v18 + 17, v18 + 17, 3, v20, (__int64)v22);
      v22 = v52;
      v21 = v50;
      v32 = (_QWORD *)v43;
    }
    v34 = v32 + 2;
    if ( v18 )
    {
      v53 = v32;
      v51 = v22;
      v49 = v21;
      v42 = memcpy(v32 + 2, v16, v18);
      v32 = v53;
      v22 = v51;
      v21 = v49;
      v34 = v42;
    }
    *((_BYTE *)v34 + v18) = 0;
    *v32 = v18;
    v32[1] = 0;
    *v22 = (__int64)v32;
    ++*(_DWORD *)(v15 + 12);
    v35 = sub_22450D0(v15, v21);
    sub_989490(v54, (__int64 *)(*(_QWORD *)v15 + 8LL * v35), 0);
    v24 = *v54[0];
    v25 = *(_QWORD *)(*v54[0] + 8);
    if ( v25 )
      goto LABEL_39;
    goto LABEL_23;
  }
  sub_989490(v54, v22, 0);
  v24 = *v54[0];
  v25 = *(_QWORD *)(*v54[0] + 8);
  if ( !v25 )
  {
LABEL_23:
    v26 = *(_QWORD *)(v15 + 120);
    if ( !v26
      || (v48 = v24,
          v27 = (*(__int64 (__fastcall **)(__int64, char *, size_t))(*(_QWORD *)v26 + 16LL))(v26, v16, v46),
          v24 = v48,
          v25 = v27,
          (*(_QWORD *)(v48 + 8) = v27) == 0) )
    {
      v28 = *(_QWORD *)(v15 + 24);
      *(_QWORD *)(v15 + 104) += 24LL;
      v25 = (v28 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_QWORD *)(v15 + 32) >= v25 + 24 && v28 )
      {
        *(_QWORD *)(v15 + 24) = v25 + 24;
        v29 = (_QWORD *)((v28 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      }
      else
      {
        v47 = v24;
        v29 = (_QWORD *)sub_986170(v15 + 24, 24, 24, 3, v24, v23);
        v24 = v47;
        v25 = (unsigned __int64)v29;
      }
      v30 = *v29 & 0xFFFFF80000000000LL;
      v29[1] = 0;
      *v29 = v30 | 0x1FFFC05;
      *(_QWORD *)(v24 + 8) = v29;
      v29[2] = v24;
    }
  }
LABEL_39:
  v36 = sub_B94670(v45, v25);
  result = nullptr;
  v37 = v36 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v36 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v36 & 4) != 0 )
      v37 = *(_QWORD *)v37;
    result = nullptr;
    if ( (*(_BYTE *)(v37 + 28) & 0x7Fu) - 40 <= 6 )
    {
      v38 = *(unsigned int *)(a1 + 16);
      v39 = *(unsigned int *)(a1 + 20);
      if ( v38 >= v39 )
      {
        if ( v39 < v38 + 1 )
        {
          sub_2237220(a1 + 8, a1 + 24, v38 + 1, 16);
          v38 = *(unsigned int *)(a1 + 16);
        }
        v44 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16 * v38);
        *v44 = a2;
        v44[1] = v37;
        v40 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
        *(_DWORD *)(a1 + 16) = v40;
      }
      else
      {
        v40 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
        v41 = *(_QWORD *)(a1 + 8) + 16 * v38;
        *(_BYTE *)v41 = a2;
        *(_QWORD *)(v41 + 8) = v37;
        *(_DWORD *)(a1 + 16) = v40;
      }
      return (_BYTE *)(*(_QWORD *)(a1 + 8) + 16 * v40 - 16);
    }
  }
  return result;
}
