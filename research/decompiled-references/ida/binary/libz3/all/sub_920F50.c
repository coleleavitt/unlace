__int64 __fastcall sub_920F50(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // r15
  __int64 v7; // r13
  int v8; // edx
  int v9; // edx
  __int64 v10; // rdx
  unsigned __int16 *v11; // rbx
  void *v12; // rdi
  __int64 v13; // rbp
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rbp
  void *v19; // rbx
  __int64 v20; // rsi

  v2 = *(_QWORD *)(a1 + 264);
  if ( !v2 )
    return result;
  v3 = *(unsigned int *)(v2 - 4);
  if ( a2 >= (unsigned int)v3 )
    goto LABEL_12;
  v5 = (unsigned int)(v3 - 1);
  v6 = 40 * v5;
  v7 = 40 * (v5 - ((unsigned int)v3 - a2 - 1));
  while ( 1 )
  {
    v11 = (unsigned __int16 *)(v6 + v2);
    v12 = qword_1C7F2C0;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 8LL * *v11) + 48LL * v11[1];
    *(_DWORD *)v13 = *((_DWORD *)v11 + 1);
    if ( (v11[6] & 1) != 0 )
      break;
    v8 = *((_DWORD *)v11 + 2);
    *(_BYTE *)(v13 + 12) &= ~1u;
    *(_DWORD *)(v13 + 8) = v8;
    if ( (v11[14] & 1) != 0 )
      goto LABEL_9;
LABEL_5:
    v9 = *((_DWORD *)v11 + 6);
    *(_BYTE *)(v13 + 28) &= ~1u;
    v2 = *(_QWORD *)(a1 + 264);
    *(_DWORD *)(v13 + 24) = v9;
    v10 = v6 - 40;
    if ( v7 == v6 )
      goto LABEL_10;
LABEL_6:
    v6 = v10;
  }
  result = sub_182C690(v12, v13 + 8, v11 + 4);
  if ( (v11[14] & 1) == 0 )
    goto LABEL_5;
LABEL_9:
  result = sub_182C690(v12, v13 + 24, v11 + 12);
  v2 = *(_QWORD *)(a1 + 264);
  v10 = v6 - 40;
  if ( v7 != v6 )
    goto LABEL_6;
LABEL_10:
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
LABEL_12:
    v15 = 40 * v3;
    v16 = v2 + v15;
    v17 = 40LL * a2;
    v18 = v2 + v17;
    if ( v17 != v15 )
    {
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v18 + 8);
        v20 = v18 + 24;
        v18 += 40;
        sub_182CBA0(v19, v20);
      }
      while ( v16 != v18 );
      v2 = *(_QWORD *)(a1 + 264);
    }
    *(_DWORD *)(v2 - 4) = a2;
    return a2;
  }
  return result;
}

