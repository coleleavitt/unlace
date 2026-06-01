__int64 __fastcall sub_625D00(__int64 a1, char **a2)
{
  char *v2; // rbp
  char *v3; // r14
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rcx
  bool v9; // cf
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  char *v12; // rcx
  char *v13; // rdx
  char **v14; // r12
  char **v15; // rax
  _QWORD *v16; // rsi
  char *v17; // rcx
  char *v18; // rdx
  char *v19; // rbx
  char **v20; // r15
  char *v21; // rdx
  char *v22; // rdx
  char *v23; // rdi
  _QWORD *v24; // rcx
  char *v25; // rdx
  unsigned int v26; // esi
  unsigned __int64 v28; // rdx
  char *v29; // rcx
  char *v30; // r8
  unsigned int v31; // esi
  unsigned int v32; // esi
  unsigned int v33; // ecx
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned int v36; // edi
  unsigned __int64 v37; // r8
  char *v38; // rsi
  char *v39; // r9
  unsigned int v40; // ecx
  unsigned int v41; // esi
  __int64 v42; // rdi
  __int64 v43; // [rsp+8h] [rbp-40h]

  v2 = *(char **)(a1 + 8);
  v3 = *(char **)a1;
  v4 = (__int64)&v2[-*(_QWORD *)a1];
  v5 = 0xCCCCCCCCCCCCCCCDLL * (v4 >> 3);
  if ( v5 == 0x333333333333333LL )
    std::__throw_length_error("vector::_M_realloc_append");
  v6 = 1;
  if ( v5 )
    v6 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v9 = __CFADD__(v6, v5);
  v10 = v6 - 0x3333333333333333LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  if ( v9 )
  {
    v35 = operator new(0x7FFFFFFFFFFFFFF8uLL);
    v12 = *a2;
    v13 = (char *)(a2 + 2);
    v14 = (char **)v35;
    v15 = (char **)(v35 + v4);
    v43 = 0xFFFFFFFFFFFFFFFLL;
    v16 = v15 + 2;
    *v15 = (char *)(v15 + 2);
    if ( v12 != (char *)(a2 + 2) )
    {
LABEL_8:
      *v15 = v12;
      v15[2] = a2[2];
      v17 = a2[1];
      goto LABEL_9;
    }
  }
  else
  {
    if ( v10 > 0x333333333333333LL )
      v10 = 0x333333333333333LL;
    v43 = 5 * v10;
    v11 = operator new(40 * v10);
    v12 = *a2;
    v13 = (char *)(a2 + 2);
    v14 = (char **)v11;
    v15 = (char **)(v11 + v4);
    v16 = v15 + 2;
    *v15 = (char *)(v15 + 2);
    if ( v12 != (char *)(a2 + 2) )
      goto LABEL_8;
  }
  v17 = a2[1];
  v36 = (_DWORD)v17 + 1;
  if ( (unsigned int)((_DWORD)v17 + 1) >= 8 )
  {
    *v16 = *(_QWORD *)v13;
    *(_QWORD *)((char *)v16 + v36 - 8) = *(_QWORD *)&v13[v36 - 8];
    v37 = (unsigned __int64)(v16 + 1) & 0xFFFFFFFFFFFFFFF8LL;
    v38 = (char *)v16 - v37;
    v39 = (char *)(v13 - v38);
    if ( ((v36 + (_DWORD)v38) & 0xFFFFFFF8) >= 8 )
    {
      v40 = (v36 + (_DWORD)v38) & 0xFFFFFFF8;
      v41 = 0;
      do
      {
        v42 = v41;
        v41 += 8;
        *(_QWORD *)(v37 + v42) = *(_QWORD *)&v39[v42];
      }
      while ( v41 < v40 );
    }
LABEL_40:
    v17 = a2[1];
    goto LABEL_9;
  }
  if ( (v36 & 4) == 0 )
  {
    if ( (_DWORD)v17 == -1 )
      goto LABEL_9;
    *(_BYTE *)v16 = *v13;
    if ( (v36 & 2) != 0 )
    {
      *(_WORD *)((char *)v16 + v36 - 2) = *(_WORD *)&v13[v36 - 2];
      v17 = a2[1];
      goto LABEL_9;
    }
    goto LABEL_40;
  }
  *(_DWORD *)v16 = *(_DWORD *)v13;
  *(_DWORD *)((char *)v16 + v36 - 4) = *(_DWORD *)&v13[v36 - 4];
  v17 = a2[1];
LABEL_9:
  *a2 = v13;
  v18 = a2[4];
  v15[1] = v17;
  a2[1] = nullptr;
  *((_BYTE *)a2 + 16) = 0;
  v15[4] = v18;
  if ( v3 != v2 )
  {
    v19 = v3 + 16;
    v20 = v14;
    while ( 1 )
    {
      v24 = v20 + 2;
      *v20 = (char *)(v20 + 2);
      v25 = *((char **)v19 - 2);
      if ( v25 != v19 )
        break;
      v21 = *((char **)v19 - 1);
      v26 = (_DWORD)v21 + 1;
      if ( (unsigned int)((_DWORD)v21 + 1) >= 8 )
      {
        *v24 = *(_QWORD *)v19;
        *(_QWORD *)((char *)v24 + v26 - 8) = *(_QWORD *)&v19[v26 - 8];
        v28 = (unsigned __int64)(v20 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v29 = (char *)v24 - v28;
        v30 = (char *)(v19 - v29);
        v31 = ((_DWORD)v29 + v26) & 0xFFFFFFF8;
        if ( v31 >= 8 )
        {
          v32 = v31 & 0xFFFFFFF8;
          v33 = 0;
          do
          {
            v34 = v33;
            v33 += 8;
            *(_QWORD *)(v28 + v34) = *(_QWORD *)&v30[v34];
          }
          while ( v33 < v32 );
        }
        goto LABEL_12;
      }
      if ( (v26 & 4) != 0 )
      {
        *(_DWORD *)v24 = *(_DWORD *)v19;
        *(_DWORD *)((char *)v24 + v26 - 4) = *(_DWORD *)&v19[v26 - 4];
        v21 = *((char **)v19 - 1);
      }
      else if ( (_DWORD)v21 != -1 )
      {
        *(_BYTE *)v24 = *v19;
        if ( (v26 & 2) == 0 )
          goto LABEL_12;
        *(_WORD *)((char *)v24 + v26 - 2) = *(_WORD *)&v19[v26 - 2];
        v21 = *((char **)v19 - 1);
      }
LABEL_13:
      v20[1] = v21;
      v22 = *((char **)v19 + 2);
      *((_QWORD *)v19 - 2) = v19;
      *((_QWORD *)v19 - 1) = 0;
      *v19 = 0;
      v20[4] = v22;
      v23 = *((char **)v19 - 2);
      if ( v23 != v19 )
        operator delete(v23, *(_QWORD *)v19 + 1LL);
      v20 += 5;
      if ( v2 == v19 + 24 )
        goto LABEL_24;
      v19 += 40;
    }
    *v20 = v25;
    v20[2] = *(char **)v19;
LABEL_12:
    v21 = *((char **)v19 - 1);
    goto LABEL_13;
  }
  v20 = v14;
LABEL_24:
  if ( v3 )
    operator delete(v3, *(_QWORD *)(a1 + 16) - (_QWORD)v3);
  *(_QWORD *)a1 = v14;
  *(_QWORD *)(a1 + 8) = v20 + 5;
  *(_QWORD *)(a1 + 16) = &v14[v43];
  return v43 * 8;
}

