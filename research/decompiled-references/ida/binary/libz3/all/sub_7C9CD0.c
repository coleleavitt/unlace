__int64 __fastcall sub_7C9CD0(_QWORD *a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // rsi

  v3 = *a3;
  v4 = *a1 + 160LL;
  result = *a2;
  v6 = v3;
  if ( !*(_BYTE *)(v4 + 8) || *(_BYTE *)(result + 16) )
    return sub_7F1030(v4, v6);
  if ( *(_BYTE *)(v3 + 16) )
  {
    v6 = result;
    return sub_7F1030(v4, v6);
  }
  return result;
}

