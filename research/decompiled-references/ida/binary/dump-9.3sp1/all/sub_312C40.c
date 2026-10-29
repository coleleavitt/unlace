__int64 __fastcall sub_312C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rdx
  __int64 result; // rax
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 i; // rdi
  __int64 v12; // rax
  __int64 v13; // r12
  void *v14; // rax

  v4 = *(_DWORD *)a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v5 = *(unsigned int *)(a2 + 4);
  result = v4 & 0xF;
  *(_DWORD *)(a1 + 4) = v5;
  switch ( (int)result )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      result = *(_QWORD *)(a2 + 24);
      *(_QWORD *)(a1 + 24) = result;
      break;
    case 2:
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v13 = *(_QWORD *)(a2 + 16);
      if ( v13 )
      {
        v14 = (void *)qalloc_or_throw(16 * v13, a2, v5, a4);
        *(_QWORD *)(a1 + 24) = v13;
        *(_QWORD *)(a1 + 8) = v14;
        result = (__int64)memcpy(v14, *(const void **)(a2 + 8), 16 * v13);
        *(_QWORD *)(a1 + 16) = v13;
      }
      break;
    case 6:
    case 7:
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v8 = *(_QWORD *)(a2 + 16);
      if ( v8 )
      {
        v9 = 0;
        v10 = qalloc_or_throw(32 * v8, a2, v5, a4);
        *(_QWORD *)(a1 + 24) = v8;
        *(_QWORD *)(a1 + 8) = v10;
        for ( i = v10; ; i = *(_QWORD *)(a1 + 8) )
        {
          v12 = v9++;
          result = sub_312C40(32 * v12 + i, 32 * v12 + *(_QWORD *)(a2 + 8));
          if ( v8 == v9 )
            break;
        }
        *(_QWORD *)(a1 + 16) = v8;
      }
      break;
    default:
      if ( !under_debugger )
        sub_383060(51738);
      BUG();
  }
  return result;
}
