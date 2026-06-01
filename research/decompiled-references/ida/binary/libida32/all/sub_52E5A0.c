__int64 __fastcall sub_52E5A0(__int64 a1, __int64 a2, char a3)
{
  int v4; // ebp
  unsigned int v5; // edx
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  _QWORD *v8; // rax
  unsigned __int64 v9; // rax
  __int64 v11; // rsi
  unsigned __int8 v13; // [rsp+Fh] [rbp-39h]

  sub_528B00(a1);
  if ( *(_QWORD *)(a1 + 152) <= 1u )
  {
    return 0;
  }
  else
  {
    v4 = 1;
    v5 = 0;
    v6 = 1;
    do
    {
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v6);
      if ( v7 && (v8 = *(_QWORD **)(v7 + 32)) != nullptr && *v8 == a2 )
      {
        v13 = v5;
        sub_528250(v7, 0);
        v9 = *(_QWORD *)(a1 + 152);
        v5 = v13;
        if ( v6 < v9 )
        {
          v11 = *(_QWORD *)(a1 + 144);
          LOBYTE(v11) = a3 & (*(_QWORD *)(v11 + 8 * v6) != 0);
          if ( (_BYTE)v11 )
          {
            *(_WORD *)(v7 + 68) |= 0x800u;
            v5 = v11;
            v9 = *(_QWORD *)(a1 + 152);
          }
        }
      }
      else
      {
        v9 = *(_QWORD *)(a1 + 152);
      }
      v6 = ++v4;
    }
    while ( v4 < v9 );
  }
  return v5;
}

