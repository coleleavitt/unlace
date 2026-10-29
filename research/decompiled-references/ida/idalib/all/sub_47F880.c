unsigned __int64 __fastcall sub_47F880(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // eax
  void *ptr[2]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v3 = *a1;
  v9 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64 *, __int64))(v3 + 64))(ptr, a1, a2);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  v4 = *(__int64 **)(switch_dbctx(*((int *)a1 + 2)) + 1672);
  v5 = *(_QWORD *)(*(_QWORD *)a1[5] + 16 * a2);
  *(_OWORD *)ptr = 0;
  v6 = sub_3BD970(v4, (__m128i *)ptr, v5);
  sub_459560(a1[4], 5u, *((_DWORD *)a1 + 3), 0xFFFFFFFF, ptr, v6, 0);
  return v9 - __readfsqword(0x28u);
}
