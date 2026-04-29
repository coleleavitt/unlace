__int64 __fastcall sub_14E2A0(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  unsigned __int8 v14; // [rsp+7h] [rbp-51h]
  __int64 v15; // [rsp+8h] [rbp-50h] BYREF
  __int64 v16; // [rsp+10h] [rbp-48h] BYREF
  __int64 v17; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v18[7]; // [rsp+20h] [rbp-38h] BYREF

  v15 = a3;
  v18[1] = __readfsqword(0x28u);
  v6 = sub_118420((__int64)a4, &v16, 65);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( *(_BYTE *)v16 != 4 )
    return 0;
  v9 = *(_QWORD *)(v16 + 8);
  if ( *(_DWORD *)v9 != 2 )
    return 0;
  if ( *(_BYTE *)(v9 + 48) != 4 )
    return 0;
  v10 = *(_DWORD **)(v9 + 56);
  if ( *v10 != 12 )
    return 0;
  v11 = sub_118420((__int64)v10, &v17, 14);
  if ( !v11 )
    return 0;
  if ( *(_BYTE *)v17 != 10 )
    return 0;
  if ( **(_BYTE **)(v17 + 8) != 6 )
    return 0;
  v12 = sub_1183E0(v11, v18);
  if ( !v12 )
    return 0;
  if ( sub_325910(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), *(unsigned int *)(v12 + 4), 0) != 8 )
    return 0;
  if ( *(_BYTE *)v18[0] != 4 )
    return 0;
  v13 = sub_308740(a1, a2, &v15, *(_QWORD *)(v18[0] + 8LL));
  if ( !v13 )
    return 0;
  if ( !sub_14E190(v7 + 32, a1, v13) )
    return 0;
  v14 = equal_bytes(*(_QWORD *)(*(_QWORD *)(v17 + 8) + 8LL), &unk_404750, 0, 16, 1);
  if ( !v14 )
    return 0;
  *a4 = 66;
  sub_1188E0((__int64)(a4 + 12));
  return v14;
}
