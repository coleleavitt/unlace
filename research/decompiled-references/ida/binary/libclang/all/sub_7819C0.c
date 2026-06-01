__int64 __fastcall sub_7819C0(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  unsigned __int8 v3; // al

  v1 = sub_B11280(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v1 )
    return 0;
  v2 = *(_QWORD *)(*(_QWORD *)(v1 + 56) + 16LL);
  v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  if ( v3 == 30 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(v2 + 56) + 8LL * *(unsigned int *)(v2 + 64) - 8);
    v3 = *(_BYTE *)(v2 + 28) & 0x7F;
  }
  if ( (unsigned int)v3 - 47 >= 3 )
    return 0;
  return v2;
}

