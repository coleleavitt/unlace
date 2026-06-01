unsigned int *__fastcall sub_4EE890(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  unsigned int *v4; // rbx
  __int64 v5; // rsi

  v2 = *(_QWORD **)(a1 + 24);
  if ( !v2 )
    return nullptr;
  v3 = v2[1];
  v4 = nullptr;
  if ( a2 < (unsigned int)v3 )
  {
    v5 = 16LL * a2;
    if ( 16 * v3 != v5 )
    {
      v4 = *(unsigned int **)(v5 + *v2);
      sub_4EE680((__int64)(v2 + 8), a1, v4);
    }
  }
  return v4;
}

