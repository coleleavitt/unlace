void __fastcall sub_20B31B0(__int64 a1)
{
  unsigned __int8 v1; // al
  _QWORD **v2; // rbx
  __int64 v3; // rdx
  _QWORD **i; // rbp
  _QWORD *v5; // r11

  v1 = *(_BYTE *)(a1 - 16);
  if ( (v1 & 2) != 0 )
  {
    v2 = *(_QWORD ***)(a1 - 32);
    v3 = *(unsigned int *)(a1 - 24);
  }
  else
  {
    v3 = (*(_WORD *)(a1 - 16) >> 6) & 0xF;
    v2 = (_QWORD **)(a1 - 8LL * ((v1 >> 2) & 0xF) - 16);
  }
  for ( i = &v2[v3]; i != v2; ++v2 )
  {
    if ( *v2 )
    {
      sub_20A0850((__int64)v2, *v2);
      *v2 = v5;
      sub_20B2EE0((__int64)v2, v5, a1 & 0xFFFFFFFFFFFFFFFCLL | 1);
    }
  }
  *(_BYTE *)(a1 + 1) &= 0x80u;
  sub_20A0C20(a1);
  if ( !*(_DWORD *)(a1 - 8) )
    sub_20ABEC0(a1);
}
