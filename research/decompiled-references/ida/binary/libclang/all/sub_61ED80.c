__int64 __fastcall sub_61ED80(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r12
  unsigned int v5; // ebp
  int v6; // r14d
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  bool v9; // al
  signed int v10; // r14d
  _DWORD *v11; // rax
  unsigned int v12; // ebp
  int v13; // r15d
  __int64 v14; // r12
  unsigned int v15; // r15d
  int v16; // ecx
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  int v19; // r12d
  _DWORD *v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rcx
  int v24; // eax
  char v25; // dl
  char v26; // al
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  _QWORD *v29; // r8
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rax
  _DWORD *v33; // rax
  unsigned __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int64 v37; // r12
  __int64 v38; // rax
  _QWORD *v39; // r15
  unsigned __int64 v40; // r15
  __int64 v41; // rax
  __int64 v42; // rax
  _DWORD *v43; // rax
  unsigned __int64 v44; // r12
  __int64 v45; // rax
  __int64 *v46; // r14
  __int64 v47; // rax
  char v48; // dl
  _DWORD *v49; // rax
  _DWORD *v50; // rdx
  _DWORD *v51; // rax
  _DWORD *v52; // rdx
  _DWORD *v53; // rax
  _DWORD *v54; // rdx
  _DWORD *v55; // rax
  _DWORD *v56; // rdx
  _DWORD *v57; // rax
  _DWORD *v58; // rdx
  _DWORD *v59; // rax
  _DWORD *v60; // rdx
  unsigned int v61; // [rsp+8h] [rbp-60h]
  __int64 *v62; // [rsp+8h] [rbp-60h]
  __int64 *v63; // [rsp+8h] [rbp-60h]
  __int64 *v64; // [rsp+10h] [rbp-58h]
  _QWORD *v65; // [rsp+10h] [rbp-58h]
  _BYTE v66[57]; // [rsp+2Fh] [rbp-39h] BYREF

  v1 = *(_DWORD *)(a1 + 84);
  if ( !v1 || !*(_DWORD *)(a1 + 88) )
    return 0;
  if ( !*(_QWORD *)a1 )
    BUG();
  v2 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
  v3 = *(_QWORD *)(v2 + 32);
  if ( v1 < 0 )
    v1 = sub_CADBE0(*(_QWORD *)(v2 + 32), (unsigned int)v1);
  v4 = *(int *)(v3 + 408);
  v5 = v1 & 0x7FFFFFFF;
  v6 = v4 + 1;
  if ( (unsigned int)(v4 + 1) <= 1 )
  {
    v7 = *(_DWORD **)(v3 + 184);
    if ( v5 < (*v7 & 0x7FFFFFFFu) )
      goto LABEL_40;
    goto LABEL_9;
  }
  if ( (int)v4 >= 0 )
  {
    v7 = *(_DWORD **)(v3 + 184);
    if ( v5 < (v7[6 * v4] & 0x7FFFFFFFu) )
      goto LABEL_40;
LABEL_9:
    if ( v6 != *(_DWORD *)(v3 + 192) )
    {
      v8 = &v7[6 * v6];
LABEL_11:
      v9 = v5 < (*v8 & 0x7FFFFFFFu);
      goto LABEL_12;
    }
    goto LABEL_53;
  }
  v40 = (unsigned int)(-2 - v4);
  v41 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 8LL * ((unsigned int)(-2 - v4) >> 6));
  if ( _bittest64(&v41, v40) )
  {
    v42 = *(_QWORD *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v40 >> 5));
    if ( !v42 )
    {
      v62 = (__int64 *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v40 >> 5));
      v49 = (_DWORD *)sub_61ED40((__int64 *)(*(_QWORD *)(v3 + 224) & 0xFFFFFFFFFFFFFFF8LL), 768, 3);
      v50 = v49 + 192;
      *v62 = (__int64)v49;
      do
      {
        *v49 = 0;
        v49 += 6;
        *((_OWORD *)v49 - 1) = 0;
      }
      while ( v49 != v50 );
      v42 = *v62;
    }
    v43 = (_DWORD *)(v42 + 24LL * ((-2 - (_BYTE)v4) & 0x1F));
  }
  else
  {
    v43 = (_DWORD *)sub_CA9380(v3, (unsigned int)v40, 0);
  }
  if ( v5 < (*v43 & 0x7FFFFFFFu) )
    goto LABEL_40;
  if ( (_DWORD)v4 == -2 )
    goto LABEL_13;
  if ( v6 != *(_DWORD *)(v3 + 192) )
  {
    v44 = (unsigned int)(-2 - v6);
    v45 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 8LL * ((unsigned int)(-2 - v6) >> 6));
    if ( _bittest64(&v45, v44) )
    {
      v46 = (__int64 *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v44 >> 5));
      v47 = *v46;
      if ( !*v46 )
      {
        v59 = (_DWORD *)sub_61ED40((__int64 *)(*(_QWORD *)(v3 + 224) & 0xFFFFFFFFFFFFFFF8LL), 768, 3);
        *v46 = (__int64)v59;
        v60 = v59 + 192;
        do
        {
          *v59 = 0;
          v59 += 6;
          *((_OWORD *)v59 - 1) = 0;
        }
        while ( v59 != v60 );
        v47 = *v46;
      }
      v8 = (_DWORD *)(v47 + 24 * (v44 & 0x1F));
    }
    else
    {
      v8 = (_DWORD *)sub_CA9380(v3, (unsigned int)v44, 0);
    }
    goto LABEL_11;
  }
