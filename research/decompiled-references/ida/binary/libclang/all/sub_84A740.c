_QWORD *__fastcall sub_84A740(__int64 *a1, __int64 *a2)
{
  int v2; // ebp
  __int64 v3; // r13
  int v4; // ebp
  int v5; // r14d
  __int64 v6; // rdx
  unsigned int i; // r12d
  _QWORD *v8; // r15
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *j; // rdx
  __int64 v13; // rdx
  unsigned int v14; // r12d
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  _QWORD *k; // rdx
  _QWORD v19[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD *v20; // [rsp+10h] [rbp-48h]
  __int64 v21; // [rsp+18h] [rbp-40h]

  v2 = *((_DWORD *)a1 + 4);
  if ( v2 )
  {
    v3 = *a1;
    v4 = v2 - 1;
    v5 = 1;
    v20 = nullptr;
    v19[0] = sub_69F620();
    v19[1] = v6;
    v21 = 0;
    for ( i = v4 & sub_84A6B0(a2, (__int64)(a2 + 2)); ; i = v4 & v14 )
    {
      v8 = (_QWORD *)(v3 + 40LL * i);
      if ( (unsigned __int8)sub_69F550(a2, v8) )
      {
        v9 = a2[3];
        if ( v9 == v8[3] )
        {
          v10 = (_QWORD *)a2[2];
          v11 = &v10[v9];
          if ( v10 == v11 )
            return v8;
          for ( j = (_QWORD *)v8[2]; *v10 == *j; ++j )
          {
            if ( v11 == ++v10 )
              return v8;
          }
        }
      }
      if ( (unsigned __int8)sub_69F550((_QWORD *)(v3 + 40LL * i), v19) )
      {
        v13 = v8[3];
        if ( v13 == v21 )
        {
          v15 = (_QWORD *)v8[2];
          v16 = &v15[v13];
          if ( v15 == v16 )
            return nullptr;
          for ( k = v20; *v15 == *k; ++k )
          {
            if ( v16 == ++v15 )
              return nullptr;
          }
        }
      }
      v14 = v5 + i;
      ++v5;
    }
  }
  return nullptr;
}

