__int64 __fastcall sub_CA6F00(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 v9; // rsi
  __int64 v10; // r12
  __int64 v11; // r13
  int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned int v17; // r14d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  char v36; // al
  char v37; // bp
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  unsigned int v42; // eax
  __int64 v43; // rax
  __int64 v45; // [rsp+8h] [rbp-D0h]
  unsigned __int64 v46; // [rsp+10h] [rbp-C8h]
  unsigned __int64 v47; // [rsp+18h] [rbp-C0h]
  int v48; // [rsp+2Ch] [rbp-ACh] BYREF
  int v49; // [rsp+30h] [rbp-A8h] BYREF
  int v50; // [rsp+34h] [rbp-A4h] BYREF
  __int64 v51[3]; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v52; // [rsp+50h] [rbp-88h]
  __int64 v53; // [rsp+58h] [rbp-80h]
  __int64 (__fastcall **v54)(); // [rsp+70h] [rbp-68h] BYREF
  __int64 v55; // [rsp+78h] [rbp-60h]
  __int64 v56; // [rsp+80h] [rbp-58h]
  __int64 v57; // [rsp+88h] [rbp-50h]
  int v58; // [rsp+90h] [rbp-48h]
  unsigned int v59; // [rsp+94h] [rbp-44h]
  char v60; // [rsp+98h] [rbp-40h]

  v8 = a2[3];
  v9 = a2[1];
  v10 = *(_QWORD *)(a1 + 704);
  v11 = *(_QWORD *)(a1 + 720);
  v45 = v8;
  v47 = a2[4];
  v46 = a2[5];
  LODWORD(v8) = *(_DWORD *)(a1 + 384);
  v12 = v8 + 2;
  v13 = (unsigned int)(v8 + 1);
  LODWORD(v8) = v8 + 3;
  v49 = v12;
  v14 = *(_QWORD *)(a1 + 712);
  *(_DWORD *)(a1 + 384) = v8;
  v50 = v8;
  v52 = v14;
  v15 = *(_QWORD *)(a1 + 728);
  *(_DWORD *)(a1 + 728) = v8;
  v16 = *(_QWORD *)(a1 + 552);
  v48 = v13;
  v53 = v15;
  *(_DWORD *)(a1 + 712) = v13;
  *(_BYTE *)(a1 + 716) = 1;
  *(_BYTE *)(a1 + 732) = 1;
  *(_QWORD *)(a1 + 704) = v16;
  *(_QWORD *)(a1 + 720) = v16;
  if ( !v9 || (v17 = sub_CA5C60(a1, v9, v13, a4, a5), (_BYTE)v17) )
  {
    sub_C8A710(a1, &v49, v13, a4, a5, a6);
    sub_C8A330(a1, v49, v18, v19, v20, v21);
    v22 = *(_QWORD *)(a1 + 552);
    *(_QWORD *)(a1 + 552) = &v54;
    v23 = a2[2];
    v55 = a1;
    v56 = v22;
    v57 = 0;
    v60 = 0;
    v58 = 1;
    v54 = &off_2B21618;
    if ( (!v23 || (unsigned __int8)sub_CA3010(a1, v23, 0))
      && (!v45 || (unsigned __int8)sub_C8E450((_QWORD *)a1, v45) && (unsigned __int8)sub_C891B0(a1, &v48))
      && (v24 = sub_ECA3F0(a2), (unsigned __int8)sub_CA2D50(a1, v24))
      && (!v46 || (unsigned __int8)sub_CA5C60(a1, v46, v25, v26, v27))
      && ((sub_C8A710(a1, &v50, v25, v26, v27, v28), sub_C8A330(a1, v50, v29, v30, v31, v32), !v47)
       || (unsigned __int8)sub_CA37C0(a1, v47, v33, v34, v35))
      && (!v60 || (v36 = sub_C97CD0((__int64)&v54, 0), v51[0] = 4, v37 = v36, sub_C807C0(v55, v59, v51), v37))
      && (v17 = sub_C890A0(a1, &v49), (_BYTE)v17) )
    {
      sub_C8A330(a1, v48, v38, v39, v40, v41);
      if ( v60 )
      {
        v42 = sub_C97CD0((__int64)&v54, 0);
        v51[0] = 4;
        v17 = v42;
        sub_C807C0(v55, v59, v51);
      }
    }
    else
    {
      v17 = 0;
    }
    sub_C974D0((__int64)&v54);
  }
  v43 = v52;
  *(_QWORD *)(a1 + 720) = v11;
  *(_QWORD *)(a1 + 704) = v10;
  *(_QWORD *)(a1 + 712) = v43;
  *(_QWORD *)(a1 + 728) = v53;
  return v17;
}

