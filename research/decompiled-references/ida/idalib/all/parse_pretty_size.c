__int64 __fastcall parse_pretty_size(_QWORD *a1, const char *a2)
{
  int v4; // r8d
  int v5; // r9d
  size_t v6; // r12
  char v7; // al
  unsigned __int64 v8; // r13
  size_t v9; // r14
  char *v10; // rbx
  int v11; // eax
  char *v12; // rdi
  char *v13; // rdi
  char *v14; // rax
  int v15; // eax
  double v16; // xmm0_8
  char *v17; // rax
  int v18; // [rsp+0h] [rbp-58h] BYREF
  float v19; // [rsp+4h] [rbp-54h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-50h] BYREF
  char *s; // [rsp+10h] [rbp-48h] BYREF
  __int128 v22; // [rsp+18h] [rbp-40h]
  unsigned __int64 v23; // [rsp+28h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  v20 = 0;
  if ( a2 )
  {
    if ( !strcmp(a2, "infty") )
    {
      v20 = -1;
      if ( !a1 )
        return 1;
LABEL_4:
      *a1 = v20;
      return 1;
    }
    v6 = strlen(a2);
    if ( a2 < &a2[v6] )
    {
      v7 = a2[v6 - 1];
      if ( v7 == 84 )
      {
        v8 = 0x10000000000LL;
      }
      else if ( v7 > 84 )
      {
        v8 = 1024;
        if ( v7 != 107 )
          goto LABEL_18;
      }
      else
      {
        if ( v7 != 71 )
        {
          v8 = 0x100000;
          if ( v7 == 77 )
            goto LABEL_12;
LABEL_18:
          v8 = 1;
          s = nullptr;
          v22 = 0;
          if ( !v6 )
            goto LABEL_13;
          v9 = v6;
          v8 = 1;
          ++v6;
          goto LABEL_20;
        }
        v8 = 0x40000000;
      }
LABEL_12:
      s = nullptr;
      v22 = 0;
      v9 = v6 - 1;
      if ( v6 == 1 )
        goto LABEL_13;
      if ( !v6 )
      {
        v9 = -1;
        v13 = nullptr;
LABEL_21:
        *(_QWORD *)&v22 = v6;
        memmove(v13, a2, v9);
        s[v9] = 0;
        if ( (_QWORD)v22 )
        {
          v10 = s;
          v14 = strchr(s, 46);
          if ( v14 && v14 - v10 != -1 || (v17 = strchr(v10, 44)) != nullptr && v17 - v10 != -1 )
          {
            v19 = 0.0;
            v15 = qsscanf((_DWORD)v10, (unsigned int)"%f%n", (unsigned int)&v19, (unsigned int)&v18, v4, v5);
            v12 = s;
            if ( v15 == 1 && v18 == ((_QWORD)v22 == 0) + (_QWORD)v22 - 1LL )
            {
              v16 = v19 * (double)(int)v8;
              if ( v16 >= 9.223372036854776e18 )
              {
                v20 = (unsigned int)(int)(v16 - 9.223372036854776e18);
                v20 ^= 0x8000000000000000LL;
              }
              else
              {
                v20 = (unsigned int)(int)v16;
              }
LABEL_28:
              if ( v12 )
              {
                *(_QWORD *)&v22 = 0;
                qfree(v12);
              }
              if ( !a1 )
                return 1;
              goto LABEL_4;
            }
LABEL_15:
            if ( v12 )
            {
              *(_QWORD *)&v22 = 0;
              qfree(v12);
            }
            return 0;
          }
LABEL_14:
          v11 = qsscanf((_DWORD)v10, (unsigned int)"%llu%n", (unsigned int)&v20, (unsigned int)&v18, v4, v5);
          v12 = s;
          if ( v11 == 1 && v18 == ((_QWORD)v22 == 0) + (_QWORD)v22 - 1LL && (!v20 || is_mul_ok(v8, v20)) )
          {
            v20 *= v8;
            goto LABEL_28;
          }
          goto LABEL_15;
        }
LABEL_13:
        v10 = (char *)haystack;
        goto LABEL_14;
      }
LABEL_20:
      s = (char *)qvector_reserve(&s, 0, v6, 1);
      v13 = s;
      goto LABEL_21;
    }
  }
  return 0;
}
