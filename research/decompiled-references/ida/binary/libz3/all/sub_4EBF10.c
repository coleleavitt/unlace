__int64 __fastcall sub_4EBF10(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r13
  int v3; // r12d
  __int64 v4; // rbx
  __int64 v5; // rsi

  v1 = *(_DWORD *)(a1 + 48);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v1 )
  {
    v3 = 8 * v1;
    v4 = 0;
    do
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v4++);
      v3 += sub_553640(v2, v5);
    }
    while ( (unsigned int)v4 < *(_DWORD *)(a1 + 48) );
  }
  else
  {
    v3 = 0;
  }
  return (unsigned int)(v3 + 128);
}

