__int64 __fastcall sub_C90650(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // rbx
  unsigned __int64 v4; // r13
  __int64 (__fastcall *v5)(__int64, _QWORD); // r12
  unsigned __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int8 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  void *v13; // [rsp+0h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-50h]
  void *v15; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v16; // [rsp+18h] [rbp-40h]

  v2 = a2;
  v3 = *(_QWORD *)(a2 + 24);
  v4 = *(unsigned int *)(a2 + 48);
  v5 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 48LL);
  v9 = sub_F41400(*(_QWORD *)(*(_QWORD *)(v3 + 8) & 0xFFFFFFFFFFFFFFF0LL));
  v10 = **(_QWORD **)(a2 + 40);
  v11 = (*(_WORD *)(v10 + 2) >> 6) & 7;
  switch ( (*(_WORD *)(v10 + 2) >> 6) & 7 )
  {
    case 2:
      v4 = *(unsigned __int16 *)(v10 + 2 * v4 + 4LL * *(unsigned int *)(v10 + 4) + 20);
      break;
    case 4:
      v4 = *(unsigned int *)(v10 + 4 * (*(unsigned int *)(v10 + 4) + v4) + 20);
      break;
    case 1:
      v4 = *(unsigned __int8 *)(v4 + v10 + 4LL * *(unsigned int *)(v10 + 4) + 20);
      break;
    default:
      goto LABEL_17;
  }
  v11 = *(_QWORD *)(v3 + 16);
  a2 = *(unsigned int *)(v3 + 24);
  v6 = (unsigned __int64)(a2 + 63) >> 6;
  if ( v6 > 1 )
  {
LABEL_17:
    sub_21E18D0(&v13, a2, v6, v11);
    goto LABEL_18;
  }
  v14 = *(_DWORD *)(v3 + 24);
  if ( (unsigned int)a2 <= 0x40 )
  {
    v13 = (void *)v11;
    v16 = a2;
    goto LABEL_7;
  }
  sub_21E1730(&v13, v11, 0);
LABEL_18:
  LODWORD(a2) = v14;
  v16 = v14;
  if ( v14 > 0x40 )
  {
    sub_21E1730(&v15, v4, v9);
    goto LABEL_9;
  }
LABEL_7:
  if ( v9 )
  {
    v11 = (unsigned int)-(int)a2;
    v4 &= 0xFFFFFFFFFFFFFFFFLL >> -(char)a2;
    if ( !(_DWORD)a2 )
      v4 = 0;
  }
  v15 = (void *)v4;
LABEL_9:
  sub_BE8DF0(v3 + 16, *(_QWORD **)(v2 + 32), (__int64)&v15, v11, v7, v8);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  return v5(a1, *(_QWORD *)(v2 + 24));
}

