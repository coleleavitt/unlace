__int64 __fastcall sub_8201F0(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  result = 0;
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 8LL) )
  {
    v2 = *(_DWORD *)(a1 + 964);
    if ( v2 <= 1 || v2 - 2 <= 1 && (result = *(unsigned __int8 *)(a1 + 961), (_BYTE)result) )
    {
      *(_BYTE *)(a1 + 960) = 0;
      return 1;
    }
  }
  return result;
}

