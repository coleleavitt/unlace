__int64 __fastcall sub_4FF500(unsigned __int8 *a1)
{
  unsigned int (*v1)(void); // rax

  v1 = *(unsigned int (**)(void))(*(_QWORD *)a1 + 24LL);
  if ( (char *)v1 == (char *)sub_505930 )
    return a1[56] ^ 1u;
  else
    return v1() ^ 1;
}

