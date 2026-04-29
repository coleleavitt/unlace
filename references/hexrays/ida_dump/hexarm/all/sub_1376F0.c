__int64 __fastcall sub_1376F0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = *a1;
  result = *a1 + 112 * a1[1];
  if ( *a1 != result )
  {
    while ( (*(_QWORD *)v2 != *(_QWORD *)a2
          || *(_DWORD *)(v2 + 8) != *(_DWORD *)(a2 + 8)
          || *(_DWORD *)(v2 + 12) != *(_DWORD *)(a2 + 12)
          || *(_DWORD *)(v2 + 16) != *(_DWORD *)(a2 + 16)
          || *(_DWORD *)(v2 + 104) != *(_DWORD *)(a2 + 104)
          || *(_DWORD *)(v2 + 24) != *(_DWORD *)(a2 + 24)
          || !sub_1255A0((unsigned __int8 *)(v2 + 56), a2 + 56, 0)
          || !sub_1255A0((unsigned __int8 *)(v2 + 72), a2 + 72, 0)
          || !sub_1255A0((unsigned __int8 *)(v2 + 88), a2 + 88, 0))
         && a2 != v2 )
    {
      v2 += 112;
      result = *a1 + 112 * a1[1];
      if ( v2 == result )
        return result;
    }
    return v2;
  }
  return result;
}
