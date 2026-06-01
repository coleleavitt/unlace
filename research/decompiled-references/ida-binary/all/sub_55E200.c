__int64 __fastcall sub_55E200(__int64 a1, unsigned int a2)
{
  _DWORD *v2; // rcx
  __int64 v3; // rdi
  unsigned int v4; // r8d
  __int64 v5; // rax
  unsigned int v6; // esi
  __int64 v7; // rsi

  if ( a2 >= *(_DWORD *)(a1 + 8) )
    sub_55D340(a1);
  v2 = (_DWORD *)(*(_QWORD *)a1 + 48LL * a2);
  v3 = *(_QWORD *)v2;
  v4 = v2[4];
  v5 = *(unsigned int *)(*(_QWORD *)v2 + 216LL);
  v6 = *(_DWORD *)(*(_QWORD *)v2 + 220LL);
  if ( v2[10] == 1 )
  {
    v5 = (unsigned int)(v5 + 600);
    if ( v6 >= v4 )
    {
      v7 = v6 - v4;
    }
    else
    {
      v2[4] = v6;
      v7 = 0;
    }
  }
  else
  {
    if ( !*(_WORD *)v3 && !*(_QWORD *)(v3 + 24) )
      v5 = (unsigned int)(v5 + 500);
    if ( v6 < v4 )
    {
      v2[4] = v6;
      v7 = 0;
    }
    else
    {
      v7 = v6 - v4;
    }
  }
  return (v7 << 32) | v5;
}
