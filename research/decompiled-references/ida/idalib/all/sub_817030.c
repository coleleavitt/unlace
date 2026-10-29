__int64 __fastcall sub_817030(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // rbx
  __int64 (__fastcall *v3)(_QWORD *, __int64, unsigned __int64); // rax
  __int64 result; // rax
  __int64 v5; // rax

  v2 = a1[9];
  if ( *(_QWORD *)(v2 + 48) && *(_QWORD *)(v2 + 32) == a2 )
    goto LABEL_5;
  *(_QWORD *)(v2 + 104) = a2;
  v3 = (__int64 (__fastcall *)(_QWORD *, __int64, unsigned __int64))a1[15];
  if ( !v3 )
  {
    a1[8] = "getblk source input";
    return 4294949591LL;
  }
  result = v3(a1, v2, a2);
  if ( !(_DWORD)result )
  {
LABEL_5:
    if ( *(_QWORD *)(v2 + 112) >= a2 )
    {
      if ( *(_QWORD *)(v2 + 112) != a2 )
        return 0;
      v5 = *(_QWORD *)(v2 + 40);
    }
    else
    {
      *(_QWORD *)(v2 + 112) = a2;
      v5 = *(_QWORD *)(v2 + 40);
      if ( v5 != *(_QWORD *)v2 && !*(_DWORD *)(v2 + 128) )
        *(_DWORD *)(v2 + 128) = 1;
    }
    *(_QWORD *)(v2 + 120) = v5;
    return 0;
  }
  return result;
}
