__int64 __fastcall sub_78540(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rax
  __int64 v4; // rbp

  if ( *(_DWORD *)(a1 + 48) > 3u )
  {
    v4 = *(_QWORD *)(a1 + 32);
    return v4 + sub_78480((_QWORD *)a1);
  }
  else
  {
    if ( (unsigned __int8)is_cvt64() )
      v2 = (int)sub_782A0((_QWORD *)a1);
    else
      v2 = sub_782C0(a1);
    return v2 - a2;
  }
}
