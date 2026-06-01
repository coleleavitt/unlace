void __fastcall sub_1451EB0(__int64 a1, __int64 a2)
{
  __int16 v2; // ax
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v5; // rdx
  char v6; // al
  char v7; // r15
  void *v8[2]; // [rsp+0h] [rbp-A8h] BYREF
  _BYTE v9[16]; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v10[17]; // [rsp+20h] [rbp-88h] BYREF

  sub_14634E0(a1, a2);
  v2 = *(_WORD *)(a2 + 16);
  if ( v2 != 22 )
    goto LABEL_2;
  sub_FC70B0((__int64)v10, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1376);
  sub_AEA040((__int64)v10);
  v8[0] = v9;
  v6 = *(_BYTE *)(a1 + 544);
  v9[0] = 0;
  v8[1] = nullptr;
  *(_BYTE *)(a1 + 544) = v6 | 0x20;
  v7 = 32 * ((v6 & 0x20) != 0);
  sub_14634E0(a1, a2);
  *(_BYTE *)(a1 + 544) = v7 | *(_BYTE *)(a1 + 544) & 0xDF;
  if ( (unsigned __int8)sub_1464000(a1, a2, v8, "pragma hdrstop", 0) )
  {
    if ( *(_WORD *)(a2 + 16) == 23 )
    {
      sub_14634E0(a1, a2);
      if ( v8[0] != v9 )
        operator delete(v8[0]);
      v2 = *(_WORD *)(a2 + 16);
LABEL_2:
      if ( v2 == 2 )
      {
        if ( !(unsigned __int8)sub_145C9E0(a1) )
          goto LABEL_4;
      }
      else
      {
        sub_FC70B0((__int64)v10, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1239);
        sub_AE9DF0(v10, (__int64)"pragma hdrstop", 1u);
        sub_AEA040((__int64)v10);
        if ( !(unsigned __int8)sub_145C9E0(a1) )
        {
LABEL_4:
          if ( (unsigned __int8)sub_145CA00(a1) )
            *(_BYTE *)(a1 + 2400) = 0;
          return;
        }
      }
      if ( sub_1021600(*(_QWORD *)(a1 + 88), *(_DWORD *)a2) )
      {
        *(_QWORD *)(a2 + 8) = 0;
        *(_DWORD *)(a2 + 16) = 0;
        v3 = *(_QWORD *)(a1 + 1112);
        *(_QWORD *)a2 = 0;
        v4 = *(_QWORD *)(v3 + 120);
        v5 = v4 - *(_QWORD *)(v3 + 152);
        *(_DWORD *)(a2 + 4) = v5;
        *(_DWORD *)a2 = sub_13D1500(v3, *(_QWORD *)(v3 + 152), v5);
        *(_WORD *)(a2 + 16) = 1;
        *(_QWORD *)(v3 + 152) = v4;
        *(_QWORD *)(*(_QWORD *)(a1 + 1112) + 152LL) = *(_QWORD *)(*(_QWORD *)(a1 + 1112) + 120LL);
      }
      goto LABEL_4;
    }
    sub_FC70B0((__int64)v10, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 14);
    sub_AE9DF0(v10, 23, 4u);
    sub_AEA040((__int64)v10);
  }
  if ( v8[0] != v9 )
    operator delete(v8[0]);
}
