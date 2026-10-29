__int64 __fastcall sub_2264AA0(__int64 a1)
{
  __int64 v2; // rbp
  volatile signed __int32 *v3; // rdi
  _BYTE *v5; // rdi
  void *v6; // [rsp+0h] [rbp-68h] BYREF
  __int64 v7; // [rsp+8h] [rbp-60h]
  _BYTE v8[16]; // [rsp+10h] [rbp-58h] BYREF
  int v9; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+24h] [rbp-44h]

  v2 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  if ( !*(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL) )
  {
    v3 = *(volatile signed __int32 **)(a1 + 96);
    *(_OWORD *)(a1 + 88) = 0;
    if ( v3 )
      sub_4343A0(v3);
  }
  if ( (_DWORD)v2 || (v6 = nullptr, v7 = 0, sub_225AAE0((__int64 *)(a1 + 88), (__int64 *)&v6)) )
  {
    v8[0] = 0;
    v10 = 0;
    v6 = v8;
    v7 = 0;
    v9 = 9;
    sub_A0AAD0(a1 + 8, &v6);
    v5 = v6;
    *(_DWORD *)(a1 + 40) = v9;
    if ( v5 != v8 )
      operator delete(v5);
  }
  else
  {
    sub_22648C0(a1);
  }
  return v2;
}
