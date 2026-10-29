__int64 __fastcall sub_62B950(char *a1, const char *a2)
{
  __int64 *v2; // rbx
  __int64 v3; // r12
  char *v4; // rbp
  char v5; // bp
  __int64 result; // rax
  char *v7; // r12
  unsigned int v8; // edx
  char v9; // cl
  __int64 v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rdx
  unsigned __int64 v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbp
  _BYTE *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax

  v2 = (__int64 *)a1;
  v3 = *((_QWORD *)a1 + 1);
  v4 = *(char **)a1;
  if ( v3 )
  {
    if ( (unsigned __int64)(v3 - 1) > 5 )
    {
      a2 = "__imp_";
      a1 = *(char **)a1;
      if ( !strncmp(a1, "__imp_", 6u) )
      {
        v11 = 1;
        v12 = 0;
        if ( v3 != 7 )
        {
          v12 = v3 - 7;
          a2 = v4 + 6;
          a1 = v4;
          v11 = v3 - 6;
          memmove(v4, v4 + 6, v3 - 7);
          v4 = (char *)*v2;
        }
        if ( v2[2] < v11 )
        {
          a2 = v4;
          a1 = (char *)v2;
          v18 = qvector_reserve(v2, v4, v11, 1);
          *v2 = v18;
          v4 = (char *)v18;
        }
        v2[1] = v11;
        v4[v12] = 0;
        v4 = (char *)*v2;
      }
    }
  }
  v5 = *v4;
  result = *(unsigned int *)(get_ph(a1, a2) + 4);
  if ( !(_DWORD)result && (v5 == 95 || v5 == 64) )
  {
    v7 = (char *)*v2;
    result = (__int64)strchr((const char *)(*v2 + 1), 64);
    if ( result )
    {
      v8 = *(char *)(result + 1);
      v9 = *(_BYTE *)(result + 1);
      if ( v8 <= 0x7F )
      {
        v10 = result + 1;
        while ( v8 - 48 <= 9 )
        {
          v8 = *(char *)++v10;
          v9 = v8;
          if ( v8 > 0x7F )
            return result;
        }
        if ( !v9 )
        {
          v13 = v2[1];
          if ( v13 )
          {
            v14 = v13 - 1;
            v15 = result - (_QWORD)v7;
            if ( result - (__int64)v7 >= (unsigned __int64)(v13 - 1) )
            {
              if ( v5 != 95 )
                return result;
              goto LABEL_27;
            }
            if ( v2[2] < (unsigned __int64)(v15 + 1) )
            {
              v19 = qvector_reserve(v2, v7, v15 + 1, 1);
              *v2 = v19;
              result = v15 + v19;
            }
            v2[1] = v15 + 1;
            *(_BYTE *)result = 0;
            if ( v5 == 95 )
            {
              v13 = v2[1];
              if ( v13 )
              {
                v14 = v13 - 1;
LABEL_27:
                if ( v14 )
                {
                  v16 = 0;
                  if ( v14 != 1 )
                  {
                    v16 = v13 - 2;
                    result = (__int64)memmove((void *)*v2, (const void *)(*v2 + 1), v13 - 2);
                  }
                  v17 = (_BYTE *)*v2;
                  if ( v2[2] < v14 )
                  {
                    result = qvector_reserve(v2, v17, v14, 1);
                    *v2 = result;
                    v17 = (_BYTE *)result;
                  }
                  v2[1] = v14;
                  v17[v16] = 0;
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

