unsigned __int64 __fastcall sub_19D76D0(__int64 *a1, unsigned int a2, unsigned int a3)
{
  _QWORD *v6; // r14
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rbx
  _QWORD *v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  _QWORD *v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdi
  int v25; // edx
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]
  __int64 v27; // [rsp+8h] [rbp-40h]

  v6 = sub_E935B0(*(_QWORD *)(a1[92] + 88), dword_2646DC0[a3]);
  v7 = sub_1A5B7C0(a1, a1[24], v6, a2, 0, 0);
  if ( v7 )
  {
    v10 = v7;
    if ( (*(_BYTE *)(v7 + 28) & 0x7F) == 0x14 )
      goto LABEL_3;
  }
  v10 = 0;
  if ( (*(_BYTE *)(a1[29] + 106) & 1) == 0 )
    goto LABEL_3;
  v12 = (_QWORD *)a1[31];
  v13 = *(_QWORD *)(v12[283] + 80LL);
  v14 = *(_QWORD *)(v13 + 72);
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v14 & 1) == 0 )
  {
    v16 = (_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v14 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      v17 = v14 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v14 & 2) == 0 )
        goto LABEL_10;
      v18 = v16[2295];
      v19 = v13 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v18 )
      {
        v20 = v16[294];
        v16[304] += 24LL;
        v21 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v16[295] >= v21 + 24 && v20 )
        {
          v16[294] = v21 + 24;
          v22 = (v20 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v27 = v18;
          v22 = sub_986170((__int64)(v16 + 294), 24, 24, 3, v18, v9);
          v18 = v27;
          v21 = v22 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v22 = v18;
        v19 = v21 | 4;
        *(_DWORD *)(v22 + 8) = 0;
        *(_QWORD *)(v22 + 16) = v13;
      }
      v15 = v19 & 0xFFFFFFFFFFFFFFFELL;
      v14 = v15 | 1;
      *(_QWORD *)(v13 + 72) = v15 | 1;
    }
  }
  v23 = v14 & 0xFFFFFFFFFFFFFFF8LL;
  v17 = v23;
  if ( !v15 || (v15 & 4) == 0 )
  {
LABEL_10:
    if ( v17 )
      v17 += 40LL;
    goto LABEL_12;
  }
  v17 = 0;
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = *(_DWORD *)(*(_QWORD *)v23 + 12LL);
    if ( *(_DWORD *)(v23 + 8) != v25 )
    {
      *(_DWORD *)(v23 + 8) = v25;
      v26 = v23;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 152LL))(v24, v13);
      v23 = v26;
    }
    v17 = *(_QWORD *)(v23 + 16);
    goto LABEL_10;
  }
LABEL_12:
  v10 = sub_BAF1C0(v12, v17, 0, (__int64)v6, 0, 0, 0, 0);
LABEL_3:
  if ( !(unsigned __int8)sub_19D7480(a1, v10, a2, a3, v8, v9) )
    return 0;
  return v10;
}
