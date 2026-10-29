__int64 __fastcall sub_1713230(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(result + 16) == 26
    || (v5 = *(_QWORD *)(*(_QWORD *)(result + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v5 + 16) == 26)
    && (result = sub_F63050(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v5, a4)) != 0 )
  {
    result = (*(_BYTE *)(result + 19) >> 1) & 0xF;
    if ( (unsigned __int8)result != 2 )
    {
      if ( (unsigned int)(unsigned __int8)result - 6 > 2 )
      {
        if ( (unsigned __int8)result == 10 || (unsigned __int8)result == 9 )
          return result;
      }
      else if ( (_BYTE)result == 2 )
      {
        return result;
      }
      if ( (_BYTE)result == 5 || (_BYTE)result == 8 )
        return (__int64)sub_9EE7C0(a1, " noexcept");
    }
  }
  return result;
}
