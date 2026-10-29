__int64 __fastcall sub_5605C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        _BYTE *a6,
        unsigned __int64 *a7)
{
  int v8; // ecx
  unsigned int v9; // r13d
  bool v10; // cc
  int v11; // eax
  __int64 v12; // r8
  unsigned __int64 dtype_size; // r14
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rcx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  char dtype_by_size; // al
  unsigned __int64 v24; // r12
  int v25; // r15d
  __int64 v26; // rax
  int v28; // eax
  int v29; // r15d
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax

  if ( a4 < 0 )
  {
    v8 = a4 & 0x70;
    v9 = *(_DWORD *)(a3 + 12);
    v10 = v8 <= 48;
    if ( v8 != 48 )
      goto LABEL_3;
LABEL_10:
    v17 = nbits((unsigned int)a2);
    dtype_size = 3;
    v18 = v17 + 14;
    v19 = v17 + 7;
    if ( v19 >= 0 )
      v18 = v19;
    v16 = (unsigned int)(v18 >> 3);
    goto LABEL_18;
  }
  v8 = a4 & 0x70;
  v9 = *(_DWORD *)(a3 + 8);
  v10 = v8 <= 48;
  if ( v8 == 48 )
    goto LABEL_10;
LABEL_3:
  if ( v10 )
  {
    if ( v8 == 16 )
    {
      v30 = nbits((unsigned int)a2);
      dtype_size = 1;
      v31 = v30 + 14;
      v32 = v30 + 7;
      if ( v32 >= 0 )
        v31 = v32;
      v16 = (unsigned int)(v31 >> 3);
      goto LABEL_18;
    }
    if ( v8 == 32 )
    {
      v20 = nbits((unsigned int)a2);
      dtype_size = 2;
      v21 = v20 + 14;
      v22 = v20 + 7;
      if ( v22 >= 0 )
        v21 = v22;
      v16 = (unsigned int)(v21 >> 3);
      goto LABEL_18;
    }
  }
  else
  {
    if ( v8 == 64 )
    {
      v33 = nbits((unsigned int)a2);
      dtype_size = 4;
      v34 = v33 + 14;
      v35 = v33 + 7;
      if ( v35 >= 0 )
        v34 = v35;
      v16 = (unsigned int)(v34 >> 3);
      goto LABEL_18;
    }
    if ( v8 == 80 )
    {
      v11 = nbits((unsigned int)a2);
      dtype_size = 8;
      v14 = v11 + 14;
      v15 = v11 + 7;
      if ( v15 >= 0 )
        v14 = v15;
      v16 = (unsigned int)(v14 >> 3);
LABEL_18:
      dtype_by_size = get_dtype_by_size(dtype_size / v16, a2, dtype_size % v16, v16, v12);
      if ( a6 )
        *a6 = dtype_by_size;
      if ( a7 )
        *a7 = dtype_size;
LABEL_22:
      if ( dtype_size < *(int *)(*(_QWORD *)(a1 + 24) + 8LL) )
        return (unsigned int)extend_sign(v9, (unsigned int)dtype_size, a5);
      return v9;
    }
  }
  v24 = *(unsigned __int8 *)(a3 + 5);
  v25 = nbits((unsigned int)a2);
  dtype_size = get_dtype_size((unsigned __int8)v24);
  if ( (unsigned __int8)v24 > 0x12u || (v26 = 294968, !_bittest64(&v26, v24)) )
  {
    v28 = v25 + 14;
    v29 = v25 + 7;
    if ( v29 >= 0 )
      v28 = v29;
    dtype_size *= (unsigned int)(v28 >> 3);
  }
  if ( a6 )
    *a6 = v24;
  if ( a7 )
    *a7 = dtype_size;
  if ( dtype_size )
    goto LABEL_22;
  return v9;
}

