bool __fastcall sub_29B010(__int64 a1, _DWORD a2, __int64 a3, int a4)
{
  int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rdi
  char v14; // al
  int v15; // ebx
  int v16; // eax
  char tinfo_property; // bl
  char v18; // al
  char v19; // al
  unsigned __int64 tinfo_size; // rax
  int v21; // r8d
  int v22; // r9d
  unsigned __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // r12
  __int64 v26; // rbp
  _QWORD *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rdi
  char v30; // [rsp+Fh] [rbp-79h]
  __int64 v31; // [rsp+10h] [rbp-78h] BYREF
  __int128 v32; // [rsp+18h] [rbp-70h]
  __int128 v33; // [rsp+28h] [rbp-60h]
  __int64 v34; // [rsp+38h] [rbp-50h]
  int v35; // [rsp+40h] [rbp-48h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( (get_tinfo_property() & 0x3F) == 1 )
    return 1;
  if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    v31 = 0;
    v35 = 1;
    v34 = 0;
    v32 = 0;
    v33 = 0;
    if ( (unsigned __int8)get_tinfo_details() && sub_29ACE0(a1, (__int64)&v31, a3, a4, v7) )
    {
      v24 = v31;
      if ( v31 )
      {
        v25 = v32;
        if ( (_QWORD)v32 )
        {
          v26 = 0;
          do
          {
            v27 = (_QWORD *)(v24 + 144 * v26);
            clear_tinfo_t();
            v28 = v27[5];
            if ( v28 )
            {
              v27[6] = 0;
              qfree(v28);
            }
            v29 = v27[2];
            if ( v29 )
            {
              v27[3] = 0;
              qfree(v29);
            }
            ++v26;
            v24 = v31;
          }
          while ( v25 != v26 );
        }
        *(_QWORD *)&v32 = 0;
        qfree(v24);
      }
      return 1;
    }
    v8 = v31;
    if ( v31 )
    {
      v9 = v32;
      if ( (_QWORD)v32 )
      {
        v10 = 0;
        do
        {
          v11 = (_QWORD *)(v8 + 144 * v10);
          clear_tinfo_t();
          v12 = v11[5];
          if ( v12 )
          {
            v11[6] = 0;
            qfree(v12);
          }
          v13 = v11[2];
          if ( v13 )
          {
            v11[3] = 0;
            qfree(v13);
          }
          ++v10;
          v8 = v31;
        }
        while ( v9 != v10 );
      }
      *(_QWORD *)&v32 = 0;
      qfree(v8);
    }
    goto LABEL_15;
  }
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    v31 = 0;
    *(_QWORD *)&v32 = 0;
    if ( (unsigned __int8)get_tinfo_details()
      && (tinfo_size = get_tinfo_size()) != 0
      && tinfo_size * (unsigned int)(DWORD1(v32) - 1) >= a3 )
    {
      LODWORD(v23) = -1;
      if ( a3 != -1 )
        v23 = a3 % tinfo_size;
      v14 = sub_29B010(a1, (unsigned int)&v31, v23, a4, v21, v22);
      if ( !v14 )
      {
        clear_tinfo_t();
        goto LABEL_15;
      }
    }
    else
    {
      v14 = 0;
    }
    v30 = v14;
    clear_tinfo_t();
    return v30;
  }
LABEL_15:
  if ( a3 > 0 )
    return 0;
  v15 = get_tinfo_size();
  if ( v15 < 0 )
    return 0;
  v16 = get_tinfo_size();
  if ( v16 < 0 )
    return 0;
  if ( v15 != v16 )
    return 0;
  tinfo_property = get_tinfo_property();
  if ( ((get_tinfo_property() & 0xF) == 9) != ((tinfo_property & 0xF) == 9) )
    return 0;
  if ( (unsigned __int8)compare_tinfo() )
    return 1;
  v18 = get_tinfo_property();
  if ( (v18 & 0x3E) != 0 && (v18 & 0xFu) <= 8 && (v19 = get_tinfo_property(), (v19 & 0x3E) != 0) )
    return (v19 & 0xFu) <= 8;
  else
    return 0;
}
