__int64 __fastcall sub_21FDAB0(__int64 a1, _DWORD *a2, char a3, bool *a4)
{
  _DWORD *v6; // rdx
  _DWORD *v7; // r12
  bool v8; // al
  int v9; // ecx
  unsigned int v10; // ebp
  unsigned int v11; // eax
  unsigned int v12; // r9d
  int v13; // r14d
  bool v14; // bl
  char v15; // dl
  char v16; // al
  __int64 *v17; // rdx
  __int64 result; // rax
  void *v19; // rdi
  char v20; // dl
  char v21; // al
  __int64 v22; // rcx
  char v23; // al
  __int64 v24; // rsi
  char v25; // cl
  __int64 *v26; // rax
  __int64 v27; // rax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int v31; // edx
  int v32; // eax
  int v33; // ecx
  int v35; // [rsp+10h] [rbp-58h]
  unsigned int v36; // [rsp+10h] [rbp-58h]
  unsigned int v37; // [rsp+10h] [rbp-58h]
  bool v38; // [rsp+17h] [rbp-51h]
  __int64 v39; // [rsp+18h] [rbp-50h]
  unsigned int v40; // [rsp+18h] [rbp-50h]
  __int64 v41; // [rsp+20h] [rbp-48h]

  v6 = *(_DWORD **)a1;
  v7 = *(_DWORD **)a1;
  v38 = 0;
  if ( (*(_BYTE *)(a1 + 20) & 7) == 1 )
  {
    v8 = sub_21F8C40((_QWORD *)a1);
    v6 = *(_DWORD **)a1;
    v38 = v8;
  }
  v9 = a2[2];
  v10 = (unsigned int)(v9 + 64) >> 6;
  if ( (unsigned int)(v9 + 64) <= 0x7F )
    v10 = 1;
  v11 = v6[2] + 64;
  v12 = v11 >> 6;
  if ( v11 <= 0x7F )
    v12 = 1;
  v13 = v9 - v7[2];
  v14 = a2 != (_DWORD *)&unk_26F7B60 && v7 == (_DWORD *)&unk_26F7B60;
  if ( v14 && (*(_BYTE *)(a1 + 20) & 7) == 1 )
  {
    v26 = (__int64 *)(a1 + 8);
    if ( v12 != 1 )
      v26 = *(__int64 **)(a1 + 8);
    v27 = *v26;
    if ( v27 < 0 )
      v14 = (((unsigned __int64)v27 >> 62) ^ 1) & 1;
    if ( v13 >= 0 )
      goto LABEL_69;
    goto LABEL_83;
  }
  v14 = 0;
  v35 = 0;
  if ( v13 >= 0 )
    goto LABEL_9;
  v21 = *(_BYTE *)(a1 + 20) & 7;
  if ( (*(_BYTE *)(a1 + 20) & 6) != 0 && v21 != 3 )
  {
    v37 = v12;
    v28 = sub_21F9C90((_QWORD *)a1);
    v29 = *(_DWORD *)(a1 + 16);
    v30 = v28 + 1;
    v12 = v37;
    v31 = v30 - v7[2];
    if ( v29 + v31 < a2[1] )
      v31 = a2[1] - v29;
    if ( v31 < v13 )
    {
      v33 = v29 + v13;
      v13 = 0;
      *(_DWORD *)(a1 + 16) = v33;
      v35 = 0;
      goto LABEL_9;
    }
    if ( v31 < 0 )
    {
      v13 -= v31;
      *(_DWORD *)(a1 + 16) = v29 + v31;
    }
    else
    {
      if ( -v13 < v30 )
      {
LABEL_77:
        v21 = *(_BYTE *)(a1 + 20) & 7;
        goto LABEL_47;
      }
      v32 = v30 + v13 - 1;
      v13 -= v32;
      *(_DWORD *)(a1 + 16) = v32 + v29;
    }
    if ( v13 >= 0 )
    {
      v14 = 0;
LABEL_69:
      v35 = 0;
      goto LABEL_9;
    }
    goto LABEL_77;
  }
LABEL_47:
  if ( v21 != 1 )
  {
    v35 = 0;
    v14 = v21 != 0 && v21 != 3;
    if ( !v14 )
      goto LABEL_9;
    v6 = *(_DWORD **)a1;
    v14 = 0;
    goto LABEL_50;
  }
  v6 = *(_DWORD **)a1;
  v14 = 0;
LABEL_83:
  v35 = 0;
  if ( v6[4] == 1 )
  {
LABEL_9:
    if ( v10 <= v12 )
      goto LABEL_10;
LABEL_53:
    v39 = operator new[](8LL * v10);
    sub_22096E0(v39, 0, v10);
    v23 = *(_BYTE *)(a1 + 20) & 7;
    if ( v23 == 1 || v23 && v23 != 3 )
    {
      v24 = a1 + 8;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
        v24 = *(_QWORD *)(a1 + 8);
      sub_2209710(v39, v24);
    }
    goto LABEL_18;
  }
LABEL_50:
  v22 = a1 + 8;
  if ( (unsigned int)(v6[2] + 64) > 0x7F )
    v22 = *(_QWORD *)(a1 + 8);
  v40 = v12;
  v41 = v22;
  v35 = sub_21F8B90(v22, v12, -v13);
  sub_220A970(v41, v40, (unsigned int)-v13);
  v12 = v40;
  if ( v10 > v40 )
    goto LABEL_53;
LABEL_10:
  v15 = *(_BYTE *)(a1 + 20);
  v16 = v15 & 7;
  if ( v10 == 1 && v12 != 1 )
  {
    if ( v16 == 1 || v16 != 3 && v16 )
    {
      v17 = (__int64 *)(a1 + 8);
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)a1 + 8LL) + 64) > 0x7F )
        v17 = *(__int64 **)(a1 + 8);
      v39 = *v17;
    }
    else
    {
      v39 = 0;
    }
