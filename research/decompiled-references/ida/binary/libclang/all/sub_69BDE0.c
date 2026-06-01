void __fastcall sub_69BDE0(__int64 a1, int a2)
{
  _BYTE *v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  _QWORD *v10; // rdx
  _BYTE *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rdx
  _QWORD *v19; // rbx
  _QWORD *v20; // rbp
  _QWORD *v21; // rdi
  unsigned int v22; // edi
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rsi
  char *v25; // r9
  unsigned int v26; // edi
  unsigned int v27; // edi
  unsigned int v28; // esi
  __int64 v29; // r8
  unsigned int *v30; // rdi
  _BYTE *v31; // rbx
  _BYTE v32[24]; // [rsp-18h] [rbp-88h] BYREF
  void *v33; // [rsp+0h] [rbp-70h]
  __int64 v34; // [rsp+10h] [rbp-60h] BYREF
  void *v35; // [rsp+20h] [rbp-50h]
  __int64 v36; // [rsp+30h] [rbp-40h]
  void *v37; // [rsp+38h] [rbp-38h]
  _QWORD *v38; // [rsp+40h] [rbp-30h]
  __int64 v39; // [rsp+48h] [rbp-28h]

  if ( a2 <= 3 )
    return;
  v3 = v32;
  sub_C6F660(v32);
  v4 = *(unsigned int *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 16);
  v6 = v4 + 1;
  if ( *(unsigned int *)(a1 + 28) < (unsigned __int64)(v4 + 1) )
  {
    v30 = (unsigned int *)(a1 + 16);
    if ( (unsigned __int64)v32 < v5 || (unsigned __int64)v32 >= v5 + 104 * v4 )
    {
      sub_69BB30(v30, v6);
      v5 = *(_QWORD *)(a1 + 16);
      v4 = *(unsigned int *)(a1 + 24);
    }
    else
    {
      v31 = &v32[-v5];
      sub_69BB30(v30, v6);
      v5 = *(_QWORD *)(a1 + 16);
      v4 = *(unsigned int *)(a1 + 24);
      v3 = &v31[v5];
    }
  }
  v7 = v5 + 104 * v4;
  v8 = *(_QWORD *)v3;
  v9 = v7 + 40;
  *(__m128i *)(v7 + 8) = _mm_loadu_si128((const __m128i *)(v3 + 8));
  *(_QWORD *)v7 = v8;
  v10 = v3 + 40;
  *(_QWORD *)(v7 + 24) = v7 + 40;
  v11 = *((_BYTE **)v3 + 3);
  if ( v11 != v3 + 40 )
  {
    *(_QWORD *)(v7 + 24) = v11;
    *(_QWORD *)(v7 + 40) = *((_QWORD *)v3 + 5);
LABEL_5:
    v12 = *((_QWORD *)v3 + 4);
    goto LABEL_6;
  }
  v12 = *((_QWORD *)v3 + 4);
  v22 = v12 + 1;
  if ( (unsigned int)(v12 + 1) >= 8 )
  {
    *(_QWORD *)(v7 + 40) = *v10;
    *(_QWORD *)(v9 + v22 - 8) = *(_QWORD *)((char *)v10 + v22 - 8);
    v23 = (v7 + 48) & 0xFFFFFFFFFFFFFFF8LL;
    v24 = v9 - v23;
    v25 = (char *)v10 - v24;
    v26 = (v24 + v22) & 0xFFFFFFF8;
    if ( v26 >= 8 )
    {
      v27 = v26 & 0xFFFFFFF8;
      v28 = 0;
      do
      {
        v29 = v28;
        v28 += 8;
        *(_QWORD *)(v23 + v29) = *(_QWORD *)&v25[v29];
      }
      while ( v28 < v27 );
    }
    goto LABEL_5;
  }
  if ( (v22 & 4) != 0 )
  {
    *(_DWORD *)(v7 + 40) = *(_DWORD *)v10;
    *(_DWORD *)(v9 + v22 - 4) = *(_DWORD *)((char *)v10 + v22 - 4);
    v12 = *((_QWORD *)v3 + 4);
    goto LABEL_6;
  }
  if ( (_DWORD)v12 != -1 )
  {
    *(_BYTE *)(v7 + 40) = *(_BYTE *)v10;
    if ( (v22 & 2) != 0 )
    {
      *(_WORD *)(v9 + v22 - 2) = *(_WORD *)((char *)v10 + v22 - 2);
      v12 = *((_QWORD *)v3 + 4);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
LABEL_6:
  *(_QWORD *)(v7 + 32) = v12;
  *((_QWORD *)v3 + 3) = v10;
  v13 = *((_QWORD *)v3 + 7);
  *((_QWORD *)v3 + 4) = 0;
  v3[40] = 0;
  *(_QWORD *)(v7 + 56) = v13;
  v14 = *((_QWORD *)v3 + 8);
  *((_QWORD *)v3 + 7) = 0;
  *(_QWORD *)(v7 + 64) = v14;
  v15 = *((_QWORD *)v3 + 9);
  *((_QWORD *)v3 + 8) = 0;
  *(_QWORD *)(v7 + 72) = v15;
  v16 = *((_QWORD *)v3 + 10);
  *((_QWORD *)v3 + 9) = 0;
  *(_QWORD *)(v7 + 80) = v16;
  v17 = *((_QWORD *)v3 + 11);
  *((_QWORD *)v3 + 10) = 0;
  *(_QWORD *)(v7 + 88) = v17;
  v18 = *((_QWORD *)v3 + 12);
  *((_QWORD *)v3 + 11) = 0;
  *((_QWORD *)v3 + 12) = 0;
  v19 = v37;
  *(_QWORD *)(v7 + 96) = v18;
  ++*(_DWORD *)(a1 + 24);
  v20 = v38;
  if ( v38 != v19 )
  {
    do
    {
      v21 = (_QWORD *)v19[3];
      if ( v21 != v19 + 5 )
        operator delete(v21, v19[5] + 1LL);
      v19 += 8;
    }
    while ( v20 != v19 );
    v19 = v37;
  }
  if ( v19 )
    operator delete(v19, v39 - (_QWORD)v19);
  if ( v35 )
    operator delete(v35, v36 - (_QWORD)v35);
  if ( v33 != &v34 )
    operator delete(v33, v34 + 1);
}

