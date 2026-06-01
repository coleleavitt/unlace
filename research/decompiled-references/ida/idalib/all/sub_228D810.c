void __fastcall sub_228D810(char a1, _QWORD *a2)
{
  const char **v2; // rbp
  char *v3; // rax
  char *v4; // r12
  __int64 v5; // rax
  unsigned __int64 v6; // rdx
  size_t v7; // rax
  __int64 v8; // rdi
  size_t v9; // rbp
  const char *v10; // [rsp+8h] [rbp-50h] BYREF
  _OWORD v11[2]; // [rsp+10h] [rbp-48h] BYREF
  char v12; // [rsp+30h] [rbp-28h] BYREF

  a2[1] = 0;
  if ( a1 )
  {
    v2 = (const char **)v11;
    v10 = "TMP";
    v11[0] = _mm_loadh_ps((const double *)&v10);
    v10 = "TEMPDIR";
    v11[1] = _mm_loadh_ps((const double *)&v10);
    do
    {
      v3 = getenv(*v2);
      v4 = v3;
      if ( v3 )
      {
        v7 = strlen(v3);
        v8 = a2[1];
        v9 = v7;
        if ( v7 + v8 > a2[2] )
        {
          sub_2236E10((__int64)a2, a2 + 3, v7 + v8, 1);
          v8 = a2[1];
        }
        if ( v9 )
        {
          memcpy((void *)(*a2 + v8), v4, v9);
          v8 = a2[1];
        }
        a2[1] = v8 + v9;
        return;
      }
      ++v2;
    }
    while ( &v12 != (char *)v2 );
    v5 = a2[1];
    v6 = v5 + 4;
    if ( a2[2] >= (unsigned __int64)(v5 + 4) )
      goto LABEL_8;
  }
  else
  {
    v6 = 4;
    v5 = 0;
    if ( a2[2] >= 4u )
      goto LABEL_8;
  }
  sub_2236E10((__int64)a2, a2 + 3, v6, 1);
  v5 = a2[1];
LABEL_8:
  *(_DWORD *)(*a2 + v5) = 1886221359;
  a2[1] += 4LL;
}