LABEL_18:
    sub_21F9170((_QWORD *)a1);
    v15 = *(_BYTE *)(a1 + 20);
    *(_QWORD *)(a1 + 8) = v39;
    v16 = v15 & 7;
  }
  *(_QWORD *)a1 = a2;
  if ( v13 > 0 )
  {
    if ( v16 != 1 && (v16 == 3 || !v16) )
      goto LABEL_23;
    v19 = (void *)(a1 + 8);
    if ( (unsigned int)(a2[2] + 64) > 0x7F )
      v19 = *(void **)(a1 + 8);
    sub_220A060(v19);
    v15 = *(_BYTE *)(a1 + 20);
    v16 = v15 & 7;
  }
  if ( v16 == 1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 16LL) == 1 )
    {
      *a4 = v7[4] != 1;
      sub_21F9270((__int64 *)a1, 0, (v15 & 8) != 0, nullptr);
      return v38;
    }
    if ( v7[5] == 2 && *(_DWORD *)(*(_QWORD *)a1 + 20LL) != 2 )
      sub_21F9270((__int64 *)a1, 0, 0, nullptr);
    *a4 = v14 || v35 != 0;
    if ( !v14 && *(_UNKNOWN **)a1 == &unk_26F7B60 )
      sub_2209800(*(_QWORD *)(a1 + 8), 63);
    if ( v38 )
    {
      sub_21FD230((__int64 *)a1);
      result = 1;
    }
    else
    {
      result = 0;
    }
    v20 = *(_BYTE *)(a1 + 20);
    goto LABEL_35;
  }
  if ( v16 && v16 != 3 )
  {
    result = sub_21FAF10(a1, a3, v35);
    v20 = *(_BYTE *)(a1 + 20);
    *a4 = (_DWORD)result != 0;
    goto LABEL_35;
  }
LABEL_23:
  if ( !v16 )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 16LL) != 1 )
      goto LABEL_25;
    sub_21F9270((__int64 *)a1, 0, (v15 & 8) != 0, nullptr);
    v20 = *(_BYTE *)(a1 + 20);
    *a4 = 1;
    result = 16;
LABEL_35:
    if ( (v20 & 7) != 3 )
      return result;
    goto LABEL_26;
  }
  if ( *(_DWORD *)(*(_QWORD *)a1 + 20LL) == 2 )
  {
    if ( v7[5] == 2 )
    {
      v25 = 0;
      result = 0;
    }
    else
    {
      v25 = (v15 & 8) != 0;
      result = -v25 & 0x10;
    }
    v20 = *(_BYTE *)(a1 + 20) & 0xF7;
    *a4 = v25;
    *(_BYTE *)(a1 + 20) = v20;
    goto LABEL_35;
  }
LABEL_25:
  *a4 = 0;
  result = 0;
  if ( (v15 & 7) != 3 )
    return result;
LABEL_26:
  if ( !*(_BYTE *)(*(_QWORD *)a1 + 24LL) )
  {
    v36 = result;
    sub_21FAB90((__int64 *)a1, 0);
    return v36;
  }
  return result;
}
