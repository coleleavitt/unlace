unsigned int *__fastcall sub_B87CA0(_QWORD *a1)
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
  __int64 v20; // rsi
  int v21; // r12d
  __int64 v22; // rax
  char **exception; // r12
  unsigned int v24; // [rsp+0h] [rbp-88h]
  unsigned int *v25; // [rsp+8h] [rbp-80h]
  unsigned int *v26; // [rsp+18h] [rbp-70h]
  unsigned int *v27; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v28; // [rsp+28h] [rbp-60h] BYREF
  __int64 v29[2]; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v30[9]; // [rsp+40h] [rbp-48h] BYREF

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
        result = (unsigned int *)sub_B7B0D0((__int64)a1, v3);
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
        sub_B75C60(v29, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v29);
        sub_233E40((__int64)v29);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v24 = (unsigned int)(3 * v6 + 1) >> 1;
      v12 = (unsigned int *)sub_186B300(v4 - 2, v11);
      v4 = v12 + 2;
      *v12 = v24;
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
        if ( !(unsigned __int8)sub_B7B0D0((__int64)a1, v9) )
        {
          v14 = 2 * v9;
          v28 = nullptr;
          v15 = (2 * v9) | 1;
          sub_B87880(a1 + 120, v14, &v28);
          v26 = v28;
          if ( v28 )
          {
            v16 = &v28[*(v28 - 1)];
            if ( v28 == v16 )
              goto LABEL_32;
            v17 = v28;
            while ( *v17 != v15 )
            {
              if ( v16 == ++v17 )
                goto LABEL_32;
            }
            *(v28 - 1) = 0;
            sub_B87880(a1 + 120, v15, &v28);
            v26 = v28;
            if ( v28 )
            {
LABEL_32:
              v25 = &v26[*(v26 - 1)];
              if ( v25 == v26 )
              {
                sub_186B220(v26 - 2);
              }
              else
              {
                v18 = v26;
                do
                {
                  v19 = *v18;
                  v29[0] = 0xFFFFFFFFLL;
                  v29[1] = 0;
                  v30[0] = 1;
                  v30[1] = 0;
                  sub_182CBA0(qword_1C7F2C0, v30);
                  LODWORD(v30[0]) = 1;
                  v20 = a1[123] + 32LL * v19;
                  BYTE4(v30[0]) &= ~1u;
                  sub_2FC4A0((__int64)qword_1C7F2C0, v20, (__int64)v29, v20);
                  sub_25A130((char *)v29);
                  v21 = (int)v19 / 2;
                  if ( !(unsigned __int8)sub_B7B0D0((__int64)a1, v21) )
                  {
                    if ( !v4 || (v22 = *(v4 - 1), (_DWORD)v22 == *(v4 - 2)) )
                    {
                      v27 = v4;
                      sub_2FD3F0(&v27);
                      v4 = v27;
                      v22 = *(v27 - 1);
                    }
                    v4[v22] = v21;
                    ++*(v4 - 1);
                  }
                  ++v18;
                }
                while ( v25 != v18 );
                result = (unsigned int *)sub_186B220(v26 - 2);
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

