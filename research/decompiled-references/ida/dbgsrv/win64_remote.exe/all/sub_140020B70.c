/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140020B70
// Address: 0x0000000140020B70

//----- (0000000140020B70) ----------------------------------------------------
__int64 __fastcall sub_140020B70(__int64 a1, __int64 a2, __int64 a3, const char **a4)
{
  _QWORD *v5; // rax
  __int64 *v9; // rdi
  const char *v10; // rsi
  __int64 v11; // rax
  const char *v12; // rdx
  const char *v13; // rcx
  __int64 v14; // rbp
  const char *v15; // rdx
  const char *v16; // rcx
  const char *v17; // r15
  const char *v18; // rcx
  __int64 **v19; // rax
  const char *v20; // rdx
  __int64 *v21; // rbp
  const char *v22; // rcx
  char v23; // cl
  __int64 result; // rax
  const char *v25; // rdx
  const char *v26; // rcx
  __int64 v27; // rbp
  _QWORD *v28; // r15
  __int64 *v29; // rdi
  const char *v30; // r12
  const char *v31; // rdx
  const char *v32; // rcx
  const char *v33; // rdx
  char v34; // cl
  __int128 v35; // [rsp+20h] [rbp-48h]
  __int64 *v36; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(_QWORD **)a1;
  if ( *(_BYTE *)(a3 + 25) )
  {
    v9 = v5 + 2;
    if ( *(_BYTE *)(v5[1] + 25LL) )
      goto LABEL_8;
    v10 = Str1;
    v11 = *v9;
    v12 = Str1;
    if ( a4[1] )
      v12 = *a4;
    v13 = Str1;
    if ( *(_QWORD *)(v11 + 40) )
      v13 = *(const char **)(v11 + 32);
    if ( strcmp(v13, v12) < 0 )
    {
LABEL_8:
      *(_QWORD *)a2 = *v9;
      *(_BYTE *)(a2 + 16) = 0;
LABEL_58:
      *(_DWORD *)(a2 + 8) = 0;
      return a2;
    }
    goto LABEL_36;
  }
  v10 = Str1;
  v14 = *(_QWORD *)(a3 + 40);
  v15 = Str1;
  if ( a3 == *v5 )
  {
    if ( v14 )
      v15 = *(const char **)(a3 + 32);
    v16 = Str1;
    if ( a4[1] )
      v16 = *a4;
    if ( strcmp(v16, v15) < 0 )
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 1;
      *(_BYTE *)(a2 + 16) = 0;
      return a2;
    }
    goto LABEL_36;
  }
  if ( v14 )
    v15 = *(const char **)(a3 + 32);
  v17 = a4[1];
  v18 = Str1;
  if ( v17 )
    v18 = *a4;
  if ( strcmp(v18, v15) >= 0 )
  {
    v25 = Str1;
    if ( v17 )
      v25 = *a4;
    v26 = Str1;
    if ( v14 )
      v26 = *(const char **)(a3 + 32);
    if ( strcmp(v26, v25) >= 0 )
    {
      *(_QWORD *)a2 = a3;
      *(_BYTE *)(a2 + 16) = 1;
      goto LABEL_58;
    }
    v36 = (__int64 *)a3;
    v27 = *sub_140021640((__int64 *)&v36);
    if ( !*(_BYTE *)(v27 + 25) && !(unsigned __int8)sub_140021740(a1, (__int64)a4, v27 + 32) )
    {
LABEL_36:
      v28 = *(_QWORD **)a1;
      DWORD2(v35) = 0;
      v29 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
      *(_QWORD *)&v35 = v29;
      if ( !*((_BYTE *)v29 + 25) )
      {
        v30 = a4[1];
        do
        {
          *(_QWORD *)&v35 = v29;
          v31 = Str1;
          if ( v30 )
            v31 = *a4;
          v32 = Str1;
          if ( v29[5] )
            v32 = (const char *)v29[4];
          if ( strcmp(v32, v31) >= 0 )
          {
            DWORD2(v35) = 1;
            v28 = v29;
          }
          else
          {
            DWORD2(v35) = 0;
            v29 += 2;
          }
          v29 = (__int64 *)*v29;
        }
        while ( !*((_BYTE *)v29 + 25) );
      }
      if ( *((_BYTE *)v28 + 25) )
        goto LABEL_53;
      v33 = Str1;
      if ( v28[5] )
        v33 = (const char *)v28[4];
      if ( a4[1] )
        v10 = *a4;
      if ( strcmp(v10, v33) < 0 )
      {
LABEL_53:
        *(_BYTE *)(a2 + 16) = 0;
        *(_OWORD *)a2 = v35;
      }
      else
      {
        *(_QWORD *)a2 = v28;
        *(_DWORD *)(a2 + 8) = 2;
        *(_BYTE *)(a2 + 16) = 1;
      }
      return a2;
    }
    v34 = *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v34 )
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = v27;
      *(_DWORD *)(a2 + 8) = 1;
    }
  }
  else
  {
    v36 = (__int64 *)a3;
    v19 = sub_1400216B0(&v36);
    v20 = Str1;
    v21 = *v19;
    if ( v17 )
      v20 = *a4;
    v22 = Str1;
    if ( v21[5] )
      v22 = (const char *)v21[4];
    if ( strcmp(v22, v20) >= 0 )
      goto LABEL_36;
    v23 = *(_BYTE *)(v21[2] + 25);
    result = a2;
    *(_BYTE *)(a2 + 16) = 0;
    if ( v23 )
    {
      *(_QWORD *)a2 = v21;
      *(_DWORD *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = a3;
      *(_DWORD *)(a2 + 8) = 1;
    }
  }
  return result;
}
// 140020DCC: variable 'v35' is possibly undefined
