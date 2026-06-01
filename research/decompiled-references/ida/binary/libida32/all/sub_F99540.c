__int64 __fastcall sub_F99540(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v6; // rdx
  unsigned __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 i; // r8

  v3 = *(_DWORD *)(a2 + 168);
  v4 = a3;
  if ( a3 < v3 + 1499 )
  {
    v6 = *(_QWORD *)a2;
    if ( v4 > 0x5DA )
    {
      v6 = *(_QWORD *)(a2 + 56);
      v4 -= 1499;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 112);
    v4 = v4 - 1499 - v3;
  }
  v7 = *(_QWORD *)(v6 + 16);
  v8 = v4;
  for ( i = v6 + 40; v4 >= v7; v8 = v4 )
  {
    v6 = i;
    i += 40;
    v4 -= v7;
    v7 = *(_QWORD *)(i - 24);
  }
  sub_F994D0(a1, (unsigned int *)(*(_QWORD *)(v6 + 8) + 20 * v8), v6);
  return a1;
}

