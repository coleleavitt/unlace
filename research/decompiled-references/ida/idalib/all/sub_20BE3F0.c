_BYTE *__fastcall sub_20BE3F0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 v7; // rdx
  unsigned int v8; // eax
  int v9; // eax
  __int64 *v10; // rsi
  __int64 *v11; // r12
  _BYTE *result; // rax
  __int64 *v13[4]; // [rsp+8h] [rbp-20h] BYREF

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 120);
  v5 = *(_DWORD *)(v4 + 24);
  if ( v5 >= 0 )
  {
    v7 = v5;
    if ( v5 < v3 )
    {
      v3 = 1;
      if ( v5 > 1 )
      {
        if ( a3 <= v5 )
          v7 = a3;
        v3 = v7;
      }
    }
  }
  v8 = sub_2244B30(a2, v3);
  v9 = sub_2244E60(v4, a2, v3, v8);
  if ( v9 == -1 )
    v10 = (__int64 *)(*(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8));
  else
    v10 = (__int64 *)(*(_QWORD *)v4 + 8LL * v9);
  sub_201AFA0(v13, v10, 1);
  v11 = v13[0];
  sub_201AFA0(v13, (__int64 *)(*(_QWORD *)v4 + 8LL * *(unsigned int *)(v4 + 8)), 1);
  if ( v13[0] == v11 )
    return nullptr;
  result = *(_BYTE **)(*v11 + 8);
  if ( result )
  {
    if ( *result != 13 )
      return nullptr;
  }
  return result;
}
