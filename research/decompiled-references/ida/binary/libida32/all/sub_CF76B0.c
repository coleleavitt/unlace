__int64 __fastcall sub_CF76B0(__int64 a1, __int64 a2, int a3)
{
  char v4; // al
  __int64 v5; // rbp
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // [rsp+0h] [rbp-78h] BYREF
  int v11; // [rsp+8h] [rbp-70h]
  char v12; // [rsp+Ch] [rbp-6Ch]
  int v13; // [rsp+10h] [rbp-68h]
  _BYTE v14[88]; // [rsp+20h] [rbp-58h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  v5 = *(_QWORD *)(a1 + 400);
  if ( v4 && !*(_DWORD *)(v5 + 24) )
    return 0;
  v6 = sub_DA69E0(a1, a2, v5 + 40);
  if ( !(_BYTE)v6 )
    return 0;
  sub_DFF4E0(
    v14,
    *(_QWORD *)(v5 + 72),
    (unsigned int)(a3 + *(_DWORD *)(v5 + 40)),
    (unsigned int)(a3 + *(_DWORD *)(v5 + 40)));
  sub_CE7240((__int64)&v10, *(_QWORD *)(a1 + 176));
  v8 = sub_CEB480((__int64)v14);
  v9 = v8;
  if ( *(_DWORD *)(v8 + 8) > 0x40u )
  {
    if ( *(_QWORD *)v8 )
      operator delete[](*(void **)v8);
  }
  *(_QWORD *)v9 = v10;
  *(_DWORD *)(v9 + 8) = v11;
  *(_BYTE *)(v9 + 12) = v12;
  *(_DWORD *)(v9 + 16) = v13;
  sub_DFFFB0(v14);
  sub_E00FC0(v14);
  sub_DFF560(v14);
  return v6;
}

