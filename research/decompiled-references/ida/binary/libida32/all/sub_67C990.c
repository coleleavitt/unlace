__int64 __fastcall sub_67C990(_QWORD *a1, unsigned int a2)
{
  _QWORD *v2; // rbp
  unsigned int *v3; // rax
  unsigned int v4; // r11d

  v2 = *(_QWORD **)(*a1 + 1648LL);
  v3 = sub_67BFA0(v2, a2);
  if ( v3 == (unsigned int *)(v2[2] + 8LL * v2[3]) )
    return 0;
  if ( v4 == -1 )
    return *(_QWORD *)v3;
  if ( (*(_BYTE *)(a1[2] + 12LL) & 8) != 0 )
    v4 &= ~1u;
  if ( v4 < *v3 )
    return 0;
  else
    return *(_QWORD *)v3;
}

