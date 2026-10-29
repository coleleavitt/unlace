char __fastcall sub_B9C2D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int8 v6; // r12
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rax
  __int64 v18; // rsi
  __int64 *v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rcx
  unsigned int v39; // eax
  unsigned int v40; // edx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rcx
  char v48; // dl

  v6 = a3;
  v8 = a2;
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x24 )
  {
    if ( (unsigned __int8)sub_B967A0(a2, a2, a3, a4) )
    {
      a2 = *(_QWORD *)(a1 + 104);
      sub_7052B0((__int64 *)(a2 + 96), a2, v9, v10, v11, v12);
      *(_BYTE *)(*(_QWORD *)(a1 + 128) + 7LL) &= ~0x80u;
      if ( !sub_AED5B0(v8) )
      {
LABEL_4:
        if ( !(unsigned __int8)sub_B74ED0(v8, a2, v13, v14) )
          goto LABEL_5;
LABEL_14:
        a2 = *(_QWORD *)(a1 + 104);
        sub_7052B0((__int64 *)(a2 + 96), a2, a3, a4, a5, a6);
        *(_BYTE *)(*(_QWORD *)(a1 + 128) + 10LL) |= 8u;
        goto LABEL_5;
      }
    }
    else if ( !sub_AED5B0(a2) )
    {
      goto LABEL_4;
    }
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v13, v14, v15, v16);
    *(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x1000u;
    a2 = *(_QWORD *)(a1 + 104);
    sub_7052B0((__int64 *)(a2 + 96), a2, v41, v42, v43, v44);
    *(_DWORD *)(*(_QWORD *)(a1 + 128) + 4LL) &= ~0x40000u;
    if ( !(unsigned __int8)sub_B74ED0(v8, a2, v45, v46) )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_5:
  if ( (*(_BYTE *)(v8 + 29) & 2) != 0 || (LOBYTE(v23) = sub_B967A0(v8, a2, a3, a4), (_BYTE)v23) )
  {
    v17 = *(_QWORD *)(v8 + 80);
    v18 = *(_QWORD *)(a1 + 104);
    v19 = (__int64 *)(v18 + 96);
    v20 = v17 >> 16;
    if ( (v17 & 0x800000) != 0 )
    {
      sub_7052B0(v19, v18, v20, a4, a5, a6);
      v34 = *(_QWORD *)(a1 + 128);
      v35 = *(_WORD *)(v34 + 4) & 0xE07F;
      *(_WORD *)(v34 + 4) = v35 | (((v6 | (unsigned __int8)(*(_WORD *)(v34 + 4) >> 7)) & 0x3F) << 7);
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v35, v34, v36, v37);
      v38 = *(_QWORD *)(a1 + 128);
      v39 = *(_DWORD *)(v38 + 4);
      v40 = v39 & 0xFFF81FFF;
      v23 = v39 >> 13;
      *(_DWORD *)(v38 + 4) = v40 | ((((unsigned __int8)v23 | v6) & 0x3F) << 13);
    }
    else if ( (v17 & 0x1000000) != 0 )
    {
      sub_7052B0(v19, v18, v20, a4, a5, a6);
      v28 = *(_QWORD *)(a1 + 128);
      v29 = *(_DWORD *)(v28 + 4);
      v30 = v29 & 0xFFF81FFF;
      *(_DWORD *)(v28 + 4) = v30 | (((v6 | (unsigned __int8)(v29 >> 13)) & 0x3F) << 13);
      sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v30, v28, v31, v32);
      v33 = *(_QWORD *)(a1 + 128);
      LOWORD(v23) = *(_WORD *)(v33 + 6) >> 3;
      *(_WORD *)(v33 + 6) = *(_WORD *)(v33 + 6) & 0xFE07 | (8 * (((unsigned __int8)v23 | v6) & 0x3F));
    }
    else
    {
      sub_7052B0(v19, v18, v20, a4, a5, a6);
      v21 = *(_QWORD *)(a1 + 128);
      v22 = *(_WORD *)(v21 + 6) & 0xFE07;
      *(_WORD *)(v21 + 6) = v22 | (8 * ((v6 | (unsigned __int8)(*(_WORD *)(v21 + 6) >> 3)) & 0x3F));
      LOBYTE(v23) = sub_B967A0(v8, v18, v22, v21);
      if ( !(_BYTE)v23 )
      {
        sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v24, v25, v26, v27);
        v47 = *(_QWORD *)(a1 + 128);
        LOBYTE(v23) = *(_BYTE *)(v47 + 7);
        v48 = v23 & 0x81;
        LOBYTE(v23) = (unsigned __int8)v23 >> 1;
        *(_BYTE *)(v47 + 7) = v48 | (2 * ((v23 | v6) & 0x3F));
      }
    }
  }
  return v23;
}
