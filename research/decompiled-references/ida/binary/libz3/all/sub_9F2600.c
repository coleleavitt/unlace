__int64 __fastcall sub_9F2600(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rsi
  int v9; // eax
  int v10; // r9d
  void *v11; // r13
  int v12; // edx
  int v13; // edx
  unsigned int v14; // ebp
  __int64 v15; // rax
  unsigned int v17; // eax
  int v19; // [rsp+4h] [rbp-54h]
  int v20; // [rsp+4h] [rbp-54h]
  int v21; // [rsp+4h] [rbp-54h]
  unsigned int v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+8h] [rbp-50h]
  int v25; // [rsp+Ch] [rbp-4Ch]
  __int64 v26; // [rsp+10h] [rbp-48h]
  __int64 v27; // [rsp+10h] [rbp-48h]
  signed int v28; // [rsp+18h] [rbp-40h]
  int v29; // [rsp+1Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    v28 = *(_DWORD *)(v4 - 4);
  else
    v28 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 568) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 592) + 4LL * a2) & 0xFFFFFFF));
  if ( !v5 )
    return (unsigned int)-1;
  v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
  if ( v5 == v6 )
    return (unsigned int)-1;
  v29 = 0;
  v19 = 0x7FFFFFFF;
  v22 = v28;
  v25 = 0x7FFFFFFF;
  do
  {
    v14 = *(_DWORD *)(v5 + 32);
    if ( v14 == -1 || a2 == v14 )
      goto LABEL_17;
    if ( *(int *)v5 >= 0 )
    {
      v26 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * v14);
      if ( v26 )
      {
        v7 = sub_999800(a1, v14);
        v8 = v26 + 16;
        goto LABEL_8;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 624);
      if ( *(_QWORD *)(v15 + 8LL * v14) )
      {
        v27 = *(_QWORD *)(v15 + 8LL * v14);
        v8 = sub_999800(a1, v14);
        v7 = v27 + 16;
LABEL_8:
        if ( !sub_3ED700((__int64)qword_1C7F2C0, v8, v7) )
          goto LABEL_17;
      }
    }
    v9 = sub_99BE30((_QWORD *)a1, v14, v19);
    v10 = *(_DWORD *)(*(_QWORD *)(a1 + 584) + 16LL * v14 + 8);
    if ( v19 > v9 || v25 > v10 && v19 == v9 )
    {
      v11 = qword_1C7F2C0;
      if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
      {
        v24 = *(_DWORD *)(*(_QWORD *)(a1 + 584) + 16LL * v14 + 8);
        v21 = v9;
        sub_182C690(qword_1C7F2C0, a3, v5);
        v10 = v24;
        v9 = v21;
      }
      else
      {
        v12 = *(_DWORD *)v5;
        *(_BYTE *)(a3 + 4) &= ~1u;
        *(_DWORD *)a3 = v12;
      }
      if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
      {
        v20 = v9;
        v23 = v10;
        sub_182C690(v11, a3 + 16, v5 + 16);
        v10 = v23;
        v9 = v20;
      }
      else
      {
        v13 = *(_DWORD *)(v5 + 16);
        *(_BYTE *)(a3 + 20) &= ~1u;
        *(_DWORD *)(a3 + 16) = v13;
      }
      v22 = v14;
      v19 = v9;
      v25 = v10;
      v29 = 1;
    }
    else if ( v25 == v10 && v19 == v9 )
    {
      ++v29;
      v17 = 214013 * *(_DWORD *)(a1 + 920) + 2531011;
      *(_DWORD *)(a1 + 920) = v17;
      if ( !((int)(HIWORD(v17) & 0x7FFF) % v29) )
      {
        sub_27B950((__int64)qword_1C7F2C0, a3, (int *)v5);
        v22 = v14;
      }
    }
LABEL_17:
    v5 += 40;
  }
  while ( v6 != v5 );
  if ( v28 <= (int)v22 )
    return (unsigned int)-1;
  return v22;
}

