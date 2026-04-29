unsigned __int64 __fastcall sub_253B40(__int64 a1)
{
  _QWORD **v1; // rbx
  void *v2; // rdi
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-108h] BYREF
  int v5; // [rsp+8h] [rbp-100h]
  __int64 v6; // [rsp+10h] [rbp-F8h]
  __int128 v7; // [rsp+18h] [rbp-F0h]
  __int64 v8; // [rsp+28h] [rbp-E0h]
  __int128 v9; // [rsp+30h] [rbp-D8h]
  char *v10; // [rsp+40h] [rbp-C8h]
  __int64 (__fastcall **v11)(); // [rsp+50h] [rbp-B8h] BYREF
  int v12; // [rsp+58h] [rbp-B0h]
  __int64 v13; // [rsp+60h] [rbp-A8h]
  __int128 v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+78h] [rbp-90h]
  __int128 v16; // [rsp+80h] [rbp-88h]
  char v17; // [rsp+90h] [rbp-78h] BYREF
  int v18; // [rsp+98h] [rbp-70h] BYREF
  void *v19; // [rsp+A0h] [rbp-68h]
  int *v20; // [rsp+A8h] [rbp-60h]
  int *v21; // [rsp+B0h] [rbp-58h]
  __int64 v22; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v23; // [rsp+C8h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  v12 = 2;
  v11 = off_4C0598;
  v13 = 0;
  v15 = 0;
  v18 = 0;
  v19 = nullptr;
  v20 = &v18;
  v21 = &v18;
  v22 = 0;
  v14 = 0;
  v16 = 0;
  sub_251200((__int64 *)&v11, a1 + 16, 0);
  if ( v22 )
  {
    v5 = 0;
    v6 = 0;
    v8 = 0;
    v4 = (__int64 (__fastcall **)())&off_4C05D8;
    v10 = &v17;
    v7 = 0;
    v9 = 0;
    sub_251200((__int64 *)&v4, a1 + 16, 0);
    v4 = off_4BC478;
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree(v8);
    }
    if ( v6 )
    {
      *(_QWORD *)&v7 = 0;
      qfree(v6);
    }
  }
  sub_320550(a1, 0, 0);
  v1 = (_QWORD **)v19;
  v11 = off_4C0598;
  if ( v19 )
  {
    do
    {
      sub_24F330(v1[3]);
      v2 = v1;
      v1 = (_QWORD **)v1[2];
      operator delete(v2, 0x28u);
    }
    while ( v1 );
  }
  v11 = off_4BC478;
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  return v23 - __readfsqword(0x28u);
}
