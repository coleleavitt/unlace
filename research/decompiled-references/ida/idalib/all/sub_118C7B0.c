__int64 __fastcall sub_118C7B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rcx
  __int64 result; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rcx
  void *v12[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+10h] [rbp-38h] BYREF

  v6 = sub_10DCD30(a3, 0x8AEu);
  if ( v6 )
  {
    v7 = **(_QWORD **)(v6 + 48);
  }
  else
  {
    sub_11C8180(v12, a1, a3, a2, 0);
    v7 = sub_229FF20(a2, v12[0], v12[1]);
    if ( v12[0] != &v13 )
      operator delete(v12[0]);
  }
  v8 = *(unsigned int *)(a4 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
  {
    sub_2237220(a4, a4 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a4 + 8 * v8) = "-target-abi";
  result = *(unsigned int *)(a4 + 8);
  v10 = *(unsigned int *)(a4 + 12);
  v11 = (unsigned int)(result + 1);
  *(_DWORD *)(a4 + 8) = v11;
  if ( v11 + 1 > v10 )
  {
    result = sub_2237220(a4, a4 + 16, v11 + 1, 8);
    v11 = *(unsigned int *)(a4 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a4 + 8 * v11) = v7;
  ++*(_DWORD *)(a4 + 8);
  return result;
}
