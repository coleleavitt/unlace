__int64 __fastcall sub_852C00(__int64 a1, unsigned int *a2)
{
  __int64 v2; // rax
  int v3; // esi
  __int64 v4; // rbp
  char *v5; // rdx
  char *v6; // rax
  unsigned int v8; // r12d

  v2 = sub_852970(a1, a2);
  v3 = *(_DWORD *)(a1 + 12);
  v4 = v2;
  v5 = (char *)(v2 + 88);
  if ( *(int *)(v2 + 88) >> 8 == -1 )
    goto LABEL_10;
  v6 = (char *)(v2 + 88);
  while ( v3 != *v6 )
  {
    v6 = *((char **)v6 + 1);
    if ( !v6 )
      goto LABEL_10;
  }
  if ( *(int *)v6 >> 8 == -1 )
  {
LABEL_10:
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)a1 + 528LL))(a1, v4, v5);
    sub_82C970(a1, v8);
    sub_13D7950(*(_QWORD *)(a1 + 80) + 1592LL, v4, v8, *(unsigned int *)(a1 + 12));
    return v8;
  }
  else
  {
    do
    {
      if ( v3 == *v5 )
        return (unsigned int)(*(int *)v5 >> 8);
      v5 = *((char **)v5 + 1);
    }
    while ( v5 );
    return 0xFFFFFFFFLL;
  }
}

