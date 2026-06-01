unsigned __int64 __fastcall sub_1809010(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r12d
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r15d
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdi
  __int64 v29; // r14
  __int64 v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdi
  __int64 v41; // rbx
  unsigned __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  unsigned __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9

  v8 = sub_F60F10(a2, a2, a3, a4, a5, a6);
  v20 = (unsigned __int64)(v8 + 8);
  v9 = v8;
  LOBYTE(v6) = (sub_B94670((unsigned __int64)(v8 + 8), (*a1 + 17704) | 6, v10, v11, v12, v13) & 0xFFFFFFFFFFFFFFF8LL) != 0;
  v23 = v6;
  LOBYTE(v20) = (sub_B94670(v20, (*a1 + 18248) | 6, v14, v15, v16, v17) & 0xFFFFFFFFFFFFFFF8LL) != 0;
  LOBYTE(v23) = v20 & v6;
  if ( ((unsigned __int8)v20 & (unsigned __int8)v6) == 0 && (*((_BYTE *)v9 + 28) & 0x7Fu) - 59 <= 2 )
  {
    sub_7052B0((__int64 *)(v9[13] + 96LL), v9[13], v18, v19, v21, v22);
    v28 = v9[16];
    v29 = (*(_BYTE *)(v28 + 24) & 1) != 0 ? sub_B96980(v28) : *(_QWORD *)(v28 + 24);
    sub_7052B0((__int64 *)(v9[13] + 96LL), v9[13], v24, v25, v26, v27);
    v30 = v9[13];
    v31 = v29 + 24LL * *(unsigned int *)(v9[16] + 16LL);
    sub_7052B0((__int64 *)(v30 + 96), v30, v32, v33, v34, v35);
    v40 = v9[16];
    v41 = (*(_BYTE *)(v40 + 24) & 1) != 0 ? sub_B96980(v40) : *(_QWORD *)(v40 + 24);
    if ( v41 != v31 )
    {
      while ( 1 )
      {
        if ( (_BYTE)v6 )
        {
          if ( (_BYTE)v20 )
            goto LABEL_10;
LABEL_15:
          v47 = *(_QWORD *)(**(_QWORD **)(v41 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v47 + 8) & 0xF) != 0 )
            v47 = sub_F64F00(**(_QWORD **)(v41 + 16), v30, v36, v37, v38);
          v48 = sub_F63240(*(_QWORD *)(v47 & 0xFFFFFFFFFFFFFFF0LL), v30, v36, v37, v38, v39);
          v30 = (*a1 + 18248) | 6;
          LOBYTE(v20) = (sub_B94670((unsigned __int64)(v48 + 8), v30, v49, *a1, v50, v51) & 0xFFFFFFFFFFFFFFF8LL) != 0;
          v41 += 24;
          if ( v31 == v41 )
            return (unsigned int)v20 & v6;
        }
        else
        {
          v42 = *(_QWORD *)(**(_QWORD **)(v41 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v42 + 8) & 0xF) != 0 )
            v42 = sub_F64F00(**(_QWORD **)(v41 + 16), v30, v36, v37, v38);
          v43 = sub_F63240(*(_QWORD *)(v42 & 0xFFFFFFFFFFFFFFF0LL), v30, v36, v37, v38, v39);
          v30 = (*a1 + 17704) | 6;
          LOBYTE(v6) = (sub_B94670((unsigned __int64)(v43 + 8), v30, *a1, v44, v45, v46) & 0xFFFFFFFFFFFFFFF8LL) != 0;
          if ( !(_BYTE)v20 )
            goto LABEL_15;
LABEL_10:
          v41 += 24;
          if ( v31 == v41 )
            return (unsigned int)v20 & v6;
        }
      }
    }
  }
  return v23;
}
