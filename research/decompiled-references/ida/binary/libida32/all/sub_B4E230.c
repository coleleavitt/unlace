__int64 __fastcall sub_B4E230(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *v6; // rax
  __int64 v8; // [rsp+18h] [rbp-40h] BYREF
  _BYTE v9[32]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v10; // [rsp+40h] [rbp-18h]

  if ( (*(_BYTE *)(a1 + 29) & 2) == 0 )
    return sub_B61240(a1 + 40);
  if ( *(_QWORD *)(a1 + 40) )
    return sub_B61240(a1 + 40);
  v6 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*v6 + 16LL) != 48 || (*(_BYTE *)(sub_F3D1D0(*v6, a2, a3, a4, a5) + 75) & 1) == 0 )
    return sub_B61240(a1 + 40);
  v8 = *(_QWORD *)(a1 + 48);
  v10 = 257;
  return sub_F50AF0(&v8, a2, a3, v9, 0);
}

