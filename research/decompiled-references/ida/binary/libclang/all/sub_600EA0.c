__int64 __fastcall sub_600EA0(__int64 a1, int a2)
{
  unsigned int v3; // r12d
  __int64 v5; // rbp
  int v6; // r14d
  _DWORD *v7; // rax
  _DWORD *v8; // rax
  bool v9; // al
  int v10; // ebp
  _DWORD *v11; // rsi
  __int64 v12; // r12
  char v14; // al
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v18; // rax
  _DWORD *v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 *v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // r14
  __int64 v25; // rax
  _QWORD *v26; // r15
  __int64 *v27; // rdi
  __int64 v28; // rsi
  _DWORD *v29; // rax
  _DWORD *v30; // rdx
  __int64 *v31; // rdi
  __int64 v32; // rcx
  _DWORD *v33; // rdx
  _DWORD *v34; // rcx
  __int64 *v35; // rdi
  __int64 v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rdx
  _QWORD *v39; // [rsp+8h] [rbp-50h]
  _BYTE v40[57]; // [rsp+1Fh] [rbp-39h] BYREF

  v3 = a2 & 0x7FFFFFFF;
  v5 = *(int *)(a1 + 408);
  v6 = v5 + 1;
  if ( (unsigned int)(v5 + 1) <= 1 )
  {
    v7 = *(_DWORD **)(a1 + 184);
    if ( v3 < (*v7 & 0x7FFFFFFFu) )
      goto LABEL_19;
    goto LABEL_4;
  }
  if ( (int)v5 >= 0 )
  {
    v7 = *(_DWORD **)(a1 + 184);
    if ( v3 < (v7[6 * v5] & 0x7FFFFFFFu) )
      goto LABEL_19;
LABEL_4:
    if ( v6 != *(_DWORD *)(a1 + 192) )
    {
      v8 = &v7[6 * v6];
LABEL_6:
      v9 = v3 < (*v8 & 0x7FFFFFFFu);
      goto LABEL_7;
    }
    goto LABEL_20;
  }
  v15 = (unsigned int)(-2 - v5);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * ((unsigned int)(-2 - v5) >> 6));
  if ( _bittest64(&v16, v15) )
  {
    v17 = (_QWORD *)(*(_QWORD *)(a1 + 208) + 8 * ((unsigned __int64)(int)v15 >> 5));
    v18 = *v17;
    if ( !*v17 )
    {
      v27 = (__int64 *)(*(_QWORD *)(a1 + 224) & 0xFFFFFFFFFFFFFFF8LL);
      v28 = *v27;
      v27[10] += 768;
      v29 = (_DWORD *)((v28 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v27[1] >= (unsigned __int64)(v29 + 192) && v28 )
      {
        *v27 = (__int64)(v29 + 192);
      }
      else
      {
        v39 = v17;
        v29 = (_DWORD *)sub_5F8390((__int64)v27, 768, 3);
        v17 = v39;
      }
      *v17 = v29;
      v30 = v29 + 192;
      do
      {
        *v29 = 0;
        v29 += 6;
        *((_OWORD *)v29 - 1) = 0;
      }
      while ( v29 != v30 );
      v18 = *v17;
    }
    v19 = (_DWORD *)(v18 + 24LL * ((-2 - (_BYTE)v5) & 0x1F));
  }
  else
  {
    v19 = (_DWORD *)sub_CA9380(a1, (unsigned int)v15, 0);
  }
  if ( v3 < (*v19 & 0x7FFFFFFFu) )
    goto LABEL_19;
  if ( (_DWORD)v5 == -2 )
    goto LABEL_8;
  if ( *(_DWORD *)(a1 + 192) != v6 )
  {
    v20 = (unsigned int)(-2 - v6);
    v21 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * ((unsigned int)(-2 - v6) >> 6));
    if ( _bittest64(&v21, v20) )
    {
      v22 = (__int64 *)(*(_QWORD *)(a1 + 208) + 8 * ((unsigned __int64)(int)v20 >> 5));
      v23 = *v22;
      if ( !*v22 )
      {
        v35 = (__int64 *)(*(_QWORD *)(a1 + 224) & 0xFFFFFFFFFFFFFFF8LL);
        v36 = *v35;
        v35[10] += 768;
        v37 = (_DWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        if ( v35[1] >= (unsigned __int64)(v37 + 192) && v36 )
          *v35 = (__int64)(v37 + 192);
        else
          v37 = (_DWORD *)sub_5F8390((__int64)v35, 768, 3);
        *v22 = (__int64)v37;
        v38 = v37 + 192;
        do
        {
          *v37 = 0;
          v37 += 6;
          *((_OWORD *)v37 - 1) = 0;
        }
        while ( v38 != v37 );
        v23 = *v22;
      }
      v8 = (_DWORD *)(v23 + 24 * (v20 & 0x1F));
    }
    else
    {
      v8 = (_DWORD *)sub_CA9380(a1, (unsigned int)v20, 0);
    }
    goto LABEL_6;
  }
LABEL_20:
  v9 = v3 < *(_DWORD *)(a1 + 248);
LABEL_7:
  if ( v9 )
  {
LABEL_8:
    v10 = *(_DWORD *)(a1 + 408);
    goto LABEL_9;
  }
LABEL_19:
  v10 = sub_CA9700(a1, v3);
LABEL_9:
  v40[0] = 0;
  if ( (unsigned int)(v10 + 1) <= 1 )
    return 0;
  if ( v10 >= 0 )
  {
    v11 = (_DWORD *)(*(_QWORD *)(a1 + 184) + 24LL * v10);
    goto LABEL_12;
  }
  v24 = (unsigned int)(-2 - v10);
  v25 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + 8LL * ((unsigned int)(-2 - v10) >> 6));
  if ( !_bittest64(&v25, v24) )
  {
    v11 = (_DWORD *)sub_CA9380(a1, (unsigned int)v24, v40);
    v14 = v40[0];
    goto LABEL_15;
  }
  v26 = (_QWORD *)(*(_QWORD *)(a1 + 208) + 8 * ((unsigned __int64)(int)v24 >> 5));
  if ( !*v26 )
  {
    v31 = (__int64 *)(*(_QWORD *)(a1 + 224) & 0xFFFFFFFFFFFFFFF8LL);
    v32 = *v31;
    v31[10] += 768;
    v33 = (_DWORD *)((v32 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v31[1] >= (unsigned __int64)(v33 + 192) && v32 )
    {
      *v31 = (__int64)(v33 + 192);
      v14 = 0;
    }
    else
    {
      v33 = (_DWORD *)sub_5F8390((__int64)v31, 768, 3);
      v14 = v40[0];
    }
    *v26 = v33;
    v34 = v33 + 192;
    do
    {
      *v33 = 0;
      v33 += 6;
      *((_OWORD *)v33 - 1) = 0;
    }
    while ( v34 != v33 );
    v11 = (_DWORD *)(*v26 + 24LL * ((-2 - (_BYTE)v10) & 0x1F));
LABEL_15:
    if ( !v14 && v11 )
      goto LABEL_12;
    return 0;
  }
  v11 = (_DWORD *)(*v26 + 24LL * ((-2 - (_BYTE)v10) & 0x1F));
LABEL_12:
  v12 = v3 - (*v11 & 0x7FFFFFFF);
  if ( a2 < 0 )
    return sub_CAAEF0(a1, v11, (unsigned int)v12);
  else
    return (v12 << 32) | (unsigned int)v10;
}

