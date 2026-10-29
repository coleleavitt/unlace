__int64 __fastcall sub_1B30230(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, double a6)
{
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  unsigned __int64 v13; // r12
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  _WORD *v18; // r13
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  bool v23; // cc
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  unsigned __int64 *v26; // rax
  unsigned int v27; // r13d
  __int64 v29; // r9
  unsigned __int64 v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  unsigned int v34; // r15d
  __int64 *v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  unsigned __int64 v40; // rdi
  unsigned int v41; // eax
  __int64 v42; // rsi
  __int64 *v43; // r15
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  unsigned __int64 v50; // rdi
  unsigned int v51; // eax
  __int64 v52; // rbp
  int v53; // [rsp+Ch] [rbp-11Ch] BYREF
  __int64 v54[2]; // [rsp+10h] [rbp-118h] BYREF
  unsigned int v55; // [rsp+20h] [rbp-108h] BYREF
  char v56; // [rsp+24h] [rbp-104h]
  __int64 v57; // [rsp+28h] [rbp-100h] BYREF
  unsigned int v58; // [rsp+30h] [rbp-F8h]
  _BYTE v59[200]; // [rsp+60h] [rbp-C8h] BYREF

  if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5) )
    v8 = *(_QWORD *)(a2 + 16);
  else
    v8 = *(_QWORD *)(a2 + 24);
  v9 = sub_BFBAE0(v8);
  v12 = *(_QWORD *)(v9 + 8);
  v13 = v9;
  v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL)
                           + 16LL);
  if ( (v14 & 0xF7) == 0x22 || (unsigned __int8)(v14 - 2) <= 4u )
  {
    if ( sub_1AEAC70(*(_QWORD *)a1, a2, v12, v14 & 0xFFFFFFF7, v10, v11) )
      *(_BYTE *)(a1 + 41) = 0;
    v18 = (_WORD *)sub_BFD550(v13);
    if ( (*v18 & 0x1FF) != 0x62 )
      goto LABEL_11;
    v56 &= ~1u;
    LOWORD(v54[0]) = 0;
    v19 = *(_QWORD *)(a2 + 24);
    v54[1] = 0;
    v55 = 0;
    if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, v15, v16, v17) )
    {
      if ( (**(_DWORD **)(a2 + 24) & 0x20000) != 0 )
      {
LABEL_9:
        v23 = v55 <= 1;
        *(_QWORD *)(a1 + 32) = v18;
        if ( !v23 )
          sub_A4F8E0((int *)&v55);
LABEL_11:
        v24 = *(_QWORD *)(a1 + 16);
        v25 = a2 & 0xFFFFFFFFFFFFFFFDLL | (2LL * *(unsigned __int8 *)(a1 + 24));
        if ( *(_DWORD *)(v24 + 12) <= *(_DWORD *)(v24 + 8) )
        {
          sub_1AF6AE0(v24, v25, 0);
        }
        else
        {
          v26 = (unsigned __int64 *)(*(_QWORD *)v24 + 16LL * *(unsigned int *)(v24 + 8));
          *v26 = v25;
          v26[1] = 0;
          ++*(_DWORD *)(v24 + 8);
        }
        goto LABEL_13;
      }
    }
    else if ( (**(_DWORD **)(a2 + 16) & 0x20000) != 0 )
    {
      goto LABEL_9;
    }
    if ( sub_9ECBA0(a2, a2, v20, v21, v22) )
      v30 = *(_QWORD *)(a2 + 24);
    else
      v30 = *(_QWORD *)(a2 + 16);
    if ( (unsigned __int8)sub_C3F220(v30, (__int64)v54, *(_QWORD *)(*(_QWORD *)a1 + 248LL), 0, 0, v29) )
    {
      v34 = v58;
      if ( !(v58 <= 0x40 ? v57 == 0 : v34 == (unsigned int)sub_2206780(&v57)) )
      {
        v36 = (__int64 *)(*(_QWORD *)a1 + 8LL);
        if ( sub_9ECBA0(a2, (__int64)v54, v31, v32, v33) )
          v40 = *(_QWORD *)(a2 + 24);
        else
          v40 = *(_QWORD *)(a2 + 16);
        v41 = sub_C00A40(v40, (__int64)v54, v37, v38, v39);
        v42 = (__int64)v36;
        sub_168B9F0((__int64)v59, v36, v41, 0x11A5u, 0);
        sub_15F7200(v59);
        v43 = (__int64 *)(*(_QWORD *)a1 + 8LL);
        if ( sub_9ECBA0(a2, v42, v44, v45, v46) )
          v50 = *(_QWORD *)(a2 + 24);
        else
          v50 = *(_QWORD *)(a2 + 16);
        v51 = sub_C00A40(v50, v42, v47, v48, v49);
        sub_168B9F0((__int64)v59, v43, v51, 0x181Fu, 0);
        sub_15F7200(v59);
      }
    }
    goto LABEL_9;
  }
  v27 = *(unsigned __int8 *)(a1 + 25);
  if ( !(_BYTE)v27 )
  {
    sub_168B9F0((__int64)v59, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(a1 + 44), 0x1185u, 0);
    v53 = 0;
    v52 = sub_1587D10((__int64)v59, &v53);
    v54[0] = sub_EEC8C0(a2, (__int64)&v53, a6);
    sub_1587DB0(v52, v54);
    sub_15F7200(v59);
    return v27;
  }
LABEL_13:
  if ( *(_QWORD *)(a1 + 32) )
    return 1;
  else
    return (unsigned int)sub_1B2FFC0(a1, v13);
}
