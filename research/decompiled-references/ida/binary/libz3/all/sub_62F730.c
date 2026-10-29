__int64 __fastcall sub_62F730(_QWORD *a1, __int64 a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r13
  __int64 v10; // rbx
  __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+8h] [rbp-60h]
  _BYTE v15[16]; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v16[72]; // [rsp+20h] [rbp-48h] BYREF

  v7 = *a1;
  v13 = 0;
  v14 = v7;
  sub_62E310((__int64)a1, a2, &v13, a4, a5, a6);
  v8 = v13;
  v9 = v14;
  sub_1606360(v15, v13, *a1, 0, 0, 0);
  v10 = sub_160E8B0(a3, v15);
  sub_18572D0(v16);
  if ( !v8 )
    return v10;
  if ( (*(_DWORD *)(v8 + 8))-- != 1 )
    return v10;
  sub_15D7BC0(v9, v8);
  return v10;
}

