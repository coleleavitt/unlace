__int64 __fastcall sub_30D380(__int64 a1, int *a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 i; // rdi
  __int64 v9; // rax
  __int64 v10; // r12
  void *v11; // rax

  v2 = *a2;
  *(_DWORD *)a1 = *a2;
  result = v2 & 0xF;
  *(_DWORD *)(a1 + 4) = a2[1];
  switch ( (int)result )
  {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 8:
      *(_QWORD *)(a1 + 8) = *((_QWORD *)a2 + 1);
      *(_QWORD *)(a1 + 16) = *((_QWORD *)a2 + 2);
      result = *((_QWORD *)a2 + 3);
      *(_QWORD *)(a1 + 24) = result;
      break;
    case 2:
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v10 = *((_QWORD *)a2 + 2);
      if ( v10 )
      {
        v11 = (void *)qalloc_or_throw(16 * v10);
        *(_QWORD *)(a1 + 24) = v10;
        *(_QWORD *)(a1 + 8) = v11;
        result = (__int64)memcpy(v11, *((const void **)a2 + 1), 16 * v10);
        *(_QWORD *)(a1 + 16) = v10;
      }
      break;
    case 6:
    case 7:
      *(_QWORD *)(a1 + 8) = 0;
      *(_OWORD *)(a1 + 16) = 0;
      v5 = *((_QWORD *)a2 + 2);
      if ( v5 )
      {
        v6 = 0;
        v7 = qalloc_or_throw(32 * v5);
        *(_QWORD *)(a1 + 24) = v5;
        *(_QWORD *)(a1 + 8) = v7;
        for ( i = v7; ; i = *(_QWORD *)(a1 + 8) )
        {
          v9 = v6++;
          result = sub_30D380(32 * v9 + i, 32 * v9 + *((_QWORD *)a2 + 1));
          if ( v5 == v6 )
            break;
        }
        *(_QWORD *)(a1 + 16) = v5;
      }
      break;
    default:
      if ( !under_debugger )
        sub_37CFE0(51738);
      BUG();
  }
  return result;
}
