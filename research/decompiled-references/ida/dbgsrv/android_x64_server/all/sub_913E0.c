/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_913E0
// Address: 0x00000000000913E0

//----- (00000000000913E0) ----------------------------------------------------
__int64 __fastcall sub_913E0(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax
  const void *v5; // rbx
  size_t v6; // rax
  size_t v7; // r12
  size_t v8; // r13
  char *v9; // rdi
  size_t v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r12
  unsigned __int64 v13; // r13
  _BYTE *v14; // rax
  int v15; // ebp
  __int64 v16; // rbx

  *(_QWORD *)(a2 + 8) = 0;
  if ( !a3 )
  {
    v5 = (const void *)(a1 + 1034);
    v6 = strlen((const char *)(a1 + 1034));
    if ( v6 )
    {
      v7 = v6;
      v8 = v6 + 1;
      if ( *(_QWORD *)(a2 + 16) >= v6 + 1 )
      {
        v9 = *(char **)a2;
      }
      else
      {
        v9 = (char *)qvector_reserve(a2, *(char **)a2, v6 + 1, 1u);
        *(_QWORD *)a2 = v9;
      }
      *(_QWORD *)(a2 + 8) = v8;
      memmove(v9, v5, v7);
      *(_BYTE *)(*(_QWORD *)a2 + v7) = 0;
    }
    else
    {
      *(_QWORD *)(a2 + 8) = 0;
    }
    v10 = __strlen_chk("|", 2);
    v11 = *(_QWORD *)(a2 + 8);
    v12 = v11 - 1;
    if ( !v11 )
      v12 = 0;
    v13 = v12 + v10 + 1;
    if ( *(_QWORD *)(a2 + 16) >= v13 )
    {
      v14 = *(_BYTE **)a2;
    }
    else
    {
      v14 = qvector_reserve(a2, *(char **)a2, v12 + v10 + 1, 1u);
      *(_QWORD *)a2 = v14;
    }
    *(_QWORD *)(a2 + 8) = v13;
    v14[v12 + v10] = 0;
    result = (__int64)memmove((void *)(*(_QWORD *)a2 + v12), "|", v10);
    v15 = *(unsigned __int16 *)(a1 + 8);
    if ( *(_WORD *)(a1 + 8) )
    {
      v16 = 0;
      do
        result = sub_4E030(a2, "%02X", *(unsigned __int8 *)(a1 + v16++ + 10));
      while ( v15 != (_DWORD)v16 );
    }
  }
  return result;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
