unsigned __int64 __fastcall sub_608E60(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  const char *v4; // rdx
  char v5[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v6; // [rsp+1008h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 1672);
  if ( *(_QWORD *)(v1 + 8) )
  {
    sub_592AF0(a1, v5, 4097, (__int64)&unk_23B13BC);
    v2 = *(_QWORD *)(v1 + 8);
    if ( (*(_BYTE *)(v2 + 32) & 0x40) == 0 )
    {
      if ( (unsigned __int8)qfileexist(v5, v5) )
        return v6 - __readfsqword(0x28u);
      v2 = *(_QWORD *)(v1 + 8);
    }
    if ( !(unsigned __int8)store_til(v2, 0, v5) )
    {
      v4 = (const char *)qstrerror(0xFFFFFFFFLL);
      sub_378C70((__int64)"%s: %s", v5, v4);
    }
  }
  return v6 - __readfsqword(0x28u);
}
