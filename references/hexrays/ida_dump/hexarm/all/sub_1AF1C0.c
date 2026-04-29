const char *__fastcall sub_1AF1C0(_QWORD *a1)
{
  __int64 module_data; // rax
  __int64 v2; // r14
  int v3; // edx
  __int64 *v4; // rbp
  unsigned __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // [rsp+0h] [rbp-58h]
  unsigned __int64 v14; // [rsp+8h] [rbp-50h]
  __int64 v15; // [rsp+18h] [rbp-40h]

  module_data = get_module_data((unsigned int)dword_4EB8F8);
  v2 = *(_QWORD *)(module_data + 1024);
  v13 = *(int *)(v2 + 384);
  v3 = *(_DWORD *)(v2 + 384) + 1;
  v4 = (__int64 *)(v2 + 24 * v13 + 144);
  *(_DWORD *)(v2 + 384) = v3;
  if ( v3 == 10 )
    *(_DWORD *)(*(_QWORD *)(module_data + 1024) + 384LL) = 0;
  *(_QWORD *)(v2 + 24 * v13 + 152) = 0;
  v5 = 0;
  if ( !a1[1] )
    return s1;
  while ( 1 )
  {
    v6 = *(_DWORD *)(*a1 + 4 * v5++);
    sub_FA510(v4, (__int64)"%d", v6);
    if ( v5 >= a1[1] )
      break;
    v7 = *(_QWORD *)(v2 + 24 * v13 + 152);
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = *(_QWORD *)(v2 + 24 * v13 + 152);
      --v7;
      if ( *(_QWORD *)(v2 + 24 * v13 + 160) >= v8 )
        goto LABEL_7;
    }
    else
    {
      v9 = 1;
      v8 = 2;
      if ( *(_QWORD *)(v2 + 24 * v13 + 160) >= 2u )
        goto LABEL_7;
    }
    v15 = v9;
    v14 = v8;
    v11 = qvector_reserve(v4, *(_QWORD *)(v2 + 24 * v13 + 144), v8, 1);
    v9 = v15;
    v8 = v14;
    *(_QWORD *)(v2 + 24 * v13 + 144) = v11;
LABEL_7:
    v10 = *v4;
    *(_QWORD *)(v2 + 24 * v13 + 152) = v8;
    *(_BYTE *)(v10 + v7) = 44;
    *(_BYTE *)(*v4 + v9) = 0;
  }
  if ( *(_QWORD *)(v2 + 24 * v13 + 152) )
    return (const char *)*v4;
  return s1;
}
