__int64 __fastcall sub_40F960(_QWORD *a1, __int64 a2, int a3, unsigned __int64 a4)
{
  __int16 v6; // r13
  __int64 v7; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  char *v12; // rbp
  __int64 result; // rax
  char **v14; // rbx
  __int64 v15; // rbx
  char v16; // al
  unsigned __int8 v17; // [rsp+Fh] [rbp-59h]
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v6 = sub_3BE900(a1, a4, 4);
  v7 = v6 & 0x600;
  if ( (~(_WORD)a3 & 0x600) != 0 || (a3 & 0x10000) != 0 )
  {
    v8 = sub_505D70(a1 + 203, a4);
    if ( v7 == 1536 )
      goto LABEL_6;
  }
  else
  {
    if ( v7 == 1536 )
    {
      if ( get_first_cref_to(a2) == -1 && !get_fchunk(a2) && get_fchunk(a4) )
        return 1;
      v8 = sub_505D70(a1 + 203, a4);
      goto LABEL_6;
    }
    v8 = sub_505D70(a1 + 203, a4);
  }
  if ( v8 )
  {
    v9 = (1 << (*(_BYTE *)(v8 + 43) + 4)) / 8;
    if ( (v6 & 0xD000) != 0 || a4 < v9 + *(_QWORD *)v8 )
    {
      v10 = a4 + 2 * v9;
      if ( *(_QWORD *)(v8 + 8) < v10 )
        goto LABEL_6;
      v15 = v10 - v9;
      if ( (get_flags_ex(v10 - v9, 4) & 0xD000) != 0 )
        goto LABEL_6;
      v16 = sub_40F900(v15);
    }
    else
    {
      v16 = sub_40F900(a4 - v9);
    }
    if ( v16 )
      return 1;
  }
LABEL_6:
  v19 = 0;
  s1 = nullptr;
  v11 = sub_510BD0(a1, &s1, v8, 0);
  v12 = s1;
  result = 0;
  if ( v11 > 3 )
  {
    v14 = off_2B27A20;
    while ( strcmp(v12, *v14) )
    {
      if ( ++v14 == (char **)&unk_2B27A58 )
      {
        result = 0;
        goto LABEL_11;
      }
    }
    result = 1;
  }
LABEL_11:
  if ( v12 )
  {
    v17 = result;
    *(_QWORD *)&v19 = 0;
    qfree(v12);
    return v17;
  }
  return result;
}
