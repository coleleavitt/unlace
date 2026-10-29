void __fastcall sub_CD6830(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v4; // rbp

  v4 = (char *)a1[2];
  *a1 = &off_1C596C8;
  if ( v4 )
  {
    sub_148D160(v4 + 8, a2, a3, a4);
    sub_186B220(v4);
  }
  operator delete(a1, 0x18u);
}

