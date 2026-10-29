__int64 __fastcall sub_B80670(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  __int64 v8; // r14
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // rbp
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v6 = 0;
  if ( a2 )
    v6 = sub_EEB7E0(a2);
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL);
  v9 = *(_QWORD *)(v8 + 72);
  v10 = v9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v9 & 1) == 0 )
  {
    v11 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v9 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v12 = v9 & 2;
      v13 = (__int64)v11;
      if ( !(_DWORD)v12 )
        goto LABEL_6;
      v10 = sub_6E2500(v11, *(_QWORD *)(*(_QWORD *)(a1 + 2264) + 80LL), v12, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
      v9 = v10 | 1;
      *(_QWORD *)(v8 + 72) = v10 | 1;
    }
  }
  v16 = v9 & 0xFFFFFFFFFFFFFFF8LL;
  v13 = v16;
  if ( v10 && (v10 & 4) != 0 )
  {
    v13 = 0;
    if ( !v16 )
      goto LABEL_8;
    v17 = *(_QWORD *)v16;
    v18 = *(_DWORD *)(*(_QWORD *)v16 + 12LL);
    if ( *(_DWORD *)(v16 + 8) != v18 )
    {
      *(_DWORD *)(v16 + 8) = v18;
      v19 = v16;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 152LL))(v17, v8);
      v16 = v19;
    }
    v13 = *(_QWORD *)(v16 + 16);
  }
LABEL_6:
  if ( v13 )
    v13 += 40;
LABEL_8:
  v14 = sub_B902D0(88, a1, v13, 0);
  sub_B725B0(v14, 1u, v13, v6);
  sub_B8E080(v14 + 40, 1);
  *(_QWORD *)(v14 + 72) = a2;
  *(_BYTE *)(v14 + 80) = 0;
  *(_QWORD *)v14 = &off_2B4B178;
  return v14;
}
