unsigned __int64 __fastcall sub_608EC0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-98h] BYREF
  void *v9; // [rsp+18h] [rbp-80h]
  __int128 v10; // [rsp+20h] [rbp-78h]
  int v11; // [rsp+30h] [rbp-68h]
  void *ptr; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  int v16; // [rsp+60h] [rbp-38h]
  unsigned __int64 v17; // [rsp+68h] [rbp-30h]

  v5 = *(_QWORD *)(a2 + 1480);
  v17 = __readfsqword(0x28u);
  sub_79BC40(v5 + 2240, a2, "$ imports", 0);
  v8[0] = off_2B08A58;
  v8[1] = a2;
  v9 = nullptr;
  v8[2] = 0xFFFFFFFF00000000LL;
  v11 = -1;
  ptr = nullptr;
  v14 = 0;
  v15 = a3;
  v16 = a4;
  v10 = 0;
  v13 = 0;
  sub_608C40((__int64)v8, 1);
  v8[0] = off_2B08A18;
  if ( ptr )
  {
    *(_QWORD *)&v13 = 0;
    qfree(ptr);
  }
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9);
  }
  return v17 - __readfsqword(0x28u);
}

