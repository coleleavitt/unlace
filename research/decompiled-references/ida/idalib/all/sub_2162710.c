__int64 __fastcall sub_2162710(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 *v10; // rbx
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  _QWORD v17[11]; // [rsp+20h] [rbp-58h] BYREF

  v17[0] = a7;
  v17[1] = a8;
  v10 = (__int64 *)operator new(0xE8u);
  v17[2] = a9;
  v17[3] = a10;
  sub_21A20D0((_DWORD)v10, 10, v11, v12, v13, v14, a7, a8, a9, a10);
  v10[14] = 0;
  *((_OWORD *)v10 + 3) = 0;
  *v10 = (__int64)&off_2C738F0;
  *((_OWORD *)v10 + 4) = 0;
  *((_OWORD *)v10 + 5) = 0;
  *((_OWORD *)v10 + 6) = 0;
  *((_DWORD *)v10 + 30) = 0;
  *((_OWORD *)v10 + 8) = 0;
  *((_DWORD *)v10 + 36) = 0;
  *(_OWORD *)(v10 + 19) = 0;
  *(_OWORD *)(v10 + 21) = 0;
  *(_OWORD *)(v10 + 23) = 0;
  *(_OWORD *)(v10 + 25) = 0;
  *(_OWORD *)(v10 + 27) = 0;
  sub_2161FB0((std::_V2 *)v17, (char *)v10);
  if ( v17[0] )
  {
    *(_QWORD *)a1 = v17[0];
    v15 = *v10;
    *(_BYTE *)(a1 + 8) |= 1u;
    (*(void (__fastcall **)(__int64 *))(v15 + 8))(v10);
  }
  else
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v10;
  }
  return a1;
}
