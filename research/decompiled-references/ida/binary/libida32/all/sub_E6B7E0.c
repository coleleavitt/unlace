void __fastcall sub_E6B7E0(_BYTE *src, _BYTE *a2, void **a3, _DWORD *a4, unsigned int *a5)
{
  size_t v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // r13d
  char *v12; // rcx
  char *v13; // rax
  size_t n; // [rsp+0h] [rbp-40h]

  if ( src != a2 )
  {
    v8 = a2 - src;
    v9 = (unsigned int)*a4;
    v10 = *a5;
    if ( v9 + a2 - src <= v10 )
    {
      v12 = (char *)*a3;
    }
    else
    {
      v11 = v8 + v9;
      if ( (_DWORD)v10 )
      {
        if ( 2 * (int)v10 >= v11 )
          v11 = 2 * v10;
        v12 = (char *)realloc(*a3, v11);
        if ( !v12 )
        {
          if ( v11 )
            goto LABEL_17;
          v12 = (char *)malloc(1u);
          if ( !v12 )
            goto LABEL_17;
        }
      }
      else
      {
        n = v9;
        if ( v11 < 0x10 )
          v11 = 16;
        v13 = (char *)malloc(v11);
        v12 = v13;
        if ( !v13 )
LABEL_17:
          sub_21FDFA0("Allocation failed");
        if ( *a3 )
        {
          v12 = (char *)memcpy(v13, *a3, n);
          *a3 = v12;
          *a5 = v11;
          v9 = (unsigned int)*a4;
          goto LABEL_9;
        }
      }
      *a3 = v12;
      *a5 = v11;
      v9 = (unsigned int)*a4;
    }
LABEL_9:
    memcpy(&v12[v9], src, v8);
    *a4 += v8;
  }
}

