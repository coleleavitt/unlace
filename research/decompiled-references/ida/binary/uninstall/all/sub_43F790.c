__int64 __fastcall sub_43F790(__int64 a1, __int64 a2, _BYTE *a3, _BYTE *a4, int a5, int a6)
{
  _BYTE *v6; // r14
  int v7; // ebx
  __int64 result; // rax
  int v9; // r15d
  __int64 *v10; // rdx
  int v11; // r13d
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi
  int v15; // edx
  int v16; // ecx
  int v17; // ebx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rdi
  __int64 v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // ebx
  int v26; // r13d
  __int64 v27; // rdx
  _BYTE *v28; // rbx
  _QWORD *v29; // r12
  unsigned int v30; // esi
  void *v31; // rdi
  _BYTE *v32; // rbx
  __int64 v33; // rdi
  _BYTE *v34; // rbx
  unsigned int v35; // esi
  void *v36; // rdi
  _BYTE *v37; // rbx
  _QWORD *v38; // rdi
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // [rsp+8h] [rbp-A0h]
  unsigned int v43; // [rsp+1Ch] [rbp-8Ch] BYREF
  _BYTE v44[136]; // [rsp+20h] [rbp-88h] BYREF

  v6 = nullptr;
  v7 = 0;
  v41 = *(_QWORD *)(a1 + 32);
  result = *(unsigned int *)(v41 + 44);
  v9 = 2 * *(_DWORD *)(v41 + 44);
  if ( !v9 )
  {
    v10 = off_656088;
    *(_DWORD *)(a1 + 16) = 0;
    *(_QWORD *)(a1 + 8) = v10;
    return result;
  }
  if ( v9 > 20 )
  {
    if ( v9 <= 0x3FFFFFFF )
    {
      v40 = sub_40FB00(8 * *(_DWORD *)(v41 + 44));
      a4 = v44;
      v6 = (_BYTE *)v40;
    }
    else
    {
      sub_47D740(
        (unsigned int)"max size for a Tcl value (%d bytes) exceeded",
        0x7FFFFFFF,
        (_DWORD)a3,
        (_DWORD)a4,
        a5,
        a6);
      a3 = v44;
    }
  }
  else
  {
    v6 = v44;
  }
  v11 = 0;
  v12 = *(_QWORD **)(v41 + 88);
  while ( v11 < v9 )
  {
    v22 = v12 + 4;
    *(_DWORD *)&v6[4 * v11] = v11 != 0 ? 8 : 0;
    if ( *(_DWORD *)(v41 + 60) == 1 || *(_DWORD *)(v41 + 60) == -1 )
      v22 = (_QWORD *)v12[4];
    if ( v22[1] )
    {
      v13 = *((unsigned int *)v22 + 4);
      v14 = v22[1];
      v43 = v13;
      v17 = sub_49D720(v14, v13, &v6[4 * v11]) + v7;
      if ( v17 >= 0 )
        goto LABEL_8;
    }
    else
    {
      v23 = sub_47ACD0(v22, &v43);
      v17 = sub_49D720(v23, v43, &v6[4 * v11]) + v7;
      if ( v17 >= 0 )
      {
LABEL_8:
        v20 = v12[3];
        *(_DWORD *)&v6[4 * v11 + 4] = 8;
        v21 = *(_QWORD *)(v20 + 8);
        if ( !v21 )
          goto LABEL_17;
        goto LABEL_9;
      }
    }
    sub_47D740((unsigned int)"max size for a Tcl value (%d bytes) exceeded", 0x7FFFFFFF, v15, v16, v18, v19);
    v20 = v12[3];
    *(_DWORD *)&v6[4 * v11 + 4] = 8;
    v21 = *(_QWORD *)(v20 + 8);
    if ( !v21 )
    {
LABEL_17:
      v24 = sub_47ACD0(v20, &v43);
      v7 = sub_49D720(v24, v43, &v6[4 * v11 + 4]) + v17;
      if ( v7 >= 0 )
        goto LABEL_10;
      goto LABEL_18;
    }
LABEL_9:
    v43 = *(_DWORD *)(v20 + 16);
    v7 = sub_49D720(v21, v43, &v6[4 * v11 + 4]) + v17;
    if ( v7 >= 0 )
      goto LABEL_10;
LABEL_18:
    sub_47D740((unsigned int)"max size for a Tcl value (%d bytes) exceeded", 0x7FFFFFFF, (_DWORD)a3, (_DWORD)a4, a5, a6);
LABEL_10:
    v12 = (_QWORD *)v12[6];
    v11 += 2;
  }
  if ( (int)(0x80000000 - v9) < v7 )
    sub_47D740((unsigned int)"max size for a Tcl value (%d bytes) exceeded", 0x7FFFFFFF, (_DWORD)a3, (_DWORD)a4, a5, a6);
  v25 = v9 + v7;
  v26 = 0;
  *(_DWORD *)(a1 + 16) = v25 - 1;
  v27 = sub_40FB00(v25);
  v28 = (_BYTE *)v27;
  *(_QWORD *)(a1 + 8) = v27;
  v29 = *(_QWORD **)(v41 + 88);
  if ( v9 > 0 )
  {
    do
    {
      v38 = v29 + 4;
      v39 = *(_DWORD *)&v6[4 * v26];
      if ( v26 )
        v39 = *(_DWORD *)&v6[4 * v26] | 8;
      *(_DWORD *)&v6[4 * v26] = v39;
      if ( *(_DWORD *)(v41 + 60) == 1 || *(_DWORD *)(v41 + 60) == -1 )
        v38 = (_QWORD *)v29[4];
      if ( v38[1] )
      {
        v30 = *((_DWORD *)v38 + 4);
        v31 = (void *)v38[1];
        v43 = v30;
      }
      else
      {
        v31 = (void *)sub_47ACD0(v38, &v43);
      }
      v32 = &v28[(int)sub_49DAC0(v31)];
      *v32 = 32;
      v33 = v29[3];
      v34 = v32 + 1;
      *(_DWORD *)&v6[4 * v26 + 4] |= 8u;
      if ( *(_QWORD *)(v33 + 8) )
      {
        v35 = *(_DWORD *)(v33 + 16);
        v36 = *(void **)(v33 + 8);
        v43 = v35;
      }
      else
      {
        v36 = (void *)sub_47ACD0(v33, &v43);
      }
      v26 += 2;
      v37 = &v34[(int)sub_49DAC0(v36)];
      *v37 = 32;
      v28 = v37 + 1;
      v29 = (_QWORD *)v29[6];
    }
    while ( v26 < v9 );
    v27 = *(_QWORD *)(a1 + 8);
  }
  result = *(int *)(a1 + 16);
  *(_BYTE *)(v27 + result) = 0;
  if ( v44 != v6 )
    return Tcl_Free((__int64)v6);
  return result;
}

