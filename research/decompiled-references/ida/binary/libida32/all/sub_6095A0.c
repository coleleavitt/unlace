_BOOL8 __fastcall sub_6095A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  const char *v3; // rax
  char v4; // r15
  __int64 v5; // rax
  int v6; // eax
  int v7; // ebp
  char *v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rbx
  char *v11; // rax
  void *v12; // rdi
  void *v14; // [rsp+0h] [rbp-10A8h] BYREF
  __int128 v15; // [rsp+8h] [rbp-10A0h]
  __int64 v16; // [rsp+18h] [rbp-1090h]
  __int64 v17; // [rsp+20h] [rbp-1088h]
  int v18; // [rsp+28h] [rbp-1080h]
  char v19; // [rsp+2Ch] [rbp-107Ch]
  char v20; // [rsp+2Dh] [rbp-107Bh]
  char v21; // [rsp+2Eh] [rbp-107Ah]
  _QWORD v22[4]; // [rsp+30h] [rbp-1078h] BYREF
  void *ptr; // [rsp+50h] [rbp-1058h]
  __int16 v24; // [rsp+58h] [rbp-1050h]
  char v25; // [rsp+5Ah] [rbp-104Eh]
  char s1[4104]; // [rsp+60h] [rbp-1048h] BYREF
  unsigned __int64 v27; // [rsp+1068h] [rbp-40h]

  v27 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v2 = *(_QWORD *)(a1 + 1480) + 2240LL;
  if ( get_root_filename(s1) > 0
    && (set_file_ext(s1, 4096, s1, "ids"), v3 = (const char *)qbasename(a2), !strcasecmp(s1, v3))
    && (LODWORD(v14) = sub_614FB0(a1, 94), (_DWORD)v14)
    && (v4 = sub_79B370(a1, &v14)) != 0 )
  {
    LODWORD(v22[0]) = (_DWORD)v14;
    sub_79B440(v2, a1, 4294967294LL, v22, 4, 65);
    v6 = -2;
  }
  else
  {
    v4 = 0;
    v5 = qbasename(a2);
    qstrncpy(s1, v5, 4096);
    qsplitfile(s1, 0, 0);
    v6 = sub_608700(v2, a1, s1);
  }
  *(_WORD *)(*(_QWORD *)(a1 + 1480) + 2624LL) |= 4u;
  v18 = v6;
  v14 = nullptr;
  v16 = 0;
  v17 = a1;
  v21 = 0;
  v19 = 1;
  v20 = v4;
  v22[1] = 0;
  v22[2] = 0;
  ptr = nullptr;
  v25 = 0;
  v22[0] = a2;
  v24 = 257;
  v22[3] = &v14;
  v15 = 0;
  v7 = idt_open(v22, sub_6081A0);
  qfree(ptr);
  v8 = (char *)v14;
  if ( v14 )
  {
    v9 = v15;
    if ( (_QWORD)v15 )
    {
      v10 = 0;
      do
      {
        v11 = &v8[24 * v10];
        v12 = *(void **)v11;
        if ( *(_QWORD *)v11 )
        {
          *((_QWORD *)v11 + 1) = 0;
          qfree(v12);
          v8 = (char *)v14;
        }
        ++v10;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&v15 = 0;
    qfree(v8);
  }
  return v7 == 0;
}

