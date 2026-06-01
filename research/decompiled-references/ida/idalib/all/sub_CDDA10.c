__int64 __fastcall sub_CDDA10(__int64 a1, _QWORD *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // [rsp+0h] [rbp-B8h]
  char v19; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v20; // [rsp+8h] [rbp-B0h]
  unsigned int v21; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v22; // [rsp+14h] [rbp-A4h] BYREF
  __int64 v23[3]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v24; // [rsp+30h] [rbp-88h]
  __int64 v25; // [rsp+38h] [rbp-80h]
  __int64 (__fastcall **v26)(); // [rsp+50h] [rbp-68h] BYREF
  __int64 v27; // [rsp+58h] [rbp-60h]
  __int64 v28; // [rsp+60h] [rbp-58h]
  __int64 v29; // [rsp+68h] [rbp-50h]
  int v30; // [rsp+70h] [rbp-48h]
  unsigned int v31; // [rsp+74h] [rbp-44h]
  char v32; // [rsp+78h] [rbp-40h]

  v18 = a2[((*a2 & 0x200) != 0) + 2];
  v20 = a2[(unsigned int)((*a2 & 0x200) != 0) + 3];
  v21 = sub_CFF2B0(a1);
  v3 = sub_CFF2B0(a1);
  v4 = *(_QWORD *)(a1 + 1488);
  v22 = v3;
  v5 = *(_QWORD *)(a1 + 1480);
  *(_DWORD *)(a1 + 1488) = v3;
  v24 = v4;
  v6 = *(_QWORD *)(a1 + 1504);
  *(_DWORD *)(a1 + 1504) = v21;
  v7 = *(_QWORD *)(a1 + 1328);
  v8 = *(_QWORD *)(a1 + 1496);
  *(_BYTE *)(a1 + 1492) = 1;
  *(_BYTE *)(a1 + 1508) = 1;
  *(_QWORD *)(a1 + 1480) = v7;
  *(_QWORD *)(a1 + 1496) = v7;
  v25 = v6;
  sub_CFF6E0(a1, &v21);
  sub_CFF2A0(a1, v21);
  v9 = *(_QWORD *)(a1 + 1328);
  v27 = a1;
  v29 = 0;
  v28 = v9;
  v30 = 1;
  *(_QWORD *)(a1 + 1328) = &v26;
  v26 = &off_2B4B698;
  v32 = 0;
  if ( ((*(_WORD *)a2 & 0x200) == 0 || (v10 = a2[2]) == 0 || (unsigned __int8)sub_CD9F60(a1, v10, 0))
    && (unsigned __int8)sub_CB59F0((_QWORD *)a1, v18)
    && (v14 = sub_EEE170(a2), (unsigned __int8)sub_CD9CA0(a1, v14))
    && (unsigned __int8)sub_CFF640(a1, &v22)
    && (unsigned __int8)sub_CDCBC0(a1, v20, v15, v16, v17)
    && (!v32 || (v19 = sub_CBB7D0((__int64)&v26, 0), v23[0] = 4, sub_CFF770(v27, v31, v23), v19)) )
  {
    sub_CBB4F0((__int64)&v26);
    v11 = sub_CFF6B0(a1, &v21);
    if ( (_BYTE)v11 )
    {
      sub_CFF6E0(a1, &v22);
      sub_CFF2A0(a1, v22);
    }
  }
  else
  {
    v11 = 0;
    sub_CBB4F0((__int64)&v26);
  }
  v12 = v24;
  *(_QWORD *)(a1 + 1496) = v8;
  *(_QWORD *)(a1 + 1480) = v5;
  *(_QWORD *)(a1 + 1488) = v12;
  *(_QWORD *)(a1 + 1504) = v25;
  return v11;
}
