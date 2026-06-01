unsigned __int64 __fastcall sub_4B2150(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  __int64 (*v6)(void); // rax
  unsigned __int64 *v7; // rax
  _QWORD *i; // r15
  const char *v10; // rax
  void *v11; // rdx
  __int64 v12; // rsi
  unsigned __int64 *v13; // [rsp+8h] [rbp-78h]
  void *ptr; // [rsp+10h] [rbp-70h] BYREF
  __m128i v15; // [rsp+18h] [rbp-68h]
  void *v16; // [rsp+30h] [rbp-50h] BYREF
  __m128i v17; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+48h] [rbp-38h]

  v4 = *(_QWORD *)a1;
  v18 = __readfsqword(0x28u);
  v6 = *(__int64 (**)(void))(v4 + 32);
  if ( (char *)v6 == (char *)sub_3DB7B0 )
    v7 = (unsigned __int64 *)(a1 + 16);
  else
    v7 = (unsigned __int64 *)v6();
  if ( a3 >= *v7
    && a3 < v7[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    switch_dbctx(*(int *)(a1 + 8));
    v13 = (unsigned __int64 *)(**(_QWORD **)(a1 + 40) + 16 * a3);
    for ( i = sub_4B1D30(a1, *v13, *(_QWORD **)(a1 + 56));
          i != (_QWORD *)(*(_QWORD *)(a1 + 56) + 144LL * *(_QWORD *)(a1 + 64));
          i += 18 )
    {
      if ( *i >= v13[1] )
        break;
      if ( *((_BYTE *)i + 64) )
      {
        v16 = nullptr;
        v10 = haystack;
        v17 = 0;
        if ( i[3] )
          v10 = (const char *)i[2];
        print_tinfo((unsigned int)&v16, 0, 0, 0, 0, (_DWORD)i + 64, (__int64)v10, 0);
        if ( !*(_BYTE *)(a1 + 107) )
          sub_35A910((__int64 *)&v16);
        v11 = v16;
        v15 = _mm_loadu_si128(&v17);
      }
      else
      {
        ptr = nullptr;
        v15 = 0;
        sub_493230(&ptr, (__int64)(i + 2));
        v11 = ptr;
      }
      ptr = v11;
      sub_4790E0(a2, (unsigned __int64)&ptr);
      if ( ptr )
        qfree(ptr);
      v12 = (__int64)i;
      sub_49AEB0(a2, v12);
    }
  }
  return v18 - __readfsqword(0x28u);
}
