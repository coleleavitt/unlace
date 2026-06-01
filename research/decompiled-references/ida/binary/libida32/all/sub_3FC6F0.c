__int64 __fastcall sub_3FC6F0(__int64 a1, unsigned int a2, int a3, unsigned int a4)
{
  __int16 v6; // r13
  __int64 v7; // r15
  unsigned int *v8; // r12
  int v9; // eax
  __int64 v10; // rdx
  char *v11; // rbp
  __int64 result; // rax
  char **v13; // rbx
  unsigned int v14; // ebx
  char v15; // al
  unsigned __int8 v16; // [rsp+Fh] [rbp-59h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v18; // [rsp+18h] [rbp-50h]
  unsigned __int64 v19; // [rsp+28h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v6 = sub_3B9AA0(a1, a4, 4);
  v7 = v6 & 0x600;
  if ( (~(_WORD)a3 & 0x600) != 0 || (a3 & 0x10000) != 0 )
  {
    v8 = (unsigned int *)sub_4EE820(a1 + 1552, a4);
    if ( v7 == 1536 )
      goto LABEL_6;
  }
  else
  {
    if ( v7 == 1536 )
    {
      if ( (unsigned int)get_first_cref_to(a2) == -1 && !get_fchunk(a2) && get_fchunk(a4) )
        return 1;
      v8 = (unsigned int *)sub_4EE820(a1 + 1552, a4);
      goto LABEL_6;
    }
    v8 = (unsigned int *)sub_4EE820(a1 + 1552, a4);
  }
  if ( v8 )
  {
    v9 = (1 << (*((_BYTE *)v8 + 23) + 4)) / 8;
    if ( (v6 & 0xD000) != 0 || a4 < v9 + (unsigned __int64)*v8 )
    {
      if ( v8[1] < (unsigned __int64)a4 + 2LL * v9 )
        goto LABEL_6;
      v14 = v9 + a4;
      if ( (get_flags_ex(v14, 4) & 0xD000) != 0 )
        goto LABEL_6;
      v15 = sub_3FC690(v14);
    }
    else
    {
      v15 = sub_3FC690(a4 - v9);
    }
    if ( v15 )
      return 1;
  }
LABEL_6:
  v18 = 0;
  s1 = nullptr;
  v10 = sub_4F9200(a1, &s1, v8, 0);
  v11 = s1;
  result = 0;
  if ( v10 > 3 )
  {
    v13 = off_2AFDA60;
    while ( strcmp(v11, *v13) )
    {
      if ( &unk_2AFDA98 == (_UNKNOWN *)++v13 )
      {
        result = 0;
        goto LABEL_11;
      }
    }
    result = 1;
  }
LABEL_11:
  if ( v11 )
  {
    v16 = result;
    *(_QWORD *)&v18 = 0;
    qfree(v11);
    return v16;
  }
  return result;
}

