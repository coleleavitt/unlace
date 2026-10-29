__int64 sub_10AC10()
{
  __int64 v0; // rdi
  __int64 v1; // rbp
  unsigned __int16 ***v2; // rbx
  TSubMenu *v3; // rax

  v0 = 740;
  v1 = 0;
  v2 = (unsigned __int16 ***)&unk_230880;
  do
  {
    while ( 1 )
    {
      v3 = sub_108500(v0, *((_DWORD *)v2 + 1), v2[1]);
      if ( !v3 )
        goto LABEL_3;
      if ( !v1 )
        break;
      v1 = operator+(v1, v3);
LABEL_3:
      v0 = *((unsigned int *)v2 + 4);
      v2 += 2;
      if ( !(_DWORD)v0 )
        return v1;
    }
    v0 = *((unsigned int *)v2 + 4);
    v2 += 2;
    v1 = (__int64)v3;
  }
  while ( (_DWORD)v0 );
  return v1;
}

