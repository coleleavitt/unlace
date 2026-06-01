__int64 __fastcall sub_1AE8820(__int64 a1, unsigned __int64 a2, __int64 a3, double a4)
{
  int v5; // eax
  unsigned int v6; // ebp
  __int64 v7; // rax
  unsigned __int64 v9; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int16 *v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // rax
  int v23; // eax
  int v24; // eax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // rax
  unsigned __int64 v28; // r14
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  unsigned __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rax

  if ( ((*(_WORD *)a2 + 394) & 0x1FFu) > 1 )
  {
    *(_DWORD *)a3 = 2;
    v5 = sub_EEB7E0(a2, a2, a4);
    *(_DWORD *)(a3 + 16) = v5;
    *(_DWORD *)(a3 + 4) = v5;
LABEL_3:
    v6 = 0;
    v7 = sub_EEC8C0(a2, a2, a4);
    *(_QWORD *)(a3 + 20) = v7;
    *(_QWORD *)(a3 + 8) = v7;
    return v6;
  }
  if ( ((*(_WORD *)(a2 + 2) >> 3) & 0x3F) != 0x15 )
  {
    *(_DWORD *)a3 = 2;
    v23 = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a3 + 4) = v23;
    *(_DWORD *)(a3 + 16) = v23;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 8) = v9;
  v14 = sub_BFBAE0(*(_QWORD *)(a2 + 24));
  if ( (*(_WORD *)v14 & 0x1FF) != 0x80 )
  {
    *(_DWORD *)a3 = 3;
    v24 = sub_C00A40(*(_QWORD *)(a2 + 24), a2, v11, v12, v13);
    *(_DWORD *)(a3 + 16) = v24;
    *(_DWORD *)(a3 + 4) = v24;
    v6 = 0;
    v25 = sub_EEC8C0(*(_QWORD *)(a2 + 24), a2, a4);
    *(_QWORD *)(a3 + 20) = v25;
    *(_QWORD *)(a3 + 8) = v25;
    return v6;
  }
  v15 = v9;
  v6 = sub_1AE6CD0(*(_QWORD *)a1, v9, *(_QWORD *)(v14 + 40));
  if ( !(_BYTE)v6 )
  {
    *(_DWORD *)a3 = 4;
    v26 = sub_C00A40(*(_QWORD *)(v14 + 40), v9, v16, v17, v18);
    *(_DWORD *)(a3 + 16) = v26;
    *(_DWORD *)(a3 + 4) = v26;
    v27 = sub_EEC8C0(*(_QWORD *)(v14 + 40), v9, a4);
    *(_QWORD *)(a3 + 20) = v27;
    *(_QWORD *)(a3 + 8) = v27;
    return v6;
  }
  v19 = *(unsigned __int16 **)(v14 + 24);
  v20 = *v19;
  LOWORD(v20) = v20 & 0x1FF;
  if ( (unsigned __int16)v20 <= 0x75u )
  {
    if ( (_WORD)v20 != 91 )
      goto LABEL_10;
    v32 = 4 * (((v19[1] & 8) != 0) + 1LL);
    v28 = *(_QWORD *)&v19[v32 + 16];
    v29 = *(_QWORD *)&v19[v32 + 20];
    v20 = (*((_BYTE *)v19 + 3) >> 1) & 0x3F;
    if ( (_BYTE)v20 != 30 )
    {
      if ( (unsigned int)(unsigned __int8)v20 - 16 <= 1 )
      {
LABEL_17:
        v30 = *(_QWORD *)(a1 + 8);
        v31 = *(_QWORD *)a1;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)(v14 + 32);
        if ( (unsigned __int8)sub_1AE6CD0(v31, v30, v28) )
        {
          v6 = sub_1AE6CD0(*(_QWORD *)a1, *(_QWORD *)(a1 + 16), v29);
          if ( (_BYTE)v6 )
          {
            *(_QWORD *)(a1 + 32) = *(_QWORD *)(v14 + 24);
            return v6;
          }
        }
        v15 = *(_QWORD *)(a1 + 16);
        if ( (unsigned __int8)sub_1AE6CD0(*(_QWORD *)a1, v15, v28) )
        {
          v15 = *(_QWORD *)(a1 + 8);
          v6 = sub_1AE6CD0(*(_QWORD *)a1, v15, v29);
          if ( (_BYTE)v6 )
          {
            v35 = *(_QWORD *)(v14 + 24);
            *(_BYTE *)(a1 + 40) = 0;
            *(_QWORD *)(a1 + 32) = v35;
            return v6;
          }
        }
        *(_DWORD *)a3 = 7;
        goto LABEL_11;
      }
LABEL_23:
      *(_DWORD *)a3 = 6;
      goto LABEL_11;
    }
  }
  else
  {
    if ( (unsigned __int16)v20 > 0x77u )
    {
LABEL_10:
      *(_DWORD *)a3 = 5;
LABEL_11:
      v6 = 0;
      v21 = sub_C00A40(*(_QWORD *)(v14 + 24), v15, v20, v17, v18);
      *(_DWORD *)(a3 + 16) = v21;
      *(_DWORD *)(a3 + 4) = v21;
      v22 = sub_EEC8C0(*(_QWORD *)(v14 + 24), v15, a4);
      *(_QWORD *)(a3 + 20) = v22;
      *(_QWORD *)(a3 + 8) = v22;
      return v6;
    }
    v28 = *((_QWORD *)v19 + 2);
    v29 = *((_QWORD *)v19 + 3);
    if ( ((v19[1] >> 3) & 0x3F) != 0xE )
    {
      v20 = ((v19[1] >> 3) & 0x3Fu) - 10;
      if ( (unsigned int)v20 <= 1 )
        goto LABEL_17;
      goto LABEL_23;
    }
  }
  *(_QWORD *)(a1 + 32) = v19;
  v33 = *(_QWORD *)(a1 + 8);
  v34 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(v14 + 32);
  v6 = sub_1AE6CD0(v34, v33, v28);
  if ( (_BYTE)v6 )
  {
    *(_QWORD *)(a1 + 16) = v29;
  }
  else
  {
    v36 = *(_QWORD *)(a1 + 8);
    v6 = sub_1AE6CD0(*(_QWORD *)a1, v36, v29);
    if ( (_BYTE)v6 )
    {
      *(_QWORD *)(a1 + 16) = v28;
    }
    else
    {
      *(_DWORD *)a3 = 7;
      v40 = sub_C00A40(*(_QWORD *)(v14 + 24), v36, v37, v38, v39);
      *(_DWORD *)(a3 + 16) = v40;
      *(_DWORD *)(a3 + 4) = v40;
      v41 = sub_EEC8C0(*(_QWORD *)(v14 + 24), v36, a4);
      *(_QWORD *)(a3 + 20) = v41;
      *(_QWORD *)(a3 + 8) = v41;
    }
  }
  return v6;
}
