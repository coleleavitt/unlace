unsigned __int64 __fastcall sub_42F500(_QWORD *a1, const char *a2, unsigned int a3, _QWORD *a4)
{
  const char *v6; // r12
  size_t v7; // rax
  char *v8; // r13
  unsigned __int64 v9; // r12
  _WORD ptr[5]; // [rsp+6h] [rbp-5Ah] BYREF
  __int128 v12; // [rsp+10h] [rbp-50h]
  unsigned __int64 v13; // [rsp+20h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  v12 = 0;
  *(_QWORD *)&ptr[1] = 0;
  if ( a2 )
  {
    v6 = a2;
    v7 = strlen(a2);
LABEL_3:
    v8 = (char *)v6;
    ptr[0] = 0;
    v9 = v7;
    ltype_info_t(0.0, (int)ptr, (__int64)a4, 0);
    sub_42F020(a1, v9, v8, a3, ptr);
    if ( *(_QWORD *)&ptr[1] )
    {
      *(_QWORD *)&v12 = 0;
      qfree(*(void **)&ptr[1]);
    }
    return v13 - __readfsqword(0x28u);
  }
  if ( (*a4 & 0x100) == 0 )
    return v13 - __readfsqword(0x28u);
  if ( get_tinfo_pdata(&ptr[1], *a4, 0) )
  {
    v7 = v12;
    v6 = haystack;
    if ( (_QWORD)v12 )
    {
      v6 = *(const char **)&ptr[1];
      v7 = v12 - 1;
    }
    goto LABEL_3;
  }
  if ( *(_QWORD *)&ptr[1] )
  {
    *(_QWORD *)&v12 = 0;
    qfree(*(void **)&ptr[1]);
  }
  return v13 - __readfsqword(0x28u);
}

