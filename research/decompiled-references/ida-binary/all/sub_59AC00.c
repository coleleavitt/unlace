__int64 __fastcall google_breakpad::LinuxPtraceDumper__::vfunc_10(unsigned int *a1)
{
  __int64 v2; // rbx
  bool v4; // al
  __int64 v5; // rbx
  __int64 v6; // rax
  char v7; // al
  unsigned __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 *v10; // rbx
  __int64 v11; // [rsp+10h] [rbp-1B0h] BYREF
  __int64 v12; // [rsp+18h] [rbp-1A8h] BYREF
  __int64 v13; // [rsp+20h] [rbp-1A0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-198h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-18Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-188h] BYREF
  char v17[260]; // [rsp+40h] [rbp-180h] BYREF
  _DWORD n[3]; // [rsp+144h] [rbp-7Ch]
  _BYTE *v19; // [rsp+150h] [rbp-70h]
  char v20; // [rsp+15Fh] [rbp-61h]
  _BYTE *v21; // [rsp+160h] [rbp-60h]
  _BYTE *v22; // [rsp+168h] [rbp-58h]
  unsigned __int64 *v23; // [rsp+170h] [rbp-50h]
  __int64 v24; // [rsp+178h] [rbp-48h]
  signed int v25; // [rsp+184h] [rbp-3Ch]
  unsigned __int64 v26; // [rsp+188h] [rbp-38h]
  __int64 v27; // [rsp+190h] [rbp-30h]
  unsigned __int64 j; // [rsp+198h] [rbp-28h]
  unsigned __int64 i; // [rsp+1A0h] [rbp-20h]
  void *src; // [rsp+1A8h] [rbp-18h]

  if ( (*(unsigned __int8 (__fastcall **)(unsigned int *, char *, _QWORD, const char *))(*(_QWORD *)a1 + 72LL))(
         a1,
         v17,
         a1[2],
         "maps") != 1 )
    return 0;
  v27 = *(_QWORD *)sub_59C148(a1 + 52, 33);
  v26 = *(_QWORD *)sub_59C148(a1 + 52, 9);
  v25 = sub_599CE4(v17, 0, 0);
  if ( v25 < 0 )
    return 0;
  v2 = sub_59BA78(524, a1 + 18);
  sub_59BAEA(v2, (unsigned int)v25);
  v24 = v2;
  while ( (unsigned __int8)sub_59BB14(v24, &v16, &v15) )
  {
    v22 = (_BYTE *)sub_5ADDE0(&v14, v16);
    if ( *v22 != 45 )
      goto LABEL_35;
    v21 = (_BYTE *)sub_5ADDE0(&v13, v22 + 1);
    if ( *v21 != 32 )
      goto LABEL_35;
    v20 = v21[3] == 120;
    v19 = (_BYTE *)sub_5ADDE0(&v12, v21 + 6);
    if ( *v19 != 32 )
      goto LABEL_35;
    src = nullptr;
    src = (void *)sub_5ADD08(v16, 47);
    if ( !src && v27 && v27 == v14 )
    {
      src = "linux-gate.so";
      v12 = 0;
    }
    v4 = src && (unsigned __int8)sub_59C16A(a1 + 40) != 1;
    if ( v4
      && ((*(_QWORD *)&n[1] = *(_QWORD *)sub_59C1AC(a1 + 40),
           *(_QWORD *)(*(_QWORD *)&n[1] + 8LL) + **(_QWORD **)&n[1] != v14)
       || (v5 = sub_5ADA92(src), v5 != sub_5ADA92(*(_QWORD *)&n[1] + 41LL))
       || (v6 = sub_5ADA92(src), (unsigned int)sub_5ADB25(src, *(_QWORD *)&n[1] + 41LL, v6))
       || v20 != *(_BYTE *)(*(_QWORD *)&n[1] + 40LL) && (*(_BYTE *)(*(_QWORD *)&n[1] + 40LL) == 1 || !v20)
        ? (v7 = 0)
        : (v7 = 1),
          v7) )
    {
      *(_QWORD *)(*(_QWORD *)&n[1] + 24LL) = v13;
      *(_QWORD *)(*(_QWORD *)&n[1] + 8LL) = v13 - **(_QWORD **)&n[1];
      *(_BYTE *)(*(_QWORD *)&n[1] + 40LL) |= v20;
      sub_59BCBA(v24, v15);
    }
    else
    {
      v11 = sub_59BA78(296, a1 + 18);
      sub_59C1EC(a1 + 40, &v11);
      sub_5ADF07(v11, 0, 296);
      *(_QWORD *)(v11 + 16) = v14;
      *(_QWORD *)(v11 + 24) = v13;
      *(_QWORD *)v11 = v14;
      *(_QWORD *)(v11 + 8) = v13 - v14;
      *(_QWORD *)(v11 + 32) = v12;
      *(_BYTE *)(v11 + 40) = v20;
      if ( src )
      {
        n[0] = sub_5ADA92(src);
        if ( n[0] <= 0xFEu )
          memcpy((void *)(v11 + 41), src, n[0]);
      }
LABEL_35:
      sub_59BCBA(v24, v15);
    }
  }
  if ( v26 )
  {
    for ( i = 0; ; ++i )
    {
      v8 = sub_5986F2((__int64)(a1 + 40));
      if ( i >= v8 )
        break;
      v23 = *(unsigned __int64 **)sub_59C126(a1 + 40, i);
      if ( v26 >= *v23 && v26 < *v23 + v23[1] )
      {
        for ( j = i; j; --j )
        {
          v9 = *(_QWORD *)sub_59C126(a1 + 40, j - 1);
          *(_QWORD *)sub_59C126(a1 + 40, j) = v9;
        }
        v10 = v23;
        *(_QWORD *)sub_59C126(a1 + 40, 0) = v10;
        break;
      }
    }
  }
  sub_599BF6(v25);
  return (unsigned int)sub_59C16A(a1 + 40) ^ 1;
}
