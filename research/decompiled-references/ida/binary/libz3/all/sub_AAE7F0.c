__int64 __fastcall sub_AAE7F0(__int64 *a1)
{
  __int64 v1; // rbp
  unsigned int v2; // eax
  __int64 v3; // r12
  unsigned int v4; // ebp
  __int64 result; // rax
  __int64 v6; // rax
  unsigned int *v7; // rbp
  unsigned int *v8; // rsi
  unsigned int *v9; // rbp
  __int64 v10; // r13
  _BYTE v11[48]; // [rsp+8h] [rbp-30h] BYREF

  v1 = a1[1];
  sub_180C5A0(v11, "bv");
  v2 = sub_15DA4C0(v1 + 560, v11);
  v3 = *a1;
  v4 = v2;
  if ( v2 == -1
    || (result = *(_QWORD *)(v3 + 8672)) == 0
    || v4 >= *(_DWORD *)(result - 4)
    || !*(_QWORD *)(result + 8LL * v4) )
  {
    v6 = a1[2];
    if ( *(_DWORD *)(v6 + 440) == 2 )
    {
      v9 = (unsigned int *)sub_186B270(0x138u);
      sub_B960B0(v9, *a1);
      sub_8F1E10(v3, v9);
      v3 = *a1;
      if ( *(_DWORD *)(a1[2] + 252) == 2 )
      {
        v7 = (unsigned int *)sub_186B270(0x668u);
        sub_A44350((__int64)v7, *a1);
      }
      else
      {
        v7 = (unsigned int *)sub_186B270(0x48u);
        sub_A75F00(v7, *a1);
      }
    }
    else
    {
      result = *(unsigned int *)(v6 + 424);
      if ( !(_DWORD)result )
      {
        v10 = sub_186B270(0x40u);
        sub_ADA4E0(v10, *a1, v4, "no bit-vector");
        v8 = (unsigned int *)v10;
        return sub_8F1E10(v3, v8);
      }
      if ( (_DWORD)result != 1 )
        return result;
      v7 = (unsigned int *)sub_186B270(0x4A8u);
      sub_AB46E0(v7, *a1);
    }
    v8 = v7;
    return sub_8F1E10(v3, v8);
  }
  return result;
}

