__int64 __fastcall sub_631870(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        double a6,
        double a7,
        __m128 a8)
{
  _QWORD *v12; // rcx
  unsigned __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  bool v16; // zf
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rcx
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 result; // rax
  __int64 v33; // [rsp+8h] [rbp-88h]
  int v34[2]; // [rsp+18h] [rbp-78h]
  __int64 *v35; // [rsp+18h] [rbp-78h]
  int v37; // [rsp+20h] [rbp-70h]
  _QWORD *v38; // [rsp+28h] [rbp-68h]
  __int64 v39; // [rsp+28h] [rbp-68h]
  __int64 v40; // [rsp+30h] [rbp-60h] BYREF
  __int64 *v41; // [rsp+38h] [rbp-58h]
  __int64 v42; // [rsp+40h] [rbp-50h] BYREF
  __int64 v43; // [rsp+48h] [rbp-48h]
  __int64 v44; // [rsp+50h] [rbp-40h] BYREF
  __int64 v45; // [rsp+58h] [rbp-38h]

  v12 = *(_QWORD **)(a1 + 344);
  v38 = v12;
  if ( v12 )
  {
    v13 = (unsigned __int64)&v12[*((unsigned int *)v12 - 1)];
    if ( (unsigned __int64)v12 >= v13 )
      goto LABEL_9;
    do
    {
      while ( 1 )
      {
        v14 = *v38;
        if ( *v38 )
        {
          v15 = *(_QWORD *)(a1 + 336);
          v16 = (*(_DWORD *)(v14 + 8))-- == 1;
          if ( v16 )
            break;
        }
        if ( (unsigned __int64)++v38 >= v13 )
          goto LABEL_8;
      }
      sub_15D7BC0(v15, v14);
      ++v38;
    }
    while ( (unsigned __int64)v38 < v13 );
LABEL_8:
    v38 = *(_QWORD **)(a1 + 344);
    if ( v38 )
LABEL_9:
      *((_DWORD *)v38 - 1) = 0;
  }
  v17 = *(_QWORD *)(a1 + 384);
  if ( v17 )
    *(_DWORD *)(v17 - 4) = 0;
  v18 = sub_62DE00((const __m128i *)a1, a2, a1 + 336, (__int64 *)(a1 + 352));
  sub_62DA90((const __m128i *)a1, v18, (__int64 *)(a1 + 352), (__int64 *)(a1 + 336));
  sub_62E090((_QWORD *)a1, (__int64 *)(a1 + 336), (unsigned int **)(a1 + 384));
  sub_62B6F0((_QWORD *)a1, *(_QWORD *)(a1 + 352));
  v19 = *(_QWORD *)(a1 + 344);
  if ( v19 )
    v20 = *(_DWORD *)(v19 - 4);
  else
    v20 = 0;
  v21 = sub_62C680((const __m128i *)a1, *(_QWORD *)(a1 + 352), v20, v19, *(_QWORD *)(a1 + 384), a5, 1);
  v39 = v21;
  v22 = *(_QWORD *)a1;
  ++*(_DWORD *)(v21 + 60);
  if ( !a3 )
  {
    if ( !(unsigned __int8)sub_64AFA0(*(_QWORD *)(a1 + 8)) )
    {
      sub_63DAD0(a4, v39, a6);
      v35 = (__int64 *)a1;
      goto LABEL_33;
    }
    v23 = 0;
    goto LABEL_38;
  }
  v43 = v22;
  v42 = 0;
  sub_62E310(a1, v21, &v42, a6, a7, a8);
  v23 = v42;
  v22 = v43;
  if ( a2 == v42 )
  {
    if ( !(unsigned __int8)sub_64AFA0(*(_QWORD *)(a1 + 8)) )
    {
      v35 = (__int64 *)a1;
      goto LABEL_20;
    }
    goto LABEL_38;
  }
  v24 = *(_QWORD *)a1;
  *(_QWORD *)v34 = *(_QWORD *)a1;
  if ( *(_WORD *)(v42 + 4) == 2 )
  {
    sub_15DED30(v24);
    v25 = sub_15E2180(v34[0]);
  }
  else
  {
    v25 = sub_15DE370(v24);
  }
  a3 = sub_15DE0E0(*(_QWORD *)v34, a3, v25);
  if ( (unsigned __int8)sub_64AFA0(*(_QWORD *)(a1 + 8)) )
  {
LABEL_38:
    v41 = (__int64 *)a1;
    v40 = v39;
    sub_630200((const __m128i *)a1, &v40, 1);
    v39 = v40;
    v35 = v41;
    if ( !a3 )
      goto LABEL_29;
    goto LABEL_20;
  }
  v35 = (__int64 *)a1;
  if ( !a3 )
  {
    result = sub_63DAD0(a4, v39, a6);
    v35 = (__int64 *)a1;
    goto LABEL_30;
  }
LABEL_20:
  v26 = *(_QWORD *)a1;
  v44 = 0;
  v45 = v26;
  sub_62E310(a1, v39, &v44, a6, a7, a8);
  v27 = v44;
  v28 = *(_QWORD *)a1;
  v33 = v45;
  if ( v23 == v44 || (v29 = sub_15DE370(v28), v30 = sub_15DE0E0(v28, a3, v29), v28 = *(_QWORD *)a1, (a3 = v30) != 0) )
    ++*(_DWORD *)(a3 + 8);
  v31 = *(_QWORD *)(v39 + 48);
  if ( v31 )
  {
    v16 = (*(_DWORD *)(v31 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v28, v31);
  }
  *(_QWORD *)(v39 + 48) = a3;
  if ( v27 )
  {
    v16 = (*(_DWORD *)(v27 + 8))-- == 1;
    if ( v16 )
      sub_15D7BC0(v33, v27);
LABEL_29:
    result = sub_63DAD0(a4, v39, a6);
    if ( !v23 )
      goto LABEL_32;
    goto LABEL_30;
  }
  result = sub_63DAD0(a4, v39, a6);
  if ( v23 )
  {
LABEL_30:
    v16 = (*(_DWORD *)(v23 + 8))-- == 1;
    if ( v16 )
      result = sub_15D7BC0(v22, v23);
LABEL_32:
    if ( !v39 )
      return result;
  }
LABEL_33:
  v37 = *(_DWORD *)(v39 + 60);
  result = (unsigned int)(v37 - 1);
  *(_DWORD *)(v39 + 60) = result;
  if ( v37 == 1 )
    return sub_62A330(v39, *v35);
  return result;
}

