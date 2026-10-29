unsigned __int64 __fastcall sub_5FBD60(__int64 *a1, unsigned int a2, _QWORD *a3, char a4)
{
  __int64 v6; // rdi
  unsigned int *v8; // rax
  unsigned int *v9; // rbp
  char *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rbp
  char *v13; // rbx
  void *v14; // rdi
  void *v15; // rdi
  char v17; // al
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // eax
  int tinfo_property; // edx
  void *v25; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v26; // [rsp+8h] [rbp-A0h]
  __int64 v27; // [rsp+18h] [rbp-90h]
  __int64 v28; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+28h] [rbp-80h] BYREF
  int v30; // [rsp+38h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-68h]
  __int128 v32; // [rsp+48h] [rbp-60h]
  char v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v6 = *a3;
  v34 = __readfsqword(0x28u);
  v25 = nullptr;
  v27 = 0;
  v28 = 0;
  v29[0] = 0;
  v29[1] = 0;
  v30 = 0;
  ptr = nullptr;
  v33 = 16;
  v26 = 0;
  v32 = 0;
  get_tinfo_details(v6, 12, &v25);
  if ( (get_tinfo_property(v28, 2) & 0xF) == 9 )
    set_abits(a2, 0x4000000);
  else
    clr_abits(a2, 0x4000000);
  v8 = sub_5AFCE0((__int64)a1, a2);
  v9 = v8;
  if ( v8 && *v8 == a2 )
  {
    lock_func_range(v8, 1);
    v17 = v27;
    v18 = *((_QWORD *)v9 + 1);
    if ( (v27 & 2) != 0 && (v18 & 1) == 0 )
    {
      sub_5ACD00(v9);
      v17 = v27;
      v18 = *((_QWORD *)v9 + 1);
    }
    v19 = v17 & 0x80;
    if ( ((v18 & 2) == 0) != (unsigned __int8)(v17 & 0x80) >> 7 )
    {
      v20 = v18;
      v21 = v18 & 0xFFFFFFFFFFFFFFFDLL;
      v22 = v20 | 2;
      if ( v19 )
        v21 = v22;
      *((_QWORD *)v9 + 1) = v21;
      sub_5ACD60((__int64)a1, v9, 0);
      v18 = *((_QWORD *)v9 + 1);
    }
    if ( (v18 & 0x4000) == 0 )
    {
      v23 = v33 & 0xF0;
      if ( (v33 & 0xF0) == 0xC0 )
        v23 = HIDWORD(v27);
      if ( v23 > 0x10 || (unsigned int)getinf(99) != 16 )
      {
        tinfo_property = get_tinfo_property(*a3, 21);
        if ( tinfo_property != -1 )
          sub_59DAA0(a1, a2, tinfo_property, a4 & 1);
      }
      v18 = *((_QWORD *)v9 + 1);
    }
    sub_3A2A80(a1, a2, v18 & 1);
    sub_5FB620(a1, (int *)v9, &v25);
    lock_func_range(v9, 0);
  }
  else
  {
    if ( (v27 & 2) != 0 && (get_aflags(a2) & 0x400000) == 0 )
      set_abits(a2, &loc_400000);
    sub_3A2A80(a1, a2, 0);
  }
  if ( ptr )
  {
    *(_QWORD *)&v32 = 0;
    qfree(ptr);
  }
  cleanup_argloc(v29);
  clear_tinfo_t(&v28);
  v10 = (char *)v25;
  if ( v25 )
  {
    v11 = v26;
    if ( (_QWORD)v26 )
    {
      v12 = 0;
      do
      {
        v13 = &v10[80 * v12];
        clear_tinfo_t(v13 + 64);
        v14 = *((void **)v13 + 5);
        if ( v14 )
        {
          *((_QWORD *)v13 + 6) = 0;
          qfree(v14);
        }
        v15 = *((void **)v13 + 2);
        if ( v15 )
        {
          *((_QWORD *)v13 + 3) = 0;
          qfree(v15);
        }
        ++v12;
        cleanup_argloc(v13);
        v10 = (char *)v25;
      }
      while ( v11 != v12 );
    }
    *(_QWORD *)&v26 = 0;
    qfree(v10);
  }
  return v34 - __readfsqword(0x28u);
}

