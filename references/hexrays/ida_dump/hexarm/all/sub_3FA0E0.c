__int64 __fastcall sub_3FA0E0(__int64 a1, unsigned int a2, unsigned int a3, double a4, __m128 a5)
{
  __int64 v6; // r13
  int v9; // esi
  unsigned __int8 v10; // r15
  unsigned int *v11; // rdi
  __int64 (*v12)(void); // rax
  int v13; // r12d
  unsigned __int16 v14; // ax
  bool v15; // cc
  unsigned __int8 v16; // r9
  __int64 v17; // rax
  __int64 v19; // rax
  int v20; // ebp
  int v21; // eax
  int v22; // ecx
  int v23; // ebp
  int dtype_size; // eax
  int v25; // ecx
  unsigned __int8 v26; // cl

  v6 = a1 + 104;
  if ( *(_BYTE *)(a1 + 145) )
    v6 = a1 + 144;
  v9 = *(unsigned __int16 *)(v6 + 6);
  v10 = *(_BYTE *)(v6 + 5);
  v11 = *(unsigned int **)(a1 + 832);
  if ( (_WORD)v9 == 147 )
  {
    v13 = sub_3F9C10(a1, v6, v11[155], a4);
    v14 = *(_WORD *)(a1 + 48);
    v15 = v14 <= 0x1DAu;
    if ( v14 != 474 )
      goto LABEL_7;
LABEL_16:
    sub_3EFEC0(a1, v13, a2, 7u, a4, a5);
    v23 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL);
    dtype_size = get_dtype_size(7);
    v25 = v23;
    a2 = a3;
    sub_3F68B0(a1, v13, dtype_size, v25);
    v26 = 7;
    goto LABEL_18;
  }
  v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 168LL);
  if ( (char *)v12 == (char *)sub_3EA010 )
    v13 = sub_3EA010((__int64)v11, v9);
  else
    v13 = v12();
  v14 = *(_WORD *)(a1 + 48);
  v15 = v14 <= 0x1DAu;
  if ( v14 == 474 )
    goto LABEL_16;
LABEL_7:
  if ( v15 )
  {
    if ( v14 != 30 )
    {
      v16 = v10;
      if ( v14 == 32 )
      {
LABEL_10:
        v17 = sub_3EFAF0(a1, "writex18", v13, a2, 0xFFFFFFFF, v16, a4, a5);
        sub_317070((__int64 *)(*(_QWORD *)(v17 + 72) + 152LL), (__int64 **)(*(_QWORD *)(v17 + 72) + 216LL));
LABEL_11:
        sub_3F9F40(a1, v6, *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL), a4);
        return 1;
      }
      return 0;
    }
    v26 = v10;
LABEL_18:
    sub_3EFEC0(a1, v13, a2, v26, a4, a5);
    goto LABEL_11;
  }
  if ( v14 == 475 )
  {
    v19 = sub_3EFAF0(a1, "writex18", v13, a2, 0xFFFFFFFF, 7u, a4, a5);
    sub_317070((__int64 *)(*(_QWORD *)(v19 + 72) + 152LL), (__int64 **)(*(_QWORD *)(v19 + 72) + 216LL));
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 628LL);
    v21 = get_dtype_size(7);
    v22 = v20;
    a2 = a3;
    sub_3F68B0(a1, v13, v21, v22);
    v16 = 7;
    goto LABEL_10;
  }
  return 0;
}
