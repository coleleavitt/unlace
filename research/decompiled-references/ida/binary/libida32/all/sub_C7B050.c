void __fastcall sub_C7B050(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  bool v5; // zf
  int v6; // r8d
  unsigned __int64 v7; // rax
  __int64 v8; // rdx

  if ( a4 )
  {
    v5 = a5 == 0;
    v6 = 0;
    v7 = 0;
    if ( v5 )
    {
      do
      {
        if ( ((unsigned __int8)(1 << (v6 & 7)) & *(_BYTE *)(a2 + (v7 >> 3))) != 0 )
          *(_BYTE *)(a1[1] + ((a3 + v7) >> 3)) |= 1 << ((a3 + v7) & 7);
        v7 = (unsigned int)++v6;
      }
      while ( v6 != a4 );
    }
    else
    {
      v8 = a4 + a3;
      do
      {
        if ( ((unsigned __int8)(1 << (v6 & 7)) & *(_BYTE *)(a2 + (v7 >> 3))) != 0 )
          *(_BYTE *)(a1[1] + ((*a1 + v7 - v8) >> 3)) |= 1 << ((*(_BYTE *)a1 + v7 - v8) & 7);
        v7 = (unsigned int)++v6;
      }
      while ( a4 != v6 );
    }
  }
}

