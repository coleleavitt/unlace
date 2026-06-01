__int64 __fastcall sub_B545B0(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // dl

  result = sub_F466F0(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL));
  if ( result )
  {
    result = *(_QWORD *)(*(_QWORD *)(result + 56) + 16LL);
    v2 = *(_BYTE *)(result + 28) & 0x7F;
    if ( v2 == 32 )
    {
      result = *(_QWORD *)(*(_QWORD *)(result + 56) + 8LL * *(unsigned int *)(result + 64) - 8);
      v2 = *(_BYTE *)(result + 28) & 0x7F;
    }
    if ( (unsigned int)v2 - 49 >= 3 )
      return 0;
  }
  return result;
}

