void __fastcall sub_19D430(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // rbp
  __int64 v7; // rax
  __int16 v8; // r14
  __int64 v9; // rax
  __int64 v10; // rsi
  const char *v11; // rdi
  __int64 v12; // rax

  if ( a1[2] < a3 )
  {
    *a1 = qvector_reserve();
    goto LABEL_3;
  }
  if ( a3 )
  {
LABEL_3:
    v6 = 0;
    while ( 1 )
    {
      v11 = *(const char **)(a2 + 8 * v6);
      if ( !v11 )
        break;
      v7 = sub_19D0F0(v11);
      if ( v7 )
      {
        v8 = *(_WORD *)(v7 + 168);
LABEL_6:
        v9 = a1[1];
        v10 = *a1;
        if ( a1[2] < (unsigned __int64)(v9 + 1) )
        {
          v12 = qvector_reserve();
          *a1 = v12;
          v10 = v12;
          v9 = a1[1];
        }
        *(_WORD *)(v10 + 2 * v9) = v8;
        ++a1[1];
      }
      if ( a3 == ++v6 )
        return;
    }
    v8 = -1;
    goto LABEL_6;
  }
}

