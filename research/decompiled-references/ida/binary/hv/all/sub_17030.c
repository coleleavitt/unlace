__int64 __fastcall sub_17030(__int64 a1, __int64 *a2, const char *a3, void (__fastcall *a4)(__int64, __int64))
{
  unsigned __int64 v4; // r13
  _QWORD *v5; // r14
  unsigned int v8; // r15d
  unsigned int v10; // eax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r13
  char *v14; // rax
  char **v15; // r14
  const char *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // r13
  void *v21; // rdi
  const char *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-40h]

  v4 = a2[1];
  if ( v4 > 1 )
  {
    v5 = (_QWORD *)*a2;
    if ( sub_17000(*a2, a3) )
    {
      v23 = (__int64)(v5 + 3);
      LOBYTE(v10) = sub_17000((__int64)(v5 + 3), "set");
      v8 = v10;
      if ( !(_BYTE)v10 )
      {
        if ( !sub_17000(v23, "get") && (!sub_17000((__int64)v5, "perm") || !sub_17000(v23, "check")) )
        {
          if ( v5[5] <= 3u )
            v5[3] = sub_96080(v23, v5[3], 4, 1);
          v12 = v5[3];
          v5[4] = 4;
          *(_WORD *)v12 = 24930;
          *(_BYTE *)(v12 + 2) = 100;
          *(_BYTE *)(v5[3] + 3LL) = 0;
        }
        return 0;
      }
      byte_165A12 = 1;
      if ( !strcmp(a3, "filt") )
      {
        if ( v4 == 2 )
          goto LABEL_21;
        if ( !sub_17000((__int64)(v5 + 6), "-s") )
        {
          v11 = 2;
LABEL_18:
          v13 = 3 * v11;
          v14 = &byte_165961;
          v15 = (char **)&v5[v13];
          if ( v15[1] )
            v14 = *v15;
          if ( *v14 == 64 )
          {
            v16 = *v15 + 1;
            v17 = sub_93850(v16, "r");
            v18 = v17;
            if ( !v17 )
            {
              v22 = (const char *)sub_8FD60(-1);
              sub_16AB0((__int64)"%s: %s", v16, v22);
            }
            a4(a1, v17);
            sub_959E0(v18);
            v19 = *a2;
            v20 = *a2 + v13 * 8;
            v21 = *(void **)v20;
            if ( *(_QWORD *)v20 )
            {
              *(_QWORD *)(v20 + 8) = 0;
              j__free(v21);
              v19 = *a2;
            }
            memmove((void *)v20, (const void *)(v20 + 24), v19 - v20 + 24 * a2[1]-- - 24);
            goto LABEL_22;
          }
LABEL_21:
          a4(a1, (__int64)stdin);
LABEL_22:
          byte_165A12 = 0;
          return v8;
        }
        v11 = 4;
      }
      else
      {
        v11 = 2;
      }
      if ( v4 < (int)v11 + 1 )
        goto LABEL_21;
      goto LABEL_18;
    }
  }
  return 0;
}

