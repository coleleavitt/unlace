char __fastcall sub_EF9EB0(__int64 a1, __int64 a2)
{
  char result; // al
  int v4; // eax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned int *v11; // rdi
  void *v12; // rdx
  char v13; // al
  __int64 v14; // rsi
  char v15; // bl
  __int64 v16; // rsi
  void *v17; // rbx
  char v18; // bp
  char v19; // [rsp+1h] [rbp-159h]
  char v20; // [rsp+1h] [rbp-159h]
  char v21; // [rsp+1h] [rbp-159h]
  char v22; // [rsp+1h] [rbp-159h]
  void *v23; // [rsp+2h] [rbp-158h] BYREF
  int v24; // [rsp+Ah] [rbp-150h]
  char v25; // [rsp+Eh] [rbp-14Ch]
  void *v26; // [rsp+12h] [rbp-148h] BYREF
  __int64 v27; // [rsp+1Ah] [rbp-140h]
  _BYTE v28[128]; // [rsp+22h] [rbp-138h] BYREF
  void *ptr; // [rsp+A2h] [rbp-B8h] BYREF
  __int64 v30; // [rsp+AAh] [rbp-B0h]
  _BYTE v31[168]; // [rsp+B2h] [rbp-A8h] BYREF

  if ( (*(_DWORD *)a1 & 0x7FFFFFFF) != (*(_DWORD *)a2 & 0x7FFFFFFF) )
    return 0;
  switch ( *(_DWORD *)a1 & 0x7FFFFFFF )
  {
    case 0:
    case 1:
    case 3:
      return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
    case 2:
      if ( *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
        return 0;
      return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8);
    case 4:
      if ( *(_QWORD *)(a1 + 16) != *(_QWORD *)(a2 + 16) )
        return 0;
      v12 = *(void **)(a2 + 8);
      v13 = *(_BYTE *)(a2 + 7) >> 7;
      v14 = *(_DWORD *)(a2 + 4) & 0x7FFFFFFF;
      v15 = *(_BYTE *)(a2 + 7) >> 7;
      if ( (unsigned int)v14 > 0x40 )
      {
        sub_21E18C0(&ptr, v14, v12, ((unsigned __int64)(unsigned int)v14 + 63) >> 6);
        BYTE4(v27) = v15;
        LODWORD(v27) = v30;
        v26 = ptr;
      }
      else
      {
        LODWORD(v27) = v14;
        v26 = v12;
        BYTE4(v27) = v13;
      }
      v16 = *(_DWORD *)(a1 + 4) & 0x7FFFFFFF;
      v17 = *(void **)(a1 + 8);
      if ( (unsigned int)v16 <= 0x40
        || (v18 = *(_BYTE *)(a1 + 7) >> 7,
            sub_21E18C0(&ptr, v16, *(_QWORD *)(a1 + 8), ((unsigned __int64)(unsigned int)v16 + 63) >> 6),
            v25 = v18,
            v17 = ptr,
            v24 = v30,
            v23 = ptr,
            (unsigned int)v30 <= 0x40) )
      {
        result = v26 == v17;
      }
      else
      {
        result = sub_21E2030(&v23, &v26);
        if ( v17 )
        {
          v22 = result;
          operator delete[](v17);
          result = v22;
        }
      }
      if ( (unsigned int)v27 > 0x40 )
      {
        if ( v26 )
        {
          v21 = result;
          operator delete[](v26);
          return v21;
        }
      }
      return result;
    case 5:
      v7 = *(_QWORD *)(a2 + 16);
      v8 = *(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL];
      v9 = *(_QWORD *)&byte_8[*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF0LL];
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v9 | (unsigned __int8)*(_QWORD *)(a1 + 16)) & 7;
      LOBYTE(v9) = v8 | v7;
      result = 0;
      if ( v10 == (v8 & 0xFFFFFFFFFFFFFFF8LL | v9 & 7) )
      {
        v11 = *(unsigned int **)(a1 + 8);
        ptr = v31;
        v26 = v28;
        v27 = 0x2000000000LL;
        v30 = 0x2000000000LL;
        sub_A2C1C0(v11, (__int64)&v26);
        sub_A2C1C0(*(unsigned int **)(a2 + 8), (__int64)&ptr);
        result = sub_21FF190(&v26, &ptr);
        if ( ptr != v31 )
        {
          v19 = result;
          free(ptr);
          result = v19;
        }
        if ( v26 != v28 )
        {
          v20 = result;
          free(v26);
          return v20;
        }
      }
      return result;
    case 6:
    case 7:
      if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)(a2 + 8) )
        return 0;
      return *(_DWORD *)(a1 + 4) == *(_DWORD *)(a2 + 4);
    case 8:
      return *(_QWORD *)(a1 + 8) == *(_QWORD *)(a2 + 8) && ((*(_BYTE *)(a2 + 4) ^ *(_BYTE *)(a1 + 4)) & 1) == 0;
    case 9:
      v4 = *(_DWORD *)(a1 + 4);
      if ( v4 != *(_DWORD *)(a2 + 4) )
        return 0;
      if ( !v4 )
        return 1;
      v5 = 0;
      v6 = 8 * (3LL * (unsigned int)(v4 - 1) + 3);
      break;
  }
  do
  {
    if ( !(unsigned __int8)sub_EF9EB0(v5 + *(_QWORD *)(a1 + 8), v5 + *(_QWORD *)(a2 + 8)) )
      return 0;
    v5 += 24;
  }
  while ( v6 != v5 );
  return 1;
}

