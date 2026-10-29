/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C590
// Address: 0x000000000008C590

//----- (000000000008C590) ----------------------------------------------------
void __fastcall sub_8C590(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // r14
  void *v4; // rax
  void *v5; // rdi
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // r9
  unsigned __int64 v12; // r10
  __int64 *v13; // rbp
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // r13
  unsigned __int8 v17; // r11
  unsigned __int64 v18; // r14
  size_t v19; // rdx
  _QWORD *v20; // r15
  unsigned __int64 v21; // rax
  char *v22; // rsi
  __int64 v23; // rax
  int v24; // eax
  std::logic_error *exception; // rbx
  unsigned __int64 v26; // [rsp+0h] [rbp-68h]
  size_t v28; // [rsp+10h] [rbp-58h]
  unsigned __int8 v29; // [rsp+18h] [rbp-50h]
  unsigned __int64 v30; // [rsp+20h] [rbp-48h]
  _QWORD *v31; // [rsp+28h] [rbp-40h]

  if ( !a2 )
  {
    v9 = *(void **)a1;
    *(_QWORD *)a1 = 0;
    if ( v9 )
      operator delete(v9);
    *(_QWORD *)(a1 + 8) = 0;
    return;
  }
  v3 = a2;
  if ( a2 >> 61 )
  {
    exception = (std::logic_error *)_cxa_allocate_exception(0x10u);
    std::logic_error::logic_error(exception, "allocator<T>::allocate(size_t n) 'n' exceeds maximum supported size");
    *(_QWORD *)exception = off_1516A8;
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'std::length_error,
      (void (*)(void *))std::length_error::~length_error);
  }
  v4 = operator new(8 * a2);
  v5 = *(void **)a1;
  *(_QWORD *)a1 = v4;
  if ( v5 )
    operator delete(v5);
  *(_QWORD *)(a1 + 8) = a2;
  v6 = a2 - 1;
  v7 = a2 & 3;
  if ( a2 - 1 < 3 )
  {
    v8 = 0;
    if ( (a2 & 3) == 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v8 = 0;
  do
  {
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = 0;
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v8 + 8) = 0;
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v8 + 16) = 0;
    *(_QWORD *)(*(_QWORD *)a1 + 8 * v8 + 24) = 0;
    v8 += 4;
  }
  while ( a2 - v7 != v8 );
  if ( (a2 & 3) != 0 )
  {
LABEL_14:
    v10 = -v7;
    do
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v8++) = 0;
      ++v10;
    }
    while ( v10 );
  }
LABEL_16:
  v11 = *(_QWORD **)(a1 + 16);
  if ( !v11 )
    return;
  v12 = v11[1];
  if ( (a2 & v6) != 0 )
  {
    if ( v12 >= a2 )
      v12 %= a2;
  }
  else
  {
    v12 &= v6;
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v12) = a1 + 16;
  v13 = (__int64 *)*v11;
  if ( !*v11 )
    return;
  v26 = a2 - 1;
  do
  {
    v14 = v13[1];
    if ( (v3 & v6) != 0 )
    {
      if ( v14 >= v3 )
        v14 %= v3;
      if ( v14 == v12 )
      {
LABEL_27:
        v11 = v13;
        goto LABEL_52;
      }
    }
    else
    {
      v14 &= v6;
      if ( v14 == v12 )
        goto LABEL_27;
    }
    if ( !*(_QWORD *)(*(_QWORD *)a1 + 8 * v14) )
    {
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v14) = v11;
      v11 = v13;
      v12 = v14;
      goto LABEL_52;
    }
    v15 = *v13;
    v16 = v13;
    if ( !*v13 )
      goto LABEL_50;
    v17 = *((_BYTE *)v13 + 16);
    v18 = (unsigned __int64)v17 >> 1;
    v19 = v18;
    if ( (v17 & 1) != 0 )
      v19 = v13[3];
    v20 = v13;
    v31 = v11;
    v30 = v12;
    v29 = *((_BYTE *)v13 + 16);
    v28 = v19;
    while ( 1 )
    {
      v16 = v20;
      v20 = (_QWORD *)v15;
      v21 = *(unsigned __int8 *)(v15 + 16);
      if ( (v21 & 1) != 0 )
      {
        if ( v19 != v20[3] )
          goto LABEL_50;
      }
      else if ( v19 != v21 >> 1 )
      {
        goto LABEL_50;
      }
      v22 = (v21 & 1) != 0 ? (char *)v20[4] : (char *)v20 + 17;
      if ( (v17 & 1) == 0 )
        break;
      if ( v19 )
      {
        v24 = memcmp((const void *)v13[4], v22, v19);
        v19 = v28;
        v17 = v29;
        v12 = v30;
        v11 = v31;
        v6 = v26;
        if ( v24 )
          goto LABEL_50;
      }
LABEL_49:
      v15 = *v20;
      v16 = v20;
      if ( !*v20 )
        goto LABEL_50;
    }
    if ( !v19 )
      goto LABEL_49;
    v23 = 0;
    while ( *((_BYTE *)v13 + v23 + 17) == v22[v23] )
    {
      if ( v18 == ++v23 )
        goto LABEL_49;
    }
LABEL_50:
    *v11 = *v16;
    *v16 = **(_QWORD **)(*(_QWORD *)a1 + 8 * v14);
    **(_QWORD **)(*(_QWORD *)a1 + 8 * v14) = v13;
    v3 = a2;
LABEL_52:
    v13 = (__int64 *)*v11;
  }
  while ( *v11 );
}
// 1516A8: using guessed type void (__fastcall *off_1516A8[2])(std::length_error *__hidden this);
// 1516C0: using guessed type void (__fastcall *`typeinfo for'std::length_error)(std::type_info *__hidden this);
