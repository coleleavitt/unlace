__int64 __fastcall append_cmt(void *a1, const char *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  _QWORD *v5; // r14
  size_t v6; // rax
  __int64 v7; // rbp
  char *v8; // r8
  size_t v9; // r9
  size_t v10; // r10
  unsigned __int64 v11; // rdx
  char *v12; // rdx
  __int64 v13; // r10
  __int64 v14; // rdx
  size_t v15; // rax
  int v16; // eax
  int v17; // edx
  int v18; // eax
  unsigned __int8 v19; // [rsp+8h] [rbp-80h]
  unsigned __int64 v20; // [rsp+8h] [rbp-80h]
  char *v21; // [rsp+8h] [rbp-80h]
  size_t v22; // [rsp+8h] [rbp-80h]
  size_t v23; // [rsp+10h] [rbp-78h]
  __int64 v24; // [rsp+10h] [rbp-78h]
  __int64 v25; // [rsp+10h] [rbp-78h]
  size_t v26; // [rsp+18h] [rbp-70h]
  char *v27; // [rsp+18h] [rbp-70h]
  _QWORD *v28; // [rsp+28h] [rbp-60h] BYREF
  char *s1; // [rsp+30h] [rbp-58h] BYREF
  __int128 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  if ( !a2 )
    return 1;
  result = 1;
  if ( *a2 )
  {
    v30 = 0;
    s1 = nullptr;
    v5 = *(_QWORD **)(qword_2CCB598 + 1672);
    sub_3C3260(v5, (__int64)&s1, &v28, (unsigned __int64)a1, a3);
    v6 = strlen(a2);
    v7 = v30;
    v8 = s1;
    v9 = v6;
    if ( !(_QWORD)v30 )
    {
      v10 = v6;
      if ( v6 )
        goto LABEL_6;
      v21 = s1;
      v16 = strcmp(s1, a2);
      v10 = 0;
      v8 = v21;
      v9 = 0;
      v17 = v16;
      result = 1;
      if ( v17 )
        goto LABEL_6;
LABEL_12:
      if ( v8 )
      {
        v19 = result;
        *(_QWORD *)&v30 = 0;
        qfree(v8);
        return v19;
      }
      return result;
    }
    v13 = v30 - 1;
    if ( (__int64)v30 - 1 >= v6 )
    {
      v27 = s1;
      v24 = v30 - 1;
      v22 = v6;
      v18 = strcmp(&s1[v30 - v6], a2);
      v8 = v27;
      if ( !v18 )
      {
        result = 1;
        goto LABEL_12;
      }
      v9 = v22;
      v13 = v24;
      if ( v7 == 1 )
        goto LABEL_20;
    }
    else if ( (_QWORD)v30 == 1 )
    {
      v7 = 0;
LABEL_21:
      v10 = v9 + v7;
      v11 = v9 + v7 + 1;
      if ( *((_QWORD *)&v30 + 1) >= v11 )
        goto LABEL_7;
      goto LABEL_22;
    }
    v14 = v7 + 1;
    if ( *((_QWORD *)&v30 + 1) < (unsigned __int64)(v7 + 1) )
    {
      v25 = v13;
      s1 = (char *)qvector_reserve(&s1, v8, v14, 1);
      v13 = v25;
      v8 = s1;
      v14 = v7 + 1;
    }
    *(_QWORD *)&v30 = v14;
    v8[v13] = 10;
    s1[v7] = 0;
    v15 = strlen(a2);
    v7 = v30;
    v8 = s1;
    v9 = v15;
    v10 = v15;
    if ( !(_QWORD)v30 )
    {
LABEL_6:
      v11 = v10 + 1;
      if ( *((_QWORD *)&v30 + 1) >= v10 + 1 )
      {
LABEL_7:
        *(_QWORD *)&v30 = v11;
        v8[v10] = 0;
        memmove(&s1[v7], a2, v9);
        v12 = (char *)haystack;
        if ( (_QWORD)v30 )
          v12 = s1;
        if ( v28 )
          result = sub_5083D0(v5 + 213, v28, v12, a3);
        else
          result = sub_3D0F60(v5, a1, v12, a3);
        v8 = s1;
        goto LABEL_12;
      }
LABEL_22:
      v26 = v10;
      v23 = v9;
      v20 = v11;
      s1 = (char *)qvector_reserve(&s1, v8, v11, 1);
      v10 = v26;
      v8 = s1;
      v9 = v23;
      v11 = v20;
      goto LABEL_7;
    }
    v13 = v30 - 1;
LABEL_20:
    v7 = v13;
    goto LABEL_21;
  }
  return result;
}
