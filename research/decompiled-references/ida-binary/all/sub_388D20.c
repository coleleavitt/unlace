__int64 __fastcall st_chooser_t__::vfunc_14(double a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // rcx

  if ( dword_8BA580 != -1 )
  {
    v4 = qword_8CC430;
    v5 = *(_DWORD *)(qword_8CC430 + ((__int64)dword_8BA580 << 8));
    v6 = qword_8CC430 + ((_QWORD)xmmword_8CC438 << 8);
    if ( (_QWORD)xmmword_8CC438 << 8 )
    {
      if ( v5 )
      {
        do
        {
          if ( v5 == *(_DWORD *)v4 )
            *(_BYTE *)(v4 + 112) = 1;
          v4 += 256;
        }
        while ( v4 != v6 );
      }
      else
      {
        do
        {
          *(_BYTE *)(v4 + 112) = 1;
          v4 += 256;
        }
        while ( v4 != v6 );
      }
    }
  }
  sub_388CB0(a1);
  return a3;
}
