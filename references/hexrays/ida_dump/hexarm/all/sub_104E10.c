unsigned __int64 __fastcall sub_104E10(__int64 *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // r13
  __int64 v15; // rax
  __int64 v16[2]; // [rsp+0h] [rbp-48h] BYREF
  int v17; // [rsp+10h] [rbp-38h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v3 = a1[1];
  v18 = __readfsqword(0x28u);
  if ( a2 < v3 )
  {
    v14 = a2;
    do
    {
      v15 = 3 * v14++;
      qfree(*(_QWORD *)(*a1 + 8 * v15));
    }
    while ( v3 != v14 );
    a1[1] = a2;
  }
  else if ( v3 < a2 )
  {
    v6 = *a1;
    v7 = a1[2];
    if ( a3 < *a1 || a3 >= v6 + 24 * v7 )
    {
      if ( v7 >= a2 || (v11 = qvector_reserve(a1, v6, a2, 24), v3 = a1[1], *a1 = v11, v6 = v11, v3 < a2) )
      {
        while ( 1 )
        {
          v12 = 3 * v3++;
          v13 = v6 + 8 * v12;
          sub_63A00((__int64 *)v13, a3);
          *(_DWORD *)(v13 + 16) = *(_DWORD *)(a3 + 16);
          if ( v3 >= a2 )
            break;
          v6 = *a1;
        }
        a1[1] = a2;
      }
      else
      {
        a1[1] = a2;
      }
    }
    else
    {
      sub_63A00(v16, a3);
      v17 = *(_DWORD *)(a3 + 16);
      if ( a1[2] < a2 )
        *a1 = qvector_reserve(a1, *a1, a2, 24);
      v9 = a1[1];
      if ( v9 < a2 )
      {
        do
        {
          v10 = *a1 + 24 * v9;
          sub_63A00((__int64 *)v10, (__int64)v16);
          ++v9;
          *(_DWORD *)(v10 + 16) = v17;
        }
        while ( a2 != v9 );
      }
      a1[1] = a2;
      qfree(v16[0]);
    }
  }
  return v18 - __readfsqword(0x28u);
}