LABEL_53:
  v9 = v5 < *(_DWORD *)(v3 + 248);
LABEL_12:
  if ( v9 )
  {
LABEL_13:
    v10 = *(_DWORD *)(v3 + 408);
    goto LABEL_14;
  }
LABEL_40:
  v10 = sub_CA9700(v3, v5);
LABEL_14:
  v66[0] = 0;
  if ( (unsigned int)(v10 + 1) > 1 )
  {
    if ( v10 >= 0 )
    {
      v11 = (_DWORD *)(*(_QWORD *)(v3 + 184) + 24LL * v10);
LABEL_17:
      v12 = v5 - (*v11 & 0x7FFFFFFF);
      goto LABEL_18;
    }
    v37 = (unsigned int)(-2 - v10);
    v38 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 8LL * ((unsigned int)(-2 - v10) >> 6));
    if ( _bittest64(&v38, v37) )
    {
      v39 = (_QWORD *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v37 >> 5));
      if ( *v39 )
      {
        v11 = (_DWORD *)(*v39 + 24LL * ((-2 - (_BYTE)v10) & 0x1F));
        goto LABEL_17;
      }
      v51 = (_DWORD *)sub_61ED40((__int64 *)(*(_QWORD *)(v3 + 224) & 0xFFFFFFFFFFFFFFF8LL), 768, 3);
      *v39 = v51;
      v52 = v51 + 192;
      do
      {
        *v51 = 0;
        v51 += 6;
        *((_OWORD *)v51 - 1) = 0;
      }
      while ( v52 != v51 );
      v25 = v66[0];
      v11 = (_DWORD *)(*v39 + 24LL * ((-2 - (_BYTE)v10) & 0x1F));
    }
    else
    {
      v11 = (_DWORD *)sub_CA9380(v3, (unsigned int)v37, v66);
      v25 = v66[0];
    }
    if ( !v25 && v11 )
      goto LABEL_17;
  }
  v12 = 0;
  v10 = 0;
LABEL_18:
  v13 = *(_DWORD *)(a1 + 88);
  if ( v13 < 0 )
    v13 = sub_CADBE0(v3, (unsigned int)v13);
  v14 = *(int *)(v3 + 408);
  v15 = v13 & 0x7FFFFFFF;
  v16 = v14 + 1;
  if ( (unsigned int)(v14 + 1) <= 1 )
  {
    v17 = *(_DWORD **)(v3 + 184);
    if ( v15 < (*v17 & 0x7FFFFFFFu) )
      goto LABEL_42;
LABEL_23:
    if ( v16 != *(_DWORD *)(v3 + 192) )
    {
      v18 = &v17[6 * v16];
      goto LABEL_25;
    }
    goto LABEL_51;
  }
  if ( (int)v14 >= 0 )
  {
    v17 = *(_DWORD **)(v3 + 184);
    if ( v15 < (v17[6 * v14] & 0x7FFFFFFFu) )
      goto LABEL_42;
    goto LABEL_23;
  }
  v30 = (unsigned int)(-2 - v14);
  v31 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 8LL * ((unsigned int)(-2 - v14) >> 6));
  if ( _bittest64(&v31, v30) )
  {
    v32 = *(_QWORD *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v30 >> 5));
    if ( !v32 )
    {
      v64 = (__int64 *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v30 >> 5));
      v53 = (_DWORD *)sub_61ED40((__int64 *)(*(_QWORD *)(v3 + 224) & 0xFFFFFFFFFFFFFFF8LL), 768, 3);
      v16 = v14 + 1;
      LOBYTE(v30) = -2 - v14;
      v54 = v53 + 192;
      *v64 = (__int64)v53;
      do
      {
        *v53 = 0;
        v53 += 6;
        *((_OWORD *)v53 - 1) = 0;
      }
      while ( v54 != v53 );
      v32 = *v64;
    }
    v33 = (_DWORD *)(v32 + 24 * (v30 & 0x1F));
  }
  else
  {
    v33 = (_DWORD *)sub_CA9380(v3, (unsigned int)v30, 0);
    v16 = v14 + 1;
  }
  if ( v15 < (*v33 & 0x7FFFFFFFu) )
    goto LABEL_42;
  if ( (_DWORD)v14 == -2 )
  {
LABEL_26:
    v19 = *(_DWORD *)(v3 + 408);
    v66[0] = 0;
    if ( (unsigned int)(v19 + 1) <= 1 )
      goto LABEL_43;
    goto LABEL_27;
  }
  if ( v16 == *(_DWORD *)(v3 + 192) )
  {
LABEL_51:
    if ( v15 >= *(_DWORD *)(v3 + 248) )
      goto LABEL_42;
    goto LABEL_26;
  }
  v34 = (unsigned int)(-2 - v16);
  v35 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 8LL * ((unsigned int)(-2 - v16) >> 6));
  if ( _bittest64(&v35, v34) )
  {
    v36 = *(_QWORD *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v34 >> 5));
    if ( !v36 )
    {
      v63 = (__int64 *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v34 >> 5));
      v57 = (_DWORD *)sub_61ED40((__int64 *)(*(_QWORD *)(v3 + 224) & 0xFFFFFFFFFFFFFFF8LL), 768, 3);
      v58 = v57 + 192;
      *v63 = (__int64)v57;
      do
      {
        *v57 = 0;
        v57 += 6;
        *((_OWORD *)v57 - 1) = 0;
      }
      while ( v58 != v57 );
      v36 = *v63;
    }
    v18 = (_DWORD *)(v36 + 24 * (v34 & 0x1F));
  }
  else
  {
    v18 = (_DWORD *)sub_CA9380(v3, (unsigned int)v34, 0);
  }
