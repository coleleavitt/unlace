__int64 __fastcall sub_152760(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int8 v15; // [rsp+7h] [rbp-51h]
  __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 v17; // [rsp+10h] [rbp-48h] BYREF
  __int64 v18; // [rsp+18h] [rbp-40h] BYREF
  _QWORD v19[7]; // [rsp+20h] [rbp-38h] BYREF

  v16 = a3;
  v19[1] = __readfsqword(0x28u);
  v6 = sub_11C8E0((__int64)a4, &v17, 65);
  if ( !v6 )
    return 0;
  v7 = v6;
  if ( *(_BYTE *)v17 != 4 )
    return 0;
  v9 = *(_QWORD *)(v17 + 8);
  if ( *(_DWORD *)v9 != 2 )
    return 0;
  if ( *(_BYTE *)(v9 + 48) != 4 )
    return 0;
  v10 = *(_DWORD **)(v9 + 56);
  if ( *v10 != 12 )
    return 0;
  v11 = sub_11C8E0((__int64)v10, &v18, 14);
  if ( !v11 )
    return 0;
  if ( *(_BYTE *)v18 != 10 )
    return 0;
  if ( **(_BYTE **)(v18 + 8) != 6 )
    return 0;
  v12 = sub_11C8A0(v11, v19);
  if ( !v12 )
    return 0;
  if ( sub_32ABC0(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 16LL), *(unsigned int *)(v12 + 4), 0) != 8 )
    return 0;
  if ( *(_BYTE *)v19[0] != 4 )
    return 0;
  v13 = sub_30D340(a1, a2, &v16, *(_QWORD *)(v19[0] + 8LL));
  if ( !v13 )
    return 0;
  if ( !sub_152650(v7 + 32, a1, v13, v14) )
    return 0;
  v15 = equal_bytes(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 8LL), &unk_42AD10, 0, 16, 1);
  if ( !v15 )
    return 0;
  *a4 = 66;
  sub_11CDA0((__int64)(a4 + 12));
  return v15;
}
