__int64 __fastcall sub_1AF1A30(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int16 v9; // ax
  unsigned int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // rdi
  unsigned int v13; // ebp
  __int64 v14; // rax
  int v16; // eax
  int v17; // eax
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  __int64 v20; // rdi
  _BOOL8 v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // r15
  unsigned __int8 v25; // al
  __int64 v26; // rdi
  unsigned __int64 v27; // rax
  int v28; // eax
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  int v31; // eax
  _BOOL4 v32; // edx
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  int v44; // eax
  __int64 v45; // rdx
  __int64 v46; // rdx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rax

  v7 = *a2;
  v8 = a2[((*a2 & 0x2000) != 0) + 3 + (unsigned int)((*a2 & 0x4000) != 0)];
  v9 = *(_WORD *)v8 & 0x1FF;
  if ( v9 == 249 )
  {
    v10 = *(_DWORD *)(v8 + 4);
    if ( !v10 )
    {
      *(_DWORD *)a3 = 0;
      v11 = *(_DWORD *)(v8 + 8);
      goto LABEL_7;
    }
    if ( v10 > 1 )
    {
      v17 = *(_DWORD *)(v8 + 8);
      *(_DWORD *)a3 = 1;
      v13 = 0;
      *(_DWORD *)(a3 + 16) = v17;
      *(_DWORD *)(a3 + 4) = v17;
      v18 = sub_EEC8C0((unsigned __int64)a2, (__int64)a2, a4);
      *(_QWORD *)(a3 + 20) = v18;
      *(_QWORD *)(a3 + 8) = v18;
      return v13;
    }
    v8 = *(_QWORD *)(v8 + 16);
    v9 = *(_WORD *)v8 & 0x1FF;
  }
  if ( ((v9 + 394) & 0x1FFu) > 1 )
  {
    *(_DWORD *)a3 = 2;
    v11 = sub_EEB7E0(v8, (__int64)a2, a4);
LABEL_7:
    *(_DWORD *)(a3 + 16) = v11;
    *(_DWORD *)(a3 + 4) = v11;
LABEL_8:
    v12 = v8;
    v13 = 0;
    v14 = sub_EEC8C0(v12, (__int64)a2, a4);
    *(_QWORD *)(a3 + 20) = v14;
    *(_QWORD *)(a3 + 8) = v14;
    return v13;
  }
  if ( ((*(_WORD *)(v8 + 2) >> 3) & 0x3F) != 0x15 )
  {
    *(_DWORD *)a3 = 2;
    v16 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(a3 + 4) = v16;
    *(_DWORD *)(a3 + 16) = v16;
    goto LABEL_8;
  }
  v19 = *(_QWORD *)(v8 + 16);
  *(_QWORD *)(a1 + 8) = v19;
  v20 = a2[((v7 & 0x4000) != 0) + 2 + ((v7 & 0x2000) != 0)];
  if ( ((*(_WORD *)v20 + 394) & 0x1FFu) >= 2 )
    v20 = 0;
  v21 = (v7 & 0x4000) != 0;
  v22 = a2[v21 + 2 + ((v7 & 0x2000) != 0)];
  if ( (*(_WORD *)v22 & 0x1FF) != 0x5B )
  {
    if ( !v20 )
    {
      *(_DWORD *)a3 = 5;
      v44 = sub_C00A40(a2[((v7 & 0x2000) != 0) + 2 + ((v7 & 0x4000) != 0)], v19, v21, (v7 & 0x2000) != 0, v22);
      v45 = *a2;
      *(_DWORD *)(a3 + 16) = v44;
      *(_DWORD *)(a3 + 4) = v44;
      LOWORD(v44) = v45;
      v32 = (v45 & 0x2000) != 0;
      v33 = (v44 & 0x4000) != 0;
      goto LABEL_32;
    }
    v23 = *(_QWORD *)(v20 + 16);
    v24 = *(_QWORD *)(v20 + 24);
    if ( ((*(_WORD *)(v20 + 2) >> 3) & 0x3F) != 0xE )
    {
      if ( ((*(_WORD *)(v20 + 2) >> 3) & 0x3Fu) - 10 <= 1 )
        goto LABEL_22;
      goto LABEL_30;
    }
    goto LABEL_34;
  }
  if ( !v20 )
  {
    v35 = 8 * (((*(_BYTE *)(v22 + 2) & 8) != 0) + 1LL);
    v23 = *(_QWORD *)(v22 + v35 + 32);
    v24 = *(_QWORD *)(v22 + v35 + 40);
    v25 = (*(_BYTE *)(v22 + 3) >> 1) & 0x3F;
    if ( v25 != 30 )
    {
LABEL_21:
      if ( (unsigned int)v25 - 16 <= 1 )
        goto LABEL_22;
LABEL_30:
      *(_DWORD *)a3 = 6;
      v31 = sub_C00A40(
              a2[((v7 & 0x4000) != 0) + 2 + ((v7 & 0x2000) != 0)],
              v19,
              (v7 & 0x4000) != 0,
              (v7 & 0x2000) != 0,
              v22);
      *(_DWORD *)(a3 + 16) = v31;
      *(_DWORD *)(a3 + 4) = v31;
      LOWORD(v31) = (unsigned __int16)*a2 >> 13;
      v32 = (*a2 & 0x4000) != 0;
LABEL_31:
      v33 = v31 & 1;
LABEL_32:
      v13 = 0;
      v34 = sub_EEC8C0(a2[v32 + 2 + v33], v19, a4);
      *(_QWORD *)(a3 + 20) = v34;
      *(_QWORD *)(a3 + 8) = v34;
      return v13;
    }
LABEL_34:
    v36 = *(_QWORD *)a1;
    *(_QWORD *)(a1 + 32) = a2[((v7 & 0x4000) != 0) + 2 + ((v7 & 0x2000) != 0)];
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(v8 + 24);
    if ( (unsigned __int8)sub_1AE6CD0(v36, v19, v23) )
    {
      *(_QWORD *)(a1 + 16) = v24;
    }
    else
    {
      v19 = *(_QWORD *)(a1 + 8);
      v13 = sub_1AE6CD0(*(_QWORD *)a1, v19, v24);
      if ( !(_BYTE)v13 )
      {
        v46 = *a2;
        *(_DWORD *)a3 = 7;
        v47 = sub_C00A40(a2[((v46 & 0x2000) != 0) + 2 + ((v46 & 0x4000) != 0)], v19, (v46 & 0x2000) != 0, v42, v43);
        v48 = *a2;
        *(_DWORD *)(a3 + 16) = v47;
        *(_DWORD *)(a3 + 4) = v47;
        v49 = sub_EEC8C0(a2[((v48 & 0x2000) != 0) + 2 + ((v48 & 0x4000) != 0)], v19, a4);
        *(_QWORD *)(a3 + 20) = v49;
        *(_QWORD *)(a3 + 8) = v49;
        return v13;
      }
      *(_QWORD *)(a1 + 16) = v23;
    }
    goto LABEL_25;
  }
  v23 = *(_QWORD *)(v20 + 16);
  v24 = *(_QWORD *)(v20 + 24);
  if ( ((*(_WORD *)(v20 + 2) >> 3) & 0x3F) == 0xE )
    goto LABEL_34;
  v25 = (*(_BYTE *)(v22 + 3) >> 1) & 0x3F;
  if ( v25 == 30 )
    goto LABEL_34;
  if ( ((*(_WORD *)(v20 + 2) >> 3) & 0x3Fu) - 10 > 1 )
    goto LABEL_21;
LABEL_22:
  v26 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(v8 + 24);
  if ( (unsigned __int8)sub_1AE6CD0(v26, v19, v23) )
  {
    v19 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int8)sub_1AE6CD0(*(_QWORD *)a1, v19, v24) )
    {
      *(_QWORD *)(a1 + 32) = a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
      goto LABEL_25;
    }
  }
  v19 = *(_QWORD *)(a1 + 16);
  if ( !(unsigned __int8)sub_1AE6CD0(*(_QWORD *)a1, v19, v23)
    || (v19 = *(_QWORD *)(a1 + 8), !(unsigned __int8)sub_1AE6CD0(*(_QWORD *)a1, v19, v24)) )
  {
    v39 = *a2;
    *(_DWORD *)a3 = 7;
    v40 = (unsigned int)v39;
    LOWORD(v40) = (unsigned __int16)v39 >> 13;
    v31 = sub_C00A40(a2[((v39 & 0x4000) != 0) + 2 + ((v39 & 0x2000) != 0)], v19, (v39 & 0x4000) != 0, v40, v37);
    v41 = *a2;
    *(_DWORD *)(a3 + 16) = v31;
    *(_DWORD *)(a3 + 4) = v31;
    LOBYTE(v31) = (unsigned __int16)v41 >> 13;
    v32 = (v41 & 0x4000) != 0;
    goto LABEL_31;
  }
  v38 = a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)];
  *(_BYTE *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 32) = v38;
LABEL_25:
  v13 = 1;
  if ( sub_F04E60(a2) )
  {
    *(_DWORD *)a3 = 11;
    v13 = 0;
    v27 = sub_F04E60(a2);
    v28 = sub_EEB7E0(v27, v19, a4);
    *(_DWORD *)(a3 + 16) = v28;
    *(_DWORD *)(a3 + 4) = v28;
    v29 = sub_F04E60(a2);
    v30 = sub_EEC8C0(v29, v19, a4);
    *(_QWORD *)(a3 + 20) = v30;
    *(_QWORD *)(a3 + 8) = v30;
  }
  return v13;
}
