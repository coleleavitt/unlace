__int64 __fastcall sub_45C170(__int64 *a1, __int64 a2, __int64 a3, char a4, const char *a5, int a6)
{
  char *v7; // rdi
  const char *v11; // rax
  bool v12; // zf
  __int64 v13; // r12
  size_t v14; // rax
  size_t v15; // r13
  size_t v16; // r15
  char *v17; // rsi
  size_t v18; // rdx
  __int64 v19; // rdx
  int v20; // ebx
  __int64 v21; // r12
  unsigned __int64 v22; // r13
  const char *v23; // rax
  char *v24; // rdi
  char *v25; // rdx
  unsigned __int64 v26; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-68h]
  int v31; // [rsp+4h] [rbp-64h]
  int v32; // [rsp+8h] [rbp-60h]
  int v33; // [rsp+10h] [rbp-58h]
  const char *v34; // [rsp+18h] [rbp-50h] BYREF
  const char *v35; // [rsp+20h] [rbp-48h] BYREF
  int v36[2]; // [rsp+28h] [rbp-40h]
  int v37; // [rsp+30h] [rbp-38h]
  int v38; // [rsp+38h] [rbp-30h]
  __int64 v39; // [rsp+40h] [rbp-28h]

  v7 = (char *)haystack;
  HIDWORD(v30) = a6;
  *(_QWORD *)v36 = __readfsqword(0x28u);
  if ( a1[1] )
    v7 = (char *)*a1;
  if ( !(unsigned __int8)is_valid_typename(v7, v30, v32, v33, (int)v34, (int)v35, v36[0], v37, v38, v39) )
  {
    sub_35A790((char **)a1);
    a5 = &byte_22F0C30;
    v11 = haystack;
    if ( !a1[1] )
      goto LABEL_6;
    goto LABEL_35;
  }
  if ( !a4 )
    goto LABEL_8;
  v11 = haystack;
  if ( a1[1] )
LABEL_35:
    v11 = (const char *)*a1;
LABEL_6:
  v12 = *(_QWORD *)(a3 + 16) == 0;
  v34 = v11;
  if ( v12 )
    goto LABEL_39;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, const char **))(a3 + 24))(a3, &v34) )
    return 1;
LABEL_8:
  if ( a5 )
  {
    v13 = a1[1];
    v14 = strlen(a5);
    v15 = v14;
    v16 = v14;
    if ( v13 )
    {
      --v13;
      v16 = v14 + v13;
    }
    v17 = (char *)*a1;
    v18 = v16 + 1;
    if ( a1[2] < v16 + 1 )
    {
      v29 = qvector_reserve(a1, v17, v18, 1);
      v18 = v16 + 1;
      *a1 = v29;
      v17 = (char *)v29;
    }
    a1[1] = v18;
    v17[v16] = 0;
    memmove((void *)(v13 + *a1), a5, v15);
  }
  v19 = a1[1];
  v20 = 1;
  v21 = v19 - 1;
  if ( !v19 )
    v21 = 0;
  v22 = v21 + 1;
  if ( v31 > 0 )
  {
    while ( 1 )
    {
      v23 = haystack;
      if ( v19 )
        v23 = (const char *)*a1;
      v12 = *(_QWORD *)(a3 + 16) == 0;
      v35 = v23;
      if ( v12 )
        break;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, const char **))(a3 + 24))(a3, &v35) )
        return 1;
      v24 = (char *)*a1;
      v25 = (char *)*a1;
      if ( v21 )
      {
        v26 = a1[1];
        if ( v26 < v22 )
        {
          if ( a1[2] < v22 )
          {
            v28 = qvector_reserve(a1, *a1, v21 + 1, 1);
            *a1 = v28;
            v24 = (char *)v28;
            v26 = a1[1];
          }
          memset(&v24[v26], 0, v22 - v26);
          a1[1] = v22;
          v25 = (char *)*a1;
        }
        else if ( v22 != v26 )
        {
          a1[1] = v22;
        }
        v25[v21] = 0;
      }
      else if ( v24 )
      {
        a1[1] = 0;
        qfree(v24);
        *a1 = 0;
        a1[2] = 0;
      }
      sub_35A910(a1);
      if ( v31 < ++v20 )
        return 0;
      v19 = a1[1];
    }
LABEL_39:
    std::__throw_bad_function_call();
  }
  return 0;
}
