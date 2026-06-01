/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qpipe_read_n
// Address: 0x00000000000CCF40

//----- (00000000000CCF40) ----------------------------------------------------
char __fastcall qpipe_read_n(unsigned int fd, __int64 a2, size_t a3)
{
  size_t v3; // rbx
  size_t v5; // rbp
  unsigned __int64 v6; // r12
  char *v7; // rdi
  char *v8; // rbp
  ssize_t v9; // rax
  int v10; // eax
  ssize_t v11; // rcx
  char result; // al
  char v13; // [rsp+7h] [rbp-31h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-30h]

  v3 = a3;
  v14 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = a3 + v5;
  if ( v5 >= a3 + v5 )
  {
    if ( a3 )
    {
      v13 = 0;
      sub_5E330(a2, v6, &v13);
      goto LABEL_8;
    }
    return 1;
  }
  if ( *(_QWORD *)(a2 + 16) >= v6 )
  {
    v7 = *(char **)a2;
  }
  else
  {
    v7 = (char *)qvector_reserve(a2, *(char **)a2, a3 + v5, 1u);
    *(_QWORD *)a2 = v7;
  }
  memset(&v7[*(_QWORD *)(a2 + 8)], 0, v6 - *(_QWORD *)(a2 + 8));
  *(_QWORD *)(a2 + 8) = v6;
  if ( !v3 )
    return 1;
LABEL_8:
  v8 = (char *)(*(_QWORD *)a2 + v5);
  while ( 1 )
  {
    v9 = read(fd, v8, v3);
    if ( !v9 )
      break;
    if ( v9 >= 0 )
    {
      v11 = v9;
      v8 += v9;
      result = 1;
      v3 -= v11;
      if ( !v3 )
        return result;
    }
    else
    {
      v10 = *(_DWORD *)__errno(fd);
      if ( v10 != 4 && v10 != 11 )
        return 0;
    }
  }
  return 0;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
