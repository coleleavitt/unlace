void __fastcall sub_4FBEE0(__int64 *a1, const char *a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // r12
  char v5; // bl
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rdx
  _BYTE *v8; // rax
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rax
  _BYTE *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax

  v2 = a1[1];
  if ( v2 <= 1 )
    return;
  v3 = v2 - 1;
  v5 = (char)a2;
  v6 = (_BYTE *)*a1;
  v7 = (unsigned __int64)&v6[v2 - 1];
  v8 = (_BYTE *)v7;
  if ( (unsigned __int64)v6 >= v7 )
    goto LABEL_7;
  if ( (_BYTE)a2 != *(_BYTE *)(v7 - 1) )
  {
LABEL_6:
    v3 = v8 - v6;
    if ( v8 == v6 )
      goto LABEL_18;
LABEL_7:
    v9 = v3 + 1;
    if ( v2 < v3 + 1 )
    {
      if ( a1[2] < v9 )
      {
        v14 = qvector_reserve(a1, v6, v3 + 1, 1);
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
    if ( (_BYTE)a2 != *(v8 - 1) )
      goto LABEL_6;
  }
LABEL_18:
  if ( v6 )
  {
    a1[1] = 0;
    qfree(v6, a2);
    *a1 = 0;
    a1[2] = 0;
    goto LABEL_11;
  }
LABEL_13:
  v11 = v6;
  while ( v5 == *v11 )
  {
    if ( ++v11 == (_BYTE *)v7 )
      goto LABEL_23;
  }
  if ( v6 >= v11 )
    return;
LABEL_23:
  v13 = v7 - (_QWORD)v11;
  memmove(v6, v11, v7 - (_QWORD)v11 + 1);
  sub_3AF8C0(a1, v13);
}
