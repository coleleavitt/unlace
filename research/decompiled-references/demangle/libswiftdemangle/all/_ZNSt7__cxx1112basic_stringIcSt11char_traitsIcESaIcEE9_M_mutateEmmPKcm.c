unsigned __int64 __fastcall std::string::_M_mutate(__int64 a1, size_t a2, __int64 a3, _BYTE *a4, size_t a5)
{
  __int64 v6; // r12
  __int64 v9; // rcx
  size_t v10; // r13
  __int64 v11; // rdx
  _BYTE *v12; // rax
  _BYTE *v13; // r15
  _BYTE *v14; // rsi
  _BYTE *v15; // rdi
  _BYTE *v16; // rsi
  _BYTE *v17; // rdi
  size_t v18; // rax
  size_t v21; // [rsp+8h] [rbp-50h]
  size_t v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v23; // [rsp+18h] [rbp-40h]

  v6 = a1 + 16;
  v9 = *(_QWORD *)(a1 + 8);
  v23 = __readfsqword(0x28u);
  v21 = a2 + a3;
  v10 = v9 - (a2 + a3);
  v22 = v9 + a5 - a3;
  if ( a1 + 16 == *(_QWORD *)a1 )
    v11 = 15;
  else
    v11 = *(_QWORD *)(a1 + 16);
  v12 = (_BYTE *)std::string::_M_create(a1, &v22, v11);
  v13 = v12;
  if ( a2 )
  {
    v14 = *(_BYTE **)a1;
    if ( a2 == 1 )
      *v12 = *v14;
    else
      memcpy(v12, v14, a2);
  }
  if ( a4 && a5 )
  {
    v15 = &v13[a2];
    if ( a5 == 1 )
      *v15 = *a4;
    else
      memcpy(v15, a4, a5);
  }
  if ( v10 )
  {
    v16 = (_BYTE *)(*(_QWORD *)a1 + v21);
    v17 = &v13[a2 + a5];
    if ( v10 == 1 )
      *v17 = *v16;
    else
      memcpy(v17, v16, v10);
  }
  if ( v6 != *(_QWORD *)a1 )
    operator delete(*(void **)a1);
  v18 = v22;
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 16) = v18;
  return v23 - __readfsqword(0x28u);
}
