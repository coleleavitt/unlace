__int64 __fastcall sub_DDE0(_QWORD *a1)
{
  __int64 (__fastcall **v2)(__int64, int, int *); // r14
  __int64 (__fastcall **v3)(__int64, int, int *); // r12
  __int64 (__fastcall *v4)(__int64, int, int *); // rsi
  __int64 (__fastcall *v5)(__int64, int, int *); // rbp
  void (__fastcall *hexdsp)(__int64, __int64 (__fastcall *)(__int64, int, int *)); // rdx
  char *v7; // r13
  void (__fastcall *v8)(char *); // rax
  char *v9; // rbp
  __int64 v10; // rdi
  void (__fastcall *v11)(__int64, __int64 (__fastcall *)(__int64, int, int *), _QWORD *); // rcx
  __int64 (__fastcall *v13)(__int64, int, int *); // [rsp+0h] [rbp-58h] BYREF
  __int128 v14; // [rsp+8h] [rbp-50h]
  unsigned __int64 v15; // [rsp+18h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  *a1 = &off_3BF88;
  v2 = (__int64 (__fastcall **)(__int64, int, int *))(a1 + 308);
  v3 = (__int64 (__fastcall **)(__int64, int, int *))(a1 + 364);
  del_idc_func();
  callui(1098);
  callui(130);
  callui(130);
  do
  {
    while ( 1 )
    {
      v4 = *v2;
      if ( (unsigned __int8)callui(128) )
      {
        v13 = 0;
        v14 = 0;
        sub_D6A0((__int64 *)&v13);
        v4 = (__int64 (__fastcall *)(__int64, int, int *))src;
        if ( (_QWORD)v14 )
          v4 = v13;
        callui(130);
        if ( v13 )
          break;
      }
      v2 += 8;
      if ( v2 == v3 )
        goto LABEL_8;
    }
    *(_QWORD *)&v14 = 0;
    v2 += 8;
    qfree();
  }
  while ( v2 != v3 );
LABEL_8:
  v5 = (__int64 (__fastcall *)(__int64, int, int *))a1[306];
  if ( v5 )
  {
    hexdsp = (void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int, int *)))get_hexdsp();
    if ( hexdsp )
    {
      v4 = v5;
      hexdsp(256, v5);
    }
    v7 = (char *)a1[306];
    if ( v7 )
    {
      v8 = *(void (__fastcall **)(char *))(*(_QWORD *)v7 + 8LL);
      if ( v8 == sub_AA10 )
      {
        v9 = v7 + 456;
        *(_QWORD *)v7 = &off_3C960;
        do
        {
          v10 = *((_QWORD *)v9 - 3);
          v9 -= 32;
          if ( v10 )
          {
            *((_QWORD *)v9 + 2) = 0;
            qfree();
          }
          clear_tinfo_t();
        }
        while ( v7 + 8 != v9 );
        v4 = (__int64 (__fastcall *)(__int64, int, int *))&dword_1C8;
        operator delete(v7, 0x1C8u);
      }
      else
      {
        ((void (__fastcall *)(_QWORD, __int64 (__fastcall *)(__int64, int, int *)))v8)(a1[306], v4);
      }
    }
    a1[306] = 0;
  }
  v11 = (void (__fastcall *)(__int64, __int64 (__fastcall *)(__int64, int, int *), _QWORD *))get_hexdsp();
  if ( v11 )
  {
    v4 = sub_ABE0;
    v11(575, sub_ABE0, a1);
  }
  a1[226] = 0;
  clr_module_data();
  a1[287] = &off_3CAD8;
  remove_event_listener();
  a1[284] = &off_3CAD8;
  remove_event_listener();
  a1[281] = &off_3CAD8;
  remove_event_listener();
  a1[278] = &off_3CAD8;
  remove_event_listener();
  a1[109] = &off_3CB28;
  sub_F3B0(a1 + 109, v4);
  return sub_F3B0(a1 + 14, v4);
}
