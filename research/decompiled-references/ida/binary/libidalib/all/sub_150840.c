__int64 __fastcall sub_150840(__int64 a1, __int64 (__fastcall ***a2)(_QWORD, __int64, __int64))
{
  __int64 result; // rax
  __int64 v3; // rbp

  result = *(unsigned __int8 *)(a1 + 296);
  switch ( (_BYTE)result )
  {
    case 0x1D:
      goto LABEL_7;
    case 0x2D:
      v3 = a1 + 268;
LABEL_6:
      sub_14FD40(a1, (__int64)a2);
      return (**a2)(a2, 100, v3);
    case 0xD:
LABEL_7:
      v3 = a1 + 264;
      goto LABEL_6;
  }
  return result;
}

