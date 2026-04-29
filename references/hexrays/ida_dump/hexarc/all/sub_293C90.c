bool __fastcall sub_293C90(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rdi
  char tinfo_property; // al
  __int64 v10; // rdi
  int v11; // r8d
  __int64 v12; // rdi
  __int64 v13; // r14
  __int64 v14; // r15
  _QWORD *v15; // rbx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  char v19; // al
  int v20; // ebx
  int v21; // eax
  char v22; // bl
  char v23; // al
  char v24; // al
  unsigned __int64 tinfo_size; // rax
  int v26; // r8d
  int v27; // r9d
  unsigned __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbp
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  char v35; // [rsp+Fh] [rbp-79h]
  __int64 v36; // [rsp+10h] [rbp-78h] BYREF
  __int128 v37; // [rsp+18h] [rbp-70h]
  __int128 v38; // [rsp+28h] [rbp-60h]
  __int64 v39; // [rsp+38h] [rbp-50h]
  int v40; // [rsp+40h] [rbp-48h]
  unsigned __int64 v41; // [rsp+48h] [rbp-40h]

  v6 = *a4;
  v41 = __readfsqword(0x28u);
  if ( (get_tinfo_property(v6, 2) & 0x3F) == 1 )
    return 1;
  tinfo_property = get_tinfo_property(*a2, 2);
  v10 = *a2;
  if ( (tinfo_property & 0x2F) == 0xD )
  {
    v36 = 0;
    v40 = 1;
    v39 = 0;
    v37 = 0;
    v38 = 0;
    if ( (unsigned __int8)get_tinfo_details(v10, 13, &v36) && sub_293960(a1, (__int64)&v36, a3, (int)a4, v11) )
    {
      v29 = v36;
      if ( v36 )
      {
        v30 = v37;
        if ( (_QWORD)v37 )
        {
          v31 = 0;
          do
          {
            v32 = (_QWORD *)(v29 + 144 * v31);
            clear_tinfo_t(v32 + 8);
            v33 = v32[5];
            if ( v33 )
            {
              v32[6] = 0;
              qfree(v33);
            }
            v34 = v32[2];
            if ( v34 )
            {
              v32[3] = 0;
              qfree(v34);
            }
            ++v31;
            v29 = v36;
          }
          while ( v30 != v31 );
        }
        *(_QWORD *)&v37 = 0;
        qfree(v29);
      }
      return 1;
    }
    v12 = v36;
    if ( v36 )
    {
      v13 = v37;
      if ( (_QWORD)v37 )
      {
        v14 = 0;
        do
        {
          v15 = (_QWORD *)(v12 + 144 * v14);
          clear_tinfo_t(v15 + 8);
          v16 = v15[5];
          if ( v16 )
          {
            v15[6] = 0;
            qfree(v16);
          }
          v17 = v15[2];
          if ( v17 )
          {
            v15[3] = 0;
            qfree(v17);
          }
          ++v14;
          v12 = v36;
        }
        while ( v13 != v14 );
      }
      *(_QWORD *)&v37 = 0;
      qfree(v12);
    }
    goto LABEL_15;
  }
  if ( (get_tinfo_property(v10, 2) & 0xF) == 0xB )
  {
    v18 = *a2;
    v36 = 0;
    *(_QWORD *)&v37 = 0;
    if ( (unsigned __int8)get_tinfo_details(v18, 11, &v36)
      && (tinfo_size = get_tinfo_size(0, v36, 0)) != 0
      && tinfo_size * (unsigned int)(DWORD1(v37) - 1) >= a3 )
    {
      LODWORD(v28) = -1;
      if ( a3 != -1 )
        v28 = a3 % tinfo_size;
      v19 = sub_293C90(a1, (unsigned int)&v36, v28, (_DWORD)a4, v26, v27);
      if ( !v19 )
      {
        clear_tinfo_t(&v36);
        goto LABEL_15;
      }
    }
    else
    {
      v19 = 0;
    }
    v35 = v19;
    clear_tinfo_t(&v36);
    return v35;
  }
LABEL_15:
  if ( a3 > 0 )
    return 0;
  v20 = get_tinfo_size(0, *a2, 0);
  if ( v20 < 0 )
    return 0;
  v21 = get_tinfo_size(0, *a4, 0);
  if ( v21 < 0 )
    return 0;
  if ( v20 != v21 )
    return 0;
  v22 = get_tinfo_property(*a2, 2);
  if ( ((get_tinfo_property(*a4, 2) & 0xF) == 9) != ((v22 & 0xF) == 9) )
    return 0;
  if ( (unsigned __int8)compare_tinfo(*a2, *a4, 2) )
    return 1;
  v23 = get_tinfo_property(*a2, 2);
  if ( (v23 & 0x3E) != 0 && (v23 & 0xFu) <= 8 && (v24 = get_tinfo_property(*a4, 2), (v24 & 0x3E) != 0) )
    return (v24 & 0xFu) <= 8;
  else
    return 0;
}
