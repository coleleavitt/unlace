unsigned __int64 __fastcall sub_633200(__int64 a1, int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  int v5; // r13d
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  bool v8; // al
  int v9; // ebp
  _DWORD *v10; // rax
  __int64 v11; // rax
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  __int64 *v15; // r15
  __int64 v16; // rax
  _DWORD *v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // rax
  __int64 *v20; // r13
  __int64 v21; // rax
  unsigned __int64 v22; // r13
  __int64 v23; // rax
  _QWORD *v24; // r14
  char v25; // dl
  __int64 *v26; // rdi
  __int64 v27; // rcx
  _DWORD *v28; // rax
  _DWORD *v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rcx
  _DWORD *v32; // rax
  _DWORD *v33; // rcx
  __int64 *v34; // rdi
  __int64 v35; // rcx
  _DWORD *v36; // rax
  _DWORD *v37; // rdx
  _BYTE v38[57]; // [rsp+Fh] [rbp-39h] BYREF

  v3 = a2 & 0x7FFFFFFF;
  v4 = *(int *)(a1 + 408);
  v5 = v4 + 1;
  if ( (unsigned int)(v4 + 1) <= 1 )
  {
    v6 = *(_DWORD **)(a1 + 184);
    if ( v3 < (*v6 & 0x7FFFFFFFu) )
      goto LABEL_14;
LABEL_4:
    if ( v5 != *(_DWORD *)(a1 + 192) )
    {
      v7 = &v6[6 * v5];
LABEL_6:
      v8 = v3 < (*v7 & 0x7FFFFFFFu);
      goto LABEL_7;
    }
    goto LABEL_16;
  }
  if ( (int)v4 >= 0 )
  {
    v6 = *(_DWORD **)(a1 + 184);
    if ( v3 < (v6[6 * v4] & 0x7FFFFFFFu) )
      goto LABEL_14;
    goto LABEL_4;
  }
  v13 = (unsigned int)(-2 - v4);
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * ((unsigned int)(-2 - v4) >> 6));
  if ( _bittest64(&v14, v13) )
  {
    v15 = (__int64 *)(*(_QWORD *)(a1 + 208) + 8 * ((unsigned __int64)(int)v13 >> 5));
    v16 = *v15;
    if ( !*v15 )
    {
      v26 = (__int64 *)(*(_QWORD *)(a1 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v27 = *v26;
      v26[10] += 768;
      v28 = (_DWORD *)((v27 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v26[1] >= (unsigned __int64)(v28 + 192) && v27 )
        *v26 = (__int64)(v28 + 192);
      else
        v28 = (_DWORD *)sub_632560((__int64)v26, 768, 3);
      *v15 = (__int64)v28;
      v29 = v28 + 192;
      do
      {
        *v28 = 0;
        v28 += 6;
        *((_OWORD *)v28 - 1) = 0;
      }
      while ( v28 != v29 );
      v16 = *v15;
    }
    v17 = (_DWORD *)(v16 + 24LL * ((-2 - (_BYTE)v4) & 0x1F));
  }
  else
  {
    v17 = (_DWORD *)sub_CA9380(a1, (unsigned int)v13, 0);
  }
  if ( v3 < (*v17 & 0x7FFFFFFFu) )
    goto LABEL_14;
  if ( (_DWORD)v4 != -2 )
  {
    if ( *(_DWORD *)(a1 + 192) != v5 )
    {
      v18 = (unsigned int)(-2 - v5);
      v19 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * ((unsigned int)(-2 - v5) >> 6));
      if ( _bittest64(&v19, v18) )
      {
        v20 = (__int64 *)(*(_QWORD *)(a1 + 208) + 8 * ((unsigned __int64)(int)v18 >> 5));
        v21 = *v20;
        if ( !*v20 )
        {
          v34 = (__int64 *)(*(_QWORD *)(a1 + 224) & 0xFFFFFFFFFFFFFFF8LL);
          v35 = *v34;
          v34[10] += 768;
          v36 = (_DWORD *)((v35 + 7) & 0xFFFFFFFFFFFFFFF8LL);
          if ( v34[1] >= (unsigned __int64)(v36 + 192) && v35 )
            *v34 = (__int64)(v36 + 192);
          else
            v36 = (_DWORD *)sub_632560((__int64)v34, 768, 3);
          *v20 = (__int64)v36;
          v37 = v36 + 192;
          do
          {
            *v36 = 0;
            v36 += 6;
            *((_OWORD *)v36 - 1) = 0;
          }
          while ( v37 != v36 );
          v21 = *v20;
        }
        v7 = (_DWORD *)(v21 + 24 * (v18 & 0x1F));
      }
      else
      {
        v7 = (_DWORD *)sub_CA9380(a1, (unsigned int)v18, 0);
      }
      goto LABEL_6;
    }
LABEL_16:
    v8 = v3 < *(_DWORD *)(a1 + 248);
LABEL_7:
    if ( v8 )
      goto LABEL_8;
LABEL_14:
    v38[0] = 0;
    v9 = sub_CA9700(a1, v3);
    if ( (unsigned int)(v9 + 1) <= 1 )
      goto LABEL_15;
    goto LABEL_9;
  }
LABEL_8:
  v9 = *(_DWORD *)(a1 + 408);
  v38[0] = 0;
  if ( (unsigned int)(v9 + 1) <= 1 )
    goto LABEL_15;
LABEL_9:
  if ( v9 < 0 )
  {
    v22 = (unsigned int)(-2 - v9);
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * ((unsigned int)(-2 - v9) >> 6));
    if ( _bittest64(&v23, v22) )
    {
      v24 = (_QWORD *)(*(_QWORD *)(a1 + 208) + 8 * ((unsigned __int64)(int)v22 >> 5));
      if ( *v24 )
      {
        v10 = (_DWORD *)(*v24 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
        goto LABEL_11;
      }
      v30 = (__int64 *)(*(_QWORD *)(a1 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v31 = *v30;
      v30[10] += 768;
      v32 = (_DWORD *)((v31 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v30[1] >= (unsigned __int64)(v32 + 192) && v31 )
      {
        *v30 = (__int64)(v32 + 192);
        v25 = 0;
      }
      else
      {
        v32 = (_DWORD *)sub_632560((__int64)v30, 768, 3);
        v25 = v38[0];
      }
      *v24 = v32;
      v33 = v32 + 192;
      do
      {
        *v32 = 0;
        v32 += 6;
        *((_OWORD *)v32 - 1) = 0;
      }
      while ( v33 != v32 );
      v10 = (_DWORD *)(*v24 + 24LL * ((-2 - (_BYTE)v9) & 0x1F));
    }
    else
    {
      v10 = (_DWORD *)sub_CA9380(a1, (unsigned int)v22, v38);
      v25 = v38[0];
    }
    if ( !v25 )
    {
      if ( !v10 )
      {
        v11 = 0;
        v9 = 0;
        return (unsigned int)v9 | (unsigned __int64)(v11 << 32);
      }
      goto LABEL_11;
    }
LABEL_15:
    v11 = 0;
    v9 = 0;
    return (unsigned int)v9 | (unsigned __int64)(v11 << 32);
  }
  v10 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL * v9);
LABEL_11:
  v11 = v3 - (*v10 & 0x7FFFFFFF);
  return (unsigned int)v9 | (unsigned __int64)(v11 << 32);
}

