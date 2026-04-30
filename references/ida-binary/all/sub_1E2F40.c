unsigned __int64 __fastcall sub_1E2F40(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  unsigned int v4; // r12d
  __int64 v5; // rax
  const char *v6; // rsi
  __int64 v7; // r9
  const char *v8; // rdi
  __int64 v9; // rax
  const char *v10; // rdi
  bool v11; // al
  __int64 v12; // rax
  __int64 v14; // [rsp+0h] [rbp-D8h]
  __int64 v15; // [rsp+8h] [rbp-D0h]
  const char *v16; // [rsp+10h] [rbp-C8h]
  const char **v17; // [rsp+18h] [rbp-C0h]
  __int64 v18; // [rsp+20h] [rbp-B8h]
  __int64 v19; // [rsp+28h] [rbp-B0h] BYREF
  const char *v20; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v21; // [rsp+38h] [rbp-A0h]
  _DWORD v22[9]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v23; // [rsp+74h] [rbp-64h]
  int v24; // [rsp+84h] [rbp-54h]
  __int64 v25; // [rsp+88h] [rbp-50h]
  unsigned __int64 v26; // [rsp+98h] [rbp-40h]

  v15 = a2;
  v26 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(dbg + 40LL);
  if ( *v2 )
  {
    v3 = *(_QWORD *)(dbg + 40LL);
    v17 = &v20;
    v16 = (const char *)v22;
    while ( 1 )
    {
      v24 = 0;
      memset(&v22[1], 0, 32);
      v23 = 0;
      v4 = ((__int64)v2 - v3) >> 3;
      v22[0] = 64;
      v25 = 0x1FFFFFFFFLL;
      *(_QWORD *)&v22[4] = *v2;
      v5 = qalloc_or_throw(16);
      v6 = v16;
      *(_QWORD *)v5 = toggle_regclass_window_ah_t___vtable;
      *(_DWORD *)(v5 + 8) = 1;
      *(_DWORD *)(v5 + 12) = v4;
      *(_QWORD *)&v22[6] = v5;
      v21 = 0;
      sub_539470(v15, v16, 0, 0, v17, v7, v14, v15, v16, v17, v18, v19, 0, 0);
      v8 = &s1;
      if ( (_QWORD)v21 )
        v8 = v20;
      BYTE6(v19) = 1;
      v9 = sub_534430(v8);
      if ( v9 )
      {
        v6 = &byte_6;
        sub_537630(v9, 6, (char *)&v19 + 6);
      }
      v10 = &s1;
      v11 = sub_1E2ED0(v4) != 0;
      if ( (_QWORD)v21 )
        v10 = v20;
      HIBYTE(v19) = v11;
      v12 = sub_534430(v10);
      if ( v12 )
      {
        v6 = &byte_7;
        sub_537630(v12, 7, (char *)&v19 + 7);
      }
      if ( v20 )
      {
        *(_QWORD *)&v21 = 0;
        qfree(v20, v6);
      }
      if ( !*++v2 )
        break;
      v3 = *(_QWORD *)(dbg + 40LL);
    }
  }
  return v26 - __readfsqword(0x28u);
}
