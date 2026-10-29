__int64 __fastcall sub_493480(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v4; // rsi
  __int64 tinfo_pdata; // r13
  unsigned int v9; // esi
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rsi
  unsigned int v18; // edx
  __int64 idati; // rax
  __int64 v20; // rbx
  unsigned int tinfo_property; // [rsp+Ch] [rbp-6Ch] BYREF
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v23; // [rsp+18h] [rbp-60h]
  __int64 v24; // [rsp+30h] [rbp-48h] BYREF
  __int64 v25; // [rsp+38h] [rbp-40h]
  __int16 v26; // [rsp+40h] [rbp-38h]
  unsigned __int64 v27; // [rsp+48h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  v4 = *a3;
  if ( (*a3 & 0x100) == 0 )
    return 0;
  ptr = nullptr;
  v23 = 0;
  tinfo_pdata = get_tinfo_pdata(&ptr, v4, 0);
  tinfo_property = get_tinfo_property(*a3, 7);
  v9 = tinfo_property;
  if ( tinfo_property )
    goto LABEL_9;
  if ( tinfo_pdata )
  {
    v10 = haystack;
    if ( (_QWORD)v23 )
      v10 = (const char *)ptr;
    if ( (unsigned __int8)sub_6B3A20(*(_QWORD *)(qword_2CCB598 + 1672), v10, &tinfo_property) )
    {
      v9 = tinfo_property;
LABEL_9:
      v11 = *(_QWORD *)(a1 + 16);
      v12 = v11 + 8;
      v13 = *(_QWORD *)(v11 + 16);
      if ( v13 )
      {
        v14 = v12;
        do
        {
          while ( 1 )
          {
            v15 = *(_QWORD *)(v13 + 16);
            v16 = *(_QWORD *)(v13 + 24);
            if ( *(_DWORD *)(v13 + 32) >= v9 )
              break;
            v13 = *(_QWORD *)(v13 + 24);
            if ( !v16 )
              goto LABEL_14;
          }
          v14 = v13;
          v13 = *(_QWORD *)(v13 + 16);
        }
        while ( v15 );
LABEL_14:
        if ( v12 != v14 && v9 >= *(_DWORD *)(v14 + 32) )
        {
          v17 = *a3;
          get_tinfo_pdata(&v24, *a3, 3);
          v18 = *(_DWORD *)(v14 + 36);
          idati = v24;
          v25 = 0;
          v26 = 1;
          v20 = *a3;
          tinfo_property = v18;
          LODWORD(v25) = v18;
          if ( !v24 )
            idati = get_idati(&v24, v17);
          v24 = idati;
          create_tinfo(a2, (unsigned __int8)v20, 189, &v24);
          *(_DWORD *)(a2 + 56) |= 1u;
          ++*(_DWORD *)(a1 + 24);
        }
      }
    }
  }
  if ( ptr )
  {
    *(_QWORD *)&v23 = 0;
    qfree(ptr);
  }
  return 0;
}
