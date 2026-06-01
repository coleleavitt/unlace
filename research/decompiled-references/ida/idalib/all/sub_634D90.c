unsigned __int64 __fastcall sub_634D90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int64 v13; // [rsp+8h] [rbp-30h]
  __int64 v14; // [rsp+10h] [rbp-28h]
  unsigned __int64 v15; // [rsp+18h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  *(_DWORD *)a2 = 16;
  v6 = *a1;
  v12 = v6;
  if ( v6 )
    v13 = *(_QWORD *)(v6 + 1520);
  else
    v13 = -1;
  v14 = v6 + 640;
  *(_BYTE *)(a2 + 4) = (unsigned __int8)sub_6317E0(&v12, (__int64)&unk_2B34DA0, 0, a4, a5, a6) >> 7;
  *(_BYTE *)(a2 + 5) = *(_BYTE *)(*a1 + 824);
  v10 = *a1;
  v12 = v10;
  if ( v10 )
    v13 = *(_QWORD *)(v10 + 1520);
  else
    v13 = -1;
  v14 = v10 + 640;
  *(_BYTE *)(a2 + 6) = (sub_6317E0(&v12, (__int64)&unk_2B35820, 0, v7, v8, v9) & 0x20) != 0;
  *(_BYTE *)(a2 + 7) = *(_BYTE *)(*a1 + 843);
  *(_BYTE *)(a2 + 8) = *(_BYTE *)(*a1 + 842);
  *(_BYTE *)(a2 + 9) = *(_BYTE *)(*a1 + 853);
  *(_WORD *)(a2 + 10) = *(_WORD *)(*a1 + 844);
  *(_WORD *)(a2 + 12) = *(_WORD *)(*a1 + 854);
  *(_BYTE *)(a2 + 14) = *(_BYTE *)(*a1 + 856);
  return v15 - __readfsqword(0x28u);
}
