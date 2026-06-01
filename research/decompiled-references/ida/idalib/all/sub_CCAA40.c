__int64 __fastcall sub_CCAA40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // r14
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned int v25; // ebx
  __int64 v26; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  char v32; // al
  char v33; // r14
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // [rsp+8h] [rbp-C0h]
  int v43; // [rsp+1Ch] [rbp-ACh] BYREF
  int v44; // [rsp+20h] [rbp-A8h] BYREF
  int v45; // [rsp+24h] [rbp-A4h] BYREF
  __int64 v46[3]; // [rsp+28h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+40h] [rbp-88h]
  __int64 v48; // [rsp+48h] [rbp-80h]
  __int64 (__fastcall **v49)(); // [rsp+60h] [rbp-68h] BYREF
  __int64 v50; // [rsp+68h] [rbp-60h]
  __int64 v51; // [rsp+70h] [rbp-58h]
  __int64 v52; // [rsp+78h] [rbp-50h]
  int v53; // [rsp+80h] [rbp-48h]
  unsigned int v54; // [rsp+84h] [rbp-44h]
  char v55; // [rsp+88h] [rbp-40h]

  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(a1 + 704);
  v42 = *(_QWORD *)(a2 + 16);
  v8 = *(_DWORD *)(a1 + 384);
  v47 = *(_QWORD *)(a1 + 712);
  v9 = *(_QWORD *)(a1 + 728);
  v10 = *(_QWORD *)(a1 + 720);
  *(_BYTE *)(a1 + 716) = 1;
  v43 = v8 + 1;
  v11 = (unsigned int)(v8 + 2);
  v8 += 3;
  *(_DWORD *)(a1 + 384) = v8;
  *(_DWORD *)(a1 + 728) = v8;
  v45 = v8;
  v12 = *(_QWORD *)(a1 + 552);
  *(_DWORD *)(a1 + 712) = v11;
  *(_BYTE *)(a1 + 732) = 1;
  *(_QWORD *)(a1 + 704) = v12;
  *(_QWORD *)(a1 + 720) = v12;
  v48 = v9;
  v44 = v11;
  sub_CAE450(a1, &v43, v11, a4, a5, a6);
  sub_CAE070(a1, v43, v13, v14, v15, v16);
  v50 = a1;
  v17 = *(_QWORD *)(a1 + 552);
  *(_QWORD *)(a1 + 552) = &v49;
  v52 = 0;
  v51 = v17;
  v53 = 1;
  v55 = 0;
  v49 = &off_2B4B5B8;
  if ( (unsigned __int8)sub_CC99A0(a1, v6, v18, v19, v20)
    && (sub_CAE450(a1, &v45, v21, v22, v23, v24),
        sub_CAE070(a1, v45, v28, v29, v30, v31),
        (unsigned __int8)sub_CB2190((_QWORD *)a1, v42))
    && (!v55 || (v32 = sub_CBBA10((__int64)&v49, 0), v46[0] = 4, v33 = v32, sub_CA4500(v50, v54, v46), v33)) )
  {
    sub_CBB210((__int64)&v49);
    v25 = sub_CAD000(a1, &v43);
    if ( (_BYTE)v25 )
    {
      sub_CAE450(a1, &v44, v34, v35, v36, v37);
      sub_CAE070(a1, v44, v38, v39, v40, v41);
    }
  }
  else
  {
    v25 = 0;
    sub_CBB210((__int64)&v49);
  }
  v26 = v47;
  *(_QWORD *)(a1 + 720) = v10;
  *(_QWORD *)(a1 + 704) = v7;
  *(_QWORD *)(a1 + 712) = v26;
  *(_QWORD *)(a1 + 728) = v48;
  return v25;
}
