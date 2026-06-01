void __fastcall sub_20B4C70(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rax
  unsigned __int64 v3; // rax

  if ( (*(_BYTE *)(a1 + 7) & 0x20) != 0 )
  {
    v2 = (_QWORD *)sub_20CB0D0(a1);
    v3 = sub_20AF680(*v2 + 2712LL, a1);
    sub_20B4AB0((unsigned int **)(v3 + 8), a2);
  }
}
