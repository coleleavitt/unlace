__int64 __fastcall sub_C0C840(_QWORD *a1, __int64 *a2, char a3, __int64 a4, int a5)
{
  __int64 v9; // rbx
  __int64 v10; // rdi
  char v11; // al
  char v12; // dl
  _QWORD *v13; // r13
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v19; // rax
  __int64 v20; // rbp
  char *v21; // rdi
  char *v22; // rdx
  void *v23; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+8h] [rbp-40h]

  v9 = sub_EEE9A0(32, a1, 8);
  *(_WORD *)v9 = *(_WORD *)v9 & 0xFE00 | 0x3E;
  if ( unk_2CD7484 )
    sub_EE9B50(62);
  *(_WORD *)(v9 + 1) &= 0xF801u;
  *(_QWORD *)(v9 + 8) = a4;
  *(_DWORD *)(v9 + 28) = a5;
  v10 = *a2;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  v11 = sub_21F8E40(v10);
  v12 = a3;
  v13 = &v23;
  *(_BYTE *)(v9 + 2) = (8 * v11) | *(_BYTE *)(v9 + 2) & 7;
  *(_BYTE *)(v9 + 3) = *(_BYTE *)(v9 + 3) & 0xFE | v12 & 1;
  if ( *a2 == sub_21F90D0() )
    sub_22010F0(&v23, a2);
  else
    sub_21FEE00(&v23, a2);
  v16 = v24;
  *(_DWORD *)(v9 + 24) = v24;
  v17 = (unsigned __int64)(v16 + 63) >> 6;
  if ( (unsigned int)v16 > 0x40 )
    v13 = v23;
  if ( v17 > 1 )
  {
    v19 = a1[294];
    v20 = 8 * v17;
    a1[304] += 8 * v17;
    v21 = (char *)((v19 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    v22 = &v21[8 * v17];
    if ( a1[295] >= (unsigned __int64)v22 && v19 )
      a1[294] = v22;
    else
      v21 = (char *)sub_986170((__int64)(a1 + 294), v20, v20, 3, v14, v15);
    *(_QWORD *)(v9 + 16) = v21;
    memmove(v21, v13, v20);
    LODWORD(v16) = v24;
  }
  else if ( v17 == 1 )
  {
    *(_QWORD *)(v9 + 16) = *v13;
  }
  else
  {
    *(_QWORD *)(v9 + 16) = 0;
  }
  if ( (unsigned int)v16 > 0x40 && v23 )
    operator delete[](v23);
  *(_BYTE *)(v9 + 1) &= 0x3Fu;
  *(_BYTE *)(v9 + 2) &= 0xF8u;
  return v9;
}
