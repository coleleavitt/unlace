void __fastcall sub_3E37F0(__int64 *a1, char a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r12
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rdx
  _BYTE *v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  _BYTE *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rax

  v2 = a1[1];
  if ( v2 <= 1 )
    return;
  v3 = v2 - 1;
  v6 = (_BYTE *)*a1;
  v7 = (unsigned __int64)&v6[v2 - 1];
  v8 = (_BYTE *)v7;
  if ( (unsigned __int64)v6 >= v7 )
    goto LABEL_7;
  if ( a2 != *(_BYTE *)(v7 - 1) )
  {
LABEL_6:
    v3 = v8 - v6;
    if ( v8 == v6 )
      goto LABEL_19;
LABEL_7:
    v9 = v3 + 1;
    if ( v2 < v3 + 1 )
    {
      if ( a1[2] < v9 )
      {
        v14 = qvector_reserve((__int64)a1, (__int64)v6, v3 + 1, 1);
        v2 = a1[1];
        *a1 = v14;
        v6 = (_BYTE *)v14;
      }
      memset(&v6[v2], 0, v9 - v2);
      v12 = *a1;
      a1[1] = v9;
      v8 = (_BYTE *)(v3 + v12);
    }
    else if ( v2 != v3 + 1 )
    {
      a1[1] = v9;
    }
    *v8 = 0;
LABEL_11:
    v10 = a1[1];
    if ( v10 <= 1 )
      return;
    v6 = (_BYTE *)*a1;
    v7 = *a1 + v10 - 1;
    if ( *a1 >= v7 )
      return;
    goto LABEL_13;
  }
  while ( v6 != --v8 )
  {
    if ( a2 != *(v8 - 1) )
      goto LABEL_6;
  }
LABEL_19:
  if ( v6 )
  {
    a1[1] = 0;
    qfree((__int64)v6);
    *a1 = 0;
    a1[2] = 0;
    goto LABEL_11;
  }
LABEL_13:
  v11 = v6;
  while ( a2 == *v11 )
  {
    if ( ++v11 == (_BYTE *)v7 )
    {
      *v6 = *v11;
      v13 = *a1;
      goto LABEL_25;
    }
  }
  if ( v6 >= v11 )
    return;
  v15 = v7 - (_QWORD)v11;
  v16 = v15 + 1;
  v17 = v15;
  memmove(v6, v11, v15 + 1);
  v13 = *a1;
  v18 = *a1;
  if ( v17 )
  {
    v19 = a1[1];
    if ( v19 < v16 )
    {
      if ( a1[2] < v16 )
      {
        v20 = qvector_reserve((__int64)a1, *a1, v16, 1);
        *a1 = v20;
        v13 = v20;
        v19 = a1[1];
      }
      memset((void *)(v19 + v13), 0, v16 - v19);
      a1[1] = v16;
      v18 = *a1;
    }
    else if ( v16 != v19 )
    {
      a1[1] = v16;
    }
    *(_BYTE *)(v18 + v17) = 0;
    return;
  }
LABEL_25:
  if ( v13 )
  {
    a1[1] = 0;
    qfree(v13);
    *a1 = 0;
    a1[2] = 0;
  }
}
