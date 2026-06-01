/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140021BB0
// Address: 0x0000000140021BB0

//----- (0000000140021BB0) ----------------------------------------------------
void __fastcall sub_140021BB0(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rdi
  void *v4; // rax
  const char *v5; // rdi
  size_t v6; // rax
  char v7[8]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+28h] [rbp-20h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v2 = (int)sub_140063DE0();
  v3 = sub_14002EAB0("exception");
  if ( a1 )
  {
    sub_140029390(a1);
    *(_BYTE *)a1 = 5;
    v4 = operator new(0x18u);
    if ( v4 )
    {
      if ( v3 )
        v4 = (void *)sub_14002BC20((__int64)v4, *(_DWORD *)(v3 + 20));
      else
        v4 = (void *)sub_14002BC20((__int64)v4, 0);
    }
    *(_QWORD *)(a1 + 8) = v4;
  }
  else
  {
    sub_1400640B0(0x5FCu);
  }
  v7[0] = 2;
  v9 = 0;
  v8 = v2;
  sub_14002A890(a1, "qerrno", v7, 0);
  v5 = sub_140064D10(-1);
  sub_140029390((__int64)v7);
  if ( v5 )
    v6 = strlen(v5);
  else
    v6 = 0;
  v7[0] = 7;
  v8 = 0;
  v9 = 0;
  if ( v6 )
    sub_140001810((__int64)&v8, v5, v6);
  sub_14002A890(a1, "description", v7, 0);
  sub_1400640B0(v2);
  sub_140029390((__int64)v7);
}
