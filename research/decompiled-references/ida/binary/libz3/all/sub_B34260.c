__int64 __fastcall sub_B34260(__int64 a1, unsigned int *a2, unsigned int a3, int a4)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rdx
  unsigned int **v10; // r13
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rdi
  _DWORD v14[18]; // [rsp+0h] [rbp-48h] BYREF

  if ( !a2 )
  {
    *(_QWORD *)(a1 + 448) = 0;
    return 1;
  }
  v6 = *(_QWORD *)(a1 - 40);
  v7 = *(_QWORD *)(v6 + 8656);
  if ( !v7 || (v9 = *a2, (unsigned int)v9 >= *(_DWORD *)(v7 - 4)) || (v10 = *(unsigned int ***)(v7 + 8 * v9)) == nullptr )
  {
    *(_QWORD *)(a1 + 448) = a2;
    return 1;
  }
  if ( (*((_BYTE *)v10 + 44) & 0x40) == 0 )
  {
    sub_16744A0(v14, *(_QWORD *)(a1 - 32));
    if ( v14[0] != -1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 - 40) + 8672LL);
      if ( !v13 )
      {
LABEL_17:
        v11 = sub_AB5A20(v13, a3, (__int64)v10);
        goto LABEL_7;
      }
      if ( v14[0] < *(_DWORD *)(v13 - 4) )
      {
        v13 = *(_QWORD *)(v13 + 8LL * v14[0]);
        goto LABEL_17;
      }
    }
    v13 = 0;
    goto LABEL_17;
  }
  v11 = *(_DWORD *)(*(_QWORD *)(v6 + 8832) + 4LL * **v10);
LABEL_7:
  result = 0;
  if ( v11 != 0x7FFFFFFF && !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 - 40) + 8848LL) + (unsigned int)(2 * v11)) )
  {
    *(_QWORD *)(a1 + 448) = a2;
    *(_DWORD *)(a1 + 456) = a3;
    *(_DWORD *)(a1 + 460) = a4;
    return 1;
  }
  return result;
}

