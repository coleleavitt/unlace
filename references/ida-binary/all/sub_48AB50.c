__int64 __fastcall sub_48AB50(__int64 a1, int a2, __int64 a3)
{
  unsigned int *v3; // rax
  __int64 v4; // rdi

  if ( a2 < 0 || (unsigned __int64)a2 >= *(_QWORD *)(a1 + 56) )
  {
    LODWORD(v4) = -1;
    return (unsigned int)v4;
  }
  v3 = (unsigned int *)(*(_QWORD *)(a1 + 48) + 8LL * a2);
  v4 = *v3;
  if ( *((_BYTE *)v3 + 4) )
    return (unsigned int)v4;
  return sub_518D60(v4, a3);
}
