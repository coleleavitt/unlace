unsigned __int64 __fastcall sub_1CB0B00(int a1, __int64 a2, __int64 a3, __m128 a4)
{
  __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 (__fastcall **v8)(); // [rsp+10h] [rbp-38h] BYREF
  int v9; // [rsp+18h] [rbp-30h]
  int v10; // [rsp+1Ch] [rbp-2Ch]
  __int16 v11; // [rsp+20h] [rbp-28h]
  unsigned int v12; // [rsp+24h] [rbp-24h]

  v7[0] = a2;
  v7[1] = a3;
  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  result = 0;
  if ( (*(_BYTE *)(v4 + 17) & 4) != 0 )
  {
    v9 = 16777472;
    v11 = 1;
    v8 = off_2C68DE0;
    v10 = a1;
    v12 = 0;
    if ( (!a2 || (*(_BYTE *)(v4 + 17) & 4) != 0) && (sub_BC8430((__int64)&v8, v7[0]), v12) )
    {
      return ((unsigned __int64)v12 << 32) | v12;
    }
    else
    {
      v6 = (unsigned int)sub_F6CE20(v7);
      return (v6 << 32) | (unsigned int)sub_F6CCB0(v7, a4);
    }
  }
  return result;
}
