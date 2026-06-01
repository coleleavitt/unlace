__int64 __fastcall sub_6E71B0(_QWORD *a1)
{
  _QWORD *v1; // rbp
  __int64 v3; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // r13
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  char v14; // dl
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rdi
  int v18; // eax

  v1 = (_QWORD *)a1[266];
  if ( v1 )
    return a1[266];
  v3 = a1[187];
  if ( !v3 )
  {
    v16 = sub_600210(a1[2168], "__make_integer_seq", 0x12u);
    a1[187] = v16;
    v3 = v16;
  }
  v5 = sub_6E2C00((unsigned __int64 *)(*(_QWORD *)(a1[264] + 80LL) + 72LL), *(_QWORD *)(a1[264] + 80LL));
  if ( v5 )
    v5 += 40LL;
  v6 = sub_79A610(72, a1, v5, 0);
  sub_7D9230(v6, a1, v5, v3, 0);
  *(_BYTE *)(v6 + 29) |= 2u;
  v7 = *(_QWORD *)(a1[264] + 80LL);
  v8 = *(_QWORD *)(v7 + 72);
  v9 = v8 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v8 & 1) == 0 )
  {
    if ( v9 <= 3 )
      goto LABEL_19;
    v10 = (_QWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
    v1 = v10;
    if ( (v9 & 2) == 0 )
      goto LABEL_19;
    v11 = v10[2275];
    if ( v11 )
    {
      v12 = v10[274];
      v10[284] += 24LL;
      v13 = (v12 + 7) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v1[275] >= v13 + 24 && v12 )
        v1[274] = v13 + 24;
      else
        v13 = sub_6A76A0((__int64)(v1 + 274), 24, 3);
      *(_QWORD *)v13 = v11;
      *(_DWORD *)(v13 + 8) = 0;
      *(_QWORD *)(v13 + 16) = v7;
      *(_QWORD *)(v7 + 72) = v13 | 5;
      v14 = v13;
      v15 = v13 & 0xFFFFFFFFFFFFFFF8LL;
      v1 = (_QWORD *)v15;
      LOBYTE(v9) = v14 & 0xFA | 4;
      goto LABEL_17;
    }
    v9 = v7 & 0xFFFFFFFFFFFFFFFALL;
    v8 = v7 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v7 + 72) = v8;
  }
  v15 = v8 & 0xFFFFFFFFFFFFFFF8LL;
  v1 = (_QWORD *)v15;
  if ( v9 )
  {
LABEL_17:
    if ( (v9 & 4) != 0 && v15 )
    {
      v17 = *v1;
      v18 = *(_DWORD *)(*v1 + 12LL);
      if ( *((_DWORD *)v1 + 2) != v18 )
      {
        *((_DWORD *)v1 + 2) = v18;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 144LL))(v17, v7);
      }
      v1 = (_QWORD *)v1[2];
    }
  }
LABEL_19:
  sub_7A0AA0(v1 + 5, v6);
  a1[266] = v6;
  return v6;
}

