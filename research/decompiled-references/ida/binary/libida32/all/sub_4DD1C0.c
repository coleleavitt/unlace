bool __fastcall sub_4DD1C0(__int64 a1, __int64 a2, int a3)
{
  unsigned int (*v4)(void); // rdx

  v4 = *(unsigned int (**)(void))(*(_QWORD *)a1 + 48LL);
  if ( (char *)v4 == (char *)sub_4DC700 )
    return a3 == -1;
  else
    return v4() == a3;
}

