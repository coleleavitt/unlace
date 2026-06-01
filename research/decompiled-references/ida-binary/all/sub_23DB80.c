__int64 __fastcall sub_23DB80(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  __int64 result; // rax
  char *v5; // rcx
  _DWORD *v6; // rdi
  int v7; // edx

  result = a1;
  v5 = (char *)dbg;
  if ( dbg )
  {
    if ( (*(_BYTE *)(dbg + 37) & 0x40) != 0 )
    {
      v6 = qword_8CC600;
      if ( qword_8CC600 )
      {
        *((_QWORD *)qword_8CC600 + 1) = a2;
        v6[4] = a3;
        *(_QWORD *)v6 = result;
        v7 = sub_23D480((__int64)v6, 11, a3, v5, a4);
        result = -1;
        if ( v7 == 1 )
          return *(_QWORD *)qword_8CC600;
      }
    }
  }
  return result;
}
