__int64 __fastcall sub_471630(unsigned __int64 *a1, unsigned __int64 a2)
{
  __int64 (*v2)(void); // rax
  unsigned __int64 *v3; // rax
  unsigned int v4; // edx

  v2 = *(__int64 (**)(void))(*a1 + 32);
  if ( (char *)v2 == (char *)sub_3D58E0 )
    v3 = a1 + 2;
  else
    v3 = (unsigned __int64 *)v2();
  v4 = 0;
  if ( a2 >= *v3 && a2 < v3[1] )
    LOBYTE(v4) = a2 == (*(__int64 (__fastcall **)(unsigned __int64 *, unsigned __int64, _QWORD))(*a1 + 40))(a1, a2, 0);
  return v4;
}

