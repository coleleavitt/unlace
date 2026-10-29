void __fastcall sub_1B20830(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4, __int64 a5)
{
  __int64 v7; // rbx
  unsigned int v10; // r15d
  unsigned int v11; // eax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // eax
  __int64 *v18; // rsi
  unsigned int v19; // ecx
  unsigned int v20; // edx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 v31; // rax
  _QWORD *v32; // rax
  char v33; // al
  __int64 v34; // rdx
  _QWORD *v35; // rdi
  __int64 v36; // rdx
  _QWORD *v37; // rsi
  int v38; // eax
  unsigned __int64 v39; // rdx
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r15
  __int64 v46; // rax
  _QWORD *v47; // rax
  unsigned int v48; // [rsp+Ch] [rbp-ECh]
  __m128i v49; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v50; // [rsp+20h] [rbp-D8h] BYREF
  _QWORD v51[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v53[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v54; // [rsp+A8h] [rbp-50h]
  unsigned int v55; // [rsp+B0h] [rbp-48h]
  char v56; // [rsp+B4h] [rbp-44h]

  v7 = *((_QWORD *)a4 + 2);
  if ( v7 )
  {
    v17 = sub_C00A40(*((_QWORD *)a4 + 2), a2, a3, (__int64)a4, a5);
    v18 = (__int64 *)(a1 + 8);
    v19 = 6170;
    v20 = v17;
    goto LABEL_21;
  }
  v10 = *(_DWORD *)(a3 + 24);
  if ( (*(_BYTE *)(a3 + 28) & 0x7Fu) - 40 <= 6 )
    v7 = a3;
  if ( (_BYTE)a5 )
  {
    v11 = a4[1];
    if ( v11 == 82 )
    {
      v13 = 2;
      v12 = 0;
    }
    else
    {
      v12 = 0;
      v13 = (v11 == 52) + 3LL;
    }
LABEL_7:
    v48 = *(_DWORD *)(*(_QWORD *)(a1 + 232) + 64LL);
    sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v10, 0x1828u, 0);
    if ( v54 )
    {
      sub_AE9DF0(v53, v13, 2u);
    }
    else
    {
      if ( !v56 )
      {
LABEL_9:
        v14 = *(unsigned int *)(a2 + 344);
        v15 = 103;
        if ( (_DWORD)v14 )
        {
          v21 = *(_QWORD *)(a2 + 336) + 6776 * v14 - 6776;
          if ( *(_QWORD *)(v21 + 6768) == *(_QWORD *)(a2 + 328) )
          {
            v22 = *(unsigned int *)(v21 + 8);
            v23 = *(unsigned int *)(a2 + 27504);
            if ( (unsigned int)v22 > (unsigned int)v23 )
            {
              v24 = v22 - v23;
              if ( v24 )
              {
                v25 = *(_QWORD *)v21 + 1688 * (v24 - 1);
                if ( v25 )
                  v15 = *(unsigned int *)(v25 + 976);
              }
            }
          }
        }
        v49.m128i_i64[0] = sub_20EAB70(v15, v48);
        v49.m128i_i64[1] = v16;
        sub_166BAF0((__int64)v51, (__int64)&v49);
LABEL_11:
        sub_15F7200(v51);
        return;
      }
      v30 = sub_168B9E0(v51);
      v31 = v52;
      if ( v52 )
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
      v49.m128i_i64[0] = v31;
      v32 = sub_1587BC0(v30, v49.m128i_i64, v26, v27, v28, v29);
      sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v55 + 8), v13, 2u);
    }
    if ( v54 )
    {
      sub_AE9DF0(v53, v12, 2u);
    }
    else if ( v56 )
    {
      v45 = sub_168B9E0(v51);
      v46 = v52;
      if ( v52 )
        v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
      v49.m128i_i64[0] = v46;
      v47 = sub_1587BC0(v45, v49.m128i_i64, v41, v42, v43, v44);
      sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * v55 + 8), v12, 2u);
    }
    goto LABEL_9;
  }
  if ( (unsigned __int8)sub_FFEF70(*a4, a2, a3, (__int64)a4) && a4[1] == 36 )
  {
    v10 = a4[8];
    v12 = 0;
    v13 = 7;
    goto LABEL_7;
  }
  if ( !v7 )
  {
    if ( !sub_F56AE0(*(_QWORD *)(a3 + 48), *(_QWORD **)(a1 + 248)) )
      goto LABEL_53;
LABEL_63:
    v13 = 5;
    v12 = 0;
    goto LABEL_7;
  }
  if ( ((*(_BYTE *)(v7 + 96) & 7) == 2 || (*(_BYTE *)(v7 + 96) & 7) == 0 && ((*(_BYTE *)(v7 + 96) >> 3) & 3) == 2)
    && !sub_A5EB90(v7) )
  {
    v13 = 1;
    v12 = 0;
    goto LABEL_7;
  }
  v33 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( v33 != 43 )
  {
    v34 = *(_QWORD *)(v7 + 16);
    v35 = (_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF8LL);
    v36 = v34 >> 2;
    v37 = v35;
    if ( (v36 & 1) != 0 )
      v37 = (_QWORD *)*v35;
    if ( ((*((_BYTE *)v37 + 8) + 70) & 0x7Fu) <= 3 )
    {
      v13 = 0;
      v12 = 0;
      goto LABEL_7;
    }
    if ( ((v33 + 85) & 0x7D) != 0 )
    {
      if ( (v36 & 1) != 0 )
        v35 = (_QWORD *)v35[1];
      v38 = *(_BYTE *)(sub_B8EAA0((__int64)v35) + 8) & 0x7F;
      if ( v38 == 24 || !v38 )
        goto LABEL_64;
      if ( (*(_BYTE *)(v7 + 28) & 0x7F) != 0x2B )
      {
        v39 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
          v39 = *(_QWORD *)v39;
        if ( ((*(_BYTE *)(v39 + 8) + 70) & 0x7Fu) <= 3 )
        {
LABEL_64:
          v13 = 6;
          v12 = 0;
          goto LABEL_7;
        }
      }
    }
  }
  if ( sub_F56AE0(*(_QWORD *)(a3 + 48), *(_QWORD **)(a1 + 248)) )
    goto LABEL_63;
  v40 = *(_BYTE *)(v7 + 28) & 0x7F;
  if ( (v40 == 40 || v40 == 46) && sub_1AE8710(v7) && a4[1] == 82 )
  {
    v13 = 8;
    v12 = 1;
    goto LABEL_7;
  }
LABEL_53:
  if ( a4[8] )
  {
    v20 = a4[8];
    v18 = (__int64 *)(a1 + 8);
    v19 = 6172;
LABEL_21:
    sub_168B9F0((__int64)v51, v18, v20, v19, 0);
    sub_1AF81E0(&v49, a4[1]);
    sub_1682AF0((__int64)v51, (__int64)&v49);
    if ( (__int64 *)v49.m128i_i64[0] != &v50 )
      operator delete((void *)v49.m128i_i64[0]);
    goto LABEL_11;
  }
}
