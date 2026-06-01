__int64 __fastcall sub_608FD0(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rax
  __int64 v4; // rbp
  bool v5; // zf
  __int64 v6; // rbx
  _QWORD v8[3]; // [rsp+0h] [rbp-98h] BYREF
  void *v9; // [rsp+18h] [rbp-80h]
  __int128 v10; // [rsp+20h] [rbp-78h]
  int v11; // [rsp+30h] [rbp-68h]
  void *ptr; // [rsp+38h] [rbp-60h]
  __int128 v13; // [rsp+40h] [rbp-58h]
  __int64 v14; // [rsp+50h] [rbp-48h]
  __int64 v15; // [rsp+58h] [rbp-40h]
  _QWORD v16[7]; // [rsp+60h] [rbp-38h] BYREF

  v16[1] = __readfsqword(0x28u);
  v6 = a3;
  v8[1] = a2;
  v8[2] = 0xFFFFFFFF00000000LL;
  v3 = *(_QWORD **)(a2 + 1480);
  v9 = nullptr;
  v11 = -1;
  ptr = nullptr;
  v14 = 0;
  v8[0] = off_2B08AC8;
  v4 = *(_QWORD *)(a3 + 8);
  v15 = a3;
  v16[0] = 0;
  v10 = 0;
  v13 = 0;
  sub_6141A0(*v3, 26, v16, 8);
  sub_608C40((__int64)v8, 1);
  v5 = *(_QWORD *)(v6 + 8) == (int)v4;
  v8[0] = off_2B08A18;
  LOBYTE(v6) = v5;
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
  return (unsigned int)v6;
}

