void __fastcall sub_3A6E80(_QWORD *a1, int a2, char *a3, char a4)
{
  bool v4; // r14
  char v5; // r12
  int v8; // eax
  __int64 v9; // rax
  __int64 *v10; // r13
  _QWORD *v11; // rax
  int v12; // eax
  char v13; // r15
  char v14; // r15
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  char *v19; // rdi
  __int64 v20; // rax
  int v21; // eax
  char *s1; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v4 = a4;
  v5 = a4;
  v24 = __readfsqword(0x28u);
  v8 = sub_3BE900(a1, a3, 4);
  if ( (~(_WORD)v8 & 0x600) == 0 && (v8 & 0x10000000) != 0
    || a3 == (char *)sub_3A1F40((__int64)a1, (unsigned __int64)a3, 30) )
  {
    return;
  }
  v9 = sub_5CAA10(a1);
  v10 = (__int64 *)v9;
  if ( v9 && (int)sub_5C9B30(a1, v9, a3) >= 0 )
  {
    if ( !v5 || (char *)*v10 == a3 || (v11 = (_QWORD *)sub_505D70(a1 + 213, a3)) == nullptr || *v11 == *v10 )
    {
      v5 = 1;
      if ( (get_aflags(a3) & 0x20000000) != 0 )
      {
        v16 = sub_505D70(a1 + 213, a3);
        if ( !v16 || *(char *)(v16 + 17) < 0 )
          return;
        goto LABEL_23;
      }
      goto LABEL_27;
    }
    s1 = nullptr;
    func_parent_iterator_set(&s1, v11);
    LODWORD(v23) = 0;
    if ( s1 )
    {
      if ( s1[17] >= 0 || (v12 = *((_DWORD *)s1 + 8), v12 <= 0) )
      {
        v13 = v5;
        v4 = 0;
      }
      else
      {
        v4 = v5;
        v13 = 0;
        if ( **((_QWORD **)s1 + 5) == *v10 )
        {
          if ( v12 == 1 )
          {
            v13 = v5;
            v21 = 0;
            v4 = 0;
          }
          else
          {
            v21 = 1;
          }
          LODWORD(v23) = v21;
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
    v14 = v5;
    v5 = 0;
    v13 = v14 ^ 1;
  }
  v15 = ((unsigned int)get_aflags(a3) & 0x20000000) >> 29;
  if ( (_BYTE)v15 || !v13 )
  {
    if ( v4 && (_BYTE)v15 )
    {
LABEL_21:
      v16 = sub_505D70(a1 + 213, a3);
      if ( !v16 || *(char *)(v16 + 17) < 0 )
      {
LABEL_24:
        if ( v10 )
        {
          if ( v5 != 1 )
          {
            sub_3A4190((__int64)a1, a3, a3 + 1, 0x1Eu);
            sub_3A4AF0(a1, (unsigned __int64)a3, *v10);
          }
        }
        return;
      }
LABEL_23:
      if ( a3 == *(char **)v16 )
        return;
      goto LABEL_24;
    }
    goto LABEL_34;
  }
LABEL_27:
  if ( (unsigned int)sub_631AD0(*a1, 5) != 18 )
    goto LABEL_21;
  s1 = nullptr;
  v23 = 0;
  v17 = sub_505D70(a1 + 203, a3);
  if ( v17 )
  {
    v18 = sub_510BD0(a1, &s1, v17, 0);
    v19 = s1;
    v4 = 0;
    if ( v18 > 2 && (_QWORD)v23 )
    {
      v19 = s1;
      v4 = strcmp(s1, ".plt") == 0;
    }
  }
  else
  {
    v19 = s1;
    v4 = 0;
  }
  if ( v19 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v19);
  }
LABEL_34:
  v20 = sub_505D70(a1 + 213, a3);
  if ( v20 && *(char *)(v20 + 17) >= 0 && *(char **)v20 == a3 )
    return;
  if ( !v4 )
    goto LABEL_24;
  sub_3A4190((__int64)a1, a3, a3 + 1, 0x23u);
  if ( (get_merge_state() & 2) == 0 )
    sub_3A5F70(a1, (unsigned __int64)a3, (unsigned __int64)(a3 + 1), 0x1Eu);
}
