__int64 __fastcall dirtree_rename_0(_QWORD *a1, void *a2, __int64 a3)
{
  unsigned __int64 v5; // rax
  const char *v6; // r15
  unsigned __int64 v7; // rbp
  char *v8; // rax
  char v9; // dl
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  char v13; // dl
  char *v14; // r8
  unsigned int v15; // r15d
  char *v17; // r15
  char *v18; // rdi
  char *v19; // r8
  const char *v20; // [rsp+8h] [rbp-B0h]
  int v21[2]; // [rsp+10h] [rbp-A8h] BYREF
  void *ptr; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+2Eh] [rbp-8Ah] BYREF
  char v24; // [rsp+36h] [rbp-82h]
  __int64 v25; // [rsp+37h] [rbp-81h]
  char v26; // [rsp+3Fh] [rbp-79h]
  char *s1; // [rsp+40h] [rbp-78h] BYREF
  __int64 v28; // [rsp+48h] [rbp-70h]
  char *s2; // [rsp+60h] [rbp-58h] BYREF
  __int64 v30; // [rsp+68h] [rbp-50h]
  unsigned __int64 v31; // [rsp+78h] [rbp-40h]

  ptr = a2;
  *(_QWORD *)v21 = a3;
  v31 = __readfsqword(0x28u);
  v24 = 0;
  v23 = -1;
  v5 = sub_778480((__int64)a1, (const char **)&ptr);
  if ( v5 == -1 )
    return 5;
  v6 = (const char *)ptr;
  v7 = v5;
  v8 = (char *)sub_777000((__int64)a1, v5, (char *)ptr);
  s2 = v8;
  v10 = (__int64)v8;
  LOBYTE(v30) = v9;
  if ( v8 == (char *)-1LL )
    return (unsigned __int8)((v9 == 0) + 2);
  v23 = (__int64)v8;
  v24 = v9;
  v11 = sub_778480((__int64)a1, (const char **)v21);
  if ( v11 == -1 )
    return 5;
  v20 = *(const char **)v21;
  v12 = sub_777000((__int64)a1, v11, *(char **)v21);
  v25 = v12;
  v26 = v13;
  if ( v12 != -1 )
  {
    if ( v13 )
    {
      *(_QWORD *)v21 = v6;
      v11 = v12;
    }
    else if ( v11 != v7 )
    {
      return 1;
    }
    if ( v24 && (unsigned __int8)sub_7763C0((__int64)a1, v10, v11) )
      return 7;
    v20 = *(const char **)v21;
  }
  sub_775F70((__int64 *)&s1, v6);
  sub_775F70((__int64 *)&s2, v20);
  if ( v11 == v7 )
    goto LABEL_19;
  v14 = (char *)haystack;
  if ( v30 )
    v14 = s2;
  v15 = sub_7776F0(a1, v7, v11, (__int64)&v23, v14, -1);
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
          v15 = sub_7774B0((__int64)a1, v11, &v23, v17);
          if ( (_BYTE)v15 )
          {
            if ( v11 != v7 )
            {
              v19 = (char *)haystack;
              if ( v28 )
                v19 = s1;
              if ( (unsigned __int8)sub_7776F0(a1, v11, v7, (__int64)&v23, v19, -1) )
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
        sub_39ADA0(0x44u, a1[4], a2, a3);
        sub_774BB0((__int64)a1, 68, a2, a3);
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
