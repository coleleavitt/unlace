/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_392C0
// Address: 0x00000000000392C0

//----- (00000000000392C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_392C0(__int64 a1, __int64 a2)
{
  char *v2; // rdi
  const char *v3; // rcx
  __int64 v4; // rax
  size_t v5; // r14
  __int64 v6; // r15
  void *v7; // rdi
  char v9[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v10; // [rsp+1008h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a2 + 8) )
    v2 = *(char **)a2;
  else
    v2 = (char *)s1;
  if ( !qisabspath(v2) )
  {
    v3 = *(_QWORD *)(a2 + 8) ? *(const char **)a2 : s1;
    qmakepath(v9, 4096, "/system/lib", v3, 0);
    if ( qfileexist(v9) )
    {
      v4 = __strlen_chk(v9, 4096);
      if ( v4 )
      {
        v5 = v4;
        v6 = v4 + 1;
        if ( *(_QWORD *)(a2 + 16) >= (unsigned __int64)(v4 + 1) )
        {
          v7 = *(void **)a2;
        }
        else
        {
          v7 = qvector_reserve(a2, *(char **)a2, v4 + 1, 1u);
          *(_QWORD *)a2 = v7;
        }
        *(_QWORD *)(a2 + 8) = v6;
        memmove(v7, v9, v5);
        *(_BYTE *)(*(_QWORD *)a2 + v5) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
  }
  return __readfsqword(0x28u);
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
