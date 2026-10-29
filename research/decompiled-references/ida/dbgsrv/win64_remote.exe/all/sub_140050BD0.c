/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140050BD0
// Address: 0x0000000140050BD0

//----- (0000000140050BD0) ----------------------------------------------------
size_t __fastcall sub_140050BD0(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbp
  size_t result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  size_t v8; // r14
  size_t v9; // rbx
  unsigned __int64 v10; // rdx
  const char *v11; // rbx
  size_t v12; // r14
  size_t v13; // rdi
  unsigned __int64 v14; // rdx
  _BYTE Src[5]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v16[3]; // [rsp+25h] [rbp-43h] BYREF

  v2 = a2[1];
  result = (size_t)sub_140002D20(a1, v2);
  if ( v2 )
  {
    v6 = 0;
    do
    {
      v7 = *a2;
      v8 = sub_14005B4D0(Src, (unsigned __int64)v16, *(_DWORD *)(*a2 + v6)) - Src;
      if ( v8 )
      {
        v9 = a1[1];
        v10 = v9 + v8;
        if ( v9 + v8 < v9 )
          v10 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)a1, v10);
        memcpy((void *)(v9 + *a1), Src, v8);
      }
      if ( *(_QWORD *)(v7 + v6 + 16) )
      {
        v11 = pNodeName;
        if ( *(_QWORD *)(v7 + v6 + 8) )
          v11 = *(const char **)(v7 + v6 + 8);
      }
      else
      {
        v11 = Str1;
      }
      result = strlen(v11);
      v12 = result + 1;
      if ( result != -1 )
      {
        v13 = a1[1];
        v14 = v13 + v12;
        if ( v13 + v12 < v13 )
          v14 = 0x7FFFFFFFFFFFFFFFLL;
        sub_140002EF0((__int64)a1, v14);
        result = (size_t)memcpy((void *)(v13 + *a1), v11, v12);
      }
      v6 += 32;
      --v2;
    }
    while ( v2 );
  }
  return result;
}
