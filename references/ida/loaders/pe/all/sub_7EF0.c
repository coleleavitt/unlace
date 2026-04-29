__int64 __fastcall sub_7EF0(__int64 a1, char *a2)
{
  char v2; // r12
  char *v3; // r15
  __int64 v4; // rbp
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v7; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  v2 = *a2;
  if ( *a2 )
  {
    v3 = a2;
    do
    {
      ++v3;
      if ( v2 >= 0 && !(unsigned __int8)is_cp_graphical() )
        v2 = 95;
      v4 = *(_QWORD *)(a1 + 8);
      v5 = 2;
      if ( v4 )
        v5 = v4-- + 1;
      v6 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) < v5 )
      {
        v7 = qvector_reserve();
        *(_QWORD *)a1 = v7;
        v6 = v7;
      }
      *(_QWORD *)(a1 + 8) = v5;
      *(_BYTE *)(v6 + v4) = v2;
      *(_BYTE *)(*(_QWORD *)a1 + v4 + 1) = 0;
      v2 = *v3;
    }
    while ( *v3 );
  }
  return a1;
}
