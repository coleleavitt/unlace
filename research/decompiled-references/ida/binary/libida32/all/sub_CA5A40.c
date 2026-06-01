__int64 __fastcall sub_CA5A40(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // r9d
  int v9; // edi
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned int v13; // r12d
  __int64 v14; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // [rsp+8h] [rbp-90h]
  unsigned __int64 v44; // [rsp+18h] [rbp-80h]
  int v45; // [rsp+24h] [rbp-74h] BYREF
  int v46; // [rsp+28h] [rbp-70h] BYREF
  int v47[5]; // [rsp+2Ch] [rbp-6Ch] BYREF
  __int64 v48; // [rsp+40h] [rbp-58h]
  __int64 v49; // [rsp+48h] [rbp-50h]

  v4 = a2[5];
  v5 = a2[1];
  v43 = v4;
  v6 = *(_QWORD *)(a1 + 704);
  v7 = *(_QWORD *)(a1 + 720);
  v44 = a2[6];
  LODWORD(v4) = *(_DWORD *)(a1 + 384);
  v8 = v4 + 2;
  v9 = v4 + 1;
  LODWORD(v4) = v4 + 3;
  v46 = v8;
  v10 = *(_QWORD *)(a1 + 712);
  *(_DWORD *)(a1 + 384) = v4;
  v48 = v10;
  v11 = *(_QWORD *)(a1 + 728);
  v47[0] = v4;
  *(_DWORD *)(a1 + 728) = v4;
  v45 = v9;
  v49 = v11;
  *(_DWORD *)(a1 + 712) = v9;
  *(_BYTE *)(a1 + 716) = 1;
  *(_BYTE *)(a1 + 732) = 1;
  v12 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 704) = v12;
  *(_QWORD *)(a1 + 720) = v12;
  if ( (!v5 || (unsigned __int8)sub_CA5C60(a1))
    && (unsigned __int8)sub_CA5C60(a1)
    && (unsigned __int8)sub_CA5C60(a1)
    && (unsigned __int8)sub_CA5C60(a1)
    && (sub_C8A710(a1, &v46, v16, v17, v18, v19),
        sub_C8A330(a1, v46, v20, v21, v22, v23),
        (unsigned __int8)sub_C8E450((_QWORD *)a1, v43))
    && (unsigned __int8)sub_C891B0(a1, &v45)
    && (unsigned __int8)sub_CA3010(a1, a2[7], 1)
    && (unsigned __int8)sub_CA5C60(a1)
    && (sub_C8A710(a1, v47, v24, v25, v26, v27),
        sub_C8A330(a1, v47[0], v28, v29, v30, v31),
        (unsigned __int8)sub_CA37C0(a1, v44, v32, v33, v34))
    && (v13 = sub_C890A0(a1, &v46), (_BYTE)v13) )
  {
    sub_C8A710(a1, &v45, v35, v36, v37, v38);
    sub_C8A330(a1, v45, v39, v40, v41, v42);
  }
  else
  {
    v13 = 0;
  }
  v14 = v48;
  *(_QWORD *)(a1 + 720) = v7;
  *(_QWORD *)(a1 + 704) = v6;
  *(_QWORD *)(a1 + 712) = v14;
  *(_QWORD *)(a1 + 728) = v49;
  return v13;
}

