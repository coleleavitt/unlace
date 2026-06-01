unsigned __int64 __fastcall sub_BA4410(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // r15
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  _QWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r12
  unsigned __int64 v15; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // rdi
  int v19; // eax
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v9 = *(_QWORD *)(a1[283] + 80LL);
  v10 = *(_QWORD *)(v9 + 72);
  v11 = v10 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v10 & 1) == 0 )
  {
    v12 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v10 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v13 = v10 & 2;
      v14 = (__int64)v12;
      if ( !(_DWORD)v13 )
        goto LABEL_4;
      v11 = sub_6E2500(v12, v9, v13, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v10 = v11 | 1;
      *(_QWORD *)(v9 + 72) = v11 | 1;
    }
  }
  v17 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  v14 = v17;
  if ( v11 && (v11 & 4) != 0 )
  {
    v14 = 0;
    if ( !v17 )
      goto LABEL_6;
    v18 = *(_QWORD *)v17;
    v19 = *(_DWORD *)(*(_QWORD *)v17 + 12LL);
    if ( *(_DWORD *)(v17 + 8) != v19 )
    {
      *(_DWORD *)(v17 + 8) = v19;
      v20 = v17;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 152LL))(v18, v9);
      v17 = v20;
    }
    v14 = *(_QWORD *)(v17 + 16);
  }
LABEL_4:
  if ( v14 )
    v14 += 40;
LABEL_6:
  v15 = sub_B902D0(136, a1, v14, 0);
  sub_B725B0(v15, 0x1Fu, v14, 0);
  *(_QWORD *)(v15 + 40) = 0;
  *(_QWORD *)(v15 + 48) = a2;
  *(_QWORD *)(v15 + 56) = 0;
  *(_QWORD *)v15 = &off_2C036F8;
  *(_QWORD *)(v15 + 64) = a3;
  *(_QWORD *)(v15 + 72) = a4;
  *(_DWORD *)(v15 + 80) = 0;
  *(_BYTE *)(v15 + 84) &= ~1u;
  return v15;
}
