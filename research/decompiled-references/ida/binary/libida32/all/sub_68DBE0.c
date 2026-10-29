__int64 __fastcall sub_68DBE0(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v7; // rsi
  __int64 tinfo_pdata; // rax
  void *v9; // rdi
  char *v10; // rax
  __int64 idati; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  char *v14; // rdi
  __int64 v15; // r12
  __int64 v16; // rbp
  char *v17; // rbx
  void *v18; // rdi
  void *v19; // rdi
  void *ptr; // [rsp+0h] [rbp-88h] BYREF
  __int128 v21; // [rsp+8h] [rbp-80h]
  _QWORD v22[2]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v23; // [rsp+30h] [rbp-58h]
  void *v24; // [rsp+40h] [rbp-48h] BYREF
  __int128 v25; // [rsp+48h] [rbp-40h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( (*a3 & 0x100) == 0 || !(unsigned int)get_tinfo_property(*a3, 7) )
    return 0;
  v7 = *a3;
  ptr = nullptr;
  v21 = 0;
  if ( (v7 & 0x100) != 0 )
  {
    tinfo_pdata = get_tinfo_pdata(&ptr, v7, 0);
    v9 = ptr;
    if ( !tinfo_pdata )
      goto LABEL_7;
    v10 = (char *)ptr;
    if ( !(_QWORD)v21 )
      v10 = &byte_2CA12E1;
    if ( *v10 == 35 )
    {
LABEL_7:
      if ( ptr )
      {
        *(_QWORD *)&v21 = 0;
        qfree(ptr);
      }
      return 0xFFFFFFFFLL;
    }
    *(_DWORD *)(a2 + 56) |= 1u;
    idati = *(_QWORD *)(a1 + 16);
    v23 = 0;
    v22[1] = v9;
    if ( !idati )
      idati = get_idati(v9, v7);
    v12 = *(unsigned __int8 *)a3;
    v22[0] = idati;
    create_tinfo(a2, v12, 189, v22);
    v13 = *a3;
    v25 = 0;
    v24 = nullptr;
    if ( (unsigned __int8)get_tinfo_attrs(v13, &v24, 0) )
      set_tinfo_attrs(a2, &v24);
    v14 = (char *)v24;
    ++*(_DWORD *)(a1 + 24);
    if ( v14 )
    {
      v15 = v25;
      if ( (_QWORD)v25 )
      {
        v16 = 0;
        do
        {
          v17 = &v14[48 * v16];
          v18 = *((void **)v17 + 3);
          if ( v18 )
          {
            *((_QWORD *)v17 + 4) = 0;
            qfree(v18);
          }
          v19 = *(void **)v17;
          if ( *(_QWORD *)v17 )
          {
            *((_QWORD *)v17 + 1) = 0;
            qfree(v19);
          }
          ++v16;
          v14 = (char *)v24;
        }
        while ( v15 != v16 );
      }
      *(_QWORD *)&v25 = 0;
      qfree(v14);
    }
    if ( ptr )
    {
      *(_QWORD *)&v21 = 0;
      qfree(ptr);
    }
    return 0;
  }
  return 0xFFFFFFFFLL;
}

