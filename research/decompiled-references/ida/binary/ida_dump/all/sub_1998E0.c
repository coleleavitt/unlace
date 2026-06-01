bool __fastcall sub_1998E0(_QWORD *a1, _QWORD *a2)
{
  int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rbx
  bool result; // al
  int v6; // r12d
  __int64 v7; // rbx
  bool v8; // r13
  bool v9; // dl

  v2 = sub_64B20((__int64)a2);
  v3 = a1[13];
  v4 = (unsigned int)(v3 - 1);
  result = (int)v3 > 0;
  v6 = v4;
  v7 = 4 * v4;
  v8 = result && v2 != 0;
  if ( v8 )
  {
    do
    {
      v9 = sub_64930(a2, *(_DWORD *)(a1[12] + v7));
      result = v8;
      if ( v9 )
      {
        memmove((void *)(v7 + a1[12]), (const void *)(v7 + a1[12] + 4), 4LL * a1[13]-- - 4 - v7);
        memmove((void *)(v7 + a1[2]), (const void *)(v7 + a1[2] + 4), 4LL * a1[3]-- - 4 - v7);
        result = --v2 != 0;
        --v6;
        v7 -= 4;
        if ( v6 == -1 )
          return result;
      }
      else
      {
        --v6;
        v7 -= 4;
        if ( v6 == -1 )
          return result;
      }
    }
    while ( result );
  }
  return result;
}
