_QWORD *__fastcall Z3_simplifier_get_param_descrs(__int64 a1, __int64 a2)
{
  char v3; // r13
  _QWORD *v4; // rbx
  __int64 v5; // rsi
  void *v6; // rbp
  __int64 *v7; // rbp
  unsigned __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v13; // [rsp+28h] [rbp-E0h] BYREF
  __int64 *v14; // [rsp+30h] [rbp-D8h] BYREF
  int v15; // [rsp+38h] [rbp-D0h]
  char v16; // [rsp+3Ch] [rbp-CCh]
  __int64 v17; // [rsp+40h] [rbp-C8h]
  int v18; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall **v19)(); // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+60h] [rbp-A8h]
  void *v21; // [rsp+68h] [rbp-A0h]
  __int64 v22; // [rsp+78h] [rbp-90h]
  void *ptr; // [rsp+80h] [rbp-88h]
  __int64 v24; // [rsp+88h] [rbp-80h]
  __int64 *v25; // [rsp+90h] [rbp-78h]
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  _BYTE v28[96]; // [rsp+A8h] [rbp-60h] BYREF

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29CEF0();
  *(_DWORD *)(a1 + 1520) = 0;
  v4 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0(v4, a1);
  *v4 = &off_1C4C8A0;
  sub_1857380(v4 + 3);
  sub_24FBE0(a1, v4);
  v5 = *(_QWORD *)(a1 + 232);
  v15 = 0;
  v16 = 0;
  v19 = &off_1C62200;
  v17 = 0;
  v18 = 0;
  v20 = 0;
  v21 = nullptr;
  v22 = 0;
  ptr = nullptr;
  v24 = v5;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  sub_180C0A0(v28);
  v13 = 0;
  v14 = (__int64 *)&off_1C4C830;
  if ( !a2 )
    BUG();
  if ( !*(_QWORD *)(a2 + 40) )
    std::__throw_bad_function_call();
  v6 = (void *)(*(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64 **))(a2 + 48))(a2 + 24, v5, &v13, &v14);
  (*(void (__fastcall **)(void *, _QWORD *))(*(_QWORD *)v6 + 72LL))(v6, v4 + 3);
  if ( v3 )
    sub_2BB620(v4);
  (**(void (__fastcall ***)(void *))v6)(v6);
  sub_186B220(v6);
  sub_18572D0(&v13);
  v14 = qword_1C63778;
  sub_180C0E0(v28);
  if ( v27 )
    sub_186B220((void *)(v27 - 8));
  if ( v26 )
    sub_186B220((void *)(v26 - 8));
  v7 = v25;
  if ( v25 )
  {
    v8 = (unsigned __int64)&v25[*((unsigned int *)v25 - 1)];
    if ( (unsigned __int64)v25 >= v8 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = v24;
          if ( (*(_DWORD *)(v9 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v7 >= v8 )
          goto LABEL_18;
      }
      sub_15D7BC0(v10, v9);
      ++v7;
    }
    while ( (unsigned __int64)v7 < v8 );
LABEL_18:
    v7 = v25;
    if ( v25 )
LABEL_19:
      sub_186B220(v7 - 1);
  }
  v19 = &off_1C62200;
  if ( ptr )
    sub_186B220(ptr);
  if ( v21 )
    sub_186B220(v21);
  if ( v3 )
    byte_1C7EBA0 = 1;
  return v4;
}

