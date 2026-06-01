unsigned __int64 __fastcall sub_6A98B0(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rax
  int v5; // eax
  __int64 v6; // rsi
  int v8; // [rsp+0h] [rbp-28h] BYREF
  int v9; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = *a1;
  v10 = __readfsqword(0x28u);
  v5 = sub_3B90A0(*(_QWORD **)(v3 + 1480), a2);
  v6 = *a1;
  v8 = v5;
  if ( a3 <= 0 )
  {
    sub_79B4D0(&v8, v6, 4294967288LL, 65);
  }
  else
  {
    v9 = a3 + 1;
    sub_79B440(&v8, v6, 4294967288LL, &v9, 4, 65);
  }
  return v10 - __readfsqword(0x28u);
}

