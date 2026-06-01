void *__fastcall sub_216F4B0(__int64 a1, __int64 a2, _QWORD *a3)
{
  void *result; // rax
  __int64 v5; // rdi
  size_t v6; // rdx
  size_t v7; // rbp
  const void *v8; // r12
  size_t v9; // rdx
  _BYTE *v10; // rax
  __int64 v11; // rdx
  _BYTE *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r13
  _BYTE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r13
  _BYTE *v20; // [rsp+8h] [rbp-30h]
  _BYTE *v21; // [rsp+8h] [rbp-30h]

  if ( *(_WORD *)(*(_QWORD *)a1 + 18LL) == 2048 && *(_BYTE *)(*(_QWORD *)a1 + 4LL) == 2 )
  {
    v10 = (_BYTE *)sub_216EA90(a1);
    sub_A1FE50(a3, v10, &v10[v11]);
    v12 = (_BYTE *)sub_216EA90(a1);
    v13 = a3[1];
    v15 = v14;
    if ( (unsigned __int64)(v13 + 1) > a3[2] )
    {
      v20 = v12;
      sub_2236E10(a3, a3 + 3, v13 + 1, 1);
      v13 = a3[1];
      v12 = v20;
    }
    *(_BYTE *)(*a3 + v13) = 47;
    ++a3[1];
    sub_A1FE50(a3, v12, &v12[v15]);
    v16 = (_BYTE *)sub_216EA90(a1);
    v17 = a3[1];
    v19 = v18;
    if ( (unsigned __int64)(v17 + 1) > a3[2] )
    {
      v21 = v16;
      sub_2236E10(a3, a3 + 3, v17 + 1, 1);
      v17 = a3[1];
      v16 = v21;
    }
    *(_BYTE *)(*a3 + v17) = 47;
    ++a3[1];
    return sub_A1FE50(a3, v16, &v16[v19]);
  }
  else
  {
    result = (void *)sub_216EA90(a1);
    v5 = a3[1];
    v7 = v6;
    v8 = result;
    v9 = v6 + v5;
    if ( v9 > a3[2] )
    {
      result = (void *)sub_2236E10(a3, a3 + 3, v9, 1);
      v5 = a3[1];
    }
    if ( v7 )
    {
      result = memcpy((void *)(*a3 + v5), v8, v7);
      v5 = a3[1];
    }
    a3[1] = v5 + v7;
  }
  return result;
}
