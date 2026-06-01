__int64 __fastcall dirtree_rename_0(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned int v5; // eax
  const char *v6; // r15
  unsigned int v7; // ebp
  unsigned __int64 v8; // rax
  char v9; // edx^3
  unsigned __int64 v10; // rax
  unsigned int v11; // r13d
  unsigned int v12; // r12d
  unsigned __int64 v13; // rax
  char *v14; // r8
  unsigned int v15; // r15d
  char *v17; // r15
  char *v18; // rdi
  char *v19; // r8
  const char *v20; // [rsp+8h] [rbp-A0h]
  int v21[2]; // [rsp+10h] [rbp-98h] BYREF
  void *ptr; // [rsp+18h] [rbp-90h] BYREF
  int v23; // [rsp+26h] [rbp-82h] BYREF
  char v24; // [rsp+2Ah] [rbp-7Eh]
  unsigned int v25; // [rsp+2Bh] [rbp-7Dh]
  char v26; // [rsp+2Fh] [rbp-79h]
  char *s1; // [rsp+30h] [rbp-78h] BYREF
  __int64 v28; // [rsp+38h] [rbp-70h]
  char *s2; // [rsp+50h] [rbp-58h] BYREF
  __int64 v30; // [rsp+58h] [rbp-50h]
  unsigned __int64 v31; // [rsp+68h] [rbp-40h]

  ptr = a2;
  *(_QWORD *)v21 = a3;
  v31 = __readfsqword(0x28u);
  v23 = -1;
  v24 = 0;
  v5 = sub_757F80((__int64)a1, (const char **)&ptr);
  if ( v5 == -1 )
    return 5;
  v6 = (const char *)ptr;
  v7 = v5;
  v8 = sub_756AE0((__int64)a1, v5, (char *)ptr);
  LOWORD(s2) = v8;
  BYTE2(s2) = BYTE2(v8);
  v9 = BYTE3(v8);
  v10 = HIDWORD(v8);
  BYTE4(s2) = v10;
  BYTE3(s2) = v9;
  v11 = (unsigned int)s2;
  if ( (_DWORD)s2 == -1 )
    return (unsigned __int8)(((_BYTE)v10 == 0) + 2);
  v23 = (int)s2;
  v24 = v10;
  v12 = sub_757F80((__int64)a1, (const char **)v21);
  if ( v12 == -1 )
    return 5;
  v20 = *(const char **)v21;
  v13 = sub_756AE0((__int64)a1, v12, *(char **)v21);
  v25 = v13;
  v26 = BYTE4(v13);
  if ( (_DWORD)v13 != -1 )
  {
    if ( v26 )
    {
      *(_QWORD *)v21 = v6;
      v12 = v25;
    }
    else if ( v12 != v7 )
    {
      return 1;
    }
    if ( v24 && (unsigned __int8)sub_755E90((__int64)a1, v11, v12) )
      return 7;
    v20 = *(const char **)v21;
  }
  sub_755A50((__int64 *)&s1, v6);
  sub_755A50((__int64 *)&s2, v20);
  if ( v12 == v7 )
    goto LABEL_19;
  v14 = (char *)haystack;
  if ( v30 )
    v14 = s2;
  v15 = sub_7571C0(a1, v7, v12, (__int64)&v23, v14, -1);
  if ( !(_BYTE)v15 )
  {
LABEL_19:
    if ( v30 )
    {
      v17 = s2;
      v18 = (char *)haystack;
      if ( !v28 )
      {
LABEL_22:
        if ( strcmp(v18, v17) )
        {
          v15 = sub_756F60((__int64)a1, v12, (unsigned int *)&v23, v17);
          if ( (_BYTE)v15 )
          {
            if ( v12 != v7 )
            {
              v19 = (char *)haystack;
              if ( v28 )
                v19 = s1;
              if ( (unsigned __int8)sub_7571C0(a1, v12, v7, (__int64)&v23, v19, -1) )
              {
                if ( !under_debugger )
                  interr(1788);
                BUG();
              }
            }
            goto LABEL_13;
          }
        }
        goto LABEL_33;
      }
    }
    else
    {
      v17 = (char *)haystack;
      if ( !v28 )
      {
LABEL_33:
        sub_396090(0x44u, a1[4], a2, a3);
        sub_754740((__int64)a1, 68, a2, a3);
        v15 = 0;
        goto LABEL_13;
      }
    }
    v18 = s1;
    goto LABEL_22;
  }
LABEL_13:
  if ( s2 )
  {
    v30 = 0;
    qfree(s2);
  }
  if ( s1 )
  {
    v28 = 0;
    qfree(s1);
  }
  return v15;
}

