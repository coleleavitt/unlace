__int64 __fastcall sub_1AF02B0(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  char v7; // r13
  int v8; // eax
  __int64 v9; // rax
  __int64 *v11; // r14
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // r12d
  unsigned int v17; // eax
  int v18; // eax
  __int64 v19; // rax

  if ( (*(_DWORD *)a1 & 0x8000) != 0 )
    return 1;
  v7 = a4;
  if ( (_BYTE)a3 && ((*(_BYTE *)(a1 + 1) >> 1) & 3) != 1 )
  {
    *(_DWORD *)a2 = 8;
    v8 = sub_C00A40(a1, a2, a3, a4, a5);
    *(_DWORD *)(a2 + 16) = v8;
    *(_DWORD *)(a2 + 4) = v8;
    v9 = sub_EEC8C0(a1, a2, a7);
    *(_QWORD *)(a2 + 20) = v9;
    *(_QWORD *)(a2 + 8) = v9;
    return 0;
  }
  v11 = (__int64 *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  LOBYTE(v12) = sub_F61140(*v11, a2, a3, a4, a5, a6);
  v16 = v12;
  if ( !(_BYTE)v12 )
  {
    *(_DWORD *)a2 = 9;
    goto LABEL_11;
  }
  if ( !v7 )
    return 1;
  LOBYTE(v17) = sub_9EC890(*v11, a2, v13, v14, v15);
  v16 = v17;
  if ( (_BYTE)v17 )
    return 1;
  *(_DWORD *)a2 = 10;
LABEL_11:
  v18 = sub_C00A40(a1, a2, v13, v14, v15);
  *(_DWORD *)(a2 + 16) = v18;
  *(_DWORD *)(a2 + 4) = v18;
  v19 = sub_EEC8C0(a1, a2, a7);
  *(_QWORD *)(a2 + 20) = v19;
  *(_QWORD *)(a2 + 8) = v19;
  return v16;
}
