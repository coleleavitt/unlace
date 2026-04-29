__int64 __fastcall sub_20F9C0(const char **a1, const char *a2, __int64 a3, __int64 a4)
{
  const char *v4; // rdx
  __int64 v5; // r12
  const char **v6; // r13
  __int64 i; // rbp
  __int64 v8; // rbx
  __int64 v9; // rax
  int *v10; // rdx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  __int64 v13; // r15
  _QWORD *v14; // rax
  char *v16; // rbx
  __int64 v17; // [rsp+8h] [rbp-F0h]
  const char *v18; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD v19[2]; // [rsp+20h] [rbp-D8h] BYREF
  char *s1; // [rsp+30h] [rbp-C8h]
  __int128 v21; // [rsp+38h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B0h]
  __int128 v23; // [rsp+50h] [rbp-A8h]
  __int128 v24[3]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v25; // [rsp+90h] [rbp-68h]
  int v26; // [rsp+98h] [rbp-60h]
  __int64 v27; // [rsp+A0h] [rbp-58h]
  char v28; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+B8h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  v4 = a1[4];
  if ( (unsigned int)(*(_DWORD *)v4 - 56) <= 1 && v4[64] == 8 )
  {
    v5 = *((_QWORD *)v4 + 9);
    if ( *(int *)(v5 + 8) > 0 )
    {
      v6 = a1;
      for ( i = 0; *(_DWORD *)(v5 + 8) > (int)i; ++i )
      {
        v8 = *(_QWORD *)(v5 + 24) + 80 * i;
        if ( *(_QWORD *)(v8 + 40) > 1u && *(_DWORD *)(v8 + 56) == 1 )
        {
          if ( *(_BYTE *)v8 == 9 )
          {
            v10 = *(int **)(v8 + 8);
LABEL_12:
            v11 = v10[4];
            if ( *(_QWORD *)(*(_QWORD *)v10 + 440LL) < v11 )
              sub_20DC90(a1, a2, v10, a4);
            a1 = (const char **)v6[1];
            a2 = (const char *)(*(_QWORD *)(v8 + 64) + *(int *)(v5 + 12));
            v17 = *(_QWORD *)(*(_QWORD *)v10 + 432LL);
            v12 = sub_1CB990(a1, (__int64)a2);
            if ( v12 < 0 )
              continue;
            a4 = v17;
            v13 = v17 + 104 * v11;
            if ( (*(_BYTE *)(v13 + 24) & 4) != 0 )
              continue;
            v14 = sub_1CA620((__int64)v6[1]);
            v18 = nullptr;
            get_func_frame(&v18, v14);
            a2 = v18;
            v19[0] = 8 * v12;
            v21 = 0;
            v19[1] = 0;
            s1 = nullptr;
            v22 = 0;
            v25 = 1;
            v26 = -1;
            v27 = 0;
            v28 = 0;
            v23 = 0;
            v24[0] = 0;
            if ( (unsigned int)find_tinfo_udt_member(v19, v18, 0) == -1 )
            {
LABEL_19:
              clear_tinfo_t(v24);
              if ( v22 )
              {
                *(_QWORD *)&v23 = 0;
                qfree(v22);
              }
              if ( s1 )
              {
                *(_QWORD *)&v21 = 0;
                qfree(s1);
              }
              a1 = &v18;
              clear_tinfo_t(&v18);
              continue;
            }
            if ( *(_QWORD *)(v8 + 40) )
            {
              a2 = *(const char **)(v8 + 32);
              if ( !(_QWORD)v21 )
              {
                if ( *a2 )
                  goto LABEL_19;
LABEL_33:
                v16 = (char *)::s1;
                if ( !::s1 )
                  goto LABEL_19;
LABEL_30:
                a2 = "anonymous";
                if ( strncmp(v16, "anonymous", 9u) )
                {
                  a2 = (const char *)v13;
                  sub_20F4D0(v6[1], v13, v16, 4);
                }
                goto LABEL_19;
              }
            }
            else
            {
              a2 = ::s1;
              if ( !(_QWORD)v21 )
                goto LABEL_33;
            }
            v16 = s1;
            if ( strcmp(s1, a2) )
              goto LABEL_19;
            if ( !v16 )
              goto LABEL_19;
            a2 = "arg_";
            if ( !strncmp(v16, "arg_", 4u) )
              goto LABEL_19;
            a2 = "var_";
            if ( !strncmp(v16, "var_", 4u) )
              goto LABEL_19;
            goto LABEL_30;
          }
          if ( *(_BYTE *)v8 == 10 )
          {
            v9 = *(_QWORD *)(v8 + 8);
            if ( *(_BYTE *)v9 == 9 )
            {
              v10 = *(int **)(v9 + 8);
              goto LABEL_12;
            }
          }
        }
      }
    }
  }
  return 0;
}
