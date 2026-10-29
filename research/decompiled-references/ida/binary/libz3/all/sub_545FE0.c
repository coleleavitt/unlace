_QWORD *__fastcall sub_545FE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, _DWORD *a5, _DWORD *a6)
{
  _DWORD *v7; // rdi
  _QWORD *result; // rax
  unsigned int v12; // r14d
  size_t v13; // rdx
  __int64 v14; // rdx
  _DWORD *v15; // rcx
  _DWORD *v16; // rdx
  _DWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // [rsp+0h] [rbp-50h]
  void *v22[2]; // [rsp+8h] [rbp-48h] BYREF
  int v23; // [rsp+18h] [rbp-38h]

  if ( a1 != *(_QWORD *)(a2 + 8) )
    return nullptr;
  if ( a1 != *(_QWORD *)(a3 + 8) )
    return nullptr;
  v7 = *(_DWORD **)(a2 + 16);
  result = *(_QWORD **)(a3 + 16);
  if ( v7 )
  {
    v12 = *(v7 - 1);
    if ( !result )
    {
      v13 = 0;
      if ( v12 )
        return result;
      goto LABEL_9;
    }
    goto LABEL_5;
  }
  if ( result )
  {
    v12 = 0;
LABEL_5:
    v13 = 8LL * v12;
    if ( *((_DWORD *)result - 1) != v12 )
      return nullptr;
    goto LABEL_9;
  }
  v13 = 0;
  v12 = 0;
LABEL_9:
  if ( memcmp(v7, result, v13) || a4 != v12 )
    return nullptr;
  v14 = a4;
  v15 = &a6[v14];
  v16 = &a5[v14];
  if ( v15 == a6 || (v17 = a5, v16 == a5) )
  {
    v17 = a5;
  }
  else
  {
    do
    {
      if ( *v17 != *a6 )
        break;
      ++a6;
      ++v17;
      if ( v15 == a6 )
        break;
    }
    while ( v16 != v17 );
  }
  if ( v16 != v17 )
    return nullptr;
  if ( v15 != a6 )
    return nullptr;
  v18 = (_QWORD *)sub_186B270(0x80u);
  *v18 = 0;
  v18[2] = 0;
  v18[4] = 0;
  v18[6] = 0;
  v18[8] = 0;
  v18[10] = 0;
  v18[12] = 0;
  v18[14] = 0;
  v22[0] = v18;
  v22[1] = &byte_8;
  v23 = 0;
  sub_148B660(v22, a4, a5, 1);
  if ( (int)sub_148BBB0(v22) > 1 || a4 && a4 - 1 != (unsigned int)sub_148BAF0(v22) )
  {
    result = nullptr;
  }
  else
  {
    result = (_QWORD *)sub_186B270(0x18u);
    v19 = *(_QWORD *)(a1 + 40);
    v20 = *(_QWORD *)(a1 + 48);
    *result = &off_1C50B48;
    result[1] = v19;
    result[2] = v20;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
  }
  if ( v22[0] )
  {
    v21 = result;
    sub_186B220(v22[0]);
    return v21;
  }
  return result;
}

