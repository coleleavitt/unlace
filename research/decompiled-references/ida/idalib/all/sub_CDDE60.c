__int64 __fastcall sub_CDDE60(__int64 a1, _QWORD *a2)
{
  unsigned __int64 v3; // rbp
  unsigned int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  char v23; // al
  char v24; // bl
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 v28; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v29; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v30; // [rsp+18h] [rbp-C0h]
  unsigned int v31; // [rsp+2Ch] [rbp-ACh] BYREF
  unsigned int v32; // [rsp+30h] [rbp-A8h] BYREF
  unsigned int v33; // [rsp+34h] [rbp-A4h] BYREF
  _QWORD v34[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+50h] [rbp-88h]
  __int64 v36; // [rsp+58h] [rbp-80h]
  __int64 (__fastcall **v37)(); // [rsp+70h] [rbp-68h] BYREF
  __int64 v38; // [rsp+78h] [rbp-60h]
  __int64 v39; // [rsp+80h] [rbp-58h]
  __int64 v40; // [rsp+88h] [rbp-50h]
  int v41; // [rsp+90h] [rbp-48h]
  unsigned int v42; // [rsp+94h] [rbp-44h]
  char v43; // [rsp+98h] [rbp-40h]

  v3 = a2[1];
  v28 = a2[3];
  v30 = a2[4];
  v29 = a2[5];
  v31 = sub_CFF2B0(a1);
  v32 = sub_CFF2B0(a1);
  v4 = sub_CFF2B0(a1);
  v7 = *(_QWORD *)(a1 + 1488);
  v8 = *(_QWORD *)(a1 + 1480);
  *(_BYTE *)(a1 + 1492) = 1;
  v33 = v4;
  v9 = *(_QWORD *)(a1 + 1496);
  v35 = v7;
  v10 = *(_QWORD *)(a1 + 1504);
  *(_DWORD *)(a1 + 1504) = v4;
  v11 = *(_QWORD *)(a1 + 1328);
  v36 = v10;
  v12 = v31;
  *(_BYTE *)(a1 + 1508) = 1;
  *(_DWORD *)(a1 + 1488) = v12;
  *(_QWORD *)(a1 + 1480) = v11;
  *(_QWORD *)(a1 + 1496) = v11;
  if ( !v3 || (v13 = sub_CDCBC0(a1, v3, v12, v5, v6), (_BYTE)v13) )
  {
    sub_CFF6E0(a1, &v32);
    sub_CFF2A0(a1, v32);
    v14 = *(_QWORD *)(a1 + 1328);
    *(_QWORD *)(a1 + 1328) = &v37;
    v15 = a2[2];
    v38 = a1;
    v39 = v14;
    v40 = 0;
    v43 = 0;
    v41 = 1;
    v37 = &off_2B4B698;
    if ( (!v15 || (unsigned __int8)sub_CD9F60(a1, v15, 0))
      && (!v28 || (unsigned __int8)sub_CB59F0((_QWORD *)a1, v28) && (unsigned __int8)sub_CFF640(a1, &v31))
      && (v16 = sub_EEE130(a2), (unsigned __int8)sub_CD9CA0(a1, v16))
      && (!v29 || (unsigned __int8)sub_CDCBC0(a1, v29, v17, v18, v19))
      && ((sub_CFF6E0(a1, &v33), sub_CFF2A0(a1, v33), !v30) || (unsigned __int8)sub_CDA710(a1, v30, v20, v21, v22))
      && (!v43 || (v23 = sub_CBB7D0((__int64)&v37, 0), v34[0] = 4, v24 = v23, sub_CFF770(v38, v42, v34), v24))
      && (v13 = sub_CFF6B0(a1, &v32), (_BYTE)v13) )
    {
      sub_CFF2A0(a1, v31);
      if ( v43 )
      {
        v25 = sub_CBB7D0((__int64)&v37, 0);
        v34[0] = 4;
        v13 = v25;
        sub_CFF770(v38, v42, v34);
      }
    }
    else
    {
      v13 = 0;
    }
    sub_CBB4F0((__int64)&v37);
  }
  v26 = v35;
  *(_QWORD *)(a1 + 1496) = v9;
  *(_QWORD *)(a1 + 1480) = v8;
  *(_QWORD *)(a1 + 1488) = v26;
  *(_QWORD *)(a1 + 1504) = v36;
  return v13;
}
