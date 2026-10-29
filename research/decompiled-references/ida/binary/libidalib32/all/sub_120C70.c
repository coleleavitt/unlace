__int64 __fastcall sub_120C70(__int64 *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v8; // rax
  __int64 v9; // rbx
  const char **v10; // r15
  __int64 v11; // rbp
  unsigned __int64 v12; // r13
  const char *v13; // rsi
  const char *v14; // rdi
  const void *v15; // rbx
  void *v16; // rdi
  const char *v17; // rbp
  void *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-40h]

  if ( !a4 )
  {
    v21 = a3 + 440;
    goto LABEL_3;
  }
  v21 = a3 + 440;
  v8 = sub_15CEA0(a3 + 440);
  v9 = *a1;
  v10 = (const char **)v8;
  v11 = *a1 + 24 * a1[1];
  if ( *a1 != v11 )
  {
    v12 = *(_QWORD *)(v8 + 8);
    do
    {
      if ( *(_QWORD *)(v9 + 8) )
      {
        v13 = *(const char **)v9;
        v14 = s1;
        if ( !v12 )
          goto LABEL_12;
      }
      else
      {
        if ( !v12 )
        {
          if ( v11 == v9 )
            break;
          if ( v10 != (const char **)a2 )
            goto LABEL_7;
          return 0;
        }
        v13 = s1;
      }
      v14 = *v10;
LABEL_12:
      if ( !strcmp(v14, v13) )
      {
        if ( v11 == v9 )
          break;
        if ( v10 != (const char **)a2 )
        {
          if ( v12 < 2 )
            goto LABEL_7;
          v17 = *v10;
          v18 = *(void **)a2;
          if ( *(_QWORD *)(a2 + 16) < v12 )
          {
            v20 = qvector_reserve();
            *(_QWORD *)a2 = v20;
            v18 = (void *)v20;
          }
          *(_QWORD *)(a2 + 8) = v12;
          memmove(v18, v17, v12 - 1);
          *(_BYTE *)(*(_QWORD *)a2 + v12 - 1) = 0;
        }
        return 0;
      }
      v9 += 24;
    }
    while ( v11 != v9 );
  }
LABEL_3:
  v5 = sub_15CEA0(v21);
  if ( dword_2530D8 )
    get_module_data();
  if ( a2 != v5 )
  {
    v6 = *(_QWORD *)(v5 + 8);
    if ( v6 > 1 )
    {
      v15 = *(const void **)v5;
      v16 = *(void **)a2;
      if ( *(_QWORD *)(a2 + 16) < v6 )
      {
        v19 = qvector_reserve();
        *(_QWORD *)a2 = v19;
        v16 = (void *)v19;
      }
      *(_QWORD *)(a2 + 8) = v6;
      memmove(v16, v15, v6 - 1);
      *(_BYTE *)(*(_QWORD *)a2 + v6 - 1) = 0;
    }
    else
    {
LABEL_7:
      *(_QWORD *)(a2 + 8) = 0;
    }
  }
  return 0;
}

