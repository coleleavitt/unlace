__int64 __fastcall sub_1A8D0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  void (*v4)(); // rax
  int v6; // ecx
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  __int64 v10; // rdi
  const char *v11; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 58 )
    {
      if ( !byte_1671A1 )
        sub_96F80(2143);
      BUG();
    }
    ptr = nullptr;
    v13 = 0;
    sub_65C40(&ptr, a2, 0);
    v9 = a1[1];
    if ( v9 && (v10 = *(_QWORD *)(v9 + 16)) != 0 )
    {
      v11 = haystack;
      if ( (_QWORD)v13 )
        v11 = (const char *)ptr;
      sub_19480(v10, (__int64)"%s\n\n", v11);
    }
    else if ( (_QWORD)v13 )
    {
      sub_708D0((unsigned int)"%s\n\n", (_DWORD)ptr, v13, v6, v7, v8);
    }
    else
    {
      sub_708D0((unsigned int)"%s\n\n", (unsigned int)haystack, 0, v6, v7, v8);
    }
    if ( ptr )
    {
      *(_QWORD *)&v13 = 0;
      j__free(ptr);
    }
  }
  else
  {
    v4 = *(void (**)())(*a1 + 56LL);
    if ( v4 != nullsub_6 )
      ((void (__fastcall *)(_QWORD *, __int64, __int64))v4)(a1, a3, a4);
  }
  return a2;
}

