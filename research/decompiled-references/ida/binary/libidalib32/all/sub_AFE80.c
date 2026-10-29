__int64 __fastcall sub_AFE80(const __m128i *a1, const void *a2)
{
  unsigned int v2; // ebx
  const char *v4; // rsi
  const char *v5; // [rsp+0h] [rbp-C8h] BYREF
  __int128 v6; // [rsp+8h] [rbp-C0h]
  char v7[8]; // [rsp+20h] [rbp-A8h] BYREF
  const __m128i *v8; // [rsp+28h] [rbp-A0h]
  int v9; // [rsp+30h] [rbp-98h]
  __int64 v10; // [rsp+38h] [rbp-90h]
  __int128 v11; // [rsp+40h] [rbp-88h]
  __int64 v12; // [rsp+50h] [rbp-78h]
  __int128 v13; // [rsp+58h] [rbp-70h]
  __int64 v14; // [rsp+68h] [rbp-60h]
  __int128 v15; // [rsp+70h] [rbp-58h]
  __int64 v16; // [rsp+80h] [rbp-48h]
  __int128 v17; // [rsp+88h] [rbp-40h]
  __int64 eah; // [rsp+98h] [rbp-30h]
  int v19; // [rsp+A0h] [rbp-28h]
  unsigned __int64 v20; // [rsp+A8h] [rbp-20h]

  v20 = __readfsqword(0x28u);
  sub_A0DA0(a1);
  v7[0] = 11;
  v8 = a1;
  v9 = -1;
  v10 = 0;
  v12 = 0;
  v14 = 0;
  v16 = 0;
  v11 = 0;
  v13 = 0;
  v15 = 0;
  v17 = 0;
  eah = get_eah();
  v19 = 0;
  v5 = nullptr;
  v6 = 0;
  v2 = 1;
  if ( !(unsigned __int8)sub_AFC40((__int64)v7, a2, 1, (__int64 *)&v5) )
  {
    v4 = s1;
    if ( (_QWORD)v6 )
      v4 = v5;
    sub_8F660((__int64)"Error loading the trace file: %s\n", v4);
    v2 = 0;
  }
  if ( v5 )
  {
    *(_QWORD *)&v6 = 0;
    qfree();
  }
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree();
  }
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree();
  }
  if ( v12 )
  {
    *(_QWORD *)&v13 = 0;
    qfree();
  }
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree();
  }
  return v2;
}

