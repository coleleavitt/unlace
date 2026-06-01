bool __fastcall sub_2219080(int a1, unsigned __int8 *a2, size_t a3, void **a4, _QWORD *a5)
{
  bool result; // al
  _WORD *v9; // rax
  int v10; // eax
  _WORD *v11; // rax
  unsigned __int8 *v12; // [rsp+0h] [rbp-38h] BYREF
  _WORD *v13[6]; // [rsp+8h] [rbp-30h] BYREF

  if ( a1 != 1 )
  {
    if ( a1 == 2 )
    {
      v9 = *a4;
      v12 = a2;
      v13[0] = v9;
      v10 = sub_2218B10((unsigned __int64 *)&v12, (unsigned __int64)&a2[a3], v13, (unsigned __int64)&v9[a3], 0);
      if ( v10 )
      {
LABEL_12:
        *a5 = v12;
        return v10 == 0;
      }
    }
    else
    {
      result = 1;
      if ( a1 != 4 )
        return result;
      v11 = *a4;
      v12 = a2;
      v13[0] = v11;
      v10 = sub_2218E30(&v12, (char *)&a2[a3], (unsigned int **)v13, (unsigned __int64)&v11[2 * a3], 0);
      if ( v10 )
        goto LABEL_12;
    }
    *a4 = v13[0];
    return v10 == 0;
  }
  v13[0] = a2;
  if ( (unsigned __int8)sub_22189B0((unsigned __int8 **)v13, &a2[a3]) )
  {
    memcpy(*a4, a2, a3);
    *a4 = (char *)*a4 + a3;
    return 1;
  }
  else
  {
    *a5 = v13[0];
    return 0;
  }
}
