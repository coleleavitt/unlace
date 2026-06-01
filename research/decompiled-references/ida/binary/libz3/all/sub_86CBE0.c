__int64 __fastcall sub_86CBE0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rbp
  char *v4; // rdx
  unsigned int v5; // esi

  v3 = sub_7E4F00(a1, a2);
  v4 = (char *)(v3 + 88);
  if ( *(int *)(v3 + 88) >> 8 == -1 )
  {
LABEL_7:
    v5 = -1;
  }
  else
  {
    while ( *(_DWORD *)(a1 + 12) != *v4 )
    {
      v4 = *((char **)v4 + 1);
      if ( !v4 )
        goto LABEL_7;
    }
    v5 = *(int *)v4 >> 8;
  }
  sub_86BD80((_QWORD *)a1, v5);
  sub_86BFC0((unsigned int *)a1, *(_QWORD *)(v3 + 176));
  return sub_86C0A0(a1, (__int64)a2);
}

