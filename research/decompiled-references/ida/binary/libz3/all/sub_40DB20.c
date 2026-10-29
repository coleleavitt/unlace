__int64 __fastcall sub_40DB20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6, double a7)
{
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12[2]; // [rsp+0h] [rbp-68h] BYREF
  int v13[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v14; // [rsp+18h] [rbp-50h]
  _BYTE v15[72]; // [rsp+20h] [rbp-48h] BYREF

  result = *(unsigned int *)(a1 + 360);
  switch ( (_DWORD)result )
  {
    case 0:
      return std::operator<<<std::char_traits<char>>();
    case 1:
      v9 = *(_QWORD *)(a1 + 152);
      sub_400920(v13, a1, a7);
      v10 = *(_QWORD *)v13;
      v11 = v14;
      if ( *(_QWORD *)v13 )
        ++*(_DWORD *)(*(_QWORD *)v13 + 8LL);
      sub_3FCDD0(v10, v11);
      sub_1606360(v13, v10, v9, 0, 0, 0);
      sub_160E8B0(a2, v13);
      sub_18572D0(v15);
      return sub_3FCDF0(v10, v11);
    case 0xFFFFFFFF:
      v8 = *(_QWORD *)(a1 + 152);
      sub_40D7C0(v12, a1, a3, a4, a5, a6);
      sub_1606360(v13, v12[0], v8, 0, 0, 0);
      sub_160E8B0(a2, v13);
      sub_18572D0(v15);
      return sub_3FCDF0(v12[0], v12[1]);
  }
  return result;
}

