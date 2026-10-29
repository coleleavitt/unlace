__int64 __fastcall sub_102B0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx

  v2 = *(_QWORD *)(a1 + 16);
  result = *(unsigned int *)(a2 + 48);
  if ( !*(_BYTE *)(v2 + 248) || !*(_QWORD *)(v2 + 120) || *(_WORD *)(v2 + 520) != 1 )
  {
    if ( (result & 2) != 0 )
    {
      result = (unsigned int)result & 0xFFFFFFFD;
      *(_DWORD *)(a2 + 48) = result;
      v2 = *(_QWORD *)(a1 + 16);
    }
    else if ( (unsigned int)result <= 0xFFFFFF )
    {
      *(_QWORD *)(a2 + 24) = 0;
      return result;
    }
  }
  if ( ((unsigned int)result & 0xFF000000) > 0x4FFFFFF && (result & 0x800000) != 0 )
  {
    v4 = *(_QWORD *)(v2 + 600);
    result = sub_101F0(9u, "BE8", 1);
    *(_BYTE *)(v4 + 122) = 1;
  }
  return result;
}

