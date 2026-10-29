unsigned __int64 __fastcall sub_1AF740(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edi
  char *v3; // rdx
  char *v4; // rdi

  v1 = *(_QWORD *)(a1 + 64);
  v2 = -2;
  if ( v1 )
  {
    v3 = (char *)qword_8CAE00 + 8 * xmmword_8CAE08;
    v4 = (char *)qword_8CAE00;
    if ( qword_8CAE00 != v3 )
    {
      do
      {
        if ( v1 == *(_QWORD *)v4 )
          break;
        v4 += 8;
      }
      while ( v3 != v4 );
    }
    v2 = ((v4 - (_BYTE *)qword_8CAE00) >> 3) - 1;
  }
  return sub_1AF250(v2, 1);
}
