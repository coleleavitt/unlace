__int64 __fastcall sub_46280(__int64 a1, __int64 a2, signed __int64 a3, unsigned int a4)
{
  __int64 v4; // rax

  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3 <= 1879047932 )
  {
    if ( a3 <= 1879047929 )
    {
      if ( (unsigned __int64)(a3 - 1) > 0x1C )
        return a1;
      v4 = 536920066;
      if ( !_bittest64(&v4, a3) )
        return a1;
    }
    goto LABEL_5;
  }
  if ( (a3 & 0xFFFFFFFFFFFFFFFDLL) == 0x7FFFFFFD )
  {
LABEL_5:
    sub_461E0(a2, (__int64 *)a1, (__int64 *)(a2 + 352), a4);
    return a1;
  }
  return a1;
}

