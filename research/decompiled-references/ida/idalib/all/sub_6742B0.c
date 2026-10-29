size_t __fastcall sub_6742B0(__int64 a1, __int64 *a2, int a3)
{
  __int64 v3; // rax
  const char *v5; // rbp
  size_t v6; // rax
  __int64 v7; // r12
  size_t v8; // r13
  size_t v9; // r14
  __int64 v10; // rsi
  unsigned __int64 v11; // r15
  __int64 v13; // rax

  if ( a3 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 16);
    if ( *(_DWORD *)(v3 + 64) > a3 )
    {
      v5 = *(const char **)(*(_QWORD *)(v3 + 56) + 8LL * a3);
      if ( a2 )
      {
        if ( (unsigned __int64)a2[2] <= 0xF )
        {
          *a2 = qvector_reserve(a2, *a2, 16, 1);
          if ( !v5 )
            return strlen(v5);
LABEL_6:
          v6 = strlen(v5);
          v7 = a2[1];
          v8 = v6;
          v9 = v6;
          if ( v7 )
          {
            --v7;
            v10 = *a2;
            v9 = v7 + v6;
            v11 = v7 + v6 + 1;
            if ( a2[2] >= v11 )
              goto LABEL_8;
          }
          else
          {
            v10 = *a2;
            v11 = v6 + 1;
            if ( a2[2] >= v6 + 1 )
            {
LABEL_8:
              a2[1] = v11;
              *(_BYTE *)(v10 + v9) = 0;
              memmove((void *)(v7 + *a2), v5, v8);
              return strlen(v5);
            }
          }
          v13 = qvector_reserve(a2, v10, v11, 1);
          *a2 = v13;
          v10 = v13;
          goto LABEL_8;
        }
        if ( v5 )
          goto LABEL_6;
      }
      return strlen(v5);
    }
  }
  return -1;
}
