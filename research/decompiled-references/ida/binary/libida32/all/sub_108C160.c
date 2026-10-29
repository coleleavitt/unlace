__int64 __fastcall sub_108C160(__int64 a1, __int64 a2, __int64 a3)
{
  char **v3; // rax

  v3 = sub_108BD40(a2, a3);
  if ( v3 == &off_2B36B80 )
    return 0xFFFFFFFFLL;
  else
    return *((unsigned int *)v3 + 4);
}

