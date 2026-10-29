unsigned __int64 __fastcall sub_1E1BF0(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rax
  __int64 v5; // rbp
  __int64 v6; // rax
  const char *v7; // rsi
  __int64 v8; // r9
  const char *v9; // rdi
  __int64 v10; // rax
  int v11; // eax
  const char *v12; // rdi
  unsigned __int8 v13; // al
  __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-D8h]
  __int64 v17; // [rsp+8h] [rbp-D0h]
  const char *v18; // [rsp+10h] [rbp-C8h]
  const char **v19; // [rsp+18h] [rbp-C0h]
  __int64 v20; // [rsp+20h] [rbp-B8h]
  __int64 v21; // [rsp+28h] [rbp-B0h] BYREF
  const char *v22; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v23; // [rsp+38h] [rbp-A0h]
  _DWORD v24[9]; // [rsp+50h] [rbp-88h] BYREF
  __int128 v25; // [rsp+74h] [rbp-64h]
  int v26; // [rsp+84h] [rbp-54h]
  __int64 v27; // [rsp+88h] [rbp-50h]
  unsigned __int64 v28; // [rsp+98h] [rbp-40h]

  v17 = a2;
  v28 = __readfsqword(0x28u);
  v2 = *(_QWORD **)(dbg + 40LL);
  if ( *v2 )
  {
    v4 = *(_QWORD *)(dbg + 40LL);
    v19 = &v22;
    v18 = (const char *)v24;
    while ( 1 )
    {
      v26 = 0;
      memset(&v24[1], 0, 32);
      v5 = ((__int64)v2 - v4) >> 3;
      v25 = 0;
      v24[0] = 64;
      v27 = 0x1FFFFFFFFLL;
      *(_QWORD *)&v24[4] = *v2;
      v6 = qalloc_or_throw(16);
      *(_QWORD *)v6 = toggle_regclass_ah_t___vtable;
      v7 = v18;
      *(_DWORD *)(v6 + 8) = 1;
      *(_DWORD *)(v6 + 12) = v5;
      *(_QWORD *)&v24[6] = v6;
      v23 = 0;
      sub_539470(v17, v18, "Show in this window/", 0, v19, v8, v16, v17, v18, v19, v20, v21, 0, 0);
      v9 = &s1;
      if ( (_QWORD)v23 )
        v9 = v22;
      BYTE6(v21) = 1;
      v10 = sub_534430(v9);
      if ( v10 )
      {
        v7 = &byte_6;
        sub_537630(v10, 6, (char *)&v21 + 6);
      }
      v11 = *(unsigned __int8 *)(a1 + 1024);
      v12 = &s1;
      v13 = _bittest(&v11, v5);
      if ( (_QWORD)v23 )
        v12 = v22;
      HIBYTE(v21) = v13;
      v14 = sub_534430(v12);
      if ( v14 )
      {
        v7 = &byte_7;
        sub_537630(v14, 7, (char *)&v21 + 7);
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22, v7);
      }
      if ( !*++v2 )
        break;
      v4 = *(_QWORD *)(dbg + 40LL);
    }
  }
  return v28 - __readfsqword(0x28u);
}
