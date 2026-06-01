__int64 __fastcall sub_F9EF0(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5)
{
  unsigned int tinfo; // ebp
  int v8; // eax
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbx
  _QWORD *v12; // r14
  __int64 v13; // [rsp+8h] [rbp-F0h]
  char v16; // [rsp+20h] [rbp-D8h]
  _BYTE v17[8]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+48h] [rbp-B0h]
  __int64 v19; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v20; // [rsp+58h] [rbp-A0h]
  __int64 v21; // [rsp+68h] [rbp-90h]
  __int64 v22; // [rsp+70h] [rbp-88h]
  __int64 v23; // [rsp+78h] [rbp-80h]
  __int128 v24; // [rsp+80h] [rbp-78h]
  __int64 v25; // [rsp+90h] [rbp-68h]
  __int128 v26; // [rsp+98h] [rbp-60h]
  char v27; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v28; // [rsp+B8h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  tinfo = create_tinfo();
  if ( !(_BYTE)tinfo )
  {
    if ( !under_debugger )
      sub_37EA20(52656);
    BUG();
  }
  if ( a4 == -1 )
    goto LABEL_3;
  v8 = *(_DWORD *)(a1 + 72);
  if ( (unsigned int)(v8 - 208) <= 0x2F )
    goto LABEL_3;
  v19 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v25 = 0;
  v20 = 0;
  v24 = 0;
  v26 = 0;
  if ( (v8 & 0xFFFFFF0F) != 0 || v8 == 192 )
  {
    HIDWORD(v21) = v8;
    LOBYTE(v8) = -64;
  }
  v27 = v8;
  sub_EC590(&v19, a4 + 1);
  sub_328E20(v17, *(_QWORD *)(a1 + 1504), *(unsigned int *)(*(_QWORD *)(a1 + 1504) + 80LL));
  if ( a4 > 0 )
  {
    v9 = 0;
    do
    {
      copy_tinfo_t();
      v9 += 80;
    }
    while ( 80LL * a4 != v9 );
  }
  copy_tinfo_t();
  v18 = 1;
  copy_tinfo_t();
  clear_tinfo_t();
  v16 = calc_arglocs();
  clear_tinfo_t();
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree();
  }
  cleanup_argloc();
  clear_tinfo_t();
  v10 = v19;
  if ( v19 )
  {
    v13 = v20;
    if ( (_QWORD)v20 )
    {
      v11 = 0;
      do
      {
        v12 = (_QWORD *)(v10 + 80 * v11);
        clear_tinfo_t();
        if ( v12[5] )
        {
          v12[6] = 0;
          qfree();
        }
        if ( v12[2] )
        {
          v12[3] = 0;
          qfree();
        }
        ++v11;
        cleanup_argloc();
        v10 = v19;
      }
      while ( v13 != v11 );
    }
    *(_QWORD *)&v20 = 0;
    qfree();
  }
  if ( v16 )
  {
LABEL_3:
    *a2 = 0;
    if ( a5 != -1 )
      sub_F9DC0(a1, (__int64)a2, a4);
  }
  else
  {
    tinfo = 0;
  }
  clear_tinfo_t();
  return tinfo;
}
