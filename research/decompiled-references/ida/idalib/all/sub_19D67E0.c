void __fastcall sub_19D67E0(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r12
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 *v42; // rax
  __int64 v43; // rbp
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  char v50; // al
  __int64 *v51; // r13
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r12
  __int64 v56; // rdi
  __int64 v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  unsigned int v64; // [rsp+Ch] [rbp-ECh]
  int v65; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v66; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v67; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v68[25]; // [rsp+30h] [rbp-C8h] BYREF

  v64 = a2;
  if ( (unsigned int)sub_FDEF00(*(_QWORD *)(a3 + 40)) != 14 )
    return;
  if ( !a5 )
    return;
  v15 = sub_BFB9F0(*a4);
  if ( (*(_WORD *)v15 & 0x1FF) != 0x1E )
    return;
  v16 = *(_QWORD *)(a6 & 0xFFFFFFFFFFFFFFF0LL);
  if ( a7 )
  {
    v42 = (__int64 *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v43 = *v42;
    if ( *(_BYTE *)(*v42 + 16) != 36 )
      return;
    v44 = sub_F62610(*v42, a2, v11, v12, v13, v14);
    v45 = *(_QWORD *)(v15 + 16);
    v33 = sub_BAD910(v44, v45, 0, 0, 1, 0);
    if ( v33 )
      goto LABEL_13;
    v60 = sub_F62610(v43, v45, v46, v47, v48, v49);
    v68[0] = *(_QWORD *)(v15 + 16);
    v33 = sub_BADBA0(v60, (__int64)v68, 0, v61, v62, v63);
    goto LABEL_9;
  }
  if ( *(_BYTE *)(v16 + 16) != 34 )
  {
    v16 = sub_19CD690(v16, a2, v11, v12);
    if ( !v16 )
      return;
  }
  v17 = sub_A5E7C0(v16, a2, v11, v12, v13);
  if ( !sub_9C7D40(v17, a2, v18, v19, v20) )
    return;
  v24 = sub_A5E7C0(v16, a2, v21, v22, v23);
  v28 = sub_9C7D40(v24, a2, v25, v26, v27);
  v29 = *(_QWORD *)(v15 + 16);
  v33 = sub_BAD910(v28, v29, 1, 0, 1, 0);
  if ( !v33 )
  {
    v34 = sub_A5E7C0(v16, v29, v30, v31, v32);
    v38 = sub_9C7D40(v34, v29, v35, v36, v37);
    v68[0] = *(_QWORD *)(v15 + 16);
    v33 = sub_BADBA0(v38, (__int64)v68, 1, v39, v40, v41);
LABEL_9:
    if ( !v33 )
      return;
  }
LABEL_13:
  v66 = *(_QWORD *)(v33 + 80);
  v50 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v50 == 48 || (unsigned __int8)(v50 - 57) <= 1u )
  {
    v51 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v68, (__int64 *)(a1 + 8), v64, 0x1C27u, 0);
    v67 = *(_QWORD *)(a3 + 40);
    v55 = sub_19D6730((__int64)v68, &v67);
    v56 = *(_QWORD *)(v66 & 0xFFFFFFFFFFFFFFF0LL);
    v57 = *(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v58 = 2;
    if ( *(_BYTE *)(v57 + 16) == 48 )
      v58 = sub_F61420(v56, (__int64)&v67, v57, v52, v53, v54);
    v65 = v58;
    sub_1587D10(v55, &v65);
    sub_15F7200(v68);
    sub_168B9F0((__int64)v68, v51, *(_DWORD *)(v33 + 24), 0x180Du, 0);
    v67 = *(_QWORD *)(v33 + 40);
    v59 = sub_19D6730((__int64)v68, &v67);
    sub_1605D30(v59, &v66);
    sub_15F7200(v68);
  }
}
