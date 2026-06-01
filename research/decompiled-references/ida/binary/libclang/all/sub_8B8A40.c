__int64 __fastcall sub_8B8A40(__int64 *a1, _QWORD *a2)
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
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r13
  unsigned __int16 *v17; // rax
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  bool v22; // zf
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r13
  __int16 *v29; // rax
  int v30; // edi
  __int64 v31; // rdx
  __int16 v32; // cx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // [rsp+8h] [rbp-200h]
  __int64 v40; // [rsp+8h] [rbp-200h]
  __int16 v41; // [rsp+8h] [rbp-200h]
  __int64 v42; // [rsp+10h] [rbp-1F8h]
  __int16 v43; // [rsp+1Ch] [rbp-1ECh]
  int v44; // [rsp+1Ch] [rbp-1ECh]
  char v45; // [rsp+2Fh] [rbp-1D9h] BYREF
  __m128i v46; // [rsp+30h] [rbp-1D8h] BYREF
  __int64 v47; // [rsp+40h] [rbp-1C8h]
  char v48; // [rsp+48h] [rbp-1C0h]
  __int64 v49; // [rsp+58h] [rbp-1B0h]
  void *ptr; // [rsp+60h] [rbp-1A8h]
  __int64 v51; // [rsp+68h] [rbp-1A0h]
  _BYTE v52[80]; // [rsp+70h] [rbp-198h] BYREF
  char *v53; // [rsp+C0h] [rbp-148h] BYREF
  __int64 v54; // [rsp+C8h] [rbp-140h]
  char v55; // [rsp+D0h] [rbp-138h] BYREF

  v4 = a2[3];
  v5 = *a1;
  v6 = a2[7];
  v49 = 0;
  ptr = v52;
  v51 = 0x800000000LL;
  v52[65] = 0;
  v7 = *(_QWORD *)(v5 + 32);
  v48 |= 1u;
  v46 = 0u;
  v47 = 0;
  if ( (*(_BYTE *)(v6 + 1) & 6) != 0 )
  {
    v40 = v7;
    v23 = sub_6C4DA0(*(_QWORD *)(v5 + 16), *(_QWORD *)(v6 + 8), 1u);
    v6 = a2[7];
    v7 = v40;
    v8 = v23;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8);
  }
  v9 = sub_823B90(v7, v6, v8, &v46);
  v10 = sub_856400(v9, v5, v4);
  if ( (_BYTE)v10 )
  {
    v10 = sub_8571E0(a2[4], &v45, *a1);
    if ( (_BYTE)v10 )
    {
      if ( v45 )
        v24 = a2[5];
      else
        v24 = a2[6];
      v10 = sub_8B6C50(a1, v24, v12, v13);
      goto LABEL_4;
    }
    v14 = *a1;
    v15 = *(_DWORD *)(*a1 + 48);
    if ( *(_BYTE *)(*a1 + 962) )
    {
      if ( !v15 )
        goto LABEL_4;
      **(_BYTE **)(v14 + 24) = 1;
      v54 = 0x800000000LL;
      v16 = *a1;
      v53 = &v55;
      v17 = *(unsigned __int16 **)(v16 + 24);
      v18 = *(_DWORD *)(v16 + 948);
      v19 = *v17;
      v20 = *((_QWORD *)v17 + 1);
      *((_QWORD *)v17 + 1) = &v53;
      v43 = v19;
      v39 = v20;
      *(_DWORD *)(v16 + 948) = *(_DWORD *)(v16 + 40) + 1;
      sub_8B6C50(a1, a2[6], v20, v19);
      v21 = *(_QWORD *)(v16 + 24);
      v22 = (_DWORD)v54 == 0;
      *(_WORD *)v21 = v43;
      if ( v22 )
      {
        *(_QWORD *)(v21 + 8) = v39;
        *(_DWORD *)(v16 + 948) = v18;
      }
      else
      {
        *(_QWORD *)(v21 + 8) = v39;
        *(_DWORD *)(v16 + 948) = v18;
        v28 = *a1;
        v29 = *(__int16 **)(*a1 + 24);
        v30 = *(_DWORD *)(*a1 + 948);
        v31 = *((_QWORD *)v29 + 1);
        v32 = *v29;
        *((_QWORD *)v29 + 1) = &v53;
        v44 = v30;
        v33 = (__int64)v53;
        v41 = v32;
        v34 = 32LL * (unsigned int)v54;
        v42 = v31;
        *(_DWORD *)(v28 + 948) = *(_DWORD *)(v28 + 40) + 1;
        sub_8481D0(v33, v33 + v34);
        v35 = a2[5];
        LODWORD(v54) = 0;
        sub_8B6C50(a1, v35, v36, v37);
        v38 = *(_QWORD *)(v28 + 24);
        v22 = (_DWORD)v54 == 0;
        *(_WORD *)v38 = v41;
        if ( !v22 )
        {
          *(_QWORD *)(v38 + 8) = v42;
          *(_DWORD *)(v28 + 948) = v44;
          sub_8264F0(*a1, (__int64)a2, 2194);
          sub_848050((__int64)&v53);
          goto LABEL_4;
        }
        *(_QWORD *)(v38 + 8) = v42;
        *(_DWORD *)(v28 + 948) = v44;
      }
      sub_848050((__int64)&v53);
      goto LABEL_4;
    }
    if ( v15 )
    {
      v25 = *(unsigned __int8 *)(v14 + 963);
      **(_BYTE **)(v14 + 24) |= v25;
      if ( (_BYTE)v25 )
      {
        sub_8B6C50(a1, a2[5], v25, v13);
        sub_8B6C50(a1, a2[6], v26, v27);
      }
    }
  }
LABEL_4:
  if ( ptr != v52 )
    free(ptr);
  return v10;
}

