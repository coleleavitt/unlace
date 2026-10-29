unsigned int *__fastcall sub_B188B0(
        __int64 a1,
        char a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int **a5,
        int a6,
        __int64 a7)
{
  unsigned int v9; // esi
  unsigned int v11; // r15d
  unsigned int v12; // r13d
  unsigned int *v13; // rbx
  unsigned int v14; // ecx
  int v15; // esi
  unsigned int v16; // edx
  unsigned int *result; // rax
  unsigned int v18; // edx
  unsigned int *v19; // rdx
  unsigned int *v20; // [rsp-10h] [rbp-68h]
  unsigned int v22; // [rsp+4h] [rbp-54h]
  unsigned int v23[15]; // [rsp+1Ch] [rbp-3Ch] BYREF

  v9 = a3;
  if ( a3 )
  {
    v11 = a4;
    v12 = a6 + 1 - a3;
    if ( a4 < v12 )
    {
      v22 = a3 - 1;
      v13 = (unsigned int *)(a7 + 4LL * a4);
      if ( a2 )
      {
        do
        {
          v14 = *v13;
          v15 = dword_1C7ED24;
          v16 = dword_1C7ED20;
          if ( dword_1C7ED24 != *v13 )
          {
            if ( dword_1C7ED20 != v14 )
              v15 = v14 ^ 1;
            v16 = v15;
          }
          v23[0] = v16;
          ++v11;
          ++v13;
          sub_B0E5E0(a5, v23);
          sub_B188B0(a1, 1, v22, v11, (_DWORD)a5, a6, a7);
          --*(*a5 - 1);
          result = v20;
        }
        while ( v11 != v12 );
      }
      else
      {
        do
        {
          v18 = *v13;
          ++v11;
          ++v13;
          v23[0] = v18;
          sub_B0E5E0(a5, v23);
          result = (unsigned int *)sub_B188B0(a1, 0, v22, v11, (_DWORD)a5, a6, a7);
          --*(*a5 - 1);
        }
        while ( v11 != v12 );
      }
    }
  }
  else
  {
    v19 = *a5;
    if ( *a5 )
      v9 = *(v19 - 1);
    return sub_B17C90(a1, v9, v19);
  }
  return result;
}

