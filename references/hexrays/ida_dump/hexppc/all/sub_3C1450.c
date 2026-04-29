__int64 __fastcall sub_3C1450(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v7; // rdi
  int v9; // r15d
  __int64 v10; // rax
  const char *v11; // rsi
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rbp
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v20; // [rsp+0h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+18h] [rbp-90h]
  __int64 v23; // [rsp+20h] [rbp-88h] BYREF
  __int64 v24; // [rsp+28h] [rbp-80h] BYREF
  __int128 v25; // [rsp+30h] [rbp-78h]
  __int64 v26; // [rsp+40h] [rbp-68h]
  __int128 v27; // [rsp+48h] [rbp-60h]
  char v28; // [rsp+58h] [rbp-50h]
  unsigned __int64 v29; // [rsp+68h] [rbp-40h]

  v7 = *(_QWORD *)(a2 + 24);
  v29 = __readfsqword(0x28u);
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v26 = 0;
  v28 = 16;
  v21 = 0;
  v25 = 0;
  v27 = 0;
  if ( !(unsigned __int8)get_tinfo_details(v7, 12, &v20) )
  {
    if ( !a4 )
      sub_2B11F0((__int64)"AUTOHIDE NONE\nIncorrect function type");
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  v9 = 0;
  v10 = 0;
  if ( (_QWORD)v21 )
  {
    while ( (unsigned __int8)sub_3C13E0(a3, (_QWORD *)(v20 + 80 * v10), a4, 0.0) )
    {
      v10 = ++v9;
      if ( v9 >= (unsigned __int64)v21 )
        goto LABEL_3;
    }
    goto LABEL_8;
  }
LABEL_3:
  v11 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v11 = *(const char **)a2;
  v12 = sub_3C1310(a3, v11, *(_DWORD *)(*(_QWORD *)(a1 + 112) + 80LL), a4, 0.0);
LABEL_9:
  if ( v26 )
  {
    *(_QWORD *)&v27 = 0;
    qfree(v26);
  }
  cleanup_argloc(&v24);
  clear_tinfo_t(&v23);
  v13 = v20;
  if ( v20 )
  {
    v14 = v21;
    if ( (_QWORD)v21 )
    {
      v15 = 0;
      do
      {
        v16 = (_QWORD *)(v13 + 80 * v15);
        clear_tinfo_t(v16 + 8);
        v17 = v16[5];
        if ( v17 )
        {
          v16[6] = 0;
          qfree(v17);
        }
        v18 = v16[2];
        if ( v18 )
        {
          v16[3] = 0;
          qfree(v18);
        }
        ++v15;
        cleanup_argloc(v16);
        v13 = v20;
      }
      while ( v14 != v15 );
    }
    *(_QWORD *)&v21 = 0;
    qfree(v13);
  }
  return v12;
}
