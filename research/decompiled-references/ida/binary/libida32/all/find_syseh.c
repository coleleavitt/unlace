__int64 __fastcall find_syseh(unsigned int a1)
{
  _QWORD *v1; // rbp
  _QWORD *v2; // rbx
  unsigned int *v3; // rax
  unsigned int v4; // r11d
  unsigned int v5; // edx

  v1 = *(_QWORD **)(qword_2CA1698 + 1480);
  v2 = *(_QWORD **)(*v1 + 1648LL);
  v3 = sub_67BFA0(v2, a1);
  if ( v3 == (unsigned int *)(v2[2] + 8LL * v2[3]) )
    return 0xFFFFFFFFLL;
  v5 = *v3;
  if ( v4 != -1 )
  {
    if ( (*(_BYTE *)(v1[2] + 12LL) & 8) != 0 )
      v4 &= ~1u;
    if ( v4 < v5 )
      return 0xFFFFFFFFLL;
  }
  if ( v5 >= v3[1] )
    return 0xFFFFFFFFLL;
  else
    return v5;
}

