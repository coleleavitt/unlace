int __fastcall sub_956140(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13)
{
  const int *v13; // rax
  char (__fastcall *v14)(__int64, __int64); // rcx
  __int64 (*v16)(void); // rdx
  const char *v17; // r12
  size_t v18; // rax
  const char *v19; // rdi

  v13 = *(const int **)(a1 + 16);
  if ( *((_BYTE *)v13 + 215) )
  {
    v14 = sub_955FC0;
    v16 = *(__int64 (**)(void))(*(_QWORD *)a1 + 128LL);
    if ( (char *)v16 == (char *)sub_955FC0 )
    {
      v17 = *((const char **)v13 + 30);
      if ( v17 )
      {
        v18 = strlen(*((const char **)v13 + 30));
        v19 = *(const char **)(a2 + 56);
        v16 = (__int64 (*)(void))v18;
        v13 = &qword_18D6CD0;
        if ( !v19 || (v13 = (const int *)(*(_QWORD *)(a2 + 56) & 7LL), v13 == (int *)((char *)&dword_0 + 1)) )
        {
          if ( v16 )
            return (int)v13;
        }
        else
        {
          LODWORD(v13) = strncmp(v19, v17, (size_t)v16);
          if ( (_DWORD)v13 )
            return (int)v13;
        }
      }
    }
    else
    {
      LODWORD(v13) = v16();
      if ( !(_BYTE)v13 )
        return (int)v13;
    }
    *(_BYTE *)(a1 + 72) = 1;
    LODWORD(v13) = sub_AC8B40(
                     *(_QWORD *)(a1 + 48),
                     a2,
                     (_DWORD)v16,
                     (_DWORD)v14,
                     a5,
                     a6,
                     a7,
                     a8,
                     a9,
                     a10,
                     a11,
                     a12,
                     a13);
  }
  return (int)v13;
}

