__int64 __fastcall sub_6BD7E0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rax
  const char *v7; // rcx
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+8h] [rbp-40h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a3 + 180) & 7) != 0 )
    return 1;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 144LL);
  v6 = sub_A56C90(*(_QWORD *)(a1 + 48), a3);
  if ( !(unsigned __int8)sub_1E3F5F0(v5, *(unsigned int *)(a3 + 24), v6, 1, 0) )
    return 1;
  if ( !a2 )
    return 0;
  sub_6B7750((__int64)&ptr, a1, a3, 1);
  v7 = haystack;
  if ( v9 )
    v7 = (const char *)ptr;
  if ( !(unsigned __int8)sub_6BD0A0(a1, a2, a3, v7, nullptr, 0xDu) )
  {
    if ( ptr )
    {
      v9 = 0;
      qfree(ptr);
    }
    clear_tinfo_t(a2);
    return 0;
  }
  if ( !ptr )
    return 0;
  v9 = 0;
  qfree(ptr);
  return 0;
}

