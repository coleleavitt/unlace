__int64 __fastcall sub_1AF03A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, double a7)
{
  unsigned __int64 v7; // r13
  unsigned int v8; // r12d
  int v9; // eax
  __int64 v10; // rax
  unsigned int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned __int64 v17; // rbp
  int v18; // eax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 *v22; // r13
  unsigned int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // eax
  int v28; // eax
  __int64 v29; // rax

  v7 = a1[1];
  if ( (*(_DWORD *)v7 & 0x8000) == 0 )
  {
    if ( ((*(_BYTE *)(v7 + 1) >> 1) & 3) != 1 )
    {
LABEL_3:
      *(_DWORD *)a2 = 8;
      v8 = 0;
      v9 = sub_C00A40(v7, a2, a3, a4, a5);
      *(_DWORD *)(a2 + 16) = v9;
      *(_DWORD *)(a2 + 4) = v9;
      v10 = sub_EEC8C0(v7, a2, a7);
      *(_QWORD *)(a2 + 20) = v10;
      *(_QWORD *)(a2 + 8) = v10;
      return v8;
    }
    LOBYTE(v12) = sub_F61140(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
    v13 = v12;
    if ( !(_BYTE)v12 )
      goto LABEL_19;
  }
  v7 = a1[2];
  if ( (*(_DWORD *)v7 & 0x8000) == 0 )
  {
    LOBYTE(v14) = sub_F61140(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
    v13 = v14;
    if ( !(_BYTE)v14 )
      goto LABEL_19;
  }
  v7 = a1[3];
  if ( v7 )
  {
    if ( (*(_DWORD *)v7 & 0x8000) == 0 )
    {
      LOBYTE(v15) = sub_F61140(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
      v13 = v15;
      if ( !(_BYTE)v15 )
        goto LABEL_19;
    }
  }
  v7 = a1[6];
  if ( v7 && (*(_DWORD *)v7 & 0x8000) == 0 )
  {
    if ( ((*(_BYTE *)(v7 + 1) >> 1) & 3) != 1 )
      goto LABEL_3;
    LOBYTE(v16) = sub_F61140(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
    v13 = v16;
    if ( !(_BYTE)v16 )
    {
LABEL_19:
      *(_DWORD *)a2 = 9;
      v20 = sub_C00A40(v7, a2, a3, a4, a5);
      *(_DWORD *)(a2 + 16) = v20;
      *(_DWORD *)(a2 + 4) = v20;
      v21 = sub_EEC8C0(v7, a2, a7);
      *(_QWORD *)(a2 + 20) = v21;
      *(_QWORD *)(a2 + 8) = v21;
      return v13;
    }
  }
  v17 = a1[7];
  if ( v17 && (*(_DWORD *)v17 & 0x8000) == 0 )
  {
    if ( ((*(_BYTE *)(v17 + 1) >> 1) & 3) != 1 )
    {
      *(_DWORD *)a2 = 8;
      v8 = 0;
      v18 = sub_C00A40(v17, a2, a3, a4, a5);
      *(_DWORD *)(a2 + 16) = v18;
      *(_DWORD *)(a2 + 4) = v18;
      v19 = sub_EEC8C0(v17, a2, a7);
      *(_QWORD *)(a2 + 20) = v19;
      *(_QWORD *)(a2 + 8) = v19;
      return v8;
    }
    v22 = (__int64 *)(*(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v23) = sub_F61140(*v22, a2, a3, a4, a5, a6);
    v8 = v23;
    if ( (_BYTE)v23 )
    {
      LOBYTE(v27) = sub_9EC890(*v22, a2, v24, v25, v26);
      v8 = v27;
      if ( (_BYTE)v27 )
        return 1;
      *(_DWORD *)a2 = 10;
    }
    else
    {
      *(_DWORD *)a2 = 9;
    }
    v28 = sub_C00A40(v17, a2, v24, v25, v26);
    *(_DWORD *)(a2 + 16) = v28;
    *(_DWORD *)(a2 + 4) = v28;
    v29 = sub_EEC8C0(v17, a2, a7);
    *(_QWORD *)(a2 + 20) = v29;
    *(_QWORD *)(a2 + 8) = v29;
    return v8;
  }
  return 1;
}
