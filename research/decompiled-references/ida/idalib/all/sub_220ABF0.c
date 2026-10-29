void __fastcall sub_220ABF0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax

  v2 = *(unsigned int *)(a1 + 8);
  if ( (unsigned int)v2 > 0x40 )
  {
    sub_220A970(*(_QWORD **)a1, (unsigned __int64)(v2 + 63) >> 6, a2);
  }
  else if ( a2 == (_DWORD)v2 )
  {
    *(_QWORD *)a1 = 0;
  }
  else
  {
    *(_QWORD *)a1 >>= a2;
  }
}
