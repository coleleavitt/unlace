unsigned __int64 __fastcall sub_47F940(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 *v6; // rdi
  __int64 v7; // rdx
  unsigned int v8; // eax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v4 = *a2;
  v11 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **))(v4 + 64))(ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  v6 = *(__int64 **)(switch_dbctx(*((int *)a2 + 2)) + 1672);
  v7 = *(_QWORD *)(**(_QWORD **)(a1 + 40) + 16 * a3);
  *(_OWORD *)ptr = 0;
  v8 = sub_3BD970(v6, (__m128i *)ptr, v7);
  sub_459560(*(_QWORD *)(a1 + 32), 5u, *(_DWORD *)(a1 + 12), *((_DWORD *)a2 + 3), ptr, v8, 1);
  return v11 - __readfsqword(0x28u);
}
