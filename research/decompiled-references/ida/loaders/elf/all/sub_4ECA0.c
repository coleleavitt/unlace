size_t __fastcall sub_4ECA0(__int64 *a1, const char *a2, _QWORD *a3, __int16 a4)
{
  _QWORD *v4; // r15
  unsigned __int16 v6; // si
  _QWORD *v10; // rbx
  size_t result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  size_t v14; // r8
  const char *v15; // rdx
  __int64 v16; // rax
  const char *v17; // rcx
  void *v18; // rdi
  size_t v19; // rdx
  __int64 v20; // rax
  size_t v21; // [rsp+0h] [rbp-48h]
  size_t v22; // [rsp+0h] [rbp-48h]
  size_t v23; // [rsp+8h] [rbp-40h]

  v4 = a3 + 17;
  v6 = a4 & 0x7FFF;
  v10 = a3 + 17;
  result = a3[18];
  if ( !result )
    goto LABEL_18;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(result + 16);
      v13 = *(_QWORD *)(result + 24);
      if ( *(_WORD *)(result + 32) < v6 )
        break;
      v10 = (_QWORD *)result;
      result = *(_QWORD *)(result + 16);
      if ( !v12 )
        goto LABEL_6;
    }
    result = *(_QWORD *)(result + 24);
  }
  while ( v13 );
LABEL_6:
  if ( v4 == v10 )
  {
LABEL_18:
    if ( !a2 )
      goto LABEL_19;
  }
  else
  {
    if ( v6 < *((_WORD *)v10 + 16) )
    {
      v10 = v4;
      if ( a2 )
        goto LABEL_9;
LABEL_19:
      a1[1] = 0;
      return result;
    }
    if ( !a2 )
    {
      a1[1] = 0;
LABEL_12:
      v15 = "@";
      if ( a4 >= 0 )
        v15 = "@@";
      result = v10[6];
      if ( result < a3[14] )
      {
        v16 = a3[13] + 24 * result;
        v17 = &s1;
        if ( *(_QWORD *)(v16 + 8) )
          v17 = *(const char **)v16;
        return (size_t)sub_2BDC0(a1, (__int64)"%s%s", v15, v17);
      }
      return result;
    }
  }
LABEL_9:
  result = strlen(a2);
  v14 = result;
  if ( result )
  {
    v18 = (void *)*a1;
    v19 = result + 1;
    if ( a1[2] < result + 1 )
    {
      v22 = result + 1;
      v23 = result;
      v20 = qvector_reserve(a1, *a1, v19, 1);
      v14 = v23;
      v19 = v22;
      *a1 = v20;
      v18 = (void *)v20;
    }
    a1[1] = v19;
    v21 = v14;
    memmove(v18, a2, v14);
    result = *a1;
    *(_BYTE *)(*a1 + v21) = 0;
  }
  else
  {
    a1[1] = 0;
  }
  if ( v10 != v4 )
    goto LABEL_12;
  return result;
}

