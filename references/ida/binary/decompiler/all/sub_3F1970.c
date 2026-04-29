__int64 __fastcall sub_3F1970(__int64 a1, int a2, int a3, __int64 a4, __int64 a5, int a6)
{
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // rdx
  int v11; // r13d
  int dtype_size; // eax
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rdx
  int v17; // r12d
  int v18; // r13d
  int v19; // eax
  __int64 v20; // [rsp-10h] [rbp-58h]
  __int64 v21; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]
  char v23; // [rsp+10h] [rbp-38h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v6 = *(_BYTE *)(a1 + 65) == 7;
  v24 = __readfsqword(0x28u);
  if ( !v6 )
  {
    v11 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL);
    dtype_size = get_dtype_size();
    sub_1D3790(a1, 6, dtype_size, a2, 346938453, v11, 0);
    v15 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) + 16LL * *(_QWORD *)(a1 + 24);
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
    if ( v15 != v16 )
    {
      v16 &= v15;
      if ( v15 == -1 )
        v16 = -1;
    }
    sub_3F18B0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), v16, v20, v13, v14);
    *(_QWORD *)(a1 + 16) = sub_676D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    *(_BYTE *)(a1 + 896) = 1;
    v21 = a1;
    v22 = 0xFFFFFFFF00000001LL;
    v23 = 0;
    sub_3EFA20((int *)&v21, 1, 0);
    if ( !v23 && !(unsigned __int8)sub_3F0150((__int64)&v21) )
      sub_3E07C0();
    v17 = HIDWORD(v22);
    if ( (unsigned __int16)(*(_WORD *)(a1 + 48) - 245) <= 7u )
      v18 = -1;
    else
      v18 = 0;
    v19 = get_dtype_size();
    sub_1D3790(a1, 4, v19, v17, 346938453, a3, v18);
    return v24 - __readfsqword(0x28u);
  }
  v7 = *(_QWORD *)(a1 + 80) + 16LL * *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 800) + 24LL) + 16LL);
  if ( v7 != v8 )
  {
    v8 &= v7;
    if ( v7 == -1 )
      v8 = -1;
  }
  if ( *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50) == v8 )
    return v24 - __readfsqword(0x28u);
  return sub_3F18B0(a1, a2, v8, a4, a5, a6);
}
