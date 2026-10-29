__int64 __fastcall sub_3F1CA0(__int64 a1, int a2)
{
  unsigned __int16 v3; // ax
  int v4; // r12d
  __int64 v5; // rsi
  __int64 v6; // r8
  int v7; // ecx
  int v8; // ecx
  __int64 v9; // rax
  int v10; // r9d
  int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v17; // rdx
  _QWORD v18[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v19[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v20[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v21; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v22; // [rsp+38h] [rbp-50h]
  char v23; // [rsp+40h] [rbp-48h]
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  sub_3F1B90(a1);
  v3 = *(_WORD *)(a1 + 48);
  if ( v3 <= 0x73u )
  {
    v4 = 44;
    if ( v3 <= 0x6Fu )
      goto LABEL_9;
  }
  else
  {
    if ( (unsigned __int16)(v3 - 116) > 3u )
      goto LABEL_9;
    v4 = 43;
  }
  if ( get_first_fcref_from() != -1 )
  {
    v5 = *(_QWORD *)(a1 + 832);
    v6 = *(_QWORD *)(a1 + 40);
    v19[0] = -4294967290LL;
    v7 = *(_DWORD *)(v5 + 84);
    v18[0] = 0x100000001LL;
    v18[1] = 1;
    v8 = 8 * v7;
    v9 = v6 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v8 <= 0x3F )
      v9 &= ~(-1LL << v8);
    v19[1] = v9;
    v20[1] = 0;
    v20[0] = 0xFFFFFFFF00000000LL;
    sub_11E5D0((__int64)v20, v5, 0, 1, v6, 0);
    sub_1D38D0(a1, v4, (unsigned int)v18, (unsigned int)v20, (unsigned int)v19, v10);
    *(_QWORD *)(a1 + 16) = sub_676D0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    *(_BYTE *)(a1 + 896) = 1;
    v21 = a1;
    v22 = 0xFFFFFFFF00000000LL;
    v23 = 0;
    sub_3EFA20((int *)&v21, 1, 0);
    if ( !v23 && !(unsigned __int8)sub_3F0150((__int64)&v21) )
      sub_3E07C0(&v21, 1, v17);
    a2 = HIDWORD(v22);
    sub_11A960((__int64)v20);
    sub_11A960((__int64)v19);
    sub_11A960((__int64)v18);
  }
LABEL_9:
  v11 = *(_DWORD *)(a1 + 52);
  v12 = 7;
  if ( (v11 & 0x1018) != 0x1010 )
    v12 = (unsigned __int8)(((v11 & 0x1018) == 4104 || (v11 & 0x1008) == 0) + 1);
  sub_3F0BC0(a1, 32, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL), v12, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL));
  return sub_3F1970(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), a2, v13, v14, v15);
}
