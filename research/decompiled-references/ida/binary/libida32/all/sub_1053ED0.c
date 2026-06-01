__int64 __fastcall sub_1053ED0(__int64 a1, __int64 a2)
{
  const char **v2; // r13
  __int64 v3; // rbx
  const char **v4; // rbx
  __int64 result; // rax
  const char *v6; // r14
  size_t v7; // rax
  const char **v8; // rdx
  size_t v9; // [rsp+8h] [rbp-30h]

  v2 = (const char **)&off_2C58820;
  v3 = *(unsigned int *)(a2 + 8);
  do
  {
    while ( 1 )
    {
      v6 = *v2;
      v7 = 0;
      if ( *v2 )
        v7 = strlen(*v2);
      if ( v3 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
        break;
      v4 = (const char **)(*(_QWORD *)a2 + 16 * v3);
      v2 += 5;
      *v4 = v6;
      v4[1] = (const char *)v7;
      result = *(unsigned int *)(a2 + 8);
      v3 = (unsigned int)(result + 1);
      *(_DWORD *)(a2 + 8) = v3;
      if ( &unk_2C5C358 == (_UNKNOWN *)v2 )
        return result;
    }
    v2 += 5;
    v9 = v7;
    sub_22134E0(a2, a2 + 16, v3 + 1, 16);
    v8 = (const char **)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 8));
    *v8 = v6;
    v8[1] = (const char *)v9;
    result = *(unsigned int *)(a2 + 8);
    v3 = (unsigned int)(result + 1);
    *(_DWORD *)(a2 + 8) = v3;
  }
  while ( v2 != (const char **)&unk_2C5C358 );
  return result;
}

