__int64 __fastcall sub_5A3AD0(__int64 a1, unsigned int *a2, _QWORD *a3, char a4)
{
  unsigned int *v6; // rbx
  __int64 v7; // rdi
  char tinfo_property; // al
  __int64 v10; // rdx
  unsigned __int64 v11; // r15
  unsigned int v12; // r14d
  unsigned int tinfo_size; // eax
  __int64 v15; // rsi
  __int64 v16; // rdi
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // [rsp+8h] [rbp-70h] BYREF
  __int64 v23; // [rsp+10h] [rbp-68h] BYREF
  __int64 v24; // [rsp+18h] [rbp-60h]
  _QWORD v25[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = a2;
  v7 = *a3;
  v25[3] = __readfsqword(0x28u);
  tinfo_property = get_tinfo_property(v7, 2);
  if ( !tinfo_property )
    goto LABEL_25;
  v10 = 21503;
  v11 = tinfo_property & 0xF;
  if ( _bittest64(&v10, v11) )
    return 0;
  v12 = 0;
  if ( (tinfo_property & 0x3F) == 0x2D )
    return v12;
  tinfo_size = get_tinfo_size(0, *a3, 0);
  if ( tinfo_size == -1 )
  {
LABEL_25:
    v12 = -1;
    set_qerrno(1640);
    return v12;
  }
  if ( (_BYTE)v11 == 11 )
  {
LABEL_11:
    v16 = *a3;
    v23 = 0;
    v24 = 0;
    get_tinfo_details(v16, 11, &v23);
    v17 = get_tinfo_size(0, v23, 0);
    v12 = v17;
    if ( v17 == -1 )
    {
      set_qerrno(1640);
    }
    else
    {
      v12 = HIDWORD(v24);
      if ( !HIDWORD(v24) )
        v12 = sub_5A1140((__int64)v6, (__int64)a3, v17, v18);
    }
    clear_tinfo_t(&v23);
    return v12;
  }
  if ( (_BYTE)v11 == 13 )
    return (unsigned int)get_tinfo_property(*a3, 16);
  if ( (_BYTE)v11 != 10 )
  {
    if ( !under_debugger )
      interr(605);
    BUG();
  }
  v15 = *a2;
  if ( (int)v15 <= 6 )
  {
    if ( (_DWORD)v15 != 6 )
      goto LABEL_11;
    v23 = 0;
    v24 = 0;
    if ( a4 )
    {
      v19 = *((_QWORD *)v6 + 1);
    }
    else
    {
      v25[0] = 0;
      if ( !(unsigned __int8)sub_5A11B0((__int64)v25, (__int64)v6, tinfo_size, a3) )
        goto LABEL_20;
      v19 = v25[0];
      LODWORD(v23) = 6;
      v6 = (unsigned int *)&v23;
      v24 = v25[0];
    }
    if ( !sub_3BD540(a1, v19) )
    {
LABEL_20:
      v12 = 0;
LABEL_21:
      cleanup_argloc(&v23);
      return v12;
    }
    v22 = get_tinfo_property(*a3, 9);
    v21 = sub_5A1290(v6, (__int64)a3, &v22, -1, 256, nullptr);
    if ( !v21 )
    {
      v12 = 1;
      if ( (get_tinfo_property(v22, 2) & 0xF) == 0xA )
      {
LABEL_32:
        clear_tinfo_t(&v22);
        goto LABEL_21;
      }
      LODWORD(v21) = sub_5A3AD0(a1, v6, &v22, 0);
    }
    v12 = v21;
    goto LABEL_32;
  }
  v20 = sub_6B1FD0(a1, v15, tinfo_size);
  if ( !v20 )
    goto LABEL_11;
  return (*(__int64 (__fastcall **)(unsigned int *, _QWORD *))(v20 + 128))(v6, a3);
}
