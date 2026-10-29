__int64 __fastcall sub_B9BEF0(__int64 a1, int a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 128);
  if ( v2 && (*(_BYTE *)(v2 + 10) & 0x20) != 0 )
    return sub_B9BC80(a1, a2);
  else
    return 0;
}
