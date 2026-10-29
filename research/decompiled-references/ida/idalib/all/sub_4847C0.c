__int64 __fastcall sub_4847C0(_QWORD **a1, unsigned __int64 a2)
{
  __int64 (*v2)(void); // rax
  unsigned __int64 *v3; // rax

  v2 = (__int64 (*)(void))(*a1)[4];
  if ( (char *)v2 == (char *)sub_3DB7B0 )
    v3 = (unsigned __int64 *)(a1 + 2);
  else
    v3 = (unsigned __int64 *)v2();
  if ( a2 >= *v3
    && a2 < v3[1]
    && a2 == ((__int64 (__fastcall *)(_QWORD **, unsigned __int64, _QWORD))(*a1)[5])(a1, a2, 0) )
  {
    return *(_QWORD *)(*a1[5] + 16LL * (int)a2);
  }
  else
  {
    return -1;
  }
}
