__int64 __fastcall sub_B056B0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r13
  __int64 v4; // r12
  __int64 result; // rax
  int v6; // r14d
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = a3;
  v4 = *(_QWORD *)(a1 + 16);
  result = *(_QWORD *)(v4 + 8848);
  if ( *(_BYTE *)(result + a3) != 1 )
  {
    ++*(_DWORD *)(a2 + 20);
    v6 = *(_DWORD *)(a1 + 8);
    ++*(_DWORD *)(a1 + 780);
    v7 = (_QWORD *)sub_180C100(v4 + 8400, 32);
    v7[1] = 2;
    v8 = (unsigned __int64)v7;
    *v7 = off_1C56CA8;
    v9 = *(_QWORD *)(v4 + 8848);
    *(_QWORD *)(v8 + 16) = a2;
    *(_DWORD *)(v8 + 24) = v6;
    *(_DWORD *)(v8 + 28) = v3;
    v10 = v8 | 3;
    v11[0] = v10;
    result = *(unsigned __int8 *)(v9 + v3);
    if ( (_BYTE)result == 0xFF )
    {
      return sub_8E8670(v4, v11, (unsigned int)v3 ^ 1);
    }
    else if ( !(_BYTE)result )
    {
      return (__int64)sub_8F28B0(v4, v3, v10, 0);
    }
  }
  return result;
}

