__int64 __fastcall sub_6B3230(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v5; // rcx
  __int64 v7; // rbx
  int v8; // r14d
  _DWORD *v9; // rax
  _DWORD *v10; // rax
  bool v11; // al
  int v12; // ebx
  _DWORD *v13; // rax
  unsigned int v14; // ebp
  int v15; // eax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rdi
  unsigned int v26; // ebx
  __int64 v27; // rax
  int v29; // eax
  unsigned __int64 v30; // r8
  __int64 v31; // rax
  _DWORD *v32; // rax
  unsigned __int64 v33; // rbx
  __int64 v34; // rax
  __int64 *v35; // r14
  __int64 v36; // rax
  unsigned __int64 v37; // r14
  __int64 v38; // rax
  char v39; // dl
  _QWORD *v40; // r8
  __int64 v41; // rax
  _DWORD *v42; // rax
  _DWORD *v43; // rdx
  _DWORD *v44; // rax
  _DWORD *v45; // rdx
  _DWORD *v46; // rax
  _DWORD *v47; // rdx
  unsigned int v48; // [rsp+8h] [rbp-70h]
  __int64 v49; // [rsp+8h] [rbp-70h]
  __int64 v50; // [rsp+8h] [rbp-70h]
  __int64 v51; // [rsp+8h] [rbp-70h]
  _QWORD *v52; // [rsp+8h] [rbp-70h]
  __int64 v53; // [rsp+8h] [rbp-70h]
  __int64 v54; // [rsp+8h] [rbp-70h]
  int v55; // [rsp+14h] [rbp-64h]
  __int64 *v56; // [rsp+18h] [rbp-60h]
  char v57; // [rsp+2Fh] [rbp-49h] BYREF
  _QWORD v58[9]; // [rsp+30h] [rbp-48h] BYREF

  if ( (int)a3 <= 0 || !a4[5] )
    return 0;
  v5 = *(_QWORD *)(a1 + 2152);
  v7 = *(int *)(v5 + 408);
  v8 = v7 + 1;
  if ( (unsigned int)(v7 + 1) <= 1 )
  {
    v9 = *(_DWORD **)(v5 + 184);
    if ( a3 < (*v9 & 0x7FFFFFFFu) )
      goto LABEL_33;
LABEL_6:
    if ( v8 != *(_DWORD *)(v5 + 192) )
    {
      v10 = &v9[6 * v8];
LABEL_8:
      v11 = a3 < (*v10 & 0x7FFFFFFFu);
      goto LABEL_9;
    }
    goto LABEL_35;
  }
  if ( (int)v7 >= 0 )
  {
    v9 = *(_DWORD **)(v5 + 184);
    if ( a3 < (v9[6 * v7] & 0x7FFFFFFFu) )
      goto LABEL_33;
    goto LABEL_6;
  }
  v30 = (unsigned int)(-2 - v7);
  v31 = *(_QWORD *)(*(_QWORD *)(v5 + 256) + 8LL * ((unsigned int)(-2 - v7) >> 6));
  if ( _bittest64(&v31, v30) )
  {
    v41 = *(_QWORD *)(*(_QWORD *)(v5 + 208) + 8 * ((unsigned __int64)(int)v30 >> 5));
    if ( !v41 )
    {
      v56 = (__int64 *)(*(_QWORD *)(v5 + 208) + 8 * ((unsigned __int64)(int)v30 >> 5));
      v53 = *(_QWORD *)(a1 + 2152);
      v44 = (_DWORD *)sub_6A7810(*(_QWORD *)(v5 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
      LOBYTE(v30) = -2 - v7;
      v5 = v53;
      v45 = v44 + 192;
      *v56 = (__int64)v44;
      do
      {
        *v44 = 0;
        v44 += 6;
        *((_OWORD *)v44 - 1) = 0;
      }
      while ( v44 != v45 );
      v41 = *v56;
    }
    v32 = (_DWORD *)(v41 + 24 * (v30 & 0x1F));
  }
  else
  {
    v50 = *(_QWORD *)(a1 + 2152);
    v32 = (_DWORD *)sub_CA9380(v5, (unsigned int)v30, 0);
    v5 = v50;
  }
  if ( a3 < (*v32 & 0x7FFFFFFFu) )
    goto LABEL_33;
  if ( (_DWORD)v7 == -2 )
  {
LABEL_10:
    v12 = *(_DWORD *)(v5 + 408);
    LOBYTE(v58[0]) = 0;
    if ( (unsigned int)(v12 + 1) > 1 )
      goto LABEL_11;
LABEL_34:
    v14 = 0;
    v12 = 0;
    goto LABEL_14;
  }
  if ( *(_DWORD *)(v5 + 192) != v8 )
  {
    v33 = (unsigned int)(-2 - v8);
    v34 = *(_QWORD *)(*(_QWORD *)(v5 + 256) + 8LL * ((unsigned int)(-2 - v8) >> 6));
    if ( _bittest64(&v34, v33) )
    {
      v35 = (__int64 *)(*(_QWORD *)(v5 + 208) + 8 * ((unsigned __int64)(int)v33 >> 5));
      v36 = *v35;
      if ( !*v35 )
      {
        v54 = v5;
        v46 = (_DWORD *)sub_6A7810(*(_QWORD *)(v5 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
        v5 = v54;
        *v35 = (__int64)v46;
        v47 = v46 + 192;
        do
        {
          *v46 = 0;
          v46 += 6;
          *((_OWORD *)v46 - 1) = 0;
        }
        while ( v47 != v46 );
        v36 = *v35;
      }
      v10 = (_DWORD *)(v36 + 24 * (v33 & 0x1F));
    }
    else
    {
      v51 = v5;
      v10 = (_DWORD *)sub_CA9380(v5, (unsigned int)v33, 0);
      v5 = v51;
    }
    goto LABEL_8;
  }
LABEL_35:
  v11 = a3 < *(_DWORD *)(v5 + 248);
LABEL_9:
  if ( v11 )
    goto LABEL_10;
LABEL_33:
  v49 = v5;
  v29 = sub_CA9700(v5, a3);
  LOBYTE(v58[0]) = 0;
  v5 = v49;
  v12 = v29;
  if ( (unsigned int)(v29 + 1) <= 1 )
    goto LABEL_34;
LABEL_11:
  if ( v12 >= 0 )
  {
    v13 = (_DWORD *)(*(_QWORD *)(v5 + 184) + 24LL * v12);
LABEL_13:
    v14 = a3 - (*v13 & 0x7FFFFFFF);
    goto LABEL_14;
  }
  v37 = (unsigned int)(-2 - v12);
  v38 = *(_QWORD *)(*(_QWORD *)(v5 + 256) + 8LL * ((unsigned int)(-2 - v12) >> 6));
  if ( _bittest64(&v38, v37) )
  {
    v40 = (_QWORD *)(*(_QWORD *)(v5 + 208) + 8 * ((unsigned __int64)(int)v37 >> 5));
    if ( *v40 )
    {
      v13 = (_DWORD *)(*v40 + 24LL * ((-2 - (_BYTE)v12) & 0x1F));
      goto LABEL_13;
    }
    v52 = (_QWORD *)(*(_QWORD *)(v5 + 208) + 8 * ((unsigned __int64)(int)v37 >> 5));
    v42 = (_DWORD *)sub_6A7810(*(_QWORD *)(v5 + 224) & 0xFFFFFFFFFFFFFFF8LL, 768, 3);
    v43 = v42 + 192;
    *v52 = v42;
    do
    {
      *v42 = 0;
      v42 += 6;
      *((_OWORD *)v42 - 1) = 0;
    }
    while ( v42 != v43 );
    v39 = v58[0];
    v13 = (_DWORD *)(*v52 + 24LL * ((-2 - (_BYTE)v12) & 0x1F));
  }
  else
  {
    v13 = (_DWORD *)sub_CA9380(v5, (unsigned int)v37, v58);
    v39 = v58[0];
  }
  if ( v39 )
    goto LABEL_34;
  if ( v13 )
    goto LABEL_13;
  v14 = 0;
  v12 = 0;
LABEL_14:
  v15 = v12;
  v16 = (_QWORD *)a4[2];
  v48 = v15;
  if ( !v16 )
  {
    v16 = a4 + 1;
    goto LABEL_24;
  }
  v17 = a4 + 1;
  do
  {
    while ( *((_DWORD *)v16 + 8) >= v14 )
    {
      if ( !v16[2] )
        goto LABEL_19;
      v17 = v16;
      v16 = (_QWORD *)v16[2];
    }
    v16 = (_QWORD *)v16[3];
  }
  while ( v16 );
  v16 = v17;
LABEL_19:
  if ( a4 + 1 == v16
    || (v18 = v16[5], v19 = 273, _bittest64(&v19, *(_BYTE *)(v18 + 32) & 0x1C))
    && !*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 560LL)
    || (*(_BYTE *)(v18 + 32) & 0x40) == 0
    || (v20 = (*(_BYTE *)(a2 + 28) + 112) & 0x7F, (unsigned __int8)v20 > 0x39u)
    || (v21 = 0x20000039FC08001LL, !_bittest64(&v21, v20))
    || (v55 = sub_CAB8D0(*(_QWORD *)(a1 + 2152), v48, v14, 0),
        v55 != (unsigned int)sub_AA5BA0(a1 + 18224, v18, v48, *((unsigned int *)v16 + 8))) )
  {
LABEL_24:
    if ( (_QWORD *)a4[3] != v16 )
    {
      v22 = std::_Rb_tree_decrement();
      v23 = 273;
      v18 = *(_QWORD *)(v22 + 40);
      if ( (!_bittest64(&v23, *(_BYTE *)(v18 + 32) & 0x1C) || *(_BYTE *)(*(_QWORD *)(a1 + 2160) + 560LL))
        && (*(_BYTE *)(v18 + 32) & 0x40) == 0 )
      {
        v24 = sub_AA6260(a1 + 18224, v18);
        v25 = *(_QWORD *)(a1 + 2152);
        v57 = 0;
        v26 = v24;
        v27 = sub_CAC050(v25, v48, &v57);
        if ( !v57 )
        {
          v58[0] = v26 + v27;
          v58[1] = v14 - v26;
          if ( sub_25E4E00(v58, ";{}#@", 5, -1) == -1 )
            return v18;
        }
      }
    }
    return 0;
  }
  return v18;
}

