unsigned __int64 __fastcall sub_517450(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rbp
  __int64 v4; // r15
  __int64 v5; // rsi
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rsi
  __int64 v10; // [rsp+8h] [rbp-50h]
  int v11; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  if ( *((_BYTE *)a1 + 32) )
  {
    if ( !under_debugger )
      interr(1732);
    BUG();
  }
  v2 = a2;
  v3 = (__int64)a1 + 36;
  v10 = a1[2];
  if ( a2 < (unsigned int)v10 )
  {
    v3 = (__int64)a1 + 36;
    v4 = 4LL * a2;
    do
    {
      v5 = *a1;
      v6 = v2++;
      v7 = *(_DWORD *)(a1[1] + v4);
      v4 += 4;
      v11 = v7 + 1;
      sub_79B440(v3, v5, v6, &v11, 4, 65);
    }
    while ( v2 < (unsigned int)v10 );
  }
  v8 = *a1;
  v11 = v10;
  sub_79B440(v3, v8, 0xFFFFFFFFLL, &v11, 4, 65);
  return v12 - __readfsqword(0x28u);
}

