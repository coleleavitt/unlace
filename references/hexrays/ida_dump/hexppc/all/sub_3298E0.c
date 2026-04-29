__int64 __fastcall sub_3298E0(__int64 a1, __int64 *a2, int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi
  char v10; // bp
  __int64 v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // r14
  __int64 v18; // r13
  _QWORD *v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned __int64 tinfo_size; // rbx
  unsigned int v24; // eax
  char v26; // [rsp+Fh] [rbp-D9h]
  signed int v27; // [rsp+14h] [rbp-D4h] BYREF
  __int64 tinfo_property; // [rsp+18h] [rbp-D0h] BYREF
  _DWORD v29[4]; // [rsp+20h] [rbp-C8h] BYREF
  _QWORD v30[2]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v32; // [rsp+48h] [rbp-A0h]
  __int64 v33; // [rsp+58h] [rbp-90h]
  __int64 v34; // [rsp+60h] [rbp-88h] BYREF
  __int64 v35; // [rsp+68h] [rbp-80h] BYREF
  __int128 v36; // [rsp+70h] [rbp-78h]
  __int64 v37; // [rsp+80h] [rbp-68h]
  __int128 v38; // [rsp+88h] [rbp-60h]
  char v39; // [rsp+98h] [rbp-50h]
  unsigned __int64 v40; // [rsp+A8h] [rbp-40h]

  v7 = a3;
  v40 = __readfsqword(0x28u);
  if ( a3 == -1 && (get_tinfo_property(*a4, 2) & 0xF) == 0xB )
  {
    if ( !under_debugger )
      sub_37EEE0(50639);
    goto LABEL_55;
  }
  tinfo_property = get_tinfo_property(*a2, 9);
  v8 = tinfo_property;
  if ( (_BYTE)tinfo_property )
  {
    v26 = 1;
  }
  else
  {
    copy_tinfo_t(&tinfo_property, a2);
    v26 = 0;
    v8 = tinfo_property;
  }
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v39 = 16;
  v36 = 0;
  v38 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v8, 12, &v31) )
    goto LABEL_19;
  v9 = *a4;
  if ( !(unsigned __int8)*a4
    || (v9 & 0xE) == 0 && (v9 & 0x30) != 0
    || (v30[0] = 0,
        v30[0] = get_tinfo_property(v9, 9),
        v10 = get_tinfo_property(v30[0], 2),
        clear_tinfo_t(v30),
        (v10 & 0x3F) == 0x30) )
  {
    if ( (_DWORD)v7 != -1 || (tinfo_size = get_tinfo_size(0, v34, 0), tinfo_size >= get_tinfo_size(0, *a4, 0)) )
    {
      if ( !under_debugger )
        sub_37EEE0(50638);
      goto LABEL_55;
    }
LABEL_35:
    copy_tinfo_t(&v34, a4);
    v24 = v39 & 0xF0;
    if ( (v39 & 0xF0) == 0xC0 )
      v24 = HIDWORD(v33);
    if ( v24 <= 0x10 )
      v24 = getinf(99);
    if ( v24 - 208 > 0x2F )
      goto LABEL_12;
    if ( (get_tinfo_property(v34, 2) & 0x3F) == 1 || *a5 )
    {
      copy_argloc(&v35, a5);
      goto LABEL_12;
    }
    (*(void (__fastcall **)(_DWORD *, _QWORD, signed int *, __int64 *))(**(_QWORD **)(a1 + 112) + 104LL))(
      v29,
      *(_QWORD *)(a1 + 112),
      &v27,
      &v34);
    if ( v29[0] <= 1u )
    {
      if ( !under_debugger )
        sub_37EEE0(52246);
    }
    else
    {
      sub_1C3CA0(v30, (__int64)v29, v27, 0);
      copy_argloc(&v35, v30);
      cleanup_argloc(v30);
      if ( (_DWORD)v35 )
      {
        cleanup_argloc(v29);
        goto LABEL_12;
      }
      if ( !under_debugger )
        sub_37EEE0(52251);
    }
LABEL_55:
    BUG();
  }
  if ( (_DWORD)v7 == -1 )
    goto LABEL_35;
  if ( v7 >= (unsigned __int64)v32 )
  {
LABEL_19:
    v13 = 0;
    goto LABEL_20;
  }
  v11 = 80 * v7;
  copy_tinfo_t(v11 + v31 + 64, a4);
  if ( *a5 )
    copy_argloc(v31 + v11, a5);
LABEL_12:
  LODWORD(v33) = v33 & 0xFFFFFEFF;
  create_tinfo(&tinfo_property, 12, 12, &v31);
  LOBYTE(v12) = sub_328840(&tinfo_property, a1, -1);
  v13 = v12;
  if ( !(_BYTE)v12 )
    goto LABEL_19;
  v14 = *a2;
  v15 = tinfo_property;
  *a2 = tinfo_property;
  tinfo_property = v14;
  if ( v26 )
  {
    sub_328210(v30, *(_QWORD *)(a1 + 112), a2);
    copy_tinfo_t(a2, v30);
    clear_tinfo_t(v30);
    v15 = *a2;
  }
  if ( (unsigned int)verify_tinfo(v15) )
  {
    if ( !under_debugger )
      sub_37EEE0(51082);
    goto LABEL_55;
  }
LABEL_20:
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  cleanup_argloc(&v35);
  clear_tinfo_t(&v34);
  v16 = v31;
  if ( v31 )
  {
    v17 = v32;
    if ( (_QWORD)v32 )
    {
      v18 = 0;
      do
      {
        v19 = (_QWORD *)(v16 + 80 * v18);
        clear_tinfo_t(v19 + 8);
        v20 = v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        v21 = v19[2];
        if ( v21 )
        {
          v19[3] = 0;
          qfree(v21);
        }
        ++v18;
        cleanup_argloc(v19);
        v16 = v31;
      }
      while ( v17 != v18 );
    }
    *(_QWORD *)&v32 = 0;
    qfree(v16);
  }
  clear_tinfo_t(&tinfo_property);
  return v13;
}
