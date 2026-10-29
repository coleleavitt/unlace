__int64 sub_6211B0(__int64 a1, FILE *a2, __int64 a3, ...)
{
  unsigned int v3; // ebx
  __int64 v5; // rax
  void *ptr; // [rsp+0h] [rbp-108h] BYREF
  __int128 v7; // [rsp+8h] [rbp-100h]
  gcc_va_list va; // [rsp+20h] [rbp-E8h] BYREF
  unsigned __int64 v9; // [rsp+38h] [rbp-D0h]

  va_start(va, a3);
  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v7 = 0;
  sub_3572D0((char **)&ptr);
  v3 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)a1 + 24LL))(a1, &ptr);
  if ( (_BYTE)v3 && (unsigned __int64)v7 > 1 )
  {
    v5 = qfwrite(a2, ptr);
    LOBYTE(v3) = v5 == ((_QWORD)v7 == 0) + (_QWORD)v7 - 1LL;
  }
  if ( ptr )
  {
    *(_QWORD *)&v7 = 0;
    qfree(ptr);
  }
  return v3;
}

