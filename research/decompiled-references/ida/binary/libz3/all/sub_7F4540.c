__int64 __fastcall sub_7F4540(__int64 *a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v4; // r12d
  unsigned int **v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // r14
  unsigned int **v9; // rbx
  __int64 v10; // rax
  unsigned int **v11; // r13

  if ( (unsigned __int8)sub_7CB930(*a1, a2) )
  {
    v4 = sub_7CB930(*a1, a3);
    if ( (_BYTE)v4 )
    {
      v6 = (unsigned int **)(a2 + 8);
      v7 = 2LL * a2[6];
      v8 = (unsigned int **)&a2[v7 + 8];
      if ( v7 * 4 )
      {
        while ( (unsigned __int8)sub_7CB930(*a1, *v6) )
        {
          if ( v8 == ++v6 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        v9 = (unsigned int **)(a3 + 8);
        v10 = 2LL * a3[6];
        v11 = (unsigned int **)&a3[v10 + 8];
        if ( !(v10 * 4) )
          return v4;
        while ( (unsigned __int8)sub_7CB930(*a1, *v9) )
        {
          if ( v11 == ++v9 )
            return v4;
        }
      }
    }
  }
  return 0;
}

