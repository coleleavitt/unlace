__int64 __fastcall sub_10CB10(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rbx

  v3 = a3;
  result = *a3;
  if ( (_BYTE)result != 4 )
  {
    while ( (_BYTE)result == 14 )
    {
      sub_10CB10(a1, a2, *((_QWORD *)v3 + 1));
      v5 = *((_QWORD *)v3 + 1);
      result = *(unsigned __int8 *)(v5 + 16);
      v3 = (unsigned __int8 *)(v5 + 16);
      if ( (_BYTE)result == 4 )
        return result;
    }
    return sub_11F9E0(a2, a1, v3, 0, 4294901760LL);
  }
  return result;
}
