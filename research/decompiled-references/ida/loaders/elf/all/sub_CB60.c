unsigned __int64 __fastcall sub_CB60(_QWORD *a1, unsigned int a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int8 *v10; // rbx
  __int64 v11; // r15
  __int64 v12; // rsi
  unsigned __int64 v13; // r15
  int v14; // eax
  char *v15; // rbp
  char *v16; // rsi
  char *v17; // rbx
  int v18; // eax
  char *v19; // rbx
  __int64 v20; // rcx
  const char *v21; // rdx
  unsigned __int8 *v22; // rdi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // [rsp+10h] [rbp-E8h]
  __int64 v27; // [rsp+28h] [rbp-D0h]
  char *v28; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+38h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v32; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+58h] [rbp-A0h] BYREF
  unsigned __int8 *v34; // [rsp+60h] [rbp-98h] BYREF
  __int128 v35; // [rsp+68h] [rbp-90h]
  char *s1; // [rsp+80h] [rbp-78h] BYREF
  __int64 v37; // [rsp+88h] [rbp-70h]
  const char *v38; // [rsp+A0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v40; // [rsp+B8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  if ( a2 )
  {
    v3 = a3;
    if ( a3 )
    {
      v4 = a1[61] - a1[60];
      if ( v4 < (unsigned __int64)a2 + a3 )
      {
        if ( a2 >= v4 )
          return v40 - __readfsqword(0x28u);
        v3 = v4 - a2;
      }
      v6 = a1[59];
      v35 = 0;
      v34 = nullptr;
      v34 = (unsigned __int8 *)qvector_reserve(&v34, 0, v3, 1);
      memset(&v34[v35], 0, v3 - v35);
      v7 = a1[59];
      *(_QWORD *)&v35 = v3;
      v8 = qlseek(v7, 0, 1);
      v9 = a1[60];
      v27 = v8 - v9;
      if ( qlseek(a1[59], a2 + v9, 0) == -1 )
      {
        sub_BFC0((__int64)"Truncated file.");
      }
      else if ( qlread(v6, v34, v3) == v3 )
      {
        v10 = v34;
        v11 = v35;
        v28 = (char *)(v34 + 1);
        v12 = *v34;
        if ( (_BYTE)v12 == 65 )
        {
          v29 = -1;
          netnode_check(&v29, "$ attributes", 0, 1);
          v13 = (unsigned __int64)&v10[v11];
          v30 = -1;
          if ( (unsigned __int64)v28 >= v13 )
          {
LABEL_48:
            qlseek(a1[59], a1[60] + v27, 0);
            v22 = v34;
            if ( !v34 )
              return v40 - __readfsqword(0x28u);
            goto LABEL_38;
          }
          while ( 1 )
          {
            v14 = sub_CA20((__int64)a1, (unsigned __int64 *)&v28, v13);
            v15 = &v28[v14 - 4];
            if ( v15 < v28 )
              break;
            if ( (unsigned __int64)v15 > v13 )
              v15 = (char *)v13;
            sub_CAA0((__int64)&s1, (const void **)&v28, v15);
            netnode_check(&v30, 0, 0, 1);
            v16 = (char *)&::s1;
            if ( v37 )
              v16 = s1;
            v33 = v30;
            netnode_hashset(v29, v16, &v33, 8, 72);
            v17 = s1;
            if ( v37 && !strcmp(s1, "riscv") && v28 < v15 )
            {
              while ( (unsigned __int8)unpack_xleb128(&v31, 64, 0, &v28, v15) )
              {
                v18 = sub_CA20((__int64)a1, (unsigned __int64 *)&v28, (unsigned __int64)v15);
                v19 = &v28[v18 - 4];
                if ( v19 >= v28 )
                {
                  if ( v15 <= v19 )
                    v19 = v15;
                  if ( v31 == 1 )
                  {
                    v26 = v30;
                    if ( v28 < v19 )
                    {
                      while ( (unsigned __int8)unpack_xleb128(&v32, 64, 0, &v28, v19) )
                      {
                        if ( v32 == 5 )
                        {
                          sub_CAA0((__int64)&v38, (const void **)&v28, v19);
                          v20 = v39;
                          v21 = &::s1;
                          if ( v39 )
                          {
                            v21 = v38;
                            v20 = v39 - 1;
                          }
                          netnode_supset(v26, v32, v21, v20, 83);
                          if ( v38 )
                          {
                            v39 = 0;
                            qfree(v38);
                          }
                        }
                        else
                        {
                          if ( !(unsigned __int8)unpack_xleb128(&v33, 64, 0, &v28, v19) )
                            break;
                          v38 = (const char *)(v33 + 1);
                          netnode_supset(v26, v32, &v38, 8, 65);
                        }
                        if ( v28 >= v19 )
                          goto LABEL_19;
                      }
                      v25 = v19 - v28;
                      if ( v19 - v28 > 9 )
                        v25 = 9;
                      sub_BF10((__int64)v28, v25, (__int64)"Wrong ULEB128 encoding\n");
                    }
                  }
LABEL_19:
                  v28 = v19;
                  if ( v19 < v15 )
                    continue;
                }
                goto LABEL_44;
              }
              v24 = v15 - v28;
              if ( v15 - v28 > 9 )
                v24 = 9;
              sub_BF10((__int64)v28, v24, (__int64)"Wrong ULEB128 encoding\n");
LABEL_44:
              v17 = s1;
            }
            v28 = v15;
            if ( v17 )
            {
              v37 = 0;
              qfree(v17);
              v15 = v28;
            }
            if ( (unsigned __int64)v15 >= v13 )
              goto LABEL_48;
          }
        }
        else
        {
          sub_BFC0((__int64)"Unexpected attribute section format ('%c'), section ignored.", v12);
        }
      }
      else
      {
        sub_BFC0((__int64)"File error when trying to read attributes section");
      }
      qlseek(a1[59], a1[60] + v27, 0);
      v22 = v34;
      if ( v34 )
      {
LABEL_38:
        *(_QWORD *)&v35 = 0;
        qfree(v22);
      }
    }
  }
  return v40 - __readfsqword(0x28u);
}

