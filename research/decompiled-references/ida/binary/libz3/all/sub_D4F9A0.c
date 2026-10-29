__int64 __fastcall sub_D4F9A0(__int64 *a1, __int64 **a2, __int64 a3)
{
  __int64 *v5; // rdx
  __int64 v6; // r12
  char v7; // bl
  __int64 v8; // rax
  char v9; // al
  __int64 v10; // r14
  __int64 v11; // rbp
  unsigned int v12; // ebx
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 *v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rdx
  char v20; // al
  unsigned int v21; // eax
  int v22; // eax
  __int64 *v23; // rsi
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rax
  int v27; // ecx
  __int64 *v28; // rax
  __int64 v29; // rax
  __int64 *v30; // rdx
  __int64 v31; // rbx
  void (__fastcall ***v32)(void *); // r14
  __int64 *v33; // r14
  unsigned int v34; // edx
  unsigned int v35; // ebx
  __int64 v36; // r13
  __int64 v38; // rbx
  _QWORD *v39; // rdi
  __int64 v40; // rax
  __int64 i; // rax
  __int64 v42; // [rsp+0h] [rbp-A8h]
  __int64 v43; // [rsp+8h] [rbp-A0h]
  int v44; // [rsp+10h] [rbp-98h]
  __int64 *v45; // [rsp+10h] [rbp-98h]
  char v46; // [rsp+1Fh] [rbp-89h]
  __int64 *v48; // [rsp+38h] [rbp-70h]
  __int64 *v49; // [rsp+38h] [rbp-70h]
  __int64 *v50; // [rsp+38h] [rbp-70h]
  __int64 v51; // [rsp+38h] [rbp-70h]
  char v52[8]; // [rsp+48h] [rbp-60h] BYREF
  __int64 v53; // [rsp+50h] [rbp-58h] BYREF
  __int64 v54; // [rsp+58h] [rbp-50h]
  __int64 v55; // [rsp+60h] [rbp-48h] BYREF
  __int64 v56; // [rsp+68h] [rbp-40h]

  sub_EE4940(v52, "elim-term-ite", *a2);
  v5 = *a2;
  v6 = (*a2)[9];
  v7 = *((_BYTE *)*a2 + 123) & 8;
  *(_BYTE *)(a1[19] + 48) = (*((_BYTE *)*a2 + 123) & 4) != 0;
  v8 = *a1;
  v46 = v7;
  *((_DWORD *)a1 + 149) = 0;
  a1[72] = (__int64)v5;
  v42 = v8;
  if ( !v6 )
  {
    v43 = v8;
    v11 = 0;
    goto LABEL_53;
  }
  v9 = *(_BYTE *)(v6 + 3) >> 6;
  if ( v9 )
  {
    if ( v9 != 1 )
    {
LABEL_4:
      if ( v9 == 2 )
        v44 = *(_DWORD *)(v6 + 4) - 1;
      else
        v44 = *(_DWORD *)(v6 + 4);
      goto LABEL_6;
    }
  }
  else
  {
    do
    {
      v6 = *(_QWORD *)(v6 + 16);
      v9 = *(_BYTE *)(v6 + 3) >> 6;
    }
    while ( !v9 );
    if ( v9 != 1 )
      goto LABEL_4;
  }
  v44 = *(_DWORD *)(v6 + 4) + 1;
LABEL_6:
  v43 = v42;
  if ( v44 )
  {
    v10 = 0;
    v11 = 0;
    v6 = 0;
    v12 = 0;
    while ( 1 )
    {
      v15 = *v5;
      if ( (*((_BYTE *)v5 + 123) & 0x20) != 0 )
      {
        v16 = *(_QWORD *)(v15 + 864);
        goto LABEL_14;
      }
      v26 = v5[9];
      v27 = 17;
      while ( 1 )
      {
        if ( *(char *)(v26 + 3) < 0 )
        {
          if ( *(_BYTE *)(v26 + 3) >> 6 != 2 )
          {
            v28 = (__int64 *)(v10 + *(_QWORD *)(v26 + 16));
            goto LABEL_45;
          }
          goto LABEL_47;
        }
        if ( v12 == *(_DWORD *)(v26 + 4) )
          break;
LABEL_47:
        v26 = *(_QWORD *)(v26 + 16);
        if ( !--v27 )
        {
          v49 = v5;
          sub_233F80((__int64 *)(v15 + 616), (_DWORD *)v5 + 18);
          v28 = (__int64 *)(v10 + *(_QWORD *)(v49[9] + 16));
          goto LABEL_45;
        }
      }
      v28 = (__int64 *)(v26 + 8);
LABEL_45:
      v16 = *v28;
LABEL_14:
      v53 = v6;
      v54 = v42;
      v55 = v11;
      v56 = v43;
      sub_D4F800((__int64)(a1 + 1), v16, &v53, &v55);
      v6 = v53;
      v11 = v55;
      v43 = v56;
      v42 = v54;
      if ( !v46 )
        goto LABEL_15;
      v18 = (*a2)[11];
      if ( !v18 )
        goto LABEL_31;
      v19 = (*a2)[11];
      v20 = *(_BYTE *)(v18 + 3) >> 6;
      if ( v20 )
      {
        if ( v20 != 1 )
          goto LABEL_23;
LABEL_39:
        if ( v12 >= *(_DWORD *)(v19 + 4) + 1 )
          goto LABEL_40;
      }
      else
      {
        do
        {
          v19 = *(_QWORD *)(v19 + 16);
          v20 = *(_BYTE *)(v19 + 3) >> 6;
        }
        while ( !v20 );
        if ( v20 == 1 )
          goto LABEL_39;
LABEL_23:
        if ( v20 == 2 )
          v21 = *(_DWORD *)(v19 + 4) - 1;
        else
          v21 = *(_DWORD *)(v19 + 4);
        if ( v12 >= v21 )
        {
LABEL_40:
          v18 = 0;
          goto LABEL_31;
        }
      }
      v22 = 17;
      while ( 2 )
      {
        if ( *(char *)(v18 + 3) < 0 )
        {
          if ( *(_BYTE *)(v18 + 3) >> 6 != 2 )
          {
            v23 = (__int64 *)(v10 + *(_QWORD *)(v18 + 16));
            goto LABEL_30;
          }
LABEL_50:
          v18 = *(_QWORD *)(v18 + 16);
          if ( !--v22 )
          {
            v50 = *a2;
            sub_233F80((__int64 *)(**a2 + 616), (_DWORD *)*a2 + 22);
            v23 = (__int64 *)(v10 + *(_QWORD *)(v50[11] + 16));
            goto LABEL_30;
          }
          continue;
        }
        break;
      }
      if ( v12 != *(_DWORD *)(v18 + 4) )
        goto LABEL_50;
      v23 = (__int64 *)(v18 + 8);
LABEL_30:
      v18 = *v23;
LABEL_31:
      v24 = sub_15DE0E0(*a1, v18, v11);
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      if ( v11 )
      {
        v25 = (*(_DWORD *)(v11 + 8))-- == 1;
        if ( v25 )
        {
          v51 = v24;
          sub_15D7BC0(v43, v11);
          v24 = v51;
        }
      }
      v11 = v24;
LABEL_15:
      v17 = *a2;
      if ( (*((_BYTE *)*a2 + 123) & 0x10) != 0 )
      {
        v13 = v17[13];
        v14 = 17;
        do
        {
          if ( *(char *)(v13 + 3) >= 0 )
          {
            if ( v12 == *(_DWORD *)(v13 + 4) )
              goto LABEL_11;
          }
          else if ( *(_BYTE *)(v13 + 3) >> 6 != 2 )
          {
            goto LABEL_11;
          }
          v13 = *(_QWORD *)(v13 + 16);
          --v14;
        }
        while ( v14 );
        v48 = *a2;
        sub_236900((_QWORD *)(*v17 + 672), v17 + 13);
        LODWORD(v17) = (_DWORD)v48;
      }
LABEL_11:
      sub_EDBFA0((int)v17);
      ++v12;
      v5 = *a2;
      v10 += 8;
      if ( v12 == v44 )
        goto LABEL_53;
    }
  }
  v11 = 0;
  v6 = 0;
LABEL_53:
  v45 = v5;
  v29 = sub_1336AB0(v5[1], a1[71]);
  v30 = v45;
  v31 = v29;
  if ( v29 )
    ++*(_DWORD *)(v29 + 8);
  v32 = (void (__fastcall ***)(void *))v45[1];
  if ( v32 )
  {
    v25 = (*((_DWORD *)v32 + 2))-- == 1;
    if ( v25 )
    {
      (**v32)(v32);
      sub_186B220(v32);
      v30 = v45;
    }
  }
  v30[1] = v31;
  sub_EE4A20(":elim-term-ite-consts");
  *((_DWORD *)*a2 + 30) = (*((_DWORD *)*a2 + 30) + 1) & 0x3FFFFFF | (*a2)[15] & 0xFC000000;
  v33 = *a2;
  if ( *a2 )
    ++*((_DWORD *)v33 + 8);
  v34 = *(_DWORD *)(a3 + 8);
  v35 = *(_DWORD *)(a3 + 12);
  if ( v34 >= v35 )
  {
    v38 = 2 * v35;
    v36 = sub_186B270(8 * v38);
    v34 = *(_DWORD *)(a3 + 8);
    v39 = *(_QWORD **)a3;
    if ( v34 )
    {
      if ( v34 - 1 <= 2 || (_QWORD *)v36 == v39 + 1 )
      {
        for ( i = 0; i != v34; ++i )
          *(_QWORD *)(v36 + i * 8) = v39[i];
      }
      else
      {
        v40 = 0;
        do
        {
          *(__m128i *)(v36 + v40 * 8) = _mm_loadu_si128((const __m128i *)&v39[v40]);
          v40 += 2;
        }
        while ( 2LL * (v34 >> 1) != v40 );
        if ( (v34 & 1) != 0 )
          *(_QWORD *)(v36 + 8LL * (v34 & 0xFFFFFFFE)) = v39[v34 & 0xFFFFFFFE];
      }
    }
    if ( v39 != (_QWORD *)(a3 + 16) && v39 )
    {
      sub_186B220(v39);
      v34 = *(_DWORD *)(a3 + 8);
    }
    *(_QWORD *)a3 = v36;
    *(_DWORD *)(a3 + 12) = v38;
  }
  else
  {
    v36 = *(_QWORD *)a3;
  }
  *(_QWORD *)(v36 + 8LL * v34) = v33;
  *(_DWORD *)(a3 + 8) = v34 + 1;
  if ( v11 )
  {
    v25 = (*(_DWORD *)(v11 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v43, v11);
  }
  if ( v6 )
  {
    v25 = (*(_DWORD *)(v6 + 8))-- == 1;
    if ( v25 )
      sub_15D7BC0(v42, v6);
  }
  return sub_EE4A00(v52);
}

