__int64 __fastcall sub_23E870(char a1, double a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v5; // rdx
  __int64 result; // rax
  void *v8; // rdi
  int v9; // eax

  if ( byte_8CC5E0 == a1 )
    return 1;
  v5 = dbg;
  result = 0;
  if ( dbg && (*(_BYTE *)(dbg + 35) & 0x40) != 0 )
  {
    v8 = qword_8CC600;
    *(_BYTE *)qword_8CC600 = a1;
    v9 = sub_23D480((__int64)v8, 29, v5, a5, a2);
    if ( v9 == 1 )
    {
      byte_8CC5E0 = a1;
      return 1;
    }
    else
    {
      return (unsigned int)-(v9 != -1);
    }
  }
  return result;
}
