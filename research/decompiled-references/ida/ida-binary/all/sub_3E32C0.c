double __fastcall sub_3E32C0(__int64 *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // r12
  __int64 i; // rbx
  _QWORD *v6; // rcx
  void (__fastcall ***v7)(_QWORD); // rdx
  double result; // xmm0_8

  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = (_QWORD *)(v3 + 8 * i);
        v7 = (void (__fastcall ***)(_QWORD))*v6;
        if ( *v6 )
        {
          if ( (*((_DWORD *)v7 + 2))-- == 1 )
            (**(void (__fastcall ***)(_QWORD))*v6)(*v6);
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    return qfree(v3, a2);
  }
  return result;
}
