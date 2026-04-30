unsigned __int64 __fastcall sub_5125B0(__int64 a1)
{
  unsigned __int64 v1; // rdx
  unsigned int v2; // eax
  unsigned __int64 v3; // rbx
  const char *v4; // rax

  v1 = *(_QWORD *)(a1 + 64);
  v2 = -1;
  v3 = 0xFFFFFFFFLL;
  if ( v1 )
  {
    v3 = (unsigned int)(v1 - 1);
    if ( v3 < v1 )
    {
      if ( *(_QWORD *)(a1 + 56) + 48 * v3 )
      {
        v4 = sub_511DC0((_QWORD *)(*(_QWORD *)(a1 + 56) + 48 * v3), nullptr);
        v2 = qustrlen(v4);
      }
    }
  }
  return (v3 << 32) | v2;
}
