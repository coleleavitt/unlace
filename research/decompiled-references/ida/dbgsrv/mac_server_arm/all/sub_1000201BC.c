/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000201BC
// Address: 0x00000001000201BC

//----- (00000001000201BC) ----------------------------------------------------
__int64 __fastcall sub_1000201BC(__int64 a1, __int64 a2)
{
  const char *v3; // x2
  size_t v4; // x20
  char *v5; // x1
  __int64 v6; // x22
  char *v7; // x20
  size_t v8; // x0
  size_t v9; // x21
  unsigned __int64 v10; // x23
  void *v11; // x0
  char *__s; // [xsp+8h] [xbp-68h] BYREF
  __int64 v14; // [xsp+10h] [xbp-60h]
  unsigned __int64 v15; // [xsp+18h] [xbp-58h]
  void *__src; // [xsp+20h] [xbp-50h] BYREF
  unsigned __int64 v17; // [xsp+28h] [xbp-48h]
  __int64 v18; // [xsp+30h] [xbp-40h]

  __src = nullptr;
  v17 = 0;
  v18 = 0;
  if ( *(_QWORD *)(a1 + 16) )
    v3 = *(const char **)(a1 + 8);
  else
    v3 = &byte_100075A30;
  if ( (eval_expr(a2, -1, v3, (__int64)&__src) & 1) != 0 )
    goto LABEL_26;
  __s = nullptr;
  v14 = 0;
  v15 = 0;
  __s = (char *)qvector_reserve(&__s, nullptr, 0xEu, 1u);
  v14 = 14;
  strcpy(__s, "IDC_FAILURE: ");
  if ( v17 )
    v4 = v17 - 1;
  else
    v4 = 0;
  if ( v17 >= 2 )
  {
    v5 = __s;
    if ( v14 )
      v6 = v14 - 1;
    else
      v6 = 0;
    if ( v15 < v6 + v4 + 1 )
    {
      v5 = (char *)qvector_reserve(&__s, __s, v6 + v4 + 1, 1u);
      __s = v5;
    }
    v14 = v6 + v4 + 1;
    v5[v6 + v4] = 0;
    memcpy(&__s[v6], __src, v4);
  }
  if ( !v14 )
  {
    v7 = &byte_100075A30;
LABEL_19:
    v8 = strlen(v7);
    *(_BYTE *)a2 = 7;
    *(_QWORD *)(a2 + 8) = 0;
    *(_QWORD *)(a2 + 16) = 0;
    *(_QWORD *)(a2 + 24) = 0;
    if ( v8 )
    {
      v9 = v8;
      v10 = v8 + 1;
      if ( v8 == -1 )
      {
        v11 = nullptr;
      }
      else
      {
        v11 = qvector_reserve((_QWORD *)(a2 + 8), nullptr, v10, 1u);
        *(_QWORD *)(a2 + 8) = v11;
      }
      *(_QWORD *)(a2 + 16) = v10;
      memmove(v11, v7, v9);
      *(_BYTE *)(*(_QWORD *)(a2 + 8) + v9) = 0;
    }
    goto LABEL_24;
  }
  v7 = __s;
  if ( __s )
    goto LABEL_19;
  *(_BYTE *)a2 = 7;
  *(_QWORD *)(a2 + 16) = 0;
  *(_QWORD *)(a2 + 24) = 0;
  *(_QWORD *)(a2 + 8) = 0;
LABEL_24:
  if ( __s )
  {
    v14 = 0;
    qfree(__s);
  }
LABEL_26:
  if ( __src )
  {
    v17 = 0;
    qfree(__src);
  }
  return 0;
}
// 100075A30: using guessed type char byte_100075A30;
