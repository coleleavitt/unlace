__int64 __fastcall sub_9E7FE0(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  int *v8; // rax
  int v9; // eax
  int v10; // r9d
  void *v11; // r13
  int v12; // edx
  int v13; // edx
  unsigned int v14; // ebp
  int *v15; // rax
  unsigned int v17; // eax
  int v18; // [rsp+4h] [rbp-54h]
  int v19; // [rsp+4h] [rbp-54h]
  int v20; // [rsp+4h] [rbp-54h]
  unsigned int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-4Ch]
  signed int v25; // [rsp+10h] [rbp-48h]
  int v26; // [rsp+14h] [rbp-44h]
  __int64 v27; // [rsp+18h] [rbp-40h]
  __int64 v28; // [rsp+18h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    v25 = *(_DWORD *)(v4 - 4);
  else
    v25 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 632) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 656) + 4LL * a2) & 0xFFFFFFF));
  if ( !v5 )
    return (unsigned int)-1;
  v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
  if ( v5 == v6 )
    return (unsigned int)-1;
  v26 = 0;
  v18 = 0x7FFFFFFF;
  v21 = v25;
  v24 = 0x7FFFFFFF;
  do
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v5 + 32);
      if ( v14 == -1 || a2 == v14 )
        goto LABEL_16;
      if ( *(int *)v5 <= 0 )
        break;
      v7 = *(_QWORD *)(a1 + 688);
      if ( !*(_QWORD *)(v7 + 8LL * v14)
        || (v27 = *(_QWORD *)(v7 + 8LL * v14), v8 = sub_9AA900(a1, v14), sub_927C80((__int64)v8, v27 + 16)) )
      {
LABEL_8:
        v9 = sub_995430((_QWORD *)a1, v14, v18);
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 648) + 16LL * v14 + 8);
        if ( v18 > v9 || v24 > v10 && v18 == v9 )
        {
          v11 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
          {
            v23 = *(_DWORD *)(*(_QWORD *)(a1 + 648) + 16LL * v14 + 8);
            v20 = v9;
            sub_182C690(qword_1C7F2C0, a3, v5);
            v10 = v23;
            v9 = v20;
          }
          else
          {
            v12 = *(_DWORD *)v5;
            *(_BYTE *)(a3 + 4) &= ~1u;
            *(_DWORD *)a3 = v12;
          }
          if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
          {
            v19 = v9;
            v22 = v10;
            sub_182C690(v11, a3 + 16, v5 + 16);
            v10 = v22;
            v9 = v19;
          }
          else
          {
            v13 = *(_DWORD *)(v5 + 16);
            *(_BYTE *)(a3 + 20) &= ~1u;
            *(_DWORD *)(a3 + 16) = v13;
          }
          v21 = v14;
          v18 = v9;
          v24 = v10;
          v26 = 1;
        }
        else if ( v24 == v10 && v18 == v9 )
        {
          ++v26;
          v17 = 214013 * *(_DWORD *)(a1 + 1016) + 2531011;
          *(_DWORD *)(a1 + 1016) = v17;
          if ( !((int)(HIWORD(v17) & 0x7FFF) % v26) )
          {
            sub_27B950((__int64)qword_1C7F2C0, a3, (int *)v5);
            v21 = v14;
          }
        }
      }
LABEL_16:
      v5 += 40;
      if ( v6 == v5 )
        goto LABEL_23;
    }
    v28 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v14);
    if ( !v28 )
      goto LABEL_8;
    v15 = sub_9AA900(a1, v14);
    if ( sub_927C80(v28 + 16, (__int64)v15) )
      goto LABEL_8;
    v5 += 40;
  }
  while ( v6 != v5 );
LABEL_23:
  if ( v25 <= (int)v21 )
    return (unsigned int)-1;
  return v21;
}

