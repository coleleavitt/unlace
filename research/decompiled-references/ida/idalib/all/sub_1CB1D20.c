unsigned __int64 __fastcall sub_1CB1D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // r14d
  __int64 v8; // rdi
  __int64 *v9; // r15
  unsigned __int64 v10; // rax
  __int64 v11; // r8
  __int64 *v12; // rbp
  __int64 v13; // rax
  bool v14; // r15
  bool v15; // r15
  __int64 v16; // r8
  __int16 v17; // ax
  _QWORD *v19; // r15
  __int16 v20; // ax
  _QWORD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // rdx
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __int64 v30; // [rsp+0h] [rbp-48h]
  int v31; // [rsp+Ch] [rbp-3Ch]
  char v32; // [rsp+Ch] [rbp-3Ch]

  v6 = a4;
  v8 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 47 )
  {
    v12 = (__int64 *)a2;
    v9 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    if ( !sub_F57FF0(v8) )
      goto LABEL_4;
    goto LABEL_18;
  }
  v9 = nullptr;
  v10 = sub_F60F10(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6)[16];
  v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v10 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    if ( (v10 & 4) != 0 )
    {
      v24 = *v12;
      v25 = *(_QWORD *)(*v12 & 0xFFFFFFFFFFFFFFF0LL);
      v26 = *(_QWORD *)(v25 + 8) & 7LL;
      if ( !(v26 | (*(__int64 *)(v25 + 8) >> 3) & 1) )
      {
        v12 = (__int64 *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_16;
      }
      v10 = sub_F64F00(v24, a2, v26, v26 | (*(__int64 *)(v25 + 8) >> 3) & 1, v11);
    }
    v12 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_16:
    v9 = v12;
  }
  if ( !sub_F57FF0(*v9) )
  {
LABEL_4:
    v13 = *(_QWORD *)(*(_QWORD *)(*v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v13 + 16) == 13 && ((*(_WORD *)(v13 + 18) >> 3) & 0x1FF) == 0x1B4 )
    {
      if ( *(_DWORD *)(a3 + 8) <= 0x40u )
      {
        v14 = *(_QWORD *)a3 == 0;
      }
      else
      {
        v31 = *(_DWORD *)(a3 + 8);
        v14 = v31 == (unsigned int)sub_2206780(a3);
      }
      v15 = !v14;
      v16 = sub_EEE9A0(16, *(_QWORD **)(a1 + 248), 8u);
      *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x73;
      if ( unk_2CD7484 )
      {
        v30 = v16;
        sub_EE9B50(115);
        v16 = v30;
      }
      v17 = *(_WORD *)(v16 + 1);
      *(_QWORD *)(v16 + 8) = v12;
      *(_DWORD *)(v16 + 4) = v6;
      v17 &= 0xF801u;
      *(_WORD *)(v16 + 1) = v17;
      *(_BYTE *)(v16 + 2) = (8 * v15) | HIBYTE(v17) & 0xF7;
    }
    else
    {
      v16 = sub_C0C5D0(*(_QWORD **)(a1 + 248), a3, (__int64)v12, v6);
    }
    goto LABEL_12;
  }
LABEL_18:
  v32 = 1;
  if ( !(unsigned __int8)sub_F57F20(*v9) )
  {
    if ( !sub_F57F60(*v9) || (v32 = 2, (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 3LL) & 0x20) == 0) )
    {
      v32 = 3;
      if ( !sub_F57F90(*v9) )
        v32 = 4 * sub_F57FC0(*v9);
    }
  }
  v19 = *(_QWORD **)a3;
  if ( *(_DWORD *)(a3 + 8) > 0x40u )
    v19 = **(_QWORD ***)a3;
  v16 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x4E;
  if ( unk_2CD7484 )
  {
    v29 = v16;
    sub_EE9B50(78);
    v16 = v29;
  }
  v20 = *(_WORD *)(v16 + 1);
  *(_QWORD *)(v16 + 8) = v12;
  *(_DWORD *)(v16 + 16) = (_DWORD)v19;
  v20 &= 0xF801u;
  *(_DWORD *)(v16 + 20) = v6;
  *(_WORD *)(v16 + 1) = v20;
  *(_BYTE *)(v16 + 2) = (8 * v32) | HIBYTE(v20) & 0xC7;
LABEL_12:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 47 )
  {
    v28 = v16;
    v21 = sub_A81910(*(_QWORD **)(a1 + 248), a2, v6);
    v22 = *(unsigned int *)(a1 + 1952);
    v23 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v23, v22) )
    {
      v23 = 0;
      v22 = 0;
    }
    return sub_C0B720(*(_QWORD **)(a1 + 248), a2, 0, 27, v28, 0, (v23 << 32) | v22, (__int64)v21, v6, v6);
  }
  return v16;
}
