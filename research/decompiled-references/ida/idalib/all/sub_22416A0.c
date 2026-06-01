__int64 __fastcall sub_22416A0(
        const char ***a1,
        const char ***a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        const char ***a6,
        __int64 a7)
{
  const char ***v7; // r15
  const char ***v8; // rbp
  __int64 result; // rax
  const char ***v10; // r12
  const char ***v11; // r13
  size_t v12; // rcx
  const char **v13; // rbx
  const char **v14; // r14
  unsigned int v15; // eax
  _QWORD *v16; // r12
  size_t v17; // r13
  const char ***v18; // rdx
  const char ***v19; // rbx
  const char ***v20; // r13
  const char **v21; // r14
  const char **v22; // r15
  unsigned int v23; // eax
  __int64 v24; // r12
  const char ***v25; // rax
  __int64 v26; // r11
  __int64 v27; // rcx
  char ***v28; // r13
  __int64 v29; // r10
  __int64 v30; // r14
  char *v31; // rbx
  const char ***v32; // rax
  const char ***src; // [rsp+10h] [rbp-68h]
  __int64 v34; // [rsp+18h] [rbp-60h]
  char ***v35; // [rsp+20h] [rbp-58h]
  __int64 v36; // [rsp+28h] [rbp-50h]
  __int64 v37; // [rsp+28h] [rbp-50h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+30h] [rbp-48h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  __int64 v41; // [rsp+30h] [rbp-48h]

  while ( 1 )
  {
    v7 = (const char ***)a3;
    v8 = a6;
    result = a7;
    if ( a5 <= a7 )
      result = a5;
    if ( a4 <= result )
    {
      v10 = a1;
      v11 = a2;
      v12 = (char *)a2 - (char *)a1;
      if ( a2 != a1 )
      {
        memmove(a6, a1, (char *)a2 - (char *)a1);
        v12 = (char *)a2 - (char *)a1;
      }
      result = (__int64)v8 + v12;
      src = (const char ***)((char *)v8 + v12);
      if ( v8 != (const char ***)((char *)v8 + v12) )
      {
        if ( v7 != a2 )
        {
          do
          {
            v13 = *v8;
            v14 = *v11;
            v15 = strcmp(**v11, **v8);
            if ( !v15 )
            {
              v15 = strcmp(v14[1], v13[1]);
              if ( !v15 )
                v15 = strcmp(v14[2], v13[2]);
            }
            result = v15 >> 31;
            if ( (_BYTE)result )
            {
              *v10 = v14;
              ++v11;
              ++v10;
              if ( src == v8 )
                return result;
            }
            else
            {
              ++v8;
              *v10++ = v13;
              if ( src == v8 )
                return result;
            }
          }
          while ( v7 != v11 );
          v12 = (char *)src - (char *)v8;
        }
        return (__int64)memmove(v10, v8, v12);
      }
      return result;
    }
    if ( a5 <= a7 )
      break;
    if ( a4 > a5 )
    {
      v38 = a4;
      v41 = a5;
      v28 = (char ***)&a1[a4 / 2];
      v34 = a4 / 2;
      v32 = sub_2240800(a2, a3, v28);
      v27 = v38;
      v29 = v41;
      v35 = (char ***)v32;
      v26 = a7;
      v24 = v32 - a2;
    }
    else
    {
      v39 = a4;
      v36 = a5;
      v24 = a5 / 2;
      v35 = (char ***)&a2[a5 / 2];
      v25 = sub_2240750(a1, (__int64)a2, v35);
      v26 = a7;
      v27 = v39;
      v28 = (char ***)v25;
      v29 = v36;
      v34 = v25 - a1;
    }
    v40 = v29;
    v30 = v27 - v34;
    v37 = v26;
    v31 = sub_2241590((char *)v28, (char *)a2, (char *)v35, v27 - v34, v24, v8, v26);
    sub_22416A0((_DWORD)a1, (_DWORD)v28, (_DWORD)v31, v34, v24, (_DWORD)v8, v37);
    a6 = v8;
    a4 = v30;
    a2 = (const char ***)v35;
    a3 = (__int64)v7;
    a1 = (const char ***)v31;
    a7 = v37;
    a5 = v40 - v24;
  }
  v16 = (_QWORD *)a3;
  v17 = a3 - (_QWORD)a2;
  if ( (const char ***)a3 != a2 )
    result = (__int64)memmove(a6, a2, a3 - (_QWORD)a2);
  v18 = (const char ***)((char *)v8 + v17);
  if ( a2 == a1 )
  {
    if ( v8 != v18 )
      return (__int64)memmove((char *)v7 - v17, v8, v17);
  }
  else if ( v8 != v18 )
  {
    v19 = a2 - 1;
    v20 = v18 - 1;
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = *v20;
        v22 = *v19;
        v23 = strcmp(**v20, **v19);
        if ( !v23 )
        {
          v23 = strcmp(v21[1], v22[1]);
          if ( !v23 )
            v23 = strcmp(v21[2], v22[2]);
        }
        result = v23 >> 31;
        --v16;
        if ( (_BYTE)result )
          break;
        *v16 = v21;
        if ( v8 == v20 )
          return result;
        --v20;
      }
      *v16 = v22;
      if ( v19 == a1 )
        break;
      --v19;
    }
    if ( v8 != v20 + 1 )
      return (__int64)memmove((char *)v16 - ((char *)(v20 + 1) - (char *)v8), v8, (char *)(v20 + 1) - (char *)v8);
  }
  return result;
}
