unsigned __int64 __fastcall sub_ECE640(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
  if ( v1 && (*(_BYTE *)(v1 + 28) & 0x7Fu) - 40 >= 7 )
    v1 = 0;
  return sub_B4F900(v1);
}

