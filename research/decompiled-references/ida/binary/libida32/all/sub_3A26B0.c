unsigned __int64 __fastcall sub_3A26B0(_QWORD *a1, int a2, unsigned int a3, char a4)
{
  bool v4; // r14
  char v5; // r12
  int v8; // eax
  __int64 v9; // rax
  unsigned int *v10; // r13
  _DWORD *v11; // rax
  int v12; // eax
  char v13; // r15
  char v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rdi
  __int64 v21; // rax
  int v22; // eax
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v4 = a4;
  v5 = a4;
  v25 = __readfsqword(0x28u);
  v8 = sub_3B9AA0(a1, a3, 4);
  if ( (~(_WORD)v8 & 0x600) == 0 && (v8 & 0x10000000) != 0 || a3 == (unsigned int)sub_39D100((__int64)a1, a3, 30) )
    return v25 - __readfsqword(0x28u);
  v9 = sub_5AFCE0(a1);
  v10 = (unsigned int *)v9;
  if ( v9 && (int)sub_5AEEA0(a1, v9, a3) >= 0 )
  {
    if ( !v5 || *v10 == a3 || (v11 = (_DWORD *)sub_4EE820(a1 + 203, a3)) == nullptr || *v11 == *v10 )
    {
      v5 = 1;
      if ( (get_aflags(a3) & 0x20000000) != 0 )
      {
        v17 = sub_4EE820(a1 + 203, a3);
        if ( !v17 || *(char *)(v17 + 9) < 0 )
          return v25 - __readfsqword(0x28u);
LABEL_23:
        if ( a3 == *(_DWORD *)v17 )
          return v25 - __readfsqword(0x28u);
        goto LABEL_24;
      }
      goto LABEL_27;
    }
    s1 = nullptr;
    func_parent_iterator_set(&s1, v11);
    LODWORD(v24) = 0;
    if ( s1 )
    {
      if ( s1[9] >= 0 || (v12 = *((_DWORD *)s1 + 5), v12 <= 0) )
      {
        v13 = v5;
        v4 = 0;
      }
      else
      {
        v4 = v5;
        v13 = 0;
        if ( **((_DWORD **)s1 + 3) == *v10 )
        {
          if ( v12 == 1 )
          {
            v13 = v5;
            v22 = 0;
            v4 = 0;
          }
          else
          {
            v22 = 1;
          }
          LODWORD(v24) = v22;
        }
      }
      lock_func_range(s1, 0);
    }
    else
    {
      v13 = v5;
      v4 = 0;
    }
  }
  else
  {
    v15 = v5;
    v5 = 0;
    v13 = v15 ^ 1;
  }
  v16 = ((unsigned int)get_aflags(a3) & 0x20000000) >> 29;
  if ( !(_BYTE)v16 && v13 )
  {
LABEL_27:
    if ( (unsigned int)sub_614FB0(*a1, 5) != 18 )
      goto LABEL_21;
    s1 = nullptr;
    v24 = 0;
    v18 = sub_4EE820(a1 + 194, a3);
    if ( v18 )
    {
      v19 = sub_4F9200(a1, &s1, v18, 0);
      v20 = s1;
      v4 = 0;
      if ( v19 > 2 && (_QWORD)v24 )
      {
        v20 = s1;
        v4 = strcmp(s1, ".plt") == 0;
      }
    }
    else
    {
      v20 = s1;
      v4 = 0;
    }
    if ( v20 )
    {
      *(_QWORD *)&v24 = 0;
      qfree(v20);
    }
    goto LABEL_34;
  }
  if ( v4 && (_BYTE)v16 )
  {
LABEL_21:
    v17 = sub_4EE820(a1 + 203, a3);
    if ( v17 && *(char *)(v17 + 9) >= 0 )
      goto LABEL_23;
LABEL_24:
    if ( v10 && v5 != 1 )
    {
      sub_39F720((__int64)a1, a3, a3 + 1, 0x1Eu);
      return sub_3A0230(a1, a3, *v10);
    }
    return v25 - __readfsqword(0x28u);
  }
LABEL_34:
  v21 = sub_4EE820(a1 + 203, a3);
  if ( v21 && *(char *)(v21 + 9) >= 0 && *(_DWORD *)v21 == a3 )
    return v25 - __readfsqword(0x28u);
  if ( !v4 )
    goto LABEL_24;
  sub_39F720((__int64)a1, a3, a3 + 1, 0x23u);
  if ( (get_merge_state() & 2) != 0 || a3 == -1 )
    return v25 - __readfsqword(0x28u);
  return sub_3A1890(a1, a3, a3 + 1, 0x1Eu);
}

