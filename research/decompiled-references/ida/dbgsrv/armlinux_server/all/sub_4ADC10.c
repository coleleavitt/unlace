/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4ADC10
// Address: 0x00000000004ADC10

//----- (00000000004ADC10) ----------------------------------------------------
__int64 __fastcall sub_4ADC10(__int64 result, unsigned int a2, __int64 *a3, int a4)
{
  __int64 v4; // x20
  __int64 *v5; // x19
  __int64 v8; // x4
  int v9; // w3
  __int64 v10; // x21
  __int64 v11; // x0
  unsigned int *v12; // x2
  __int64 v13; // x22
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x2
  void (__fastcall *v17)(__int64, __int64, __int64); // x3
  __int64 v18; // x19
  int v19; // w0
  const char *v20; // x22
  __int64 v21; // x2
  __int64 v22; // x2
  void (__fastcall *v23)(__int64, __int64, __int64); // x3
  __int64 v24; // x1
  char v25; // w24
  const char *v26; // x22
  __int64 v27; // x2
  __int64 v28; // x2
  void (__fastcall *v29)(__int64, __int64, __int64); // x3
  __int64 v30; // x1
  char v31; // w24
  size_t v32; // x26
  __int64 v33; // x2
  __int64 i; // x22
  __int64 v35; // x2
  void (__fastcall *v36)(__int64, __int64, __int64); // x3
  __int64 v37; // x1
  char v38; // w24
  const char *v39; // x22
  __int64 v40; // x2
  void (__fastcall *v41)(__int64, __int64, __int64); // x3
  __int64 v42; // x1
  char v43; // w24
  char s[32]; // [xsp+50h] [xbp+50h] BYREF

  if ( !a3 )
    return result;
  v4 = result;
  result = *(unsigned int *)(result + 304);
  if ( (_DWORD)result )
    return result;
  v5 = a3;
  while ( 1 )
  {
    result = *((unsigned int *)v5 + 4);
    if ( (_DWORD)result )
      goto LABEL_12;
    v8 = v5[1];
    v9 = *(_DWORD *)v8;
    if ( !a4 )
    {
      result = sub_4A52F8(v9);
      if ( (_DWORD)result )
        goto LABEL_12;
    }
    v10 = *(_QWORD *)(v4 + 288);
    v11 = v5[3];
    *((_DWORD *)v5 + 4) = 1;
    *(_QWORD *)(v4 + 288) = v11;
    if ( v9 == 41 )
    {
      result = sub_4AD960(v4, a2, (unsigned int **)(v8 + 16), (__int64 *)*v5);
      *(_QWORD *)(v4 + 288) = v10;
      return result;
    }
    if ( v9 == 42 )
    {
      result = sub_4ADFD0(v4, a2, (unsigned int **)(v8 + 8), (__int64 *)*v5);
      *(_QWORD *)(v4 + 288) = v10;
      return result;
    }
    if ( v9 == 2 )
      break;
    result = sub_4AD1A0(v4, a2, v8);
    *(_QWORD *)(v4 + 288) = v10;
LABEL_12:
    v5 = (__int64 *)*v5;
    if ( v5 )
    {
      result = *(unsigned int *)(v4 + 304);
      if ( !(_DWORD)result )
        continue;
    }
    return result;
  }
  v12 = *(unsigned int **)(v8 + 8);
  v13 = *(_QWORD *)(v4 + 296);
  *(_QWORD *)(v4 + 296) = 0;
  def_4AD1E4(v4, a2, v12);
  *(_QWORD *)(v4 + 296) = v13;
  if ( (a2 & 4) != 0 )
  {
    v14 = *(_QWORD *)(v4 + 256);
    v15 = v14 + 1;
    if ( v14 == 255 )
    {
      v17 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
      v16 = *(_QWORD *)(v4 + 280);
      *(_BYTE *)(v4 + 255) = 0;
      v17(v4, 255, v16);
      v15 = 1;
      v14 = 0;
      ++*(_QWORD *)(v4 + 320);
    }
    *(_QWORD *)(v4 + 256) = v15;
    *(_BYTE *)(v4 + v14) = 46;
    *(_BYTE *)(v4 + 264) = 46;
  }
  else
  {
    v20 = "::";
    v21 = *(_QWORD *)(v4 + 256);
    do
    {
      v24 = v21;
      v25 = *v20;
      if ( v21 == 255 )
      {
        v23 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v22 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v23(v4, 255, v22);
        v21 = 1;
        v24 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      else
      {
        ++v21;
      }
      *(_QWORD *)(v4 + 256) = v21;
      ++v20;
      *(_BYTE *)(v4 + v24) = v25;
      *(_BYTE *)(v4 + 264) = v25;
    }
    while ( "" != v20 );
  }
  v18 = *(_QWORD *)(v5[1] + 16);
  v19 = *(_DWORD *)v18;
  if ( *(_DWORD *)v18 == 70 )
  {
    v26 = "{default arg#";
    v27 = *(_QWORD *)(v4 + 256);
    do
    {
      v30 = v27;
      v31 = *v26;
      if ( v27 == 255 )
      {
        v29 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v28 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v29(v4, 255, v28);
        v27 = 1;
        v30 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      else
      {
        ++v27;
      }
      *(_QWORD *)(v4 + 256) = v27;
      ++v26;
      *(_BYTE *)(v4 + v30) = v31;
      *(_BYTE *)(v4 + 264) = v31;
    }
    while ( v26 != "" );
    sprintf(s, "%d", *(_DWORD *)(v18 + 16) + 1);
    v32 = strlen(s);
    v33 = *(_QWORD *)(v4 + 256);
    if ( v32 )
    {
      for ( i = 0; i != v32; ++i )
      {
        v37 = v33;
        v38 = s[i];
        if ( v33 == 255 )
        {
          v36 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
          v35 = *(_QWORD *)(v4 + 280);
          *(_BYTE *)(v4 + 255) = 0;
          v36(v4, 255, v35);
          v33 = 1;
          v37 = 0;
          ++*(_QWORD *)(v4 + 320);
        }
        else
        {
          ++v33;
        }
        *(_QWORD *)(v4 + 256) = v33;
        *(_BYTE *)(v4 + v37) = v38;
        *(_BYTE *)(v4 + 264) = v38;
      }
    }
    v39 = "}::";
    do
    {
      v42 = v33;
      v43 = *v39;
      if ( v33 == 255 )
      {
        v41 = *(void (__fastcall **)(__int64, __int64, __int64))(v4 + 272);
        v40 = *(_QWORD *)(v4 + 280);
        *(_BYTE *)(v4 + 255) = 0;
        v41(v4, 255, v40);
        v33 = 1;
        v42 = 0;
        ++*(_QWORD *)(v4 + 320);
      }
      else
      {
        ++v33;
      }
      *(_QWORD *)(v4 + 256) = v33;
      ++v39;
      *(_BYTE *)(v4 + v42) = v43;
      *(_BYTE *)(v4 + 264) = v43;
    }
    while ( "" != v39 );
    v18 = *(_QWORD *)(v18 + 8);
    v19 = *(_DWORD *)v18;
  }
  while ( sub_4A52F8(v19) )
  {
    v18 = *(_QWORD *)(v18 + 8);
    v19 = *(_DWORD *)v18;
  }
  result = def_4AD1E4(v4, a2, (unsigned int *)v18);
  *(_QWORD *)(v4 + 288) = v10;
  return result;
}
// 4ADC10: could not find valid save-restore pair for x25
// 4ADC8C: variable 'v9' is possibly undefined
// 4ADCA8: variable 'v8' is possibly undefined
