unsigned __int64 *__fastcall sub_2205A20(unsigned __int64 *a1, __int64 a2)
{
  unsigned int v2; // eax
  unsigned __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  bool v8; // cf

  v2 = *((_DWORD *)a1 + 2);
  v3 = *a1;
  if ( v2 > 0x40 )
  {
    v5 = v2;
    v6 = 0;
    v7 = (unsigned __int64)(v5 + 63) >> 6;
    do
    {
      v8 = __CFADD__(*(_QWORD *)(v3 + 8 * v6), a2);
      *(_QWORD *)(v3 + 8 * v6) += a2;
      if ( !v8 )
        break;
      ++v6;
      a2 = 1;
    }
    while ( (unsigned int)v7 > (unsigned int)v6 );
  }
  else
  {
    *a1 = v3 + a2;
  }
  return sub_CF8100(a1);
}
