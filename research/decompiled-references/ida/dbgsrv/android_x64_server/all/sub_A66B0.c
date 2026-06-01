/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A66B0
// Address: 0x00000000000A66B0

//----- (00000000000A66B0) ----------------------------------------------------
unsigned __int64 __fastcall sub_A66B0(__int64 *a1, char a2, unsigned __int64 *a3)
{
  int v5; // r15d
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rax
  char *v12; // rdi
  const void *v13; // rsi
  unsigned __int64 v14; // rax
  void *v15; // rdi
  char v18; // [rsp+Fh] [rbp-39h] BYREF
  unsigned __int64 v19; // [rsp+10h] [rbp-38h]

  v19 = __readfsqword(0x28u);
  v5 = unpack_dd(a3, a3[1]);
  sub_A6820((__int64)a1, v5);
  if ( v5 > 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 24;
    do
    {
      v8 = *a1;
      *(_DWORD *)(v8 + v7 - 24) = unpack_dd(a3, a3[1]);
      v9 = v8 + v7 - 16;
      v10 = (int)unpack_dd(a3, a3[1]);
      v11 = *(_QWORD *)(v8 + v7 - 8);
      if ( v11 >= v10 )
      {
        if ( v11 != v10 )
        {
          v18 = 0;
          sub_5E330(v9, v10, &v18);
          if ( a2 )
            goto LABEL_12;
          goto LABEL_15;
        }
      }
      else
      {
        if ( *(_QWORD *)(v8 + v7) >= v10 )
        {
          v12 = *(char **)(v8 + v7 - 16);
        }
        else
        {
          v12 = (char *)qvector_reserve(v9, *(char **)(v8 + v7 - 16), v10, 1u);
          *(_QWORD *)(v8 + v7 - 16) = v12;
          v11 = *(_QWORD *)(v8 + v7 - 8);
        }
        memset(&v12[v11], 0, v10 - v11);
        *(_QWORD *)(v8 + v7 - 8) = v10;
      }
      if ( a2 )
      {
LABEL_12:
        *(_DWORD *)(v8 + v7 - 20) = unpack_dd(a3, a3[1]);
        v13 = (const void *)*a3;
        v14 = *a3 + v10;
        if ( v14 >= *a3 && v14 <= a3[1] )
        {
          v15 = *(void **)(v8 + v7 - 16);
          *a3 = v14;
          memcpy(v15, v13, v10);
        }
      }
LABEL_15:
      v7 += 32;
      --v6;
    }
    while ( v6 );
  }
  return __readfsqword(0x28u);
}
