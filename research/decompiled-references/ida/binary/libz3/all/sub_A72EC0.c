__int64 __fastcall sub_A72EC0(__int64 *a1, unsigned int *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // r13
  unsigned int **v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int **v13; // r14
  unsigned int *v14; // rsi
  __int64 result; // rax
  __int64 i; // rax
  char v17; // al
  __int64 v18; // r8
  _DWORD *v19; // rax
  __int64 v20; // rdx
  unsigned __int8 v21; // al
  unsigned int v22; // [rsp+Ch] [rbp-2Ch]

  v8 = *a1;
  v9 = *(_QWORD *)(v8 + 16);
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 112) + 284LL)
    || (v17 = sub_1668690(a1 + 2, a2), v8 = *a1, v9 = *(_QWORD *)(*a1 + 16), v17) )
  {
    v10 = (unsigned int **)(a2 + 8);
    v11 = *(_QWORD *)(v9 + 8656);
    v12 = 2LL * a2[6];
    v13 = (unsigned int **)&a2[v12 + 8];
    if ( v12 * 4 )
    {
      do
      {
        v14 = *v10;
        if ( v11 )
        {
          for ( i = *v14; (unsigned int)i < *(_DWORD *)(v11 - 4); i = **v10 )
          {
            if ( !*(_QWORD *)(v11 + 8 * i) )
              break;
            if ( v13 == ++v10 )
              goto LABEL_6;
            v14 = *v10;
          }
        }
        sub_966570(v8, v14);
        v8 = *a1;
        ++v10;
        v9 = *(_QWORD *)(*a1 + 16);
        v11 = *(_QWORD *)(v9 + 8656);
      }
      while ( v13 != v10 );
    }
    if ( !v11 )
      goto LABEL_16;
LABEL_6:
    result = *a2;
    if ( (unsigned int)result < *(_DWORD *)(v11 - 4) && *(_QWORD *)(v11 + 8 * result) )
      return result;
    goto LABEL_16;
  }
  v11 = *(_QWORD *)(v9 + 8656);
  if ( v11 )
    goto LABEL_6;
LABEL_16:
  v18 = 1;
  v19 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
  if ( v19 && *v19 == *(_DWORD *)(v8 + 8) )
    v18 = (v19[1] != 9) & (unsigned __int8)(v19[1] != 6);
  v20 = 0;
  if ( !*(_BYTE *)(*(_QWORD *)(v9 + 112) + 284LL) )
  {
    v22 = v18;
    v21 = sub_1668690(a1 + 2, a2);
    v18 = v22;
    v20 = v21 ^ 1u;
  }
  return sub_B68280(v9, a2, v20, 0, v18, a6);
}

