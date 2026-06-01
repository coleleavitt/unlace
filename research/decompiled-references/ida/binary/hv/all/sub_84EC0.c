__int64 __fastcall sub_84EC0(__int64 a1, __int64 **a2, char *a3, __int64 *a4)
{
  int *v7; // r8
  int *v8; // rdx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 v13; // rsi
  __int64 i; // rax
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // r9
  int v18; // ecx
  unsigned __int64 v19; // r13
  __int64 v20; // rax
  __int64 *v21; // rsi
  char v22; // r10
  __int64 v23; // rax
  __int64 v24; // rdi
  int *v25; // r12
  __int64 v26; // rcx
  int v27; // r13d
  unsigned __int64 v28; // rbp
  __int64 v29; // rax
  __int64 *v30; // rsi
  char v31; // r9
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 j; // rdx
  __int64 v35; // r13
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  __int64 *v38; // rsi
  char v39; // cl
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 *v43; // rax
  __int64 *v44; // rax
  __int64 *v45; // rax
  __int64 v47; // [rsp+10h] [rbp-188h]
  unsigned __int64 v48; // [rsp+10h] [rbp-188h]
  char v49; // [rsp+10h] [rbp-188h]
  char v50; // [rsp+1Ch] [rbp-17Ch]
  char v51; // [rsp+1Ch] [rbp-17Ch]
  int v52; // [rsp+1Ch] [rbp-17Ch]
  int *v53; // [rsp+20h] [rbp-178h]
  __int64 v54; // [rsp+20h] [rbp-178h]
  int *v55; // [rsp+28h] [rbp-170h]
  _DWORD v56[68]; // [rsp+30h] [rbp-168h] BYREF
  int v57; // [rsp+140h] [rbp-58h] BYREF
  __int16 v58; // [rsp+144h] [rbp-54h]
  _QWORD v59[2]; // [rsp+146h] [rbp-52h]
  char v60; // [rsp+156h] [rbp-42h] BYREF
  unsigned __int64 v61; // [rsp+158h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v58 = 2055;
  v59[0] = 0x10D0C020B030A09LL;
  *(_QWORD *)((char *)v59 + 7) = 0x14131211100F0E01LL;
  v57 = 100992000;
  sub_81AC0(a4, &v57, v56, 20);
  sub_82040(v56, (__int64)&v57, 0x16u, 0xFu);
  v7 = &v57;
  v8 = &v57;
  v9 = 0;
  v10 = 20;
  do
  {
    v11 = *(unsigned __int8 *)v8;
    v12 = v11;
    if ( v10 <= v11 )
      v12 = v10;
    if ( (_BYTE)v11 )
      v10 = v12;
    if ( v9 < v11 )
      v9 = *(unsigned __int8 *)v8;
    v8 = (int *)((char *)v8 + 1);
  }
  while ( &v60 != (char *)v8 );
  v13 = 0;
  if ( v9 >= v10 )
  {
    while ( 1 )
    {
      for ( i = 0; i != 22; ++i )
      {
        if ( *((unsigned __int8 *)&v57 + i) == v10 )
          *(_QWORD *)&v56[2 * i + 24] = v13++;
      }
      v13 *= 2;
      if ( v9 == v10 )
        break;
      ++v10;
    }
  }
  v15 = 22;
  while ( 1 )
  {
    v16 = v15--;
    if ( *((_BYTE *)&v57 + v15) )
      break;
    if ( v15 == 7 )
    {
      v17 = 0;
      goto LABEL_20;
    }
  }
  v17 = v16 - 7;
  v15 = v16;
LABEL_20:
  v18 = 4;
  v19 = 16;
  do
  {
    while ( 1 )
    {
      v19 >>= 1;
      v20 = *((_QWORD *)a3 + 1);
      if ( (v17 & v19) != 0 )
        *a3 |= v20;
      if ( v20 == 128 )
        break;
      *((_QWORD *)a3 + 1) = 2 * v20;
      if ( !--v18 )
        goto LABEL_27;
    }
    v21 = *a2;
    v22 = *a3;
    v23 = (*a2)[1];
    if ( v23 == (*a2)[2] )
    {
      v55 = v7;
      v54 = v17;
      v52 = v18;
      v49 = *a3;
      v45 = sub_84CB0(a1, (__int64)v21);
      v21 = v45;
      if ( !v45 )
        return 12;
      v7 = v55;
      v17 = v54;
      *a2 = v45;
      v18 = v52;
      v23 = v45[1];
      v22 = v49;
    }
    v24 = *v21;
    v21[1] = v23 + 1;
    *(_BYTE *)(v24 + v23) = v22;
    *((_QWORD *)a3 + 1) = 1;
    *a3 = 0;
    --v18;
  }
  while ( v18 );
LABEL_27:
  v25 = (int *)((char *)&v57 + v15);
  do
  {
    v26 = *(unsigned __int8 *)v7;
    v27 = 4;
    v28 = 16;
    do
    {
      while ( 1 )
      {
        v28 >>= 1;
        v29 = *((_QWORD *)a3 + 1);
        if ( (v28 & v26) != 0 )
          *a3 |= v29;
        if ( v29 == 128 )
          break;
        *((_QWORD *)a3 + 1) = 2 * v29;
        if ( !--v27 )
          goto LABEL_35;
      }
      v30 = *a2;
      v31 = *a3;
      v32 = (*a2)[1];
      if ( v32 == (*a2)[2] )
      {
        v53 = v7;
        v50 = *a3;
        v47 = v26;
        v43 = sub_84CB0(a1, (__int64)v30);
        v30 = v43;
        if ( !v43 )
          return 12;
        v7 = v53;
        v31 = v50;
        *a2 = v43;
        v26 = v47;
        v32 = v43[1];
      }
      v33 = *v30;
      v30[1] = v32 + 1;
      *(_BYTE *)(v33 + v32) = v31;
      *((_QWORD *)a3 + 1) = 1;
      *a3 = 0;
      --v27;
    }
    while ( v27 );
LABEL_35:
    v7 = (int *)((char *)v7 + 1);
  }
  while ( v25 != v7 );
  for ( j = 0; j < a4[2]; ++j )
  {
    v35 = *(_QWORD *)&v56[2 * *(unsigned __int8 *)(a4[3] + j) + 24];
    v36 = 1 << *((_BYTE *)&v57 + *(unsigned __int8 *)(a4[3] + j));
    do
    {
      while ( 1 )
      {
        v36 >>= 1;
        v37 = *((_QWORD *)a3 + 1);
        if ( (v36 & v35) != 0 )
          *a3 |= v37;
        if ( v37 == 128 )
          break;
        *((_QWORD *)a3 + 1) = 2 * v37;
        if ( v36 == 1 )
          goto LABEL_44;
      }
      v38 = *a2;
      v39 = *a3;
      v40 = (*a2)[1];
      if ( v40 == (*a2)[2] )
      {
        v51 = *a3;
        v48 = j;
        v44 = sub_84CB0(a1, (__int64)v38);
        v38 = v44;
        if ( !v44 )
          return 12;
        v39 = v51;
        j = v48;
        *a2 = v44;
        v40 = v44[1];
      }
      v41 = *v38;
      v38[1] = v40 + 1;
      *(_BYTE *)(v41 + v40) = v39;
      *((_QWORD *)a3 + 1) = 1;
      *a3 = 0;
    }
    while ( v36 != 1 );
LABEL_44:
    ;
  }
  return 0;
}

