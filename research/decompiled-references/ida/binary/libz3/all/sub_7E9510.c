__int64 __fastcall sub_7E9510(_QWORD *a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v7; // rdi
  __int64 (*v8)(void); // rax
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (*v15)(void); // rax
  __int64 v16; // rdi
  _QWORD *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // r9
  _QWORD *v21; // r12
  _QWORD *v22; // r14
  __int64 (*v23)(void); // rax
  int v24; // edi
  __int64 (*v25)(void); // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 (*v28)(void); // rax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rdi
  unsigned int v35; // r9d
  unsigned int v36; // r10d
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rax
  int v45; // [rsp+8h] [rbp-70h]
  int v46; // [rsp+8h] [rbp-70h]
  __int64 v47; // [rsp+10h] [rbp-68h]
  __int64 v49; // [rsp+20h] [rbp-58h]
  char v52; // [rsp+37h] [rbp-41h]
  __int64 v53; // [rsp+38h] [rbp-40h]

  v5 = a2;
  v7 = a1[1];
  v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 432LL);
  if ( (char *)v8 == (char *)sub_79EFF0 )
    v9 = v7 + 2144;
  else
    v9 = v8();
  v10 = 64;
  v11 = sub_180C100(v9, 64);
  *(_QWORD *)v11 = a1[2];
  v53 = a1[3];
  if ( (_DWORD)v5 == -1 )
  {
    v52 = 0;
    v49 = 0;
    v47 = 0;
  }
  else
  {
    v42 = *(_QWORD *)(a4 + 8) + 40 * v5;
    v10 = *(_QWORD *)v42;
    v47 = *(_QWORD *)v42;
    if ( *(_QWORD *)v42 )
      ++*(_DWORD *)(v10 + 8);
    v43 = *(_QWORD *)(v42 + 16);
    v49 = v43;
    if ( v43 )
      ++*(_DWORD *)(v43 + 8);
    v52 = *(_BYTE *)(v42 + 32);
  }
  v12 = a1[327];
  if ( v12 )
    *(_DWORD *)(v12 - 4) = 0;
  v13 = a1[328];
  if ( v13 )
    *(_DWORD *)(v13 - 4) = 0;
  v14 = a1[1];
  v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 440LL);
  if ( (char *)v15 == (char *)sub_79F010 )
    v16 = v14 + 1592;
  else
    v16 = v15();
  sub_13D4540(v16);
  v17 = (_QWORD *)a1[1];
  v18 = v17[292];
  if ( v18 )
    *(_DWORD *)(v18 - 4) = 0;
  v19 = v17[3];
  if ( v19 && *(_BYTE *)(v19 + 352) )
  {
    sub_7A4170(v17);
    v17 = (_QWORD *)a1[1];
  }
  v20 = (_QWORD *)a1[324];
  if ( v20 )
  {
    v21 = &v20[2 * *((unsigned int *)v20 - 1)];
    if ( v21 != v20 )
    {
      v22 = (_QWORD *)a1[324];
      do
      {
        while ( *(_QWORD *)(v22[1] + 64LL) != *(_QWORD *)(*v22 + 64LL) )
        {
          v10 = (__int64)(a1 + 327);
          sub_7CCA30((__int64)v17, a1 + 327);
          v22 += 2;
          v17 = (_QWORD *)a1[1];
          if ( v21 == v22 )
            goto LABEL_24;
        }
        v23 = *(__int64 (**)(void))(*v17 + 440LL);
        if ( (char *)v23 == (char *)sub_79F010 )
          v24 = (_DWORD)v17 + 1592;
        else
          v24 = v23();
        v10 = (__int64)(a1 + 327);
        sub_13DBC80(v24);
        v22 += 2;
        v17 = (_QWORD *)a1[1];
      }
      while ( v21 != v22 );
    }
  }
LABEL_24:
  v25 = *(__int64 (**)(void))(*v17 + 440LL);
  if ( (char *)v25 == (char *)sub_79F010 )
    v26 = (__int64)(v17 + 199);
  else
    v26 = v25();
  sub_13D4550(v26, v10);
  v27 = a1[1];
  v28 = *(__int64 (**)(void))(*(_QWORD *)v27 + 432LL);
  if ( (char *)v28 == (char *)sub_79EFF0 )
  {
    v29 = a1[327];
    v30 = v27 + 2144;
    if ( v29 )
    {
LABEL_28:
      v31 = 8LL * *(unsigned int *)(v29 - 4);
      goto LABEL_29;
    }
  }
  else
  {
    v30 = v28();
    v29 = a1[327];
    if ( v29 )
      goto LABEL_28;
  }
  v31 = 0;
LABEL_29:
  v32 = sub_180C100(v30, v31);
  v33 = a1[327];
  v34 = v32;
  if ( v33 )
  {
    v35 = *(_DWORD *)(v33 - 4);
    v36 = v35 - 1;
    if ( v35 )
    {
      if ( v36 <= 3 || (v37 = 8LL * v36 - 8, v38 = v33 + v37, v33 + v37 == v32 + 8LL * v36) )
      {
        v44 = 8LL * v36;
        do
        {
          *(_QWORD *)(v34 + v44) = *(_QWORD *)(v33 + v44);
          v44 -= 8;
        }
        while ( v44 != -8 );
      }
      else
      {
        v39 = v32 + v37;
        v40 = 0;
        do
        {
          *(__m128i *)(v39 + v40) = _mm_loadu_si128((const __m128i *)(v38 + v40));
          v40 -= 16;
        }
        while ( -16LL * (v35 >> 1) != v40 );
        if ( (v35 & 1) != 0 )
          *(_QWORD *)(v34 + 8LL * (v36 - (v35 & 0xFFFFFFFE))) = *(_QWORD *)(v33 + 8LL * (v36 - (v35 & 0xFFFFFFFE)));
      }
    }
  }
  else
  {
    v35 = 0;
  }
  *(_DWORD *)(v11 + 32) = v35;
  *(_QWORD *)(v11 + 40) = v34;
  *(_QWORD *)(v11 + 8) = v47;
  *(_QWORD *)(v11 + 16) = v49;
  *(_BYTE *)(v11 + 24) = v52;
  *(_DWORD *)(v11 + 28) = a3;
  *(_QWORD *)(v11 + 48) = a4;
  *(_QWORD *)(v11 + 56) = a5;
  if ( v49 )
  {
    v45 = *(_DWORD *)(v49 + 8);
    *(_DWORD *)(v49 + 8) = v45 - 1;
    if ( v45 == 1 )
      sub_15D7BC0(v53, v49);
  }
  if ( v47 )
  {
    v46 = *(_DWORD *)(v47 + 8);
    *(_DWORD *)(v47 + 8) = v46 - 1;
    if ( v46 == 1 )
      sub_15D7BC0(v53, v47);
  }
  return v11;
}

