_QWORD *__fastcall sub_BA45F0(_QWORD *a1, __int64 a2, int *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rbp
  _QWORD *v14; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // [rsp+8h] [rbp-30h]

  v8 = *(_QWORD *)(a1[283] + 80LL);
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
        goto LABEL_4;
      v10 = sub_6E2500(v11, v8, v12, a4, a5, a6) & 0xFFFFFFFFFFFFFFFELL;
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
      goto LABEL_6;
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
LABEL_4:
  if ( v13 )
    v13 += 40;
LABEL_6:
  v14 = (_QWORD *)sub_B902D0(120, a1, v13, 0);
  sub_B725B0((__int64)v14, 0x1Du, v13, 0);
  v14[6] = a2;
  v14[5] = 0;
  v14[7] = 0;
  *v14 = &off_2C037B0;
  sub_A53C40((__int64)(v14 + 8), a3);
  if ( sub_A4FD90((__int64)(v14 + 8)) )
    sub_A5F590((__int64)a1, (__int64)sub_B70CC0, (__int64)(v14 + 8));
  return v14;
}
