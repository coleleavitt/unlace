__int64 __fastcall sub_142D560(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, size_t a5)
{
  _BYTE *v5; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  size_t v12; // r8
  _BYTE *v13; // rcx
  size_t v14; // r11
  _BYTE *v15; // rsi
  unsigned __int64 v16; // r9
  _BYTE *v17; // rdi
  __int64 v19; // rbp
  size_t v20; // rsi
  _BYTE *v21; // rdi
  _BYTE *v22; // rdi
  size_t v23; // r8
  size_t v24; // rsi
  _BYTE *v25; // rdi
  _BYTE *v26; // rcx
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // rax
  _BYTE *v29; // rdi
  unsigned __int64 v30; // r14
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // r14
  _BYTE *v33; // rax
  _BYTE *v34; // r8
  _BYTE *v35; // rax
  unsigned __int64 v36; // [rsp+8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+8h] [rbp-50h]
  _BYTE *v38; // [rsp+8h] [rbp-50h]
  _BYTE *v39; // [rsp+8h] [rbp-50h]
  size_t v41; // [rsp+18h] [rbp-40h]

  v5 = (_BYTE *)(a1 + 16);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  if ( a2 == a3 )
    return a1;
  v10 = a2;
  v11 = a5 * (((a3 - a2) >> 5) - 1);
  do
  {
    v11 += *(_QWORD *)(v10 + 8);
    v10 += 32;
  }
  while ( v10 != a3 );
  if ( (unsigned __int64)v11 > 0xF )
  {
    if ( v11 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v32 = 30;
    if ( (unsigned __int64)v11 >= 0x1E )
      v32 = v11;
    v33 = (_BYTE *)operator new(v32 + 1);
    v14 = *(_QWORD *)(a1 + 8);
    v34 = *(_BYTE **)a1;
    v13 = v33;
    if ( v14 )
    {
      if ( v14 != -1 )
      {
        v41 = *(_QWORD *)(a1 + 8);
        v39 = *(_BYTE **)a1;
        v35 = memcpy(v33, *(const void **)a1, v14 + 1);
        v14 = v41;
        v34 = v39;
        v13 = v35;
      }
      if ( v5 != v34 )
        goto LABEL_43;
    }
    else
    {
      *v33 = *v34;
      if ( v5 != v34 )
      {
LABEL_43:
        v38 = v13;
        operator delete(v34);
        v14 = *(_QWORD *)(a1 + 8);
        v13 = v38;
      }
    }
    *(_QWORD *)(a1 + 16) = v32;
    *(_QWORD *)a1 = v13;
    v12 = *(_QWORD *)(a2 + 8);
    if ( v5 == v13 )
      v32 = 15;
    v15 = *(_BYTE **)a2;
    v16 = v12 + v14;
    if ( v32 >= v12 + v14 )
      goto LABEL_6;
LABEL_10:
    v37 = v16;
    sub_998B30(a1, v14, 0, v15, v12);
    v13 = *(_BYTE **)a1;
    v16 = v37;
    goto LABEL_11;
  }
  v12 = *(_QWORD *)(a2 + 8);
  v13 = (_BYTE *)(a1 + 16);
  v14 = 0;
  v15 = *(_BYTE **)a2;
  v16 = *(_QWORD *)(a2 + 8);
  if ( v16 > 0xF )
    goto LABEL_10;
LABEL_6:
  if ( v12 )
  {
    v17 = &v13[v14];
    if ( v12 == 1 )
    {
      *v17 = *v15;
      v13 = *(_BYTE **)a1;
    }
    else
    {
      v36 = v16;
      memcpy(v17, v15, v12);
      v13 = *(_BYTE **)a1;
      v16 = v36;
    }
  }
LABEL_11:
  v19 = a2 + 32;
  *(_QWORD *)(a1 + 8) = v16;
  v13[v16] = 0;
  if ( a3 != v19 )
  {
    v20 = *(_QWORD *)(a1 + 8);
    if ( 0x7FFFFFFFFFFFFFFFLL - v20 < a5 )
LABEL_51:
      std::__throw_length_error("basic_string::append");
    while ( 1 )
    {
      v22 = *(_BYTE **)a1;
      v30 = a5 + v20;
      v31 = v5 == *(_BYTE **)a1 ? 15LL : *(_QWORD *)(a1 + 16);
      if ( v30 <= v31 )
      {
        if ( a5 )
        {
          v21 = &v22[v20];
          if ( a5 == 1 )
            *v21 = *a4;
          else
            memcpy(v21, a4, a5);
          v22 = *(_BYTE **)a1;
        }
      }
      else
      {
        sub_998B30(a1, v20, 0, a4, a5);
        v22 = *(_BYTE **)a1;
      }
      *(_QWORD *)(a1 + 8) = v30;
      v22[v30] = 0;
      v23 = *(_QWORD *)(v19 + 8);
      v24 = *(_QWORD *)(a1 + 8);
      v25 = *(_BYTE **)a1;
      v26 = *(_BYTE **)v19;
      v27 = v23 + v24;
      v28 = v5 == *(_BYTE **)a1 ? 15LL : *(_QWORD *)(a1 + 16);
      if ( v27 > v28 )
      {
        sub_998B30(a1, v24, 0, v26, v23);
        v25 = *(_BYTE **)a1;
      }
      else if ( v23 )
      {
        v29 = &v25[v24];
        if ( v23 == 1 )
          *v29 = *v26;
        else
          memcpy(v29, *(const void **)v19, *(_QWORD *)(v19 + 8));
        v25 = *(_BYTE **)a1;
      }
      v19 += 32;
      *(_QWORD *)(a1 + 8) = v27;
      v25[v27] = 0;
      if ( v19 == a3 )
        break;
      v20 = *(_QWORD *)(a1 + 8);
      if ( a5 > 0x7FFFFFFFFFFFFFFFLL - v20 )
        goto LABEL_51;
    }
  }
  return a1;
}
