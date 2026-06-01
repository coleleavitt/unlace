unsigned __int64 __fastcall sub_15C16D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 result; // rax
  unsigned int v4; // edx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // [rsp+0h] [rbp-18h]
  __int64 v11[2]; // [rsp+8h] [rbp-10h] BYREF

  v11[0] = a2;
  if ( (a2 & 7) != 0 )
  {
    v2 = sub_B85750(v11);
    if ( v2 )
      return v2 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v2 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 8);
    if ( v2 )
      return v2 & 0xFFFFFFFFFFFFFFFELL;
  }
  v4 = *(_DWORD *)(a1 + 8);
  if ( v4 == 512 )
  {
    v5 = (_QWORD *)operator new(0x4008u);
    *v5 = *(_QWORD *)a1;
    v8 = v5 + 1;
    do
    {
      v9 = v8 + 2;
      *((_DWORD *)v8 + 2) = 0;
      v8 += 4;
      *(v8 - 4) = v9;
      *((_DWORD *)v8 - 5) = 2;
    }
    while ( v8 != v5 + 2049 );
    *(_QWORD *)a1 = v5;
    v6 = 8;
    v4 = 0;
    *(_DWORD *)(a1 + 8) = 0;
  }
  else
  {
    v5 = *(_QWORD **)a1;
    v6 = 32LL * v4 + 8;
  }
  result = (unsigned __int64)v5 + v6;
  v7 = result | 1;
  if ( (v11[0] & 7) != 0 )
  {
    v10 = result;
    sub_B857B0(v11, v7);
    v4 = *(_DWORD *)(a1 + 8);
    result = v10;
  }
  else
  {
    *(_QWORD *)((v11[0] & 0xFFFFFFFFFFFFFFF8LL) + 8) = v7;
  }
  *(_DWORD *)(a1 + 8) = v4 + 1;
  return result;
}
