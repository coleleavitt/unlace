unsigned __int64 __fastcall sub_49CCF0(__int64 a1, __int64 *a2, unsigned __int64 a3)
{
  __int64 (*v3)(void); // rax
  unsigned __int64 *v5; // rax
  unsigned int *v7; // r12
  _QWORD *i; // r15
  const char *v9; // rax
  void *v10; // rdx
  __int64 v11; // rsi
  void *ptr; // [rsp+10h] [rbp-70h] BYREF
  __m128i v14; // [rsp+18h] [rbp-68h]
  void *v15; // [rsp+30h] [rbp-50h] BYREF
  __m128i v16; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]

  v3 = *(__int64 (**)(void))(*(_QWORD *)a1 + 32LL);
  v17 = __readfsqword(0x28u);
  if ( (char *)v3 == (char *)sub_3D58E0 )
    v5 = (unsigned __int64 *)(a1 + 16);
  else
    v5 = (unsigned __int64 *)v3();
  if ( a3 >= *v5
    && a3 < v5[1]
    && a3 == (*(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)a1 + 40LL))(a1, a3, 0) )
  {
    switch_dbctx(*(int *)(a1 + 8));
    v7 = (unsigned int *)(**(_QWORD **)(a1 + 40) + 8 * a3);
    for ( i = sub_49C910(a1, *v7, *(_QWORD **)(a1 + 56));
          i != (_QWORD *)(*(_QWORD *)(a1 + 56) + (*(_QWORD *)(a1 + 64) << 7));
          i += 16 )
    {
      if ( *i >= (unsigned __int64)v7[1] )
        break;
      if ( *((_BYTE *)i + 64) )
      {
        v15 = nullptr;
        v9 = haystack;
        v16 = 0;
        if ( i[3] )
          v9 = (const char *)i[2];
        print_tinfo((int)&v15, 0, 0, 0, 0, (_DWORD)i + 64, (__int64)v9, 0);
        if ( !*(_BYTE *)(a1 + 107) )
          sub_357520((__int64 *)&v15);
        v10 = v15;
        v14 = _mm_loadu_si128(&v16);
      }
      else
      {
        ptr = nullptr;
        v14 = 0;
        sub_47E730(&ptr, (__int64)(i + 2));
        v10 = ptr;
      }
      ptr = v10;
      sub_464BE0(a2, (unsigned __int64)&ptr);
      if ( ptr )
        qfree(ptr);
      v11 = (__int64)i;
      sub_486220(a2, v11);
    }
  }
  return v17 - __readfsqword(0x28u);
}

