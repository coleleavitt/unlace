__int64 __fastcall sub_7467A0(__int64 a1, unsigned int a2, unsigned __int16 *a3)
{
  int v4; // eax
  unsigned int v5; // r13d
  unsigned __int64 v6; // r11
  int v7; // r8d
  char *v9; // r14
  size_t v10; // r12
  unsigned int v11; // edi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // r9
  int v15; // r10d
  __int64 v16; // rax
  int i; // edx
  unsigned __int8 v18; // si
  unsigned __int8 v19; // cl
  unsigned __int64 v20; // rdx
  __int64 result; // rax
  __int64 *v22; // rbx
  void *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax

  if ( !*(_QWORD *)a1 )
    return 0;
  v4 = *(_DWORD *)(a1 + 1564);
  if ( v4 == 5 )
    return 0;
  if ( v4 != 4 )
  {
    if ( !under_debugger )
      interr(1682);
    BUG();
  }
  v5 = *(unsigned __int16 *)(a1 + 16);
  v6 = *a3;
  v7 = a2;
  v9 = (char *)(a3 + 1);
  v10 = v6;
  v11 = v5 - a2;
  if ( (int)(v5 - a2) < 0 )
  {
    v5 = a2;
    v12 = a1 + 18;
    goto LABEL_16;
  }
  v12 = a1 + 18;
  v13 = v11;
  if ( v6 <= v11 )
    v13 = *a3;
  v14 = v12 + a2;
  v15 = v13;
  if ( !v13 )
  {
    if ( v6 != v11 )
    {
      if ( v6 >= v11 )
      {
        v5 = a2;
        goto LABEL_16;
      }
      goto LABEL_27;
    }
LABEL_15:
    v7 = v5;
    v10 = 0;
    LOWORD(v6) = 0;
    goto LABEL_16;
  }
  v16 = 0;
  for ( i = 1; ; ++i )
  {
    v18 = *(_BYTE *)(v14 + v16);
    v19 = *((_BYTE *)a3 + v16 + 2);
    if ( v18 != v19 )
    {
      if ( v18 < v19 )
        i = -i;
      if ( !i )
        goto LABEL_15;
      if ( i <= 0 )
      {
        v7 = v7 - 1 - i;
        LODWORD(v6) = v6 + i + 1;
        v5 = v7;
        v9 += ~i;
        v10 = (int)v6;
        goto LABEL_16;
      }
LABEL_27:
      sub_743130();
    }
    ++v16;
    if ( v15 < i + 1 )
      break;
  }
  if ( v6 == v11 )
    goto LABEL_15;
  if ( v6 < v11 )
    goto LABEL_27;
  v7 += i;
  LODWORD(v6) = v6 - i;
  v9 += i;
  v10 = (int)v6;
  v5 = v7;
LABEL_16:
  *(_WORD *)(a1 + 16) = v7 + v6;
  memcpy((void *)(v12 + v7), v9, v10);
  sub_3A0970(*(__int64 **)a1, v5);
  sub_738170(*(__int64 **)a1, v9, v10);
  sub_738170(*(__int64 **)a1, (char *)a3 + *a3 + 4, *(unsigned __int16 *)((char *)a3 + *a3 + 2));
  v20 = *(_QWORD *)(a1 + 8);
  result = 1;
  if ( v20 )
  {
    v22 = *(__int64 **)a1;
    if ( v20 < *(_QWORD *)(*(_QWORD *)a1 + 8LL) )
    {
      v23 = (void *)*v22;
      if ( *v22 )
      {
        v22[1] = 0;
        qfree(v23);
        *v22 = 0;
        v22[2] = 0;
        v22 = *(__int64 **)a1;
      }
      *(_DWORD *)(a1 + 1564) = 5;
      v24 = v22[1];
      v25 = *v22;
      if ( v22[2] < (unsigned __int64)(v24 + 1) )
      {
        v26 = qvector_reserve(v22, v25, v24 + 1, 1);
        *v22 = v26;
        v25 = v26;
        v24 = v22[1];
      }
      *(_BYTE *)(v25 + v24) = 5;
      ++v22[1];
      return 0;
    }
  }
  return result;
}
