void __fastcall sub_702680(char *a1)
{
  void (__fastcall ***v2)(void *); // rbx
  bool v3; // zf
  _QWORD *v4; // rbx
  void *v5; // rdi
  char *v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  void (__fastcall ***v14)(void *, unsigned __int64); // rbx

  v2 = *((void (__fastcall ****)(void *))a1 + 81);
  *(_QWORD *)a1 = &off_1C53580;
  if ( v2 )
  {
    v3 = (*((_DWORD *)v2 + 2))-- == 1;
    if ( v3 )
    {
      (**v2)(v2);
      sub_186B220(v2);
    }
  }
  sub_2334C0((__int64 *)a1 + 79);
  v4 = *((_QWORD **)a1 + 74);
  while ( v4 )
  {
    v5 = v4;
    v4 = (_QWORD *)*v4;
    operator delete(v5, 0x18u);
  }
  memset(*((void **)a1 + 72), 0, 8LL * *((_QWORD *)a1 + 73));
  v6 = *((char **)a1 + 72);
  *((_QWORD *)a1 + 75) = 0;
  *((_QWORD *)a1 + 74) = 0;
  v7 = *((_QWORD *)a1 + 73);
  if ( v6 != a1 + 624 )
  {
    v7 *= 8LL;
    operator delete(v6, v7);
  }
  sub_2334C0((__int64 *)a1 + 70);
  v8 = *((_QWORD *)a1 + 69);
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = *((_QWORD *)a1 + 68);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *((_QWORD *)a1 + 67);
  if ( v10 )
    sub_186B220((void *)(v10 - 8));
  sub_2334C0((__int64 *)a1 + 65);
  sub_2334C0((__int64 *)a1 + 63);
  sub_2334C0((__int64 *)a1 + 60);
  v11 = *((void **)a1 + 57);
  if ( v11 )
    sub_186B220(v11);
  v12 = *((_QWORD *)a1 + 56);
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = *((_QWORD *)a1 + 55);
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = *((void (__fastcall ****)(void *, unsigned __int64))a1 + 53);
  if ( v14 )
  {
    v3 = (*((_DWORD *)v14 + 2))-- == 1;
    if ( v3 )
    {
      (**v14)(v14, v7);
      sub_186B220(v14);
    }
  }
  sub_18572D0(a1 + 416);
  sub_701700((_QWORD *)a1 + 3);
  operator delete(a1, 0x290u);
}

