ClpPlusMinusOneMatrix *__fastcall ClpPlusMinusOneMatrix::reverseOrderedCopy(ClpPlusMinusOneMatrix *this)
{
  bool v2; // zf
  int v3; // r12d
  int v4; // edi
  int v5; // eax
  char *v6; // rcx
  _DWORD *v7; // r11
  __int64 v8; // r10
  _DWORD *v9; // rdi
  _DWORD *v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r11
  unsigned __int64 v17; // rdi
  int *v18; // rbx
  int *v19; // r13
  int *v20; // r14
  int v21; // edx
  unsigned __int64 v22; // rax
  int v23; // esi
  int v24; // esi
  int v25; // edx
  _DWORD *v26; // r9
  int v27; // esi
  _DWORD *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // r10
  char *v32; // r11
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r10
  char *v36; // r11
  int v37; // eax
  ClpPlusMinusOneMatrix *v38; // r15
  int v40; // [rsp+Ch] [rbp-4Ch]
  char *s; // [rsp+10h] [rbp-48h]
  void *v42; // [rsp+18h] [rbp-40h]
  char *v43; // [rsp+18h] [rbp-40h]

  v2 = *((_BYTE *)this + 136) == 0;
  v3 = *((_DWORD *)this + 32);
  v4 = *((_DWORD *)this + 33);
  v40 = v4;
  if ( !v2 )
  {
    v5 = v3;
    v3 = v4;
    v40 = v5;
  }
  if ( (unsigned __int64)v40 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_31;
  s = (char *)operator new[](4LL * v40);
  v42 = (void *)operator new[](4LL * v40);
  memset(s, 0, 4LL * v40);
  v6 = (char *)memset(v42, 0, 4LL * v40);
  if ( v3 <= 0 )
  {
    v8 = *((_QWORD *)this + 13);
  }
  else
  {
    v7 = *((_DWORD **)this + 14);
    v8 = *((_QWORD *)this + 13);
    v9 = v7 + 1;
    v10 = (_DWORD *)(v8 + 4);
    v11 = (__int64)&v7[v3 - 1 + 1];
    v12 = 0;
    while ( 1 )
    {
      if ( (int)v12 < *v7 )
      {
        v13 = (int)v12 + 1;
        v14 = *((_QWORD *)this + 15) + 4 * (v12 - v13);
        do
        {
          ++*(_DWORD *)&s[4 * *(int *)(v14 + 4 * v13)];
          v12 = (int)v13++;
        }
        while ( *v7 > (int)v12 );
      }
      if ( (int)v12 < *v10 )
      {
        v15 = (int)v12 + 1;
        v16 = *((_QWORD *)this + 15) + 4 * (v12 - v15);
        do
        {
          ++*(_DWORD *)&v6[4 * *(int *)(v16 + 4 * v15)];
          v12 = (int)v15++;
        }
        while ( *v10 > (int)v12 );
      }
      ++v10;
      v7 = v9;
      if ( (_DWORD *)v11 == v9 )
        break;
      ++v9;
    }
  }
  v43 = v6;
  v17 = *(int *)(v8 + 4LL * v3);
  if ( v17 > 0x1FFFFFFFFFFFFFFELL
    || (v18 = (int *)operator new[](4 * v17), (unsigned __int64)(v40 + 1) > 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_31:
    __cxa_throw_bad_array_new_length();
  }
  v19 = (int *)operator new[](4LL * v40 + 4);
  v20 = (int *)operator new[](4LL * v40);
  if ( v40 <= 0 )
  {
    v21 = 0;
  }
  else
  {
    v21 = 0;
    v22 = 0;
    do
    {
      v23 = *(_DWORD *)&s[v22];
      v19[v22 / 4] = v21;
      *(_DWORD *)&s[v22] = v21;
      v24 = v21 + v23;
      v25 = *(_DWORD *)&v43[v22];
      v20[v22 / 4] = v24;
      *(_DWORD *)&v43[v22] = v24;
      v22 += 4LL;
      v21 = v24 + v25;
    }
    while ( 4LL * (unsigned int)(v40 - 1) + 4 != v22 );
  }
  v19[v40] = v21;
  if ( v3 > 0 )
  {
    v26 = *((_DWORD **)this + 14);
    v27 = 0;
    v28 = (_DWORD *)(*((_QWORD *)this + 13) + 4LL);
    v29 = 0;
    do
    {
      if ( *v26 > (int)v29 )
      {
        v30 = (int)v29 + 1;
        v31 = *((_QWORD *)this + 15) + 4 * (v29 - v30);
        do
        {
          v32 = &s[4 * *(int *)(v31 + 4 * v30)];
          v33 = *(_DWORD *)v32;
          v18[*(int *)v32] = v27;
          *(_DWORD *)v32 = v33 + 1;
          v29 = (int)v30++;
        }
        while ( *v26 > (int)v29 );
      }
      if ( *v28 > (int)v29 )
      {
        v34 = (int)v29 + 1;
        v35 = *((_QWORD *)this + 15) + 4 * (v29 - v34);
        do
        {
          v36 = &v43[4 * *(int *)(v35 + 4 * v34)];
          v37 = *(_DWORD *)v36;
          v18[*(int *)v36] = v27;
          *(_DWORD *)v36 = v37 + 1;
          v29 = (int)v34++;
        }
        while ( *v28 > (int)v29 );
      }
      ++v27;
      ++v26;
      ++v28;
    }
    while ( v3 != v27 );
  }
  operator delete[](s);
  operator delete[](v43);
  v38 = (ClpPlusMinusOneMatrix *)operator new(0x90u);
  ClpPlusMinusOneMatrix::ClpPlusMinusOneMatrix(v38);
  ClpPlusMinusOneMatrix::passInCopy(v38, v40, v3, *((_BYTE *)this + 136) != 1, v18, v19, v20);
  return v38;
}

