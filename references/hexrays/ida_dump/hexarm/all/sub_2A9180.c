unsigned __int64 __fastcall sub_2A9180(__int64 *a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  unsigned int v6; // ecx
  __int64 v7; // rbp
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // rax
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  __int64 v20; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v21[2]; // [rsp+10h] [rbp-78h] BYREF
  _QWORD v22[2]; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v23[4]; // [rsp+30h] [rbp-58h] BYREF
  _DWORD v24[4]; // [rsp+40h] [rbp-48h] BYREF
  int v25; // [rsp+50h] [rbp-38h]
  unsigned __int64 v26; // [rsp+58h] [rbp-30h]

  v6 = a4 - 22;
  v7 = a2;
  v26 = __readfsqword(0x28u);
  v8 = a3;
  if ( v6 > 1
    || (unsigned __int8)((get_tinfo_property(*(_QWORD *)(a2 + 48), 2) & 0xF) - 10) <= 2u
    || (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) - 10) <= 2u
    || (v7 = sub_2553A0(a2),
        v8 = sub_2553A0(v8),
        (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v7 + 48), 2) & 0xF) - 10) <= 2u)
    || (unsigned __int8)((get_tinfo_property(*(_QWORD *)(v8 + 48), 2) & 0xF) - 10) <= 2u )
  {
    v22[1] = v8;
    v9 = *a1;
    v22[0] = 6;
    sub_2A0420((__int64)v22, v9, a3, v6, a5, a6);
    v10 = *a1;
    v21[1] = v7;
    v21[0] = 6;
    sub_2A0420((__int64)v21, v10, v11, v12, v13, v14);
    v23[0] = 0;
    sub_29FB30((__int64)v23, (unsigned int *)v21);
    v24[0] = 0;
    sub_29FB30((__int64)v24, (unsigned int *)v22);
    v25 = 2;
    sub_29EFF0((__int64)v21);
    sub_29EFF0((__int64)v22);
    v15 = a1[1];
    v20 = 0;
    if ( (!(unsigned __int8)sub_29B780((__int64)v23, *(_QWORD *)(v15 + 8), &v20)
       || (get_tinfo_property(v20, 2) & 0xF) != 8)
      && (!(unsigned __int8)sub_29B780((__int64)v24, *(_QWORD *)(a1[1] + 8), &v20)
       || (get_tinfo_property(v20, 2) & 0xF) != 8) )
    {
      sub_2A86D0((__int64)a1, (__int64)v23, 0, v16, v17, v18);
    }
    clear_tinfo_t(&v20);
    v25 = -1;
    sub_29EFF0((__int64)v24);
    sub_29EFF0((__int64)v23);
  }
  return v26 - __readfsqword(0x28u);
}
