__int64 __fastcall sub_C061F0(_QWORD *a1)
{
  unsigned __int64 v1; // r13
  __int64 v3; // rbx
  unsigned __int8 v4; // al
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdi
  unsigned __int8 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned int v13; // esi
  void *v15; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+8h] [rbp-40h]
  void *v17; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-30h]

  v3 = *(_QWORD *)(*a1 + 24LL);
  v4 = sub_F41400(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v8 = *a1;
  v9 = v4;
  v10 = **(_QWORD **)(v8 + 40);
  v11 = a1[1];
  v12 = (*(_WORD *)(v10 + 2) >> 6) & 7;
  switch ( (*(_WORD *)(v10 + 2) >> 6) & 7 )
  {
    case 2:
      v13 = *(unsigned __int16 *)(v10 + 2 * v11 + 4LL * *(unsigned int *)(v10 + 4) + 20);
      break;
    case 4:
      v13 = *(_DWORD *)(v10 + 4 * (*(unsigned int *)(v10 + 4) + v11) + 20);
      break;
    case 1:
      v13 = *(unsigned __int8 *)(v11 + v10 + 4LL * *(unsigned int *)(v10 + 4) + 20);
      break;
    default:
      goto LABEL_16;
  }
  v1 = v13;
  v12 = *(_QWORD *)(v3 + 16);
  v10 = *(unsigned int *)(v3 + 24);
  v5 = (unsigned __int64)(v10 + 63) >> 6;
  if ( v5 > 1 )
  {
LABEL_16:
    sub_21E18D0(&v15, v10, v5, v12);
    goto LABEL_17;
  }
  v16 = *(_DWORD *)(v3 + 24);
  if ( (unsigned int)v10 <= 0x40 )
  {
    v15 = (void *)v12;
    v18 = v10;
    if ( !v9 )
      goto LABEL_7;
LABEL_22:
    v12 = (unsigned int)-(int)v10;
    v1 &= 0xFFFFFFFFFFFFFFFFLL >> -(char)v10;
    if ( !(_DWORD)v10 )
      v1 = 0;
    goto LABEL_7;
  }
  sub_21E1730(&v15, v12, 0);
LABEL_17:
  LODWORD(v10) = v16;
  v18 = v16;
  if ( v16 > 0x40 )
  {
    sub_21E1730(&v17, v1, v9);
    v8 = *a1;
    goto LABEL_8;
  }
  v8 = *a1;
  if ( v9 )
    goto LABEL_22;
LABEL_7:
  v17 = (void *)v1;
LABEL_8:
  sub_BE8DF0(v3 + 16, *(_QWORD **)(v8 + 32), (__int64)&v17, v12, v6, v7);
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  return *a1 + 24LL;
}

