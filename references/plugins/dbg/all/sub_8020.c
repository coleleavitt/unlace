__int64 __fastcall sub_8020(__int64 a1, __int64 a2)
{
  int v2; // r9d
  __int64 result; // rax
  unsigned int v4; // r9d
  _QWORD *v5; // r10

  v2 = *(_DWORD *)(a2 + 16);
  if ( !v2 )
    return -1;
  result = -1;
  if ( (unsigned int)(v2 - 65532) > 3 )
  {
    result = sub_7F30(*(_QWORD *)(a1 + 392), *(_QWORD *)(a2 + 8));
    if ( result != -1 )
    {
      if ( v5[21] >= (unsigned __int64)v4 )
        return *(_QWORD *)(v5[3] + 16LL) & (*(_QWORD *)(v5[20] + 8LL * (v4 - 1)) + result);
      else
        return *(_QWORD *)(v5[3] + 16LL) & (v5[19] + result);
    }
  }
  return result;
}
