__int64 __fastcall sub_5A0B20(__int64 a1)
{
  unsigned int *v1; // rax
  __int64 v2; // rdx
  unsigned int *v3; // rsi
  int v4; // ecx
  unsigned int v5; // edi

  v1 = (unsigned int *)sub_59EB00(*(_QWORD **)(qword_2CA1698 + 1480), a1);
  if ( !v1 )
    return 0xFFFFFFFFLL;
  v2 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v2 )
    return 0xFFFFFFFFLL;
  v3 = &v1[2 * v2];
  v4 = 0x7FFFFFFF;
  v5 = -1;
  do
  {
    if ( v4 > (int)v1[1] )
    {
      v5 = *v1;
      v4 = v1[1];
    }
    v1 += 2;
  }
  while ( v3 != v1 );
  return v5;
}

