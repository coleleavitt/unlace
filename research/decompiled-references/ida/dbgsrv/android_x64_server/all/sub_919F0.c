/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_919F0
// Address: 0x00000000000919F0

//----- (00000000000919F0) ----------------------------------------------------
unsigned __int64 __fastcall sub_919F0(__int64 **a1, __int64 a2, const char *a3)
{
  _OWORD *v4; // rbx
  _QWORD *v5; // r13
  size_t v6; // rax
  size_t v7; // r15
  char **v8; // rbx
  size_t v9; // r12
  char *v10; // rdi
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+10h] [rbp-48h]
  __int64 v14[7]; // [rsp+20h] [rbp-38h] BYREF

  v14[1] = __readfsqword(0x28u);
  if ( a3 )
  {
    *(_OWORD *)ptr = 0;
    v13 = 0;
    sub_91650(a2, (__int64)ptr);
    v14[0] = (__int64)ptr;
    v4 = sub_9D5B0(a1, (__int64)ptr, (__int64)byte_103B20, v14);
    v5 = v4;
    v6 = strlen(a3);
    if ( v6 )
    {
      v7 = v6;
      v8 = (char **)v4 + 7;
      v9 = v6 + 1;
      if ( v5[9] >= v6 + 1 )
      {
        v10 = *v8;
      }
      else
      {
        v10 = (char *)qvector_reserve((__int64)v8, *v8, v6 + 1, 1u);
        *v8 = v10;
      }
      v5[8] = v9;
      memmove(v10, a3, v7);
      *(_BYTE *)(v5[7] + v7) = 0;
    }
    else
    {
      *((_QWORD *)v4 + 8) = 0;
    }
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v13 = 0;
    }
  }
  return __readfsqword(0x28u);
}
