unsigned __int64 __fastcall sub_5ECFA0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v6; // rdx
  char v7[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v8; // [rsp+1008h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1480);
  if ( *(_QWORD *)(v1 + 8) )
  {
    sub_579240(a1, v7, 4097, (__int64)&unk_238D25C);
    v2 = *(_QWORD *)(v1 + 8);
    if ( (*(_BYTE *)(v2 + 32) & 0x40) == 0 )
    {
      if ( (unsigned __int8)qfileexist(v7, v7) )
        return v8 - __readfsqword(0x28u);
      v2 = *(_QWORD *)(v1 + 8);
    }
    if ( !(unsigned __int8)store_til(v2, 0, v7) )
    {
      v6 = (const char *)qstrerror(0xFFFFFFFFLL, 0, v3, v4);
      sub_375320((__int64)"%s: %s", v7, v6);
    }
  }
  return v8 - __readfsqword(0x28u);
}

