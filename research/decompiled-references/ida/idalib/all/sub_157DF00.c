unsigned __int64 __fastcall sub_157DF00(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  char v4; // cl
  __int64 v5; // rdi
  __int64 v6; // rdx

  result = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) == 0x15 )
  {
    result = sub_BFD550(*(_QWORD *)(a2 + 16));
    if ( (*(_WORD *)result & 0x1FF) == 0x47 )
    {
      result = *(_QWORD *)(result + 16);
      if ( *(_QWORD *)a1 == result )
      {
        result = sub_BFD550(*(_QWORD *)(a2 + 24));
        v4 = 0;
        if ( (*(_WORD *)result & 0x1FF) == 0x47 )
        {
          v5 = *(_QWORD *)(result + 16);
          v6 = (*(_BYTE *)(v5 + 28) & 0x7Fu) - 34;
          if ( (unsigned int)v6 <= 5 )
          {
            result = sub_B74ED0(v5, a2, v6, 0);
            v4 = result;
          }
        }
        *(_BYTE *)(a1 + 8) = v4;
        *(_BYTE *)(a1 + 9) = 1;
      }
    }
  }
  return result;
}
