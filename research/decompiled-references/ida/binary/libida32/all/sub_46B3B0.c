unsigned __int64 __fastcall sub_46B3B0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 *v6; // rdi
  unsigned int v7; // edx
  unsigned int v8; // eax
  void *ptr[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v4 = *a2;
  v11 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **))(v4 + 64))(ptr);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  v6 = *(__int64 **)(switch_dbctx(*((int *)a2 + 2)) + 1480);
  v7 = *(_DWORD *)(**(_QWORD **)(a1 + 40) + 8 * a3);
  ptr[0] = nullptr;
  v8 = sub_3B8D10(v6, (unsigned int *)ptr, v7);
  sub_445720(*(_QWORD *)(a1 + 32), 5u, *(_DWORD *)(a1 + 12), *((_DWORD *)a2 + 3), ptr, v8, 1);
  return v11 - __readfsqword(0x28u);
}

