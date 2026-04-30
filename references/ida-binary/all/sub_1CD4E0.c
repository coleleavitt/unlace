__int64 __fastcall sub_1CD4E0(__int64 a1, double a2)
{
  unsigned int **v2; // r12
  unsigned int *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  const char *v6; // r15
  unsigned int *v7; // rbx
  __int64 v8; // rbp
  unsigned int *v9; // rsi
  __int64 result; // rax
  __int64 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  unsigned int *v14; // rsi
  __int64 (__fastcall **v15)(); // [rsp+0h] [rbp-58h] BYREF
  __int16 v16; // [rsp+8h] [rbp-50h]
  unsigned __int64 v17; // [rsp+18h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v15 = &desktop_json_seeker_t___vtable;
  v16 = 0;
  if ( *(_DWORD *)a1 != 3 )
  {
    if ( *(_DWORD *)a1 != 4 )
      return 0;
    v2 = *(unsigned int ***)(a1 + 8);
    v3 = *v2;
    v4 = (__int64)&(*v2)[4 * (_QWORD)v2[1]];
    if ( *v2 == (unsigned int *)v4 )
      return 0;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *v3 == 2 )
        {
          v5 = *((_QWORD *)v3 + 1);
          if ( *(_QWORD *)(v5 + 8) )
            break;
        }
LABEL_5:
        v3 += 4;
        if ( v3 == (unsigned int *)v4 )
          goto LABEL_11;
      }
      v6 = *(const char **)v5;
      if ( strcmp(*(const char **)v5, "Structures") && strcmp(v6, "Enums") )
      {
        if ( !strcmp(v6, "Local Types") )
          HIBYTE(v16) = 1;
        goto LABEL_5;
      }
      v3 += 4;
      LOBYTE(v16) = 1;
      if ( v3 == (unsigned int *)v4 )
      {
LABEL_11:
        v7 = *v2;
        v8 = (__int64)&(*v2)[4 * (_QWORD)v2[1]];
        if ( *v2 != (unsigned int *)v8 )
        {
          do
          {
            v9 = v7;
            v7 += 4;
            sub_1CD450((void (__fastcall ***)(_QWORD, __int64))&v15, v9, a2);
          }
          while ( (unsigned int *)v8 != v7 );
        }
        return (unsigned __int8)v16;
      }
    }
  }
  v11 = *(__int64 **)(a1 + 8);
  v12 = *v11;
  v13 = *v11 + 40 * v11[1];
  result = 0;
  if ( v12 != v13 )
  {
    do
    {
      v14 = (unsigned int *)(v12 + 24);
      v12 += 40;
      sub_1CD450((void (__fastcall ***)(_QWORD, __int64))&v15, v14, a2);
    }
    while ( v13 != v12 );
    return (unsigned __int8)v16;
  }
  return result;
}
