__int64 __fastcall sub_FFC3D0(__int64 a1, int a2, unsigned int a3, _BYTE *a4)
{
  __int64 v6; // rax
  char v7; // al
  __int64 result; // rax
  char v9; // dl
  __int64 v10; // rdx
  char v11; // si
  char v12; // cl
  _DWORD *v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  unsigned int v16; // esi
  unsigned int v17; // edx
  char v18; // dl
  __m128i v19; // [rsp+0h] [rbp-58h] BYREF
  char v20; // [rsp+20h] [rbp-38h]

  v6 = sub_FFC290(a1, a2);
  if ( !v6 )
  {
    if ( a4 )
      *a4 = 1;
    return 1;
  }
  sub_FF9C60(
    &v19,
    (__int64 *)(*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFF8LL),
    *(_QWORD *)(a1 + 8),
    *(_QWORD *)(a1 + 16),
    0);
  v7 = v20;
  if ( a4 )
    *a4 = v20 ^ 1;
  if ( !v7 )
    return 1;
  if ( (unsigned __int64)a3 > v19.m128i_i64[1] )
  {
    if ( a4 )
    {
      *a4 = 1;
      return 1;
    }
    return 1;
  }
  result = a3 + 1;
  if ( *(_DWORD *)(a1 + 496) == a2 )
  {
    v13 = *(_DWORD **)(*(_QWORD *)(a1 + 504) + 40LL);
    if ( v13 )
    {
      v14 = *(unsigned int *)(a1 + 516);
      if ( (unsigned int)v14 < *v13 )
      {
        v15 = v13 + 1;
        v16 = v15[(unsigned int)(v14 - 1)];
        v17 = v15[v14];
        if ( a3 >= v16 && a3 < v17 )
        {
          if ( a3 > v16 && v17 == (_DWORD)result )
          {
            v18 = *(_BYTE *)(v19.m128i_i64[0] + a3 - 1);
            if ( v18 == 13 || v18 == 10 )
              --a3;
          }
          return a3 - v16 + 1;
        }
      }
    }
  }
  if ( !a3 )
    return 1;
  v9 = *(_BYTE *)(v19.m128i_i64[0] + a3 - 1);
  if ( v9 == 13 || v9 == 10 )
    return 1;
  if ( a3 != 1 )
  {
    v10 = a3 - 2;
    v11 = *(_BYTE *)(v19.m128i_i64[0] + v10);
    if ( v11 == 10 || v11 == 13 )
    {
      LODWORD(v10) = a3 - 1;
      return (unsigned int)(result - v10);
    }
    else
    {
      while ( (_DWORD)v10 )
      {
        v12 = *(_BYTE *)(v19.m128i_i64[0] + (unsigned int)(v10 - 1));
        if ( v12 == 13 || v12 == 10 )
          return (unsigned int)(result - v10);
        LODWORD(v10) = v10 - 1;
      }
    }
  }
  return result;
}