LABEL_25:
  if ( v15 < (*v18 & 0x7FFFFFFFu) )
    goto LABEL_26;
LABEL_42:
  v24 = sub_CA9700(v3, v15);
  v66[0] = 0;
  v19 = v24;
  if ( (unsigned int)(v24 + 1) <= 1 )
    goto LABEL_43;
LABEL_27:
  if ( v19 >= 0 )
  {
    v20 = (_DWORD *)(*(_QWORD *)(v3 + 184) + 24LL * v19);
LABEL_29:
    v21 = v15 - (*v20 & 0x7FFFFFFF);
    goto LABEL_30;
  }
  v27 = (unsigned int)(-2 - v19);
  v28 = *(_QWORD *)(*(_QWORD *)(v3 + 256) + 8LL * ((unsigned int)(-2 - v19) >> 6));
  if ( _bittest64(&v28, v27) )
  {
    v29 = (_QWORD *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v27 >> 5));
    if ( *v29 )
    {
      v20 = (_DWORD *)(*v29 + 24LL * ((-2 - (_BYTE)v19) & 0x1F));
      goto LABEL_29;
    }
    v65 = (_QWORD *)(*(_QWORD *)(v3 + 208) + 8 * ((unsigned __int64)(int)v27 >> 5));
    v55 = (_DWORD *)sub_61ED40((__int64 *)(*(_QWORD *)(v3 + 224) & 0xFFFFFFFFFFFFFFF8LL), 768, 3);
    v56 = v55 + 192;
    *v65 = v55;
    do
    {
      *v55 = 0;
      v55 += 6;
      *((_OWORD *)v55 - 1) = 0;
    }
    while ( v56 != v55 );
    v48 = v66[0];
    v20 = (_DWORD *)(*v65 + 24LL * ((-2 - (_BYTE)v19) & 0x1F));
  }
  else
  {
    v20 = (_DWORD *)sub_CA9380(v3, (unsigned int)v27, v66);
    v48 = v66[0];
  }
  if ( !v48 && v20 )
    goto LABEL_29;
LABEL_43:
  v21 = 0;
  v19 = 0;
LABEL_30:
  if ( v10 != v19 )
    v21 = sub_CACB30(v3, (unsigned int)v10);
  if ( v21 < v12 )
    return 0;
  v22 = v21 - v12;
  if ( !*(_BYTE *)(a1 + 92) && !*(_BYTE *)(a1 + 80) )
  {
    v61 = v22;
    v26 = sub_61A680(a1);
    v22 = v61;
    if ( v26 )
      return 1;
  }
  if ( (unsigned __int8)sub_618780((_QWORD *)a1, v10, v12, v22) )
    return 1;
  if ( *(_BYTE *)(a1 + 92) || !*(_BYTE *)(a1 + 80) )
    return 0;
  return sub_61A680(a1);
}

