__int64 __fastcall sub_110BDC0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // rax
  void *v7[2]; // [rsp+0h] [rbp-78h] BYREF
  _BYTE v8[16]; // [rsp+10h] [rbp-68h] BYREF
  void **v9; // [rsp+20h] [rbp-58h] BYREF
  __int16 v10; // [rsp+40h] [rbp-38h]

  v8[0] = 0;
  v7[1] = nullptr;
  v7[0] = v8;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, void **))(*(_QWORD *)a1 + 656LL))(a1, a2, v7);
  if ( (_BYTE)v4 )
  {
    v9 = v7;
    v10 = 260;
    v6 = sub_10B6980(a2, (__int64)&v9);
    sub_10B8890(a3, v6);
  }
  if ( v7[0] != v8 )
    operator delete(v7[0]);
  return v4;
}

