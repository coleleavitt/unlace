__int64 __fastcall sub_5899F0(__int64 a1, int *a2, __int64 *a3, char a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdi
  char tinfo_property; // al
  __int64 v11; // rdx
  unsigned __int64 v12; // r15
  unsigned int v13; // r14d
  unsigned int tinfo_size; // eax
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // [rsp+8h] [rbp-70h] BYREF
  __int64 v25; // [rsp+10h] [rbp-68h] BYREF
  __int64 v26; // [rsp+18h] [rbp-60h]
  _QWORD v27[11]; // [rsp+20h] [rbp-58h] BYREF

  v7 = 2;
  v8 = *a3;
  v27[3] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v8, 2);
  if ( !tinfo_property )
    goto LABEL_25;
  v11 = 21503;
  v12 = tinfo_property & 0xF;
  if ( _bittest64(&v11, v12) )
    return 0;
  v13 = 0;
  if ( (tinfo_property & 0x3F) == 0x2D )
    return v13;
  v7 = *a3;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( tinfo_size == -1 )
  {
LABEL_25:
    v13 = -1;
    set_qerrno(1640, v7);
    return v13;
  }
  if ( (_BYTE)v12 == 11 )
  {
LABEL_11:
    v17 = *a3;
    v25 = 0;
    v26 = 0;
    get_tinfo_details(v17, 11, &v25);
    v18 = v25;
    v19 = get_tinfo_size(0, v25, 0);
    v13 = v19;
    if ( v19 == -1 )
    {
      set_qerrno(1640, v18);
    }
    else
    {
      v13 = HIDWORD(v26);
      if ( !HIDWORD(v26) )
        v13 = sub_587080(a2, (__int64)a3, v19, v20);
    }
    clear_tinfo_t(&v25);
    return v13;
  }
  if ( (_BYTE)v12 == 13 )
    return (unsigned int)get_tinfo_property(*a3, 16);
  if ( (_BYTE)v12 != 10 )
  {
    if ( !under_debugger )
      interr(605);
    BUG();
  }
  v16 = (unsigned int)*a2;
  if ( (int)v16 <= 6 )
  {
    if ( (_DWORD)v16 != 6 )
      goto LABEL_11;
    v25 = 0;
    v26 = 0;
    if ( a4 )
    {
      v21 = (unsigned int)a2[2];
    }
    else
    {
      v27[0] = 0;
      if ( !(unsigned __int8)sub_5870F0((__int64)v27, (__int64)a2, tinfo_size, a3) )
        goto LABEL_20;
      v21 = v27[0];
      LODWORD(v25) = 6;
      a2 = (int *)&v25;
      LODWORD(v26) = v27[0];
    }
    if ( !sub_3B8910(a1, v21) )
    {
LABEL_20:
      v13 = 0;
LABEL_21:
      cleanup_argloc(&v25);
      return v13;
    }
    v24 = get_tinfo_property(*a3, 9);
    v23 = sub_5871D0(a2, a3, &v24, 0xFFFFFFFFLL, 256, 0);
    if ( !v23 )
    {
      v13 = 1;
      if ( (get_tinfo_property(v24, 2) & 0xF) == 0xA )
      {
LABEL_32:
        clear_tinfo_t(&v24);
        goto LABEL_21;
      }
      v23 = sub_5899F0(a1, a2, &v24, 0);
    }
    v13 = v23;
    goto LABEL_32;
  }
  v22 = sub_6917B0(a1, v16, tinfo_size);
  if ( !v22 )
    goto LABEL_11;
  return (*(__int64 (__fastcall **)(int *, __int64 *))(v22 + 128))(a2, a3);
}

