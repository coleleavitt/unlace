__int64 __fastcall sub_8BEFF0(__int64 *a1, _QWORD *a2)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r13
  unsigned __int16 *v19; // rax
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  bool v24; // zf
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // r13
  __int16 *v33; // rax
  int v34; // edi
  __int64 v35; // rdx
  __int16 v36; // cx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-200h]
  __int64 v46; // [rsp+8h] [rbp-200h]
  __int16 v47; // [rsp+8h] [rbp-200h]
  __int64 v48; // [rsp+10h] [rbp-1F8h]
  __int16 v49; // [rsp+1Ch] [rbp-1ECh]
  int v50; // [rsp+1Ch] [rbp-1ECh]
  char v51; // [rsp+2Fh] [rbp-1D9h] BYREF
  __m128i v52; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v53; // [rsp+40h] [rbp-1C8h]
  char v54; // [rsp+48h] [rbp-1C0h]
  __int64 v55; // [rsp+58h] [rbp-1B0h]
  void *ptr; // [rsp+60h] [rbp-1A8h]
  __int64 v57; // [rsp+68h] [rbp-1A0h]
  _BYTE v58[80]; // [rsp+70h] [rbp-198h] BYREF
  char *v59; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v60; // [rsp+C8h] [rbp-140h]
  char v61; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a2[3];
  v5 = *a1;
  v6 = a2[7];
  v55 = 0;
  ptr = v58;
  v57 = 0x800000000LL;
  v58[65] = 0;
  v7 = *(_QWORD *)(v5 + 32);
  v54 |= 1u;
  v52 = 0u;
  v53 = 0;
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
  {
    v46 = v7;
    v25 = sub_6C4DA0(*(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8), 1u);
    v6 = a2[7];
    v7 = v46;
    v8 = v25;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
  }
  v9 = sub_823B90(v7, v6, v8, &v52);
  v10 = sub_856400(v9, v5, v4);
  if ( (_BYTE)v10 )
  {
    v10 = sub_8571E0(a2[4], &v51, *a1);
    if ( (_BYTE)v10 )
    {
      if ( v51 )
        v26 = a2[5];
      else
        v26 = a2[6];
      v10 = sub_87BEE0(a1, v26, v12, v13, v14, v15);
      goto LABEL_4;
    }
    v16 = *a1;
    v17 = *(_DWORD *)(*a1 + 48);
    if ( *(_BYTE *)(*a1 + 962) )
    {
      if ( !v17 )
        goto LABEL_4;
      **(_BYTE **)(v16 + 24) = 1;
      v60 = 0x800000000LL;
      v18 = *a1;
      v59 = &v61;
      v19 = *(unsigned __int16 **)(v18 + 24);
      v20 = *(_DWORD *)(v18 + 948);
      v21 = *v19;
      v22 = *((_QWORD *)v19 + 1);
      *((_QWORD *)v19 + 1) = &v59;
      v49 = v21;
      v45 = v22;
      *(_DWORD *)(v18 + 948) = *(_DWORD *)(v18 + 40) + 1;
      sub_87BEE0(a1, a2[6], v22, v21, v14, v15);
      v23 = *(_QWORD *)(v18 + 24);
      v24 = (_DWORD)v60 == 0;
      *(_WORD *)v23 = v49;
      if ( v24 )
      {
        *(_QWORD *)(v23 + 8) = v45;
        *(_DWORD *)(v18 + 948) = v20;
      }
      else
      {
        *(_QWORD *)(v23 + 8) = v45;
        *(_DWORD *)(v18 + 948) = v20;
        v32 = *a1;
        v33 = *(__int16 **)(*a1 + 24);
        v34 = *(_DWORD *)(*a1 + 948);
        v35 = *((_QWORD *)v33 + 1);
        v36 = *v33;
        *((_QWORD *)v33 + 1) = &v59;
        v50 = v34;
        v37 = (__int64)v59;
        v47 = v36;
        v38 = 32LL * (unsigned int)v60;
        v48 = v35;
        *(_DWORD *)(v32 + 948) = *(_DWORD *)(v32 + 40) + 1;
        sub_8481D0(v37, v37 + v38);
        v39 = a2[5];
        LODWORD(v60) = 0;
        sub_87BEE0(a1, v39, v40, v41, v42, v43);
        v44 = *(_QWORD *)(v32 + 24);
        v24 = (_DWORD)v60 == 0;
        *(_WORD *)v44 = v47;
        if ( !v24 )
        {
          *(_QWORD *)(v44 + 8) = v48;
          *(_DWORD *)(v32 + 948) = v50;
          sub_828330(*a1, (__int64)a2, 2194);
          sub_848050((__int64)&v59);
          goto LABEL_4;
        }
        *(_QWORD *)(v44 + 8) = v48;
        *(_DWORD *)(v32 + 948) = v50;
      }
      sub_848050((__int64)&v59);
      goto LABEL_4;
    }
    if ( v17 )
    {
      v27 = *(unsigned __int8 *)(v16 + 963);
      **(_BYTE **)(v16 + 24) |= v27;
      if ( (_BYTE)v27 )
      {
        sub_87BEE0(a1, a2[5], v27, v13, v14, v15);
        sub_87BEE0(a1, a2[6], v28, v29, v30, v31);
      }
    }
  }
LABEL_4:
  if ( ptr != v58 )
    free(ptr);
  return v10;
}

