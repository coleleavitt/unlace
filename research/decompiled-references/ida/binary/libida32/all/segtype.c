__int64 __fastcall segtype(unsigned int a1)
{
  unsigned int *v1; // rax

  v1 = sub_4EE820(*(_QWORD *)(qword_2CA1698 + 1480) + 1552LL, a1);
  if ( v1 )
    return *((unsigned __int8 *)v1 + 96);
  else
    return 8;
}

