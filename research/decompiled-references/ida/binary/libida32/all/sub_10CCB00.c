__int64 __fastcall sub_10CCB00(__int64 a1, unsigned __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rbx
  unsigned __int64 v5; // r13
  size_t v6; // r12
  size_t v7; // r14
  size_t v8; // rdx
  int v9; // eax
  __int64 v10; // rax
  char v11; // cl
  unsigned __int64 v12; // rbp
  __int64 result; // rax
  __int64 v14; // r12
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // r13
  const void *v17; // rsi
  size_t v18; // rdx
  int v19; // eax
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-40h]

  v2 = a1;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
    v4 = a1 + 8;
    goto LABEL_30;
  }
  v5 = *a2;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v4 + 32);
    if ( v12 > v5 )
      break;
    if ( v12 != v5 )
      goto LABEL_9;
    v6 = a2[2];
    v7 = *(_QWORD *)(v4 + 48);
    v8 = v7;
    if ( v6 <= v7 )
      v8 = a2[2];
    if ( !v8 || (v22 = v2, v9 = memcmp((const void *)a2[1], *(const void **)(v4 + 40), v8), v2 = v22, !v9) )
    {
      v14 = v6 - v7;
      if ( v14 > 0x7FFFFFFF )
        goto LABEL_9;
      if ( v14 < (__int64)0xFFFFFFFF80000000LL )
        break;
      v9 = v14;
    }
    if ( v9 < 0 )
      break;
LABEL_9:
    v10 = *(_QWORD *)(v4 + 24);
    v11 = 0;
    if ( !v10 )
      goto LABEL_13;
LABEL_10:
    v4 = v10;
  }
  v10 = *(_QWORD *)(v4 + 16);
  v11 = 1;
  if ( v10 )
    goto LABEL_10;
LABEL_13:
  if ( !v11 )
    goto LABEL_14;
LABEL_30:
  result = 0;
  if ( *(_QWORD *)(v2 + 24) != v4 )
  {
    v21 = std::_Rb_tree_decrement();
    v5 = *a2;
    v12 = *(_QWORD *)(v21 + 32);
    v4 = v21;
LABEL_14:
    if ( v12 < v5 )
      return 0;
    if ( v12 == v5 )
    {
      v15 = *(_QWORD *)(v4 + 48);
      v16 = a2[2];
      v17 = (const void *)a2[1];
      v18 = a2[2];
      if ( v15 <= v16 )
        v18 = *(_QWORD *)(v4 + 48);
      v19 = sub_990B80(*(const void **)(v4 + 40), v17, v18);
      if ( v19 )
      {
LABEL_27:
        if ( v19 < 0 )
          return 0;
      }
      else
      {
        v20 = v15 - v16;
        if ( v20 <= 0x7FFFFFFF )
        {
          if ( v20 < (__int64)0xFFFFFFFF80000000LL )
            return 0;
          v19 = v20;
          goto LABEL_27;
        }
      }
    }
    return v4;
  }
  return result;
}

