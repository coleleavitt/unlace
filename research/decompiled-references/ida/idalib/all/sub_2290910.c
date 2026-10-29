std::_V2 *__fastcall sub_2290910(std::_V2 *a1)
{
  std::_V2 *v1; // rbx
  int v2; // eax
  __int64 v4; // rbp
  int *v5; // rax
  __int64 v6; // rax
  __int64 v7[4]; // [rsp+8h] [rbp-20h] BYREF

  v1 = a1;
  if ( !(_BYTE)byte_2D0ADD0 )
  {
    a1 = (std::_V2 *)&byte_2D0ADD0;
    if ( __cxa_guard_acquire(&byte_2D0ADD0) )
    {
      a1 = (std::_V2 *)&byte_2D0ADD0;
      dword_2D0ADD8 = getauxval(6u);
      __cxa_guard_release(&byte_2D0ADD0);
      v2 = dword_2D0ADD8;
      if ( dword_2D0ADD8 == -1 )
        goto LABEL_6;
LABEL_3:
      *(_DWORD *)v1 = v2;
      *((_BYTE *)v1 + 8) &= ~1u;
      return v1;
    }
  }
  v2 = dword_2D0ADD8;
  if ( dword_2D0ADD8 != -1 )
    goto LABEL_3;
LABEL_6:
  v4 = std::_V2::generic_category(a1);
  v5 = __errno_location();
  sub_2220500(v7, *v5, v4);
  v6 = v7[0];
  *((_BYTE *)v1 + 8) |= 1u;
  *(_QWORD *)v1 = v6;
  return v1;
}
