__int64 __fastcall sub_8CBAD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ebx
  _QWORD v7[41]; // [rsp+0h] [rbp-148h] BYREF

  sub_A1AC70(v7, a2, *(_QWORD *)(a1 + 24), a1 + 8, a1, 0);
  v4 = operator new(0xD8u);
  sub_A172B0(v4, v7, a3, 0, 0, *(unsigned int *)(a3 + 20));
  v7[25] = v4;
  v5 = sub_9F32C0(v7);
  sub_A1B5B0(v7);
  if ( !(_BYTE)v5 )
    sub_A1A3F0(a1 + 8);
  return v5;
}

