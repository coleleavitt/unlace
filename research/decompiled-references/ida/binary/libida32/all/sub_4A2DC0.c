__int64 __fastcall sub_4A2DC0(__int64 a1, __int64 a2, unsigned int a3, const char *a4)
{
  __int64 i; // rax
  char *v7; // r14
  unsigned int v8; // ebx
  char *s1; // [rsp+8h] [rbp-58h] BYREF
  __int128 v11; // [rsp+10h] [rbp-50h]
  unsigned __int64 v12; // [rsp+20h] [rbp-40h]

  v12 = __readfsqword(0x28u);
  v11 = 0;
  s1 = nullptr;
  for ( i = netnode_qhashfirst(a3, &s1, 72); i > 0; i = netnode_qhashnext(a3, &s1, v7, 72) )
  {
    if ( (_QWORD)v11 )
    {
      v7 = s1;
      if ( !strcmp(s1, a4) )
      {
LABEL_8:
        v8 = sub_4A2C90(a2, a1, a3, (__int64)a4, 0);
        goto LABEL_10;
      }
    }
    else
    {
      if ( !*a4 )
        goto LABEL_8;
      v7 = (char *)haystack;
    }
  }
  v8 = 0;
LABEL_10:
  if ( s1 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(s1);
  }
  return v8;
}

