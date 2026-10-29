// write access to const memory has been detected, the output may be wrong!
unsigned __int64 __fastcall sub_183D140(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned __int64 result; // rax
  _QWORD *v10; // rdx
  _QWORD *v11; // rsi
  unsigned __int64 *v12; // rax
  __int64 *v13; // rcx
  unsigned __int64 v14; // rsi
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // ecx
  __int64 v18; // rdx
  unsigned __int64 v19; // rax

  if ( !a2 || (*(_BYTE *)(a2 + 28) & 0x7F) != 0x18 )
  {
    HIDWORD(qword_60) = 0;
    BUG();
  }
  *(_DWORD *)(a2 + 100) = a3;
  sub_17A2E10(a1);
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_4;
  v12 = sub_B8C3D0(a2, a2, v5, v6, v7, v8);
  v13 = (__int64 *)*v12;
  v14 = *v12 + 8LL * *((unsigned int *)v12 + 2);
  if ( *v12 >= v14 )
  {
    if ( v13 == (__int64 *)v14 )
      goto LABEL_4;
    if ( *(_WORD *)(*(_QWORD *)v14 + 36LL) != 396 )
    {
      v15 = (__int64 *)(v14 + 8);
      while ( v13 != v15 )
      {
        v16 = *v15++;
        if ( *(_WORD *)(v16 + 36) == 396 )
          goto LABEL_27;
      }
      goto LABEL_4;
    }
LABEL_27:
    sub_1666E90(a1, 1, a3);
    goto LABEL_4;
  }
  v19 = *v12;
  while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 396 )
  {
    v19 += 8LL;
    if ( v14 == v19 )
      goto LABEL_4;
  }
  if ( v14 != v19 )
    goto LABEL_27;
LABEL_4:
  if ( *(_BYTE *)(a1 + 10972) )
  {
    result = *(unsigned int *)(a1 + 10964);
    v10 = *(_QWORD **)(a1 + 10952);
    v11 = &v10[result];
    if ( v10 != v11 )
    {
      result = *(_QWORD *)(a1 + 10952);
      if ( a2 == *v10 )
      {
LABEL_21:
        v17 = *(_DWORD *)(a1 + 10964) - 1;
        v18 = v10[v17];
        *(_DWORD *)(a1 + 10964) = v17;
        *(_QWORD *)result = v18;
        goto LABEL_20;
      }
      while ( 1 )
      {
        result += 8LL;
        if ( v11 == (_QWORD *)result )
          break;
        if ( a2 == *(_QWORD *)result )
          goto LABEL_21;
      }
    }
  }
  else
  {
    result = sub_2236570(a1 + 10952, a2);
    if ( result )
    {
      *(_QWORD *)result = -2;
      ++*(_DWORD *)(a1 + 10968);
LABEL_20:
      result = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL | 2;
      *(_QWORD *)(a2 + 8) = result;
    }
  }
  return result;
}
