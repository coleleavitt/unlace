__int64 __fastcall sub_15DCED0(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbp
  __int64 result; // rax
  __int64 *v5; // r14
  __int64 v6; // rbx
  __int64 *v7; // rbx
  __int64 v8; // r12
  char v9; // al
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rsi
  void **v18; // rax
  void **v19; // r15
  void *v20; // rdi
  int v21; // [rsp+8h] [rbp-50h]
  unsigned __int64 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  void **v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v3 = *(__int64 **)(a2 + 8);
  result = *(unsigned int *)(a2 + 16);
  v5 = &v3[result];
  if ( v3 != v5 )
  {
    while ( 1 )
    {
      v8 = *v3;
      v9 = *(_BYTE *)(*v3 + 58);
      if ( (v9 & 4) != 0 )
      {
        v11 = 1120;
        v10 = 14;
      }
      else if ( (v9 & 8) != 0 )
      {
        v11 = 240;
        v10 = 3;
      }
      else if ( (v9 & 0x10) != 0 )
      {
        v11 = 160;
        v10 = 2;
      }
      else if ( (v9 & 0x20) != 0 )
      {
        v11 = 80;
        v10 = 1;
      }
      else
      {
        v10 = *(unsigned __int16 *)(v8 + 56);
        v11 = 80 * v10;
      }
      v12 = *(unsigned int *)(a1 + 104);
      if ( v12 <= v10 )
      {
        v13 = v10 + 1;
        if ( v12 != v13 )
          break;
      }
      v6 = *(_QWORD *)(a1 + 96);
LABEL_4:
      v7 = (__int64 *)(v11 + v6);
      result = *((unsigned int *)v7 + 2);
      if ( result + 1 > (unsigned __int64)*((unsigned int *)v7 + 3) )
      {
        ++v3;
        sub_2237220(v7, v7 + 2, result + 1, 8);
        result = *v7;
        *(_QWORD *)(*v7 + 8LL * (unsigned int)(*((_DWORD *)v7 + 2))++) = v8;
        if ( v5 == v3 )
          return result;
      }
      else
      {
        ++v3;
        *(_QWORD *)(*v7 + 8 * result) = v8;
        ++*((_DWORD *)v7 + 2);
        if ( v5 == v3 )
          return result;
      }
    }
    v14 = 80 * v13;
    if ( v12 > v13 )
    {
      v6 = *(_QWORD *)(a1 + 96);
      v18 = (void **)(v6 + 80 * v12);
      v19 = (void **)(v6 + v14);
      if ( v18 == v19 )
        goto LABEL_19;
      while ( 1 )
      {
        v18 -= 10;
        v20 = *v18;
        if ( *v18 != v18 + 2 )
          break;
LABEL_30:
        if ( v19 == v18 )
          goto LABEL_18;
      }
      while ( 1 )
      {
        v25 = v11;
        v24 = v18;
        v22 = v13;
        free(v20);
        v13 = v22;
        v11 = v25;
        if ( v19 == v24 )
          break;
        v18 = v24 - 10;
        v20 = *(v24 - 10);
        if ( *v18 == v18 + 2 )
          goto LABEL_30;
      }
    }
    else
    {
      if ( v13 > *(unsigned int *)(a1 + 108) )
      {
        v23 = v11;
        v21 = v13;
        sub_15DCB80(a1 + 96, v13);
        v12 = *(unsigned int *)(a1 + 104);
        v11 = v23;
        LODWORD(v13) = v21;
      }
      v6 = *(_QWORD *)(a1 + 96);
      v15 = v6 + 80 * v12;
      v16 = v6 + v14;
      if ( v15 == v16 )
        goto LABEL_19;
      do
      {
        v17 = v15 + 16;
        *(_DWORD *)(v15 + 8) = 0;
        v15 += 80;
        *(_QWORD *)(v15 - 80) = v17;
        *(_DWORD *)(v15 - 68) = 8;
      }
      while ( v16 != v15 );
    }
LABEL_18:
    v6 = *(_QWORD *)(a1 + 96);
LABEL_19:
    *(_DWORD *)(a1 + 104) = v13;
    goto LABEL_4;
  }
  return result;
}
