__int64 __fastcall sub_C05100(__int64 a1, char *a2, __int64 a3)
{
  __int64 v6; // r13
  size_t v7; // rax
  size_t v8; // rbp
  size_t v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rax
  size_t v13; // r8
  size_t v14; // rsi
  __int64 v15; // rdi
  _BYTE *v16; // rcx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  char *v21; // rdi

  v6 = a1 + 16;
  v7 = strlen(a2);
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  v8 = v7;
  *(_BYTE *)(a1 + 16) = 0;
  sub_995C30(a1, v7 + *(_QWORD *)(a3 + 8));
  v9 = *(_QWORD *)(a1 + 8);
  if ( 0x7FFFFFFFFFFFFFFFLL - v9 < v8 )
    std::__throw_length_error("basic_string::append");
  v10 = *(_QWORD *)a1;
  v11 = v9 + v8;
  if ( v6 == *(_QWORD *)a1 )
    v12 = 15;
  else
    v12 = *(_QWORD *)(a1 + 16);
  if ( v11 > v12 )
  {
    sub_998B30(a1, v9, 0, a2, v8);
    v10 = *(_QWORD *)a1;
  }
  else if ( v8 )
  {
    v21 = (char *)(v9 + v10);
    if ( v8 == 1 )
      *v21 = *a2;
    else
      memcpy(v21, a2, v8);
    v10 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v11;
  *(_BYTE *)(v10 + v11) = 0;
  v13 = *(_QWORD *)(a3 + 8);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = *(_QWORD *)a1;
  v16 = *(_BYTE **)a3;
  v17 = v13 + v14;
  if ( v6 == *(_QWORD *)a1 )
    v18 = 15;
  else
    v18 = *(_QWORD *)(a1 + 16);
  if ( v17 > v18 )
  {
    sub_998B30(a1, v14, 0, v16, v13);
    v15 = *(_QWORD *)a1;
  }
  else if ( v13 )
  {
    v19 = (_BYTE *)(v14 + v15);
    if ( v13 == 1 )
      *v19 = *v16;
    else
      memcpy(v19, *(const void **)a3, *(_QWORD *)(a3 + 8));
    v15 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v17;
  *(_BYTE *)(v15 + v17) = 0;
  return a1;
}
