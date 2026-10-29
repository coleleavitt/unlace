__int64 __fastcall sub_B99A70(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  char v3; // al

  result = 0;
  if ( (*(_DWORD *)(a1 + 20) & 0x1FFFFFFF) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    v3 = *(_BYTE *)(v2 + 28) & 0x7F;
    if ( v3 == 67 )
    {
      return *(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 48) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 20LL) & 0x7FFF;
    }
    else if ( v3 == 47 )
    {
      return *(_DWORD *)(v2 + 68) & 0xFFFFF;
    }
    else
    {
      return *(_DWORD *)(v2 + 64) & 0xFFFFF;
    }
  }
  return result;
}

