__int64 __fastcall sub_1480A50(__int64 a1, __int64 *a2)
{
  __int16 v2; // ax
  unsigned __int8 v4; // al
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int8 *v10; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int8 v11; // [rsp+8h] [rbp-60h]
  __int64 v12; // [rsp+10h] [rbp-58h]
  int v13; // [rsp+18h] [rbp-50h]
  __int16 v14; // [rsp+1Ch] [rbp-4Ch]
  __int64 (__fastcall *v15)(__int64); // [rsp+20h] [rbp-48h]
  __int64 v16; // [rsp+28h] [rbp-40h]
  __int64 v17; // [rsp+30h] [rbp-38h]

  v2 = *(_WORD *)(a1 + 32);
  if ( v2 == 22 )
  {
    v12 = a1;
    v10 = (unsigned __int8 *)(a1 + 1952);
    v4 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v11 = v4;
    v14 = 63;
    v13 = 1507350;
    v15 = sub_146A990;
    v16 = 0;
    v17 = 0;
    sub_1477FA0((__int64)&v10);
    v5 = sub_1480A50(a1, a2);
    sub_14808E0((__int64)&v10, a2, v6, v7, v8, v9);
    *v10 = v11;
    return v5;
  }
  else if ( (unsigned __int16)(v2 - 14) <= 1u || (unsigned __int16)(v2 - 17) <= 2u )
  {
    return sub_14B6F70(a1);
  }
  else
  {
    sub_1564820(&v10, a1, *(unsigned int *)(a1 + 16), 19);
    sub_14780E0(&v10, 4);
    sub_AEC220(&v10, (_BYTE *)(a2[2] + 16), *(unsigned int *)a2[2]);
    sub_AEA040((__int64)&v10);
    return 1;
  }
}
