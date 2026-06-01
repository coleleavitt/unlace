__int64 __fastcall sub_9FF520(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // rbx
  int *v7; // rax
  int v8; // eax
  int v9; // r9d
  void *v10; // r13
  int v11; // edx
  int v12; // edx
  unsigned int v13; // ebp
  __int64 v14; // rax
  int *v15; // rax
  unsigned int v17; // eax
  int v18; // [rsp+4h] [rbp-54h]
  int v19; // [rsp+4h] [rbp-54h]
  int v20; // [rsp+4h] [rbp-54h]
  unsigned int v21; // [rsp+8h] [rbp-50h]
  int v22; // [rsp+8h] [rbp-50h]
  int v23; // [rsp+8h] [rbp-50h]
  int v24; // [rsp+Ch] [rbp-4Ch]
  __int64 v25; // [rsp+10h] [rbp-48h]
  __int64 v26; // [rsp+10h] [rbp-48h]
  signed int v27; // [rsp+18h] [rbp-40h]
  int v28; // [rsp+1Ch] [rbp-3Ch]

  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    v27 = *(_DWORD *)(v4 - 4);
  else
    v27 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 696) + 24LL * (*(_DWORD *)(*(_QWORD *)(a1 + 720) + 4LL * a2) & 0xFFFFFFF));
  if ( !v5 )
    return (unsigned int)-1;
  v6 = v5 + 40LL * *(unsigned int *)(v5 - 4);
  if ( v5 == v6 )
    return (unsigned int)-1;
  v28 = 0;
  v18 = 0x7FFFFFFF;
  v21 = v27;
  v24 = 0x7FFFFFFF;
  do
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v5 + 32);
      if ( v13 == -1 || a2 == v13 )
        goto LABEL_16;
      if ( *(int *)v5 < 0 )
        break;
      v25 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v13);
      if ( !v25 || (v7 = sub_9AD4F0(a1, v13), sub_33D280(v25 + 16, (__int64)v7)) )
      {
LABEL_8:
        v8 = sub_9A2380((_QWORD *)a1, v13, v18);
        v9 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 16LL * v13 + 8);
        if ( v18 > v8 || v24 > v9 && v18 == v8 )
        {
          v10 = qword_1C7F2C0;
          if ( (*(_BYTE *)(v5 + 4) & 1) != 0 )
          {
            v23 = *(_DWORD *)(*(_QWORD *)(a1 + 712) + 16LL * v13 + 8);
            v20 = v8;
            sub_182C690(qword_1C7F2C0, a3, v5);
            v9 = v23;
            v8 = v20;
          }
          else
          {
            v11 = *(_DWORD *)v5;
            *(_BYTE *)(a3 + 4) &= ~1u;
            *(_DWORD *)a3 = v11;
          }
          if ( (*(_BYTE *)(v5 + 20) & 1) != 0 )
          {
            v19 = v8;
            v22 = v9;
            sub_182C690(v10, a3 + 16, v5 + 16);
            v9 = v22;
            v8 = v19;
          }
          else
          {
            v12 = *(_DWORD *)(v5 + 16);
            *(_BYTE *)(a3 + 20) &= ~1u;
            *(_DWORD *)(a3 + 16) = v12;
          }
          v21 = v13;
          v18 = v8;
          v24 = v9;
          v28 = 1;
        }
        else if ( v24 == v9 && v18 == v8 )
        {
          ++v28;
          v17 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
          *(_DWORD *)(a1 + 1112) = v17;
          if ( !((int)(HIWORD(v17) & 0x7FFF) % v28) )
          {
            sub_27B950((__int64)qword_1C7F2C0, a3, (int *)v5);
            v21 = v13;
          }
        }
      }
LABEL_16:
      v5 += 40;
      if ( v6 == v5 )
        goto LABEL_23;
    }
    v14 = *(_QWORD *)(a1 + 752);
    if ( !*(_QWORD *)(v14 + 8LL * v13) )
      goto LABEL_8;
    v26 = *(_QWORD *)(v14 + 8LL * v13);
    v15 = sub_9AD4F0(a1, v13);
    if ( sub_33D280((__int64)v15, v26 + 16) )
      goto LABEL_8;
    v5 += 40;
  }
  while ( v6 != v5 );
LABEL_23:
  if ( v27 <= (int)v21 )
    return (unsigned int)-1;
  return v21;
}

