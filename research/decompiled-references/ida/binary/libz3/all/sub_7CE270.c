__int64 __fastcall sub_7CE270(_QWORD *a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebp
  __int64 v3; // rax
  __int64 v5; // r12
  _BYTE v6[32]; // [rsp+8h] [rbp-20h] BYREF

  v1 = a1[18];
  sub_180C5A0(v6, "quant");
  v2 = sub_15DA4C0(v1 + 560, v6);
  v3 = a1[300];
  if ( v3 && v2 < *(_DWORD *)(v3 - 4) && *(_QWORD *)(v3 + 8LL * v2) )
    return *(_QWORD *)(v3 + 8LL * v2);
  v5 = sub_186B270(0xC60u);
  sub_7D4B20(v5, (_DWORD)a1);
  a1[284] = v5;
  sub_7CDF60(a1, v5);
  return v5;
}

