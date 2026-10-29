__int64 __fastcall sub_E23120(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rax

  result = 0;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    v3 = *(unsigned int *)(a1 + 40);
    v4 = *(_QWORD *)(v2 + 32);
    if ( *(_DWORD *)(v4 + 24) != (_DWORD)v3 && (_DWORD)v3 )
      v4 = *(_QWORD *)(v2 + (unsigned int)v3 + 32);
    result = *(unsigned __int8 *)(v4 + 60);
    if ( !(_BYTE)result || (unsigned int)v3 == *(_QWORD *)a1 )
    {
      result = 0;
      if ( (unsigned int)v3 > 0xF )
        return *(_BYTE *)(v2 + v3 + 28) >> 7;
    }
  }
  return result;
}
