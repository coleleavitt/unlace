unsigned __int64 __fastcall sub_46B2F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 *v4; // rdi
  unsigned int v5; // edx
  unsigned int v6; // eax
  void *ptr[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-20h]

  v3 = *a1;
  v9 = __readfsqword(0x28u);
  (*(void (__fastcall **)(void **, __int64 *, __int64))(v3 + 64))(ptr, a1, a2);
  if ( ptr[0] )
  {
    ptr[1] = nullptr;
    qfree(ptr[0]);
  }
  v4 = *(__int64 **)(switch_dbctx(*((int *)a1 + 2)) + 1480);
  v5 = *(_DWORD *)(*(_QWORD *)a1[5] + 8 * a2);
  ptr[0] = nullptr;
  v6 = sub_3B8D10(v4, (unsigned int *)ptr, v5);
  sub_445720(a1[4], 5u, *((_DWORD *)a1 + 3), 0xFFFFFFFF, ptr, v6, 0);
  return v9 - __readfsqword(0x28u);
}

