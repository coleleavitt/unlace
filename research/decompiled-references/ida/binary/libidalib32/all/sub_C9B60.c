void __fastcall sub_C9B60(_DWORD *a1)
{
  *(_QWORD *)a1 = &off_22F688;
  sub_C9A60(a1[28]);
  if ( *((_QWORD *)a1 + 15) )
  {
    *((_QWORD *)a1 + 16) = 0;
    qfree();
  }
  sub_C6DD0((__int64)a1);
  operator delete(a1, 0xA0u);
}

