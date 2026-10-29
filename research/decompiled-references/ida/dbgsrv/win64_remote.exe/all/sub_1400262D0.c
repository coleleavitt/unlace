/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400262D0
// Address: 0x00000001400262D0

//----- (00000001400262D0) ----------------------------------------------------
__int64 __fastcall sub_1400262D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  _QWORD **v5; // rbp
  _QWORD *i; // rbx
  __int64 *v7; // r15
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r15
  const char *v13; // rdx
  __int64 v14; // rbp
  const char *v15; // rcx
  const char *v16; // rdx
  const char *v17; // rcx
  __int64 v18; // rsi
  const char *v19; // rdx
  const char *v20; // rcx
  __int64 **v21; // rcx
  __int64 j; // rax
  __int64 *k; // rcx
  __int64 *v25; // [rsp+70h] [rbp+18h]
  _QWORD **v26; // [rsp+78h] [rbp+20h]

  v3 = a1;
  result = sub_140028F90(a1, a1);
  if ( !(_DWORD)result )
  {
    v5 = *(_QWORD ***)(a2 + 8);
    v26 = v5;
    for ( i = (_QWORD *)**v5; i != *v5; v3 = a1 )
    {
      v7 = *(__int64 **)(v3 + 8);
      v25 = v7;
      v8 = *v7;
      v9 = *v7;
      v10 = *(_QWORD *)(*v7 + 8);
      v11 = v10;
      if ( !*(_BYTE *)(v10 + 25) )
      {
        v12 = i[5];
        do
        {
          v13 = Str1;
          if ( v12 )
            v13 = (const char *)i[4];
          v14 = *(_QWORD *)(v11 + 40);
          v15 = Str1;
          if ( v14 )
            v15 = *(const char **)(v11 + 32);
          if ( strcmp(v15, v13) >= 0 )
          {
            if ( *(_BYTE *)(v9 + 25) )
            {
              v16 = Str1;
              if ( v14 )
                v16 = *(const char **)(v11 + 32);
              v17 = Str1;
              if ( v12 )
                v17 = (const char *)i[4];
              if ( strcmp(v17, v16) < 0 )
                v9 = v11;
            }
            v8 = v11;
          }
          else
          {
            v11 += 16;
          }
          v11 = *(_QWORD *)v11;
        }
        while ( !*(_BYTE *)(v11 + 25) );
        v7 = v25;
        v5 = v26;
      }
      if ( !*(_BYTE *)(v9 + 25) )
        v10 = *(_QWORD *)v9;
      if ( !*(_BYTE *)(v10 + 25) )
      {
        v18 = i[5];
        do
        {
          v19 = Str1;
          if ( *(_QWORD *)(v10 + 40) )
            v19 = *(const char **)(v10 + 32);
          v20 = Str1;
          if ( v18 )
            v20 = (const char *)i[4];
          if ( strcmp(v20, v19) >= 0 )
          {
            v10 = *(_QWORD *)(v10 + 16);
          }
          else
          {
            v9 = v10;
            v10 = *(_QWORD *)v10;
          }
        }
        while ( !*(_BYTE *)(v10 + 25) );
      }
      sub_1400219A0(v7, v8, v9);
      v21 = (__int64 **)i[2];
      if ( *((_BYTE *)v21 + 25) )
      {
        for ( j = i[1]; !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 8) )
        {
          if ( i != *(_QWORD **)(j + 16) )
            break;
          i = (_QWORD *)j;
        }
        i = (_QWORD *)j;
      }
      else
      {
        i = (_QWORD *)i[2];
        for ( k = *v21; !*((_BYTE *)k + 25); k = (__int64 *)*k )
          i = k;
      }
    }
    return 0;
  }
  return result;
}
