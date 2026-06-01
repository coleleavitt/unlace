__int64 __fastcall sub_EE5160(__int64 *a1, __int64 a2, double a3)
{
  unsigned int i; // ebp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // r15
  char *v9; // r12
  size_t v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned int *v14; // rsi
  size_t v15; // rdx
  const char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  int v31; // [rsp+8h] [rbp-90h]
  __int64 v32; // [rsp+28h] [rbp-70h] BYREF
  char *v33; // [rsp+30h] [rbp-68h] BYREF
  char *v34; // [rsp+38h] [rbp-60h]
  char *v35; // [rsp+40h] [rbp-58h]
  __int16 v36; // [rsp+50h] [rbp-48h]

  sub_971800(*a1, "iterator(");
  v31 = *(_DWORD *)(a2 + 28);
  if ( v31 )
  {
    for ( i = 0; i != v31; ++i )
    {
      while ( 1 )
      {
        v5 = sub_BE0010(a2, i);
        v6 = *a1;
        v7 = v5;
        v32 = *(_QWORD *)(v5 + 48);
        v36 = 257;
        sub_F50AF0(&v32, v6, a1 + 3, &v33, 0);
        sub_BE0020(&v33, a2, i);
        v8 = *a1;
        v9 = v35;
        v10 = j__strlen(" ");
        v11 = sub_9717A0(v8, " ", v10);
        v12 = *(_QWORD *)(v7 + 40);
        if ( (v12 & 7) != 0 || (v13 = v12 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v16 = &byte_22CD811;
          v15 = j__strlen(&byte_22CD811);
        }
        else
        {
          v14 = *(unsigned int **)(v13 + 16);
          v15 = *v14;
          v16 = (const char *)(v14 + 4);
        }
        v17 = sub_9717A0(v11, v16, v15);
        sub_971800(v17, " = ");
        if ( v33 )
          sub_EE16F0(a1, v33, v18, v19, v20, v21, a3);
        else
          sub_EE0C80(a1);
        sub_971800(*a1, ":");
        if ( v34 )
          sub_EE16F0(a1, v34, v22, v23, v24, v25, a3);
        else
          sub_EE0C80(a1);
        if ( v9 )
        {
          sub_971800(*a1, ":");
          sub_EE16F0(a1, v9, v26, v27, v28, v29, a3);
        }
        if ( v31 - 1 > i )
          break;
        if ( ++i == v31 )
          return sub_971800(*a1, ")");
      }
      sub_971800(*a1, ", ");
    }
  }
  return sub_971800(*a1, ")");
}

