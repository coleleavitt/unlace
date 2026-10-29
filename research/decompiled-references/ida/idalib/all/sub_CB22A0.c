__int64 __fastcall sub_CB22A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int16 v4; // bp
  unsigned __int64 v5; // rax
  int v6; // r12d
  int v7; // ecx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbp
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int64 v27; // [rsp+8h] [rbp-50h]
  int v28; // [rsp+10h] [rbp-48h] BYREF
  int v29; // [rsp+14h] [rbp-44h] BYREF
  __int64 v30[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a2 + 16);
  v3 = *(_QWORD *)(a2 + 24);
  v4 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
  v5 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
  v6 = v5;
  v27 = HIDWORD(v5);
  LODWORD(v5) = *(_DWORD *)(a1 + 384);
  v7 = v5 + 1;
  LODWORD(v5) = v5 + 2;
  v28 = v7;
  *(_DWORD *)(a1 + 384) = v5;
  v29 = v5;
  if ( (_BYTE)v4 != 20 )
  {
    if ( (unsigned __int8)sub_CB2190((_QWORD *)a1, v2)
      && (unsigned __int8)sub_CACEF0(a1, &v28)
      && (unsigned __int8)sub_CB2190((_QWORD *)a1, v3)
      && (unsigned __int8)sub_CACDE0(a1, &v29) )
    {
      v13 = a2 | 4;
      sub_CAE070(a1, v28, v9, v10, v11, v12);
      v30[0] = a2 | 4;
      v14 = 0;
      goto LABEL_14;
    }
    return 0;
  }
  if ( !(unsigned __int8)sub_CB2190((_QWORD *)a1, v2)
    || !(unsigned __int8)sub_CAD000(a1, &v28)
    || !(unsigned __int8)sub_CB2190((_QWORD *)a1, v3)
    || !(unsigned __int8)sub_CACDE0(a1, &v29) )
  {
    return 0;
  }
  v13 = a2 | 4;
  sub_CAE070(a1, v28, v15, v16, v17, v18);
  v30[0] = a2 | 4;
  v14 = 1;
LABEL_14:
  sub_CA5E60(a1, v14, v30);
  sub_CAE450(a1, &v29, v19, v20, v21, v22);
  sub_CAE070(a1, v29, v23, v24, v25, v26);
  if ( *(_BYTE *)(a1 + 584) )
  {
    v30[0] = v13;
    return sub_CA27F0(a1, v30);
  }
  else if ( (_BYTE)v27 != 1 || (result = 1, v6 != 10) )
  {
    v30[0] = v13;
    return sub_CA0510(a1, 10, v6, v30);
  }
  return result;
}
