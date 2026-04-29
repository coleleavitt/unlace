__int64 __fastcall sub_1356B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebp
  __int64 v7; // rbx
  bool v8; // al

  v6 = 0;
  v7 = *(_QWORD *)(a1 + 520);
  if ( !v7 )
    goto LABEL_4;
  do
  {
    v8 = sub_135020((_QWORD *)v7, a2, a3, a4, a5, a6);
    *(_DWORD *)(v7 + 24) |= 0x20u;
    v7 = *(_QWORD *)(v7 + 8);
    v6 += v8;
  }
  while ( v7 );
  if ( v6 > 0 )
  {
    sub_60A20(a1, 1u, (__int64)"gen_jnz_assertions");
    *(_DWORD *)a1 |= 0x800u;
    return (unsigned int)v6;
  }
  else
  {
LABEL_4:
    *(_DWORD *)a1 |= 0x800u;
    return (unsigned int)v6;
  }
}
