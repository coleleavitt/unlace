__int64 __fastcall sub_3FC800(__int64 a1, int a2, double a3, __m128 a4)
{
  unsigned __int16 v5; // ax
  int v6; // r12d
  __int64 v7; // rsi
  __int64 v8; // r8
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax
  int v12; // esi
  __int64 v13; // rcx
  _QWORD v15[2]; // [rsp+0h] [rbp-88h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v17[2]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+38h] [rbp-50h]
  char v20; // [rsp+40h] [rbp-48h]
  unsigned __int64 v21; // [rsp+48h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  sub_3FC6F0(a1);
  v5 = *(_WORD *)(a1 + 48);
  if ( v5 <= 0x73u )
  {
    v6 = 44;
    if ( v5 <= 0x6Fu )
      goto LABEL_9;
  }
  else
  {
    if ( (unsigned __int16)(v5 - 116) > 3u )
      goto LABEL_9;
    v6 = 43;
  }
  if ( get_first_fcref_from() != -1 )
  {
    v7 = *(_QWORD *)(a1 + 832);
    v8 = *(_QWORD *)(a1 + 40);
    v16[0] = -4294967290LL;
    v9 = *(_DWORD *)(v7 + 84);
    v15[0] = 0x100000001LL;
    v15[1] = 1;
    v10 = 8 * v9;
    v11 = v8 + *(unsigned __int16 *)(a1 + 50);
    if ( (unsigned __int64)v10 <= 0x3F )
      v11 &= ~(-1LL << v10);
    v16[1] = v11;
    v17[1] = 0;
    v17[0] = 0xFFFFFFFF00000000LL;
    sub_120A10((__int64)v17, v7, 0, 1, v8, 0);
    sub_1D6450(a1, v6, (unsigned __int8 *)v15, (unsigned __int8 *)v17, (unsigned __int8 *)v16);
    *(_QWORD *)(a1 + 16) = sub_67FD0(*(_QWORD *)(a1 + 8), *(_QWORD *)(a1 + 40), 2);
    *(_BYTE *)(a1 + 896) = 1;
    v18 = a1;
    v19 = 0xFFFFFFFF00000000LL;
    v20 = 0;
    sub_3FA580((int *)&v18, 1, 0, a3);
    if ( !v20 && !(unsigned __int8)sub_3FACB0((__int64)&v18, a3, a4) )
      sub_3EB430(a3);
    a2 = HIDWORD(v19);
    sub_11CDA0((__int64)v17);
    sub_11CDA0((__int64)v16);
    sub_11CDA0((__int64)v15);
  }
LABEL_9:
  v12 = *(_DWORD *)(a1 + 52);
  v13 = 7;
  if ( (v12 & 0x1018) != 0x1010 )
    v13 = (unsigned __int8)(((v12 & 0x1018) == 4104 || (v12 & 0x1008) == 0) + 1);
  sub_3FB720(a1, 32, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 388LL), v13, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL));
  return sub_3FC4D0(a1, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 464LL), a2, a3, a4);
}
