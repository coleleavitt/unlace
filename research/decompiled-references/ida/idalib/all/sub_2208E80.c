__int64 __fastcall sub_2208E80(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  unsigned int v8; // esi
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdi
  unsigned int v11; // r8d
  unsigned int v12; // r9d
  bool v13; // zf
  __int64 v14; // rdi
  char v15; // al
  const void *v17; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-30h]

  v18 = *(_DWORD *)(a2 + 8);
  if ( v18 > 0x40 )
    sub_2205510((__int64)&v17, (const void **)a2);
  else
    v17 = *(const void **)a2;
  sub_22059A0((unsigned __int64 *)&v17, (__int64 *)a3);
  v8 = v18;
  v9 = (unsigned __int64)v17;
  *(_QWORD *)a1 = v17;
  v10 = *(_QWORD *)a2;
  *(_DWORD *)(a1 + 8) = v8;
  v11 = *(_DWORD *)(a2 + 8);
  if ( v11 > 0x40 )
    v10 = *(_QWORD *)(v10 + 8LL * ((v11 - 1) >> 6));
  v12 = *(_DWORD *)(a3 + 8);
  v13 = (v10 & (1LL << ((unsigned __int8)v11 - 1))) == 0;
  v14 = *(_QWORD *)a3;
  if ( v12 > 0x40 )
    v14 = *(_QWORD *)(v14 + 8LL * ((v12 - 1) >> 6));
  v15 = 0;
  if ( ((v14 & (1LL << ((unsigned __int8)v12 - 1))) == 0) == v13 )
  {
    if ( v8 > 0x40 )
      v9 = *(_QWORD *)(v9 + 8LL * ((v8 - 1) >> 6));
    v15 = v13 ^ ((v9 & (1LL << ((unsigned __int8)v8 - 1))) == 0);
  }
  *a4 = v15;
  return a1;
}
