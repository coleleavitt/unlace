unsigned __int64 __fastcall sub_1F17C20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 *a6)
{
  _QWORD *v7; // rdi
  _QWORD *v8; // rbp
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  char *v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r14
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbx
  void *ptr[2]; // [rsp+0h] [rbp-108h] BYREF
  _BYTE v19[248]; // [rsp+10h] [rbp-F8h] BYREF

  v7 = (_QWORD *)*a1;
  v8 = (_QWORD *)*v7;
  v9 = sub_1F17110((__int64)v7, a2, a3, a4, a5, a6);
  v10 = *a1;
  v11 = v9;
  ptr[0] = v19;
  ptr[1] = (void *)0x800000000LL;
  v12 = (char *)sub_1F0BD10(v10, (unsigned int *)ptr);
  v14 = v13;
  v15 = sub_1F16500(*(_QWORD **)(*a1 + 8), *(_QWORD *)(*a1 + 16), (__int64 *)(*a1 + 32), (_DWORD *)(*a1 + 24));
  v16 = sub_AB7CB0(v8, v11, v12, v14, nullptr, 0, v15);
  if ( ptr[0] != v19 )
    free(ptr[0]);
  return v16;
}
