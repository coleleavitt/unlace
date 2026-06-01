__int64 __fastcall sub_21F9D00(__int64 *a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  __int64 *v4; // rbx
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  unsigned int v7; // eax

  v2 = *a1;
  *((_DWORD *)a1 + 4) += a2;
  v3 = *(_DWORD *)(v2 + 8) + 64;
  if ( v3 > 0x7F )
  {
    v5 = v3 >> 6;
    v4 = (__int64 *)a1[1];
  }
  else
  {
    v4 = a1 + 1;
    v5 = 1;
  }
  v6 = 0;
  v7 = sub_2209840(v4, v5);
  if ( a2 > v7 )
  {
    if ( a2 == v7 + 1 )
    {
      v6 = 2;
    }
    else if ( a2 > v5 << 6 || (v6 = 3, !(unsigned int)sub_22097E0(v4, a2 - 1)) )
    {
      v6 = 1;
    }
  }
  sub_220A970(v4, v5, a2);
  return v6;
}
