/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000260C0
// Address: 0x00000001000260C0

//----- (00000001000260C0) ----------------------------------------------------
__int64 __fastcall sub_1000260C0(__int64 a1, const char *a2, unsigned int a3)
{
  __int64 v3; // r15
  unsigned int v4; // ebx
  int v7; // esi
  size_t v8; // rax
  size_t v9; // r12
  size_t v10; // rbx
  void *v11; // rdi
  __int128 v14; // [rsp+10h] [rbp-50h] BYREF
  __int64 v15; // [rsp+20h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 192);
  if ( v3 )
  {
    v4 = a3;
    v7 = *(_DWORD *)(a1 + 208);
    v14 = 0;
    v15 = 0;
    if ( a2 )
    {
      v8 = strlen(a2);
      v9 = v8;
      v10 = v8 + 1;
      if ( v8 == -1 )
      {
        v11 = nullptr;
      }
      else
      {
        v11 = qvector_reserve((__int64)&v14, nullptr, v8 + 1, 1u);
        *(_QWORD *)&v14 = v11;
      }
      *((_QWORD *)&v14 + 1) = v10;
      memmove(v11, a2, v9);
      *(_BYTE *)(v14 + v9) = 0;
      v4 = a3;
    }
    sub_100033200(v3, v7, (__int64)&v14);
    if ( (_QWORD)v14 )
    {
      *((_QWORD *)&v14 + 1) = 0;
      qfree((void *)v14);
    }
    sub_100033520(*(_QWORD *)(a1 + 192), *(_DWORD *)(a1 + 208), v4);
  }
  return __stack_chk_guard;
}
