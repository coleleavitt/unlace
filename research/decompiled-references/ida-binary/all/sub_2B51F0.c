__int64 __fastcall sub_2B51F0(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *a2 = 0;
  result = *(unsigned __int8 *)(a1 + 264);
  if ( (_BYTE)result != byte_8CCA80 )
    goto LABEL_4;
  if ( (_BYTE)result )
  {
    result = (unsigned int)xmmword_8CCA84;
    if ( *(_DWORD *)(a1 + 268) == (_DWORD)xmmword_8CCA84 )
      return result;
    goto LABEL_4;
  }
  result = DWORD2(xmmword_8CCA84);
  if ( *(_DWORD *)(a1 + 276) != DWORD2(xmmword_8CCA84)
    || (result = HIDWORD(xmmword_8CCA84), *(_DWORD *)(a1 + 280) < SHIDWORD(xmmword_8CCA84))
    || *(_DWORD *)(a1 + 280) > SHIDWORD(xmmword_8CCA84)
    || (result = DWORD1(xmmword_8CCA84), *(_DWORD *)(a1 + 272) != DWORD1(xmmword_8CCA84)) )
  {
LABEL_4:
    *a2 = a1 + 264;
  }
  return result;
}
