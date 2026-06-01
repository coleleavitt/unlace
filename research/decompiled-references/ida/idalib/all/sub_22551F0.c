__int64 __fastcall sub_22551F0(char *a1, size_t a2, char a3, char *a4, _DWORD *a5, int a6)
{
  __int64 v6; // rbp
  __int64 v8; // r15
  int v9; // ebx
  const char **v10; // r13
  size_t v11; // rax
  int v12; // ecx
  char v13; // cl
  char *v14; // r14
  char v17; // [rsp+24h] [rbp-54h]
  char v19; // [rsp+37h] [rbp-41h] BYREF
  size_t v20[8]; // [rsp+38h] [rbp-40h] BYREF

  v17 = *a4;
  v6 = qword_26FADC0[a6];
  if ( !v6 )
    return 0;
  v8 = 0;
  v9 = -1;
  v10 = (const char **)(&off_2BEB4A0 + a6);
  do
  {
    v14 = (char *)*v10;
    if ( *v10 )
    {
      v11 = strlen(*v10);
      v12 = v11;
    }
    else
    {
      v12 = 0;
      v11 = 0;
    }
    if ( v12 > v9 )
    {
      v13 = *a4;
      v20[0] = 0;
      v19 = v13;
      if ( sub_2254C90(a1, a2, v14, v11, a3, v20, &v19, 0) )
      {
        v9 = v20[0];
        *a5 = v8;
        v17 = v19;
      }
    }
    ++v8;
    v10 += 3;
  }
  while ( v8 != v6 );
  if ( v9 == -1 )
    return 0;
  *a4 = v17;
  return v9;
}
