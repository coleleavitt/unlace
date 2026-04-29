__int64 __fastcall sub_38D910(__int64 a1, __int128 *a2, __int64 *a3, __int64 *a4)
{
  __int64 v4; // r13
  int v7; // eax
  __int128 *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int tinfo_udt_member; // ebx
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r14
  int tinfo_property; // ebx
  int v17; // eax
  __int64 v18; // r14
  __int64 v19; // rax
  char v20; // al
  unsigned int v21; // edx
  __int64 v22; // rcx
  __int64 v23; // [rsp+8h] [rbp-E0h] BYREF
  __int128 v24; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v25; // [rsp+20h] [rbp-C8h]
  __int128 v26; // [rsp+28h] [rbp-C0h]
  __int64 v27; // [rsp+38h] [rbp-B0h]
  __int128 v28; // [rsp+40h] [rbp-A8h]
  _OWORD v29[3]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v30; // [rsp+80h] [rbp-68h]
  int v31; // [rsp+88h] [rbp-60h]
  __int64 v32; // [rsp+90h] [rbp-58h]
  char v33; // [rsp+98h] [rbp-50h]
  unsigned __int64 v34; // [rsp+A8h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  if ( *(_DWORD *)a1 != 1 )
    return (unsigned int)-1;
  v4 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(v4 + 8);
  if ( (unsigned int)(v7 - 59) > 1 )
  {
    if ( v7 == 35 && *(_DWORD *)(*(_QWORD *)(v4 + 32) + 8LL) == 61 )
    {
      v15 = *(_QWORD *)(v4 + 24);
      tinfo_property = get_tinfo_property(*(_QWORD *)(v15 + 48), 14);
      if ( tinfo_property > 0 )
      {
        v17 = *(_DWORD *)(v15 + 8);
        if ( v17 == 48 )
        {
          v15 = *(_QWORD *)(v15 + 24);
          v17 = *(_DWORD *)(v15 + 8);
        }
        if ( v17 == 52 )
        {
          v18 = *(_QWORD *)(v15 + 24);
          if ( *(_DWORD *)(v18 + 8) == 60 )
          {
            v19 = *(_QWORD *)(v18 + 24);
            *(_QWORD *)&v24 = 0;
            *(_QWORD *)&v24 = get_tinfo_property(*(_QWORD *)(v19 + 48), 9);
            if ( (_BYTE)v24 )
            {
              v20 = get_tinfo_property(v24, 2);
              v21 = 0;
              if ( (v20 & 0x3F) == 0xD )
                v21 = *(_DWORD *)(v18 + 32);
              if ( a3 )
              {
                v22 = v24;
                *(_QWORD *)&v24 = *a3;
                *a3 = v22;
              }
              if ( a4 )
                *a4 = 8 * (v21 + tinfo_property * sub_281E20(*(_QWORD *)(v4 + 32)));
            }
            clear_tinfo_t(&v24);
          }
        }
      }
    }
    return (unsigned int)-1;
  }
  v23 = 0;
  v8 = a2;
  copy_tinfo_t(&v23, *(_QWORD *)(v4 + 24) + 48LL);
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL) != 60
    || (*(_QWORD *)&v24 = 0,
        *(_QWORD *)&v24 = get_tinfo_property(v23, 9),
        copy_tinfo_t(&v23, &v24),
        clear_tinfo_t(&v24),
        (_BYTE)v23) )
  {
    if ( a3 )
    {
      v9 = v23;
      v23 = *a3;
      *a3 = v9;
    }
    else
    {
      a3 = &v23;
    }
    v25 = 0;
    if ( !a2 )
      v8 = &v24;
    v10 = *(_QWORD *)(a1 + 8);
    v27 = 0;
    v30 = 1;
    v31 = -1;
    v32 = 0;
    v33 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v29[0] = 0;
    *(_QWORD *)v8 = *(unsigned int *)(v10 + 32);
    if ( a4 && (get_tinfo_property(*a3, 2) & 0x3F) == 0xD )
    {
      v13 = get_tinfo_property(*a3, 2);
      v14 = 0;
      if ( (v13 & 0x3F) == 0xD )
        v14 = 8LL * *(_QWORD *)v8;
      *a4 = v14;
    }
    tinfo_udt_member = find_tinfo_udt_member(v8, *a3, 2);
    clear_tinfo_t(v29);
    if ( v27 )
    {
      *(_QWORD *)&v28 = 0;
      qfree(v27);
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree(v25);
    }
  }
  else
  {
    tinfo_udt_member = -1;
  }
  clear_tinfo_t(&v23);
  return tinfo_udt_member;
}
