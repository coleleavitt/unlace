__int64 __fastcall sub_3E63A0(__int64 a1, const char **a2)
{
  const char **v2; // rbx
  __int64 v3; // rbp
  const char *v5; // r12
  char **v6; // rbx
  __int64 v7; // [rsp+0h] [rbp-48h] BYREF
  __int128 v8; // [rsp+8h] [rbp-40h]
  unsigned __int64 v9; // [rsp+18h] [rbp-30h]

  v9 = __readfsqword(0x28u);
  v2 = a2;
  v7 = 0;
  v8 = 0;
  if ( !a2 )
    v2 = (const char **)&v7;
  v3 = sub_4016B0(a1, v2);
  if ( !v3 && (unsigned __int64)v2[1] > 1 )
  {
    v5 = *v2;
    v6 = &off_4D7080;
    while ( strcmp(v5, *v6) )
    {
      v6 += 3;
      if ( v6 == (char **)&unk_4D7128 )
        goto LABEL_4;
    }
    v3 = (__int64)v6;
  }
LABEL_4:
  if ( v7 )
  {
    *(_QWORD *)&v8 = 0;
    qfree(v7);
  }
  return v3;
}
