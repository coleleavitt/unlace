__int64 __fastcall sub_CB8C50(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r13
  __int64 v4; // r12
  int v5; // eax
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int v11; // r12d
  __int64 v12; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // [rsp+8h] [rbp-A0h]
  __int64 v18; // [rsp+10h] [rbp-98h]
  __int64 v19; // [rsp+18h] [rbp-90h]
  __int64 v20; // [rsp+20h] [rbp-88h]
  unsigned __int64 v21; // [rsp+28h] [rbp-80h]
  unsigned int v22; // [rsp+34h] [rbp-74h] BYREF
  unsigned int v23; // [rsp+38h] [rbp-70h] BYREF
  _DWORD v24[5]; // [rsp+3Ch] [rbp-6Ch] BYREF
  __int64 v25; // [rsp+50h] [rbp-58h]
  __int64 v26; // [rsp+58h] [rbp-50h]

  v3 = a2[1];
  v4 = a2[2];
  v19 = a2[5];
  v21 = a2[6];
  v20 = a2[8];
  v17 = a2[3];
  v18 = a2[4];
  v22 = sub_CDB570(a1);
  v23 = sub_CDB570(a1);
  v5 = sub_CDB570(a1);
  v6 = *(_QWORD *)(a1 + 1488);
  v7 = *(_QWORD *)(a1 + 1480);
  *(_BYTE *)(a1 + 1492) = 1;
  v24[0] = v5;
  v8 = *(_QWORD *)(a1 + 1496);
  v25 = v6;
  v9 = *(_QWORD *)(a1 + 1504);
  *(_DWORD *)(a1 + 1504) = v5;
  v10 = *(_QWORD *)(a1 + 1328);
  v26 = v9;
  LODWORD(v9) = v22;
  *(_BYTE *)(a1 + 1508) = 1;
  *(_DWORD *)(a1 + 1488) = v9;
  *(_QWORD *)(a1 + 1480) = v10;
  *(_QWORD *)(a1 + 1496) = v10;
  if ( (!v3 || (unsigned __int8)sub_CB8E80(a1, v3))
    && (unsigned __int8)sub_CB8E80(a1, v4)
    && (unsigned __int8)sub_CB8E80(a1, v17)
    && (unsigned __int8)sub_CB8E80(a1, v18)
    && (sub_CDB9A0(a1, &v23), sub_CDB560(a1, v23), (unsigned __int8)sub_C91CB0((_QWORD *)a1, v19))
    && (unsigned __int8)sub_CDB900(a1, &v22)
    && (unsigned __int8)sub_CB6220(a1, a2[7], 1)
    && (unsigned __int8)sub_CB8E80(a1, v20)
    && (sub_CDB9A0(a1, v24), sub_CDB560(a1, v24[0]), (unsigned __int8)sub_CB69D0(a1, v21, v14, v15, v16))
    && (v11 = sub_CDB970(a1, &v23), (_BYTE)v11) )
  {
    sub_CDB9A0(a1, &v22);
    sub_CDB560(a1, v22);
  }
  else
  {
    v11 = 0;
  }
  v12 = v25;
  *(_QWORD *)(a1 + 1496) = v8;
  *(_QWORD *)(a1 + 1480) = v7;
  *(_QWORD *)(a1 + 1488) = v12;
  *(_QWORD *)(a1 + 1504) = v26;
  return v11;
}

