__int64 __fastcall sub_23E290(__int64 a1, __int64 a2, double a3, __int64 a4, char *a5)
{
  __int64 v5; // rdx
  _DWORD *v6; // rdi
  __int64 v7; // rax

  v5 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v5
    && (v6 = (_DWORD *)qword_8CC430, v7 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8), qword_8CC430 != v7) )
  {
    while ( (_DWORD)v5 != *v6 )
    {
      v6 += 64;
      if ( (_DWORD *)v7 == v6 )
        goto LABEL_7;
    }
  }
  else
  {
LABEL_7:
    v6 = nullptr;
  }
  return sub_23E1A0((__int64)v6, a2, v5, a5, a3);
}
