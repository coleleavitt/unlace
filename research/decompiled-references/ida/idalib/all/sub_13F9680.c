void __fastcall sub_13F9680(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  _BYTE **v4; // rbp
  size_t v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  signed __int64 v8; // rdx
  _BYTE *v9; // rsi
  __int64 v10; // rax
  unsigned __int8 *v11[15]; // [rsp+0h] [rbp-78h] BYREF

  v3 = a1[6];
  v4 = *(_BYTE ***)(a2 + 8);
  v5 = *(_QWORD *)(v3 + 200);
  if ( v5 )
  {
    v6 = a1[1];
    if ( (_BYTE *)v5 != v4[1] || sub_9B48C0(*(const void **)(v3 + 192), *v4, v5) )
    {
      sub_FC70B0((__int64)v11, v6, *((_DWORD *)v4 + 8), 1058);
      sub_AEC220(v11, *(_BYTE **)a1[6], *(_QWORD *)(a1[6] + 8LL));
      v7 = a1[6];
      v8 = *(_QWORD *)(v7 + 200);
      v9 = *(_BYTE **)(v7 + 192);
    }
    else
    {
      sub_FC70B0((__int64)v11, v6, *((_DWORD *)v4 + 8), 1363);
      v10 = a1[6];
      v8 = *(_QWORD *)(v10 + 8);
      v9 = *(_BYTE **)v10;
    }
    sub_AEC220(v11, v9, v8);
    sub_AEC220(v11, *v4, (signed __int64)v4[1]);
    sub_AEA040((__int64)v11);
    v3 = a1[6];
  }
  sub_9EE8A0(v3 + 192, (__int64)v4);
  sub_13F9420(a1[2], a1[6]);
}
