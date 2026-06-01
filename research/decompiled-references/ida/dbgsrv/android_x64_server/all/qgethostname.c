/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qgethostname
// Address: 0x00000000000C3490

//----- (00000000000C3490) ----------------------------------------------------
char __fastcall qgethostname(__int64 a1)
{
  __int64 v3; // rax
  size_t v4; // r14
  __int64 v5; // r15
  char *v6; // rdi
  char v7[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v8; // [rsp+1008h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  if ( gethostname(v7, 0x1000u) )
    return 0;
  v7[4095] = 0;
  v3 = __strlen_chk(v7, 4096);
  if ( v3 )
  {
    v4 = v3;
    v5 = v3 + 1;
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v3 + 1) )
    {
      v6 = *(char **)a1;
    }
    else
    {
      v6 = (char *)qvector_reserve(a1, *(char **)a1, v3 + 1, 1u);
      *(_QWORD *)a1 = v6;
    }
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v6, v7, v4);
    *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  return 1;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
