__int64 __fastcall sub_1850540(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdi
  __int64 v26; // rbx
  unsigned __int64 v27; // rax
  __int64 v28; // r14
  __int64 v29; // r14
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rsi
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rax
  __int64 v41; // rsi
  unsigned __int64 v42; // rsi
  int v43; // eax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  unsigned __int8 *v47; // rsi
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rdx
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // rax
  __int64 v56; // [rsp+0h] [rbp-88h]
  unsigned __int64 v57; // [rsp+8h] [rbp-80h]
  int v58; // [rsp+8h] [rbp-80h]
  unsigned int v59; // [rsp+8h] [rbp-80h]
  unsigned __int64 v60; // [rsp+20h] [rbp-68h]
  unsigned int v61; // [rsp+2Ch] [rbp-5Ch] BYREF
  unsigned __int8 *v62; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+38h] [rbp-50h]

  v61 = a2;
  sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), a3, a4, a5, a6);
  v13 = *(_QWORD *)(a3 + 128);
  if ( (*(_BYTE *)(v13 + 32) & 1) != 0 )
    v14 = sub_B969C0(v13);
  else
    v14 = *(_QWORD *)(v13 + 32);
  sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v9, v10, v11, v12);
  v15 = *(_QWORD *)(a3 + 104);
  v56 = v14 + 24LL * *(unsigned int *)(*(_QWORD *)(a3 + 128) + 20LL);
  result = (__int64)sub_7052B0((__int64 *)(v15 + 96), v15, v16, v17, v18, v19);
  v25 = *(_QWORD *)(a3 + 128);
  if ( (*(_BYTE *)(v25 + 32) & 1) != 0 )
  {
    result = sub_B969C0(v25);
    v26 = result;
  }
  else
  {
    v26 = *(_QWORD *)(v25 + 32);
  }
  while ( v26 != v56 )
  {
    while ( 1 )
    {
      v27 = *(_QWORD *)(**(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v27 + 8) & 0xF) != 0 )
        v27 = sub_F64F00(**(_QWORD **)(v26 + 16), v15, v21, v22, v23);
      result = (__int64)sub_F63270(*(_QWORD *)(v27 & 0xFFFFFFFFFFFFFFF0LL), v15, v21, v22, v23, v24);
      v28 = result;
      if ( !result )
        goto LABEL_15;
      if ( a4 )
        break;
LABEL_18:
      if ( *(char *)(v28 + 28) < 0 )
        goto LABEL_15;
      v15 = *(_QWORD *)(v28 + 104);
      sub_7052B0((__int64 *)(v15 + 96), v15, v21, v22, v23, v24);
      result = *(_QWORD *)(v28 + 128);
      if ( *(char *)(result + 7) < 0 )
        goto LABEL_15;
      v15 = v28;
      result = sub_1A69EF0(a1, v28);
      v29 = result;
      if ( !result )
        goto LABEL_15;
      v30 = *(_QWORD *)(a3 + 48);
      if ( v30 )
        v57 = v30 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v57 = sub_A7AA70(a1[31], a3, v21, v22, v23, v24);
      sub_168B9B0((__int64)&v62, (__int64)(a1 + 1), 2952);
      v35 = *(_QWORD *)(a3 + 48);
      if ( v35 )
        v36 = v35 & 0xFFFFFFFFFFFFFFF0LL;
      else
        v36 = sub_A7AA70(a1[31], a3, v31, v32, v33, v34);
      sub_AE9DF0(&v62, v36, 8u);
      v40 = **(_QWORD **)(v26 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      v41 = *(_QWORD *)v40;
      if ( (*(_BYTE *)(*(_QWORD *)v40 + 8LL) & 0xF) != 0 )
        v42 = sub_F64F00(**(_QWORD **)(v26 + 16), v41, v37, v38, v39) & 0xFFFFFFFFFFFFFFF0LL;
      else
        v42 = v41 & 0xFFFFFFFFFFFFFFF0LL;
      sub_AE9DF0(&v62, v42, 8u);
      v43 = sub_16602B0(a1, *(_DWORD *)(a3 + 24), v29, (__int64)&v62, v57);
      v47 = v62;
      if ( v62 && v63 )
      {
        v58 = v43;
        sub_1580C40(v63, (unsigned __int64)v62);
        v43 = v58;
      }
      if ( !v43 )
      {
        v59 = *(_DWORD *)(a3 + 24);
        v48 = sub_1839D10(*(__int64 **)(v26 + 16), (__int64)v47, v44, v45, v46);
        v52 = *(_QWORD *)(a3 + 48);
        v53 = v48;
        if ( v52 )
        {
          v54 = v52 & 0xFFFFFFFFFFFFFFF0LL;
        }
        else
        {
          v60 = v48;
          v55 = sub_A7AA70(a1[31], a3, v48, v49, v50, v51);
          v53 = v60;
          v54 = v55;
        }
        sub_184FA20((__int64)a1, v54, v53, 2952, 0, v59, 0, 0, 0, 0);
      }
      v26 += 24;
      sub_1910D40(a1, v61, v29, 1);
      v15 = v29;
      result = sub_18F5260((_DWORD)a1, v29, (unsigned int)&v61, 1, 0, 0, 0, 0, 0);
      if ( v26 == v56 )
        return result;
    }
    if ( *(_BYTE *)(a4 + 20) )
    {
      result = *(_QWORD *)a4;
      v21 = *(_QWORD *)a4 + 8LL * *(unsigned int *)(a4 + 12);
      if ( *(_QWORD *)a4 != v21 )
      {
        while ( v28 != *(_QWORD *)result )
        {
          result += 8;
          if ( v21 == result )
            goto LABEL_18;
        }
        goto LABEL_15;
      }
      goto LABEL_18;
    }
    v15 = result;
    result = sub_2236570(a4, result);
    if ( !result )
      goto LABEL_18;
LABEL_15:
    v26 += 24;
  }
  return result;
}
