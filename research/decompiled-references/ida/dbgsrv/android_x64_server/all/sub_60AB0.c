/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_60AB0
// Address: 0x0000000000060AB0

//----- (0000000000060AB0) ----------------------------------------------------
__int64 __fastcall sub_60AB0(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  FILE *v4; // rsi
  size_t v5; // r14
  char *v6; // rbx
  void *v7; // rax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+10h] [rbp-38h]
  unsigned __int64 v11; // [rsp+20h] [rbp-28h]

  v11 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  if ( *((_QWORD *)&xmmword_155780 + 1) > v3 && (v4 = *(FILE **)(xmmword_155780 + 8 * v3)) != nullptr )
  {
    *(_OWORD *)ptr = 0;
    v10 = 0;
    if ( qgetline(ptr, v4) >= 0 )
    {
      v5 = __strlen_chk("\n", 2);
      v6 = (char *)ptr[1] - 1;
      if ( !ptr[1] )
        v6 = nullptr;
      v7 = ptr[0];
      if ( v10 < (unsigned __int64)&v6[v5 + 1] )
      {
        v7 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)&v6[v5 + 1], 1u);
        ptr[0] = v7;
      }
      ptr[1] = &v6[v5 + 1];
      v6[v5 + (_QWORD)v7] = 0;
      memmove((char *)ptr[0] + (unsigned __int64)v6, "\n", v5);
      *(_BYTE *)a2 = 7;
      *(_OWORD *)(a2 + 8) = *(_OWORD *)ptr;
      *(_QWORD *)(a2 + 24) = v10;
      *(_OWORD *)ptr = 0;
      goto LABEL_12;
    }
    *(_QWORD *)(a2 + 8) = -1;
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
LABEL_12:
      v10 = 0;
    }
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
  }
  return 0;
}
// 33AE0: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 155780: using guessed type __int128 xmmword_155780;
