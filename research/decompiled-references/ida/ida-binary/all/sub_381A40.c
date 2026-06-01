_BYTE *__fastcall str_colorizer_cbs_t__::vfunc_2(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v5; // rcx
  unsigned __int8 v7; // r12
  char v8; // dl
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rbp
  _BYTE *result; // rax
  __int64 v15; // rdi

  if ( a3 <= 0 )
  {
    result = *(_BYTE **)(a1 + 1048);
  }
  else
  {
    v5 = (unsigned int)(a4 - 1);
    v7 = 1;
    if ( (unsigned int)v5 <= 0xA )
      v7 = byte_5E91F0[v5];
    v8 = *(_BYTE *)(a1 + 1056);
    v9 = *(_QWORD *)(a1 + 1032);
    if ( v8 != v7 )
    {
      if ( v9 != a1 + 8 )
      {
        v10 = tag_off(v9, *(_QWORD *)(a1 + 1040));
        *(_QWORD *)(a1 + 1032) = v10;
        v9 = v10;
      }
      v11 = tag_on(v9, *(_QWORD *)(a1 + 1040), v7);
      *(_QWORD *)(a1 + 1032) = v11;
      v9 = v11;
    }
    v12 = a3 + 1;
    v13 = *(_QWORD *)(a1 + 1040) - v9;
    if ( v13 > v12 )
      v13 = v12;
    qstrncpy(v9, *(_QWORD *)(a1 + 1048), v13);
    *(_QWORD *)(a1 + 1032) += v13 - 1;
    result = (_BYTE *)(*(_QWORD *)(a1 + 1048) + v13 - 1);
    *(_QWORD *)(a1 + 1048) = result;
    *(_BYTE *)(a1 + 1056) = v7;
  }
  if ( !*result )
  {
    v15 = *(_QWORD *)(a1 + 1032);
    result = (_BYTE *)(a1 + 8);
    if ( v15 != a1 + 8 )
    {
      result = (_BYTE *)tag_off(v15, *(_QWORD *)(a1 + 1040));
      *(_QWORD *)(a1 + 1032) = result;
    }
  }
  return result;
}
