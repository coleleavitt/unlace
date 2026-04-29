unsigned __int64 __fastcall sub_38A1F0(
        __int64 a1,
        void (__fastcall ***a2)(_QWORD, char **, void **, __int64),
        unsigned __int8 a3)
{
  void (__fastcall ***v3)(_QWORD, char **, void **, __int64); // r13
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 *v7; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int ordinal_limit; // r14d
  __int64 idati; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v16; // rbx
  __int64 v18; // r14
  __int64 v20; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v21[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v22; // [rsp+30h] [rbp-48h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v3 = a2;
  v23 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 && (v6 = *(_QWORD *)(v5 + 8)) != 0 )
  {
    v16 = *(__int64 **)v5;
    v18 = *(_QWORD *)v5 + 8 * v6;
    if ( v18 != *(_QWORD *)v5 )
    {
      do
        sub_38A030(a1, a2, a3, v16++);
      while ( (__int64 *)v18 != v16 );
    }
  }
  else
  {
    v7 = nullptr;
    v8 = 1;
    ordinal_limit = get_ordinal_limit(0);
    if ( ordinal_limit > 1 )
    {
      do
      {
        while ( 1 )
        {
          v20 = 0;
          idati = get_idati(v7, a2, v9, v10);
          v22 = 257;
          v21[1] = v8;
          if ( !idati )
            idati = get_idati(v7, a2, v13, v14);
          v21[0] = idati;
          create_tinfo(&v20, 61, 189, v21);
          a2 = (void (__fastcall ***)(_QWORD, char **, void **, __int64))&word_2;
          if ( (get_tinfo_property(v20, 2) & 0x2F) != 0xD )
            break;
          a2 = v3;
          sub_38A030(a1, v3, a3, &v20);
          v7 = &v20;
          ++v8;
          clear_tinfo_t(&v20);
          if ( ordinal_limit == v8 )
            return v23 - __readfsqword(0x28u);
        }
        v7 = &v20;
        ++v8;
        clear_tinfo_t(&v20);
      }
      while ( ordinal_limit != v8 );
    }
  }
  return v23 - __readfsqword(0x28u);
}
