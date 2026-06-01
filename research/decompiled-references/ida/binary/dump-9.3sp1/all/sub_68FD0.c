__int64 __fastcall sub_68FD0(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  char v4; // r13
  __int64 v7; // rax
  int v8; // eax
  int v9; // r8d
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rbp
  __int64 v18; // rax
  int v19; // r14d
  char v20; // al
  __int64 v21; // rcx
  unsigned int v22; // r9d
  __int64 v23; // rax
  _QWORD *v24; // r15
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rsi
  _QWORD *v29; // rbp
  __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  char *v32; // rax
  char *v33; // rdi
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+0h] [rbp-48h]
  unsigned int v39; // [rsp+Ch] [rbp-3Ch]
  unsigned int v40; // [rsp+Ch] [rbp-3Ch]
  unsigned int v41; // [rsp+Ch] [rbp-3Ch]

  v4 = a4;
  if ( (_BYTE)a4 )
  {
    v7 = *(_QWORD *)(a1 + 1496);
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 24) + 16LL) == a3 || a3 == -1 || (*(_BYTE *)(v7 + 604) & 1) == 0 )
      return 0;
    v8 = sub_330F80(a1);
    sub_3311F0(a1, a2, 43, v8, v9, v10);
  }
  v11 = *(_DWORD *)(a1 + 64);
  if ( v11 <= 0
    || (v12 = *(_QWORD *)(a1 + 528),
        v13 = (unsigned int)(v11 - 1),
        a4 = *(_QWORD *)(v12 + 8LL * (int)v13),
        *(_DWORD *)(a4 + 76) != 1) )
  {
    result = sub_67FD0(a1, a3, 2, a4);
    goto LABEL_9;
  }
  v16 = (unsigned int)(v11 - 2);
  if ( (unsigned int)v11 <= 1 )
    sub_65460(a1, v13, v12, v16);
  v17 = *(_QWORD **)(v12 + 8LL * (int)v16);
  if ( *((_DWORD *)v17 + 19) == 3 )
  {
    v18 = v17[7];
    if ( v18 )
    {
      if ( *(_DWORD *)v18 == 55 || !*((_DWORD *)v17 + 94) )
        goto LABEL_15;
      v19 = *((_DWORD *)v17 + 18);
      v38 = *(_QWORD *)(v18 + 24);
    }
    else
    {
      if ( !*((_DWORD *)v17 + 94) )
        goto LABEL_15;
      v19 = *((_DWORD *)v17 + 18);
      v38 = v17[4];
    }
    v20 = sub_A2BB0(v17);
    v22 = v19 + 1;
    if ( !v20 )
    {
      v23 = sub_68AC0(a1, v22, 0, v21);
      v22 = v19 + 1;
      *(_DWORD *)(v23 + 24) |= 2u;
      v24 = (_QWORD *)v23;
      *(_DWORD *)v17[46] = v19 + 1;
      v25 = *(_QWORD *)(v23 + 376);
      v26 = v24[46];
      if ( v24[48] < (unsigned __int64)(v25 + 1) )
      {
        v36 = qvector_reserve((__int64)(v24 + 46), v26, v25 + 1, 4);
        v22 = v19 + 1;
        v24[46] = v36;
        v26 = v36;
        v25 = v24[47];
      }
      *(_DWORD *)(v26 + 4 * v25) = v19 + 2;
      v27 = v24[44];
      ++v24[47];
      v28 = v24[43];
      if ( v24[45] < (unsigned __int64)(v27 + 1) )
      {
        v40 = v22;
        v35 = qvector_reserve((__int64)(v24 + 43), v28, v27 + 1, 4);
        v22 = v40;
        v24[43] = v35;
        v28 = v35;
        v27 = v24[44];
      }
      *(_DWORD *)(v28 + 4 * v27) = v19;
      v29 = (_QWORD *)v24[1];
      ++v24[44];
      v30 = v29[43];
      v31 = v29[44];
      v32 = (char *)(v30 + 4 * v31);
      if ( (char *)v30 == v32 )
        goto LABEL_37;
      v33 = (char *)v29[43];
      while ( *(_DWORD *)v33 != v19 )
      {
        v33 += 4;
        if ( v32 == v33 )
          goto LABEL_37;
      }
      if ( v32 == v33 )
      {
LABEL_37:
        v34 = v31 + 1;
      }
      else
      {
        v39 = v22;
        memmove(v33, v33 + 4, v32 - v33 - 4);
        v34 = v29[44];
        v22 = v39;
        v30 = v29[43];
        v31 = v34 - 1;
        v29[44] = v34 - 1;
      }
      if ( v29[45] < v34 )
      {
        v41 = v22;
        v37 = qvector_reserve((__int64)(v29 + 43), v30, v34, 4);
        v31 = v29[44];
        v22 = v41;
        v29[43] = v37;
        v30 = v37;
      }
      *(_DWORD *)(v30 + 4 * v31) = v22;
      ++v29[44];
      v17 = v24;
    }
    sub_B52C0(v17, v38, v22);
    LODWORD(v13) = *(_DWORD *)(a1 + 64) - 1;
  }
LABEL_15:
  result = sub_68AC0(a1, v13, 0, v16);
  *(_QWORD *)(result + 32) = a3;
LABEL_9:
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 16LL) & (a3 + 1);
  *(_DWORD *)(result + 24) |= 2u;
  *(_QWORD *)(result + 40) = v15;
  if ( v4 )
    *(_DWORD *)(result + 76) = 6;
  return result;
}
