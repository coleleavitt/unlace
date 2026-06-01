__int64 __fastcall sub_13ACC30(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // rbp
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  size_t v11; // r8
  size_t v12; // rsi
  __int64 v13; // rdi
  _BYTE *v14; // rcx
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rax
  _BYTE *v17; // rdi

  v4 = a1 + 16;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  sub_995C30(a1, *(_QWORD *)(a3 + 8) + 1LL);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 == 0x7FFFFFFFFFFFFFFFLL )
    std::__throw_length_error("basic_string::_M_replace_aux");
  v7 = *(_QWORD *)a1;
  v8 = v6 + 1;
  if ( v4 == *(_QWORD *)a1 )
    v9 = 15;
  else
    v9 = *(_QWORD *)(a1 + 16);
  if ( v8 > v9 )
  {
    sub_998B30(a1, *(_QWORD *)(a1 + 8), 0, nullptr, 1u);
    v7 = *(_QWORD *)a1;
  }
  *(_BYTE *)(v7 + v6) = a2;
  v10 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 8) = v8;
  *(_BYTE *)(v10 + v6 + 1) = 0;
  v11 = *(_QWORD *)(a3 + 8);
  v12 = *(_QWORD *)(a1 + 8);
  v13 = *(_QWORD *)a1;
  v14 = *(_BYTE **)a3;
  v15 = v11 + v12;
  if ( v4 == *(_QWORD *)a1 )
    v16 = 15;
  else
    v16 = *(_QWORD *)(a1 + 16);
  if ( v15 > v16 )
  {
    sub_998B30(a1, v12, 0, v14, v11);
    v13 = *(_QWORD *)a1;
  }
  else if ( v11 )
  {
    v17 = (_BYTE *)(v12 + v13);
    if ( v11 == 1 )
      *v17 = *v14;
    else
      memcpy(v17, *(const void **)a3, *(_QWORD *)(a3 + 8));
    v13 = *(_QWORD *)a1;
  }
  *(_QWORD *)(a1 + 8) = v15;
  *(_BYTE *)(v13 + v15) = 0;
  return a1;
}
