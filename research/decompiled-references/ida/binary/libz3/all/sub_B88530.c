unsigned int *__fastcall sub_B88530(_QWORD *a1)
{
  unsigned int *result; // rax
  __int64 v2; // r13
  __int64 v3; // r12
  unsigned int *v4; // rbp
  unsigned int v5; // r15d
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  int v9; // r12d
  unsigned int v10; // edx
  size_t v11; // rsi
  unsigned int *v12; // rax
  _QWORD *v13; // rax
  unsigned int v14; // esi
  unsigned int v15; // r12d
  unsigned int *v16; // rdx
  unsigned int *v17; // rax
  unsigned int *v18; // r13
  unsigned int v19; // r12d
  __int64 v20; // rax
  __int64 v21; // r15
  int v22; // r12d
  __int64 v23; // rax
  char **exception; // r12
  unsigned int v25; // [rsp+0h] [rbp-98h]
  unsigned int *v26; // [rsp+8h] [rbp-90h]
  unsigned int *v27; // [rsp+18h] [rbp-80h]
  unsigned int *v28; // [rsp+20h] [rbp-78h] BYREF
  unsigned int *v29; // [rsp+28h] [rbp-70h] BYREF
  __int64 v30[2]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v31[2]; // [rsp+40h] [rbp-58h] BYREF
  int v32; // [rsp+50h] [rbp-48h]

  result = (unsigned int *)a1[4];
  if ( !result )
    return result;
  v2 = *(result - 1);
  if ( !(_DWORD)v2 )
    return result;
  v3 = 0;
  v4 = nullptr;
  while ( 1 )
  {
    result = *(unsigned int **)(sub_15D1F10(**(_QWORD **)&result[2 * v3]) + 24);
    if ( result )
    {
      if ( *result == 5 && result[1] == 1 )
      {
        v5 = v3;
        result = (unsigned int *)sub_B7B3F0((__int64)a1, v3);
        if ( !(_BYTE)result )
          break;
      }
    }
    if ( ++v3 == v2 )
      goto LABEL_14;
LABEL_5:
    result = (unsigned int *)a1[4];
  }
  if ( v4 )
  {
    v6 = *(v4 - 1);
    if ( (_DWORD)v6 == *(v4 - 2) )
    {
      v10 = (unsigned int)(3 * v6 + 1) >> 1;
      v11 = 4 * v10 + 8;
      if ( 4 * (int)v6 + 8 >= (unsigned int)v11 || (unsigned int)v6 >= v10 )
      {
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_B75C60(v30, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v30);
        sub_233E40((__int64)v30);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v25 = (unsigned int)(3 * v6 + 1) >> 1;
      v12 = (unsigned int *)sub_186B300(v4 - 2, v11);
      v4 = v12 + 2;
      *v12 = v25;
      result = &v12[v12[1] + 2];
    }
    else
    {
      result = &v4[v6];
    }
  }
  else
  {
    v13 = (_QWORD *)sub_186B270(0x10u);
    v4 = (unsigned int *)(v13 + 1);
    *v13 = 2;
    result = (unsigned int *)(v13 + 1);
  }
  ++v3;
  *result = v5;
  ++*(v4 - 1);
  if ( v3 != v2 )
    goto LABEL_5;
LABEL_14:
  if ( v4 )
  {
    v7 = *(v4 - 1);
    if ( v7 )
    {
      do
      {
        v8 = (unsigned int)(v7 - 1);
        v9 = v4[v8];
        *(v4 - 1) = v8;
        if ( !(unsigned __int8)sub_B7B3F0((__int64)a1, v9) )
        {
          v14 = 2 * v9;
          v29 = nullptr;
          v15 = (2 * v9) | 1;
          sub_B88100(a1 + 121, v14, &v29);
          v27 = v29;
          if ( v29 )
          {
            v16 = &v29[*(v29 - 1)];
            if ( v29 == v16 )
              goto LABEL_32;
            v17 = v29;
            while ( *v17 != v15 )
            {
              if ( v16 == ++v17 )
                goto LABEL_32;
            }
            *(v29 - 1) = 0;
            sub_B88100(a1 + 121, v15, &v29);
            v27 = v29;
            if ( v29 )
            {
LABEL_32:
              v26 = &v27[*(v27 - 1)];
              if ( v26 == v27 )
              {
                sub_186B220(v27 - 2);
              }
              else
              {
                v18 = v27;
                do
                {
                  v19 = *v18;
                  v30[0] = 0xFFFFFFFFLL;
                  v30[1] = 0;
                  v31[0] = 1;
                  v31[1] = 0;
                  sub_182CBA0(qword_1C7F2C0, v31);
                  BYTE4(v31[0]) &= ~1u;
                  v20 = a1[124];
                  LODWORD(v31[0]) = 1;
                  v32 = 0;
                  v21 = v20 + 40LL * v19;
                  sub_2FC4A0((__int64)qword_1C7F2C0, v21, (__int64)v30, v21);
                  *(_DWORD *)(v21 + 32) += v32;
                  sub_25A130((char *)v30);
                  v22 = (int)v19 / 2;
                  if ( !(unsigned __int8)sub_B7B3F0((__int64)a1, v22) )
                  {
                    if ( !v4 || (v23 = *(v4 - 1), (_DWORD)v23 == *(v4 - 2)) )
                    {
                      v28 = v4;
                      sub_2FD3F0(&v28);
                      v4 = v28;
                      v23 = *(v28 - 1);
                    }
                    v4[v23] = v22;
                    ++*(v4 - 1);
                  }
                  ++v18;
                }
                while ( v26 != v18 );
                result = (unsigned int *)sub_186B220(v27 - 2);
                if ( !v4 )
                  return result;
              }
            }
          }
        }
        v7 = *(v4 - 1);
      }
      while ( v7 );
      return (unsigned int *)sub_186B220(v4 - 2);
    }
    else
    {
      return (unsigned int *)sub_186B220(v4 - 2);
    }
  }
  return result;
}

