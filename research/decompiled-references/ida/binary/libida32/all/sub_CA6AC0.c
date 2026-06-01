__int64 __fastcall sub_CA6AC0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r12
  __int64 v8; // r13
  __int16 v9; // dx
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned int v22; // ebx
  __int64 v23; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp+0h] [rbp-B8h]
  char v38; // [rsp+0h] [rbp-B8h]
  unsigned __int64 v39; // [rsp+8h] [rbp-B0h]
  int v40; // [rsp+10h] [rbp-A8h] BYREF
  int v41; // [rsp+14h] [rbp-A4h] BYREF
  __int64 v42[3]; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v43; // [rsp+30h] [rbp-88h]
  __int64 v44; // [rsp+38h] [rbp-80h]
  __int64 (__fastcall **v45)(); // [rsp+50h] [rbp-68h] BYREF
  __int64 v46; // [rsp+58h] [rbp-60h]
  __int64 v47; // [rsp+60h] [rbp-58h]
  __int64 v48; // [rsp+68h] [rbp-50h]
  int v49; // [rsp+70h] [rbp-48h]
  unsigned int v50; // [rsp+74h] [rbp-44h]
  char v51; // [rsp+78h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 704);
  v8 = *(_QWORD *)(a1 + 720);
  v9 = *a2;
  v10 = a2[(unsigned int)((v9 & 0x200) != 0) + 3];
  v11 = a2[((v9 & 0x200) != 0) + 2];
  v12 = *(_QWORD *)(a1 + 712);
  *(_BYTE *)(a1 + 716) = 1;
  v39 = v10;
  LODWORD(v10) = *(_DWORD *)(a1 + 384);
  v43 = v12;
  v13 = *(_QWORD *)(a1 + 728);
  v14 = (unsigned int)(v10 + 1);
  LODWORD(v10) = v10 + 2;
  *(_BYTE *)(a1 + 732) = 1;
  *(_DWORD *)(a1 + 384) = v10;
  *(_DWORD *)(a1 + 712) = v10;
  v41 = v10;
  v15 = *(_QWORD *)(a1 + 552);
  *(_DWORD *)(a1 + 728) = v14;
  *(_QWORD *)(a1 + 704) = v15;
  *(_QWORD *)(a1 + 720) = v15;
  v44 = v13;
  v37 = v11;
  v40 = v14;
  sub_C8A710(a1, &v40, v14, v11, a5, a6);
  sub_C8A330(a1, v40, v16, v17, v18, v19);
  v20 = *(_QWORD *)(a1 + 552);
  v46 = a1;
  v48 = 0;
  v47 = v20;
  v49 = 1;
  *(_QWORD *)(a1 + 552) = &v45;
  v45 = &off_2B21618;
  v51 = 0;
  if ( ((*(_WORD *)a2 & 0x200) == 0 || (v21 = a2[2]) == 0 || (unsigned __int8)sub_CA3010(a1, v21, 0))
    && (unsigned __int8)sub_C8E450((_QWORD *)a1, v37)
    && (v25 = sub_ECA430(a2), (unsigned __int8)sub_CA2D50(a1, v25))
    && (unsigned __int8)sub_C891B0(a1, &v41)
    && (unsigned __int8)sub_CA5C60(a1, v39, v26, v27, v28)
    && (!v51 || (v38 = sub_C97CD0((__int64)&v45, 0), v42[0] = 4, sub_C807C0(v46, v50, v42), v38)) )
  {
    sub_C974D0((__int64)&v45);
    v22 = sub_C890A0(a1, &v40);
    if ( (_BYTE)v22 )
    {
      sub_C8A710(a1, &v41, v29, v30, v31, v32);
      sub_C8A330(a1, v41, v33, v34, v35, v36);
    }
  }
  else
  {
    v22 = 0;
    sub_C974D0((__int64)&v45);
  }
  v23 = v43;
  *(_QWORD *)(a1 + 720) = v8;
  *(_QWORD *)(a1 + 704) = v7;
  *(_QWORD *)(a1 + 712) = v23;
  *(_QWORD *)(a1 + 728) = v44;
  return v22;
}

