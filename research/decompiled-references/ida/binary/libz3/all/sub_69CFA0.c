_QWORD *__fastcall sub_69CFA0(_QWORD *a1, __int64 a2, char a3)
{
  size_t v3; // r12
  _BYTE *v4; // r14
  _BYTE *v5; // r13
  char v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  _BYTE *v11; // rax
  _QWORD *v12; // rdx
  __int64 v13; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  _BYTE *v18; // r9
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rax
  char *v22; // rdx
  _BYTE *v23; // rdi
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // edx
  __int64 v27; // rsi
  __int64 v28; // [rsp+8h] [rbp-50h]
  _BYTE *v29; // [rsp+8h] [rbp-50h]
  char v31; // [rsp+10h] [rbp-48h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  char v34; // [rsp+1Ch] [rbp-3Ch]

  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v4 = *(_BYTE **)a2;
  v5 = (_BYTE *)(a2 + 16);
  v8 = a3;
  v9 = v3 + 1;
  if ( *(_QWORD *)a2 == a2 + 16 )
  {
    if ( v3 != 15 )
      goto LABEL_4;
    v15 = 30;
    v19 = operator new(0x1Fu);
    v18 = *(_BYTE **)a2;
    v9 = 16;
    v8 = a3;
    v4 = (_BYTE *)v19;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(a2 + 16);
  if ( v10 >= v9 )
    goto LABEL_4;
  if ( v9 < 0 )
    std::__throw_length_error("basic_string::_M_create");
  v15 = 2 * v10;
  if ( v9 >= (unsigned __int64)v15 )
  {
    v15 = v3 + 1;
    v16 = v3 + 2;
    if ( (__int64)(v3 + 2) >= 0 )
      goto LABEL_11;
LABEL_30:
    std::__throw_bad_alloc();
  }
  v16 = v15 + 1;
  if ( v15 < 0 )
    goto LABEL_30;
LABEL_11:
  v17 = operator new(v16);
  v18 = *(_BYTE **)a2;
  v9 = v3 + 1;
  v8 = a3;
  v4 = (_BYTE *)v17;
  if ( v3 )
  {
LABEL_17:
    if ( v3 == 1 )
    {
      *v4 = *v18;
    }
    else
    {
      v34 = v8;
      v33 = v9;
      v29 = v18;
      memcpy(v4, v18, v3);
      v8 = v34;
      v9 = v33;
      v18 = v29;
    }
  }
  if ( v5 != v18 )
  {
    v31 = v8;
    v28 = v9;
    operator delete(v18, *(_QWORD *)(a2 + 16) + 1LL);
    v8 = v31;
    v9 = v28;
  }
  *(_QWORD *)a2 = v4;
  *(_QWORD *)(a2 + 16) = v15;
LABEL_4:
  v4[v3] = v8;
  v11 = *(_BYTE **)a2;
  v12 = a1 + 2;
  *(_QWORD *)(a2 + 8) = v9;
  v11[v3 + 1] = 0;
  *a1 = a1 + 2;
  if ( *(_BYTE **)a2 != v5 )
  {
    *a1 = *(_QWORD *)a2;
    a1[2] = *(_QWORD *)(a2 + 16);
LABEL_6:
    v13 = *(_QWORD *)(a2 + 8);
    goto LABEL_7;
  }
  v13 = *(_QWORD *)(a2 + 8);
  v20 = v13 + 1;
  if ( (unsigned int)(v13 + 1) >= 8 )
  {
    a1[2] = *(_QWORD *)(a2 + 16);
    *(_QWORD *)((char *)v12 + v20 - 8) = *(_QWORD *)&v5[v20 - 8];
    v21 = (unsigned __int64)(a1 + 3) & 0xFFFFFFFFFFFFFFF8LL;
    v22 = (char *)v12 - v21;
    v23 = (_BYTE *)(v5 - v22);
    v24 = ((_DWORD)v22 + v20) & 0xFFFFFFF8;
    if ( v24 >= 8 )
    {
      v25 = v24 & 0xFFFFFFF8;
      v26 = 0;
      do
      {
        v27 = v26;
        v26 += 8;
        *(_QWORD *)(v21 + v27) = *(_QWORD *)&v23[v27];
      }
      while ( v26 < v25 );
    }
    goto LABEL_6;
  }
  if ( (v20 & 4) != 0 )
  {
    *((_DWORD *)a1 + 4) = *(_DWORD *)(a2 + 16);
    *(_DWORD *)((char *)v12 + v20 - 4) = *(_DWORD *)&v5[v20 - 4];
    v13 = *(_QWORD *)(a2 + 8);
    goto LABEL_7;
  }
  if ( (_DWORD)v13 != -1 )
  {
    *((_BYTE *)a1 + 16) = *(_BYTE *)(a2 + 16);
    if ( (v20 & 2) != 0 )
    {
      *(_WORD *)((char *)v12 + v20 - 2) = *(_WORD *)&v5[v20 - 2];
      v13 = *(_QWORD *)(a2 + 8);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  a1[1] = v13;
  *(_QWORD *)a2 = v5;
  *(_QWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 16) = 0;
  return a1;
}

