signed __int64 __fastcall sub_7A3480(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  signed __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  v4 = *(_QWORD *)(a1 + 128);
  if ( v4 <= 7 )
  {
    result = a3 & 0xFFFFFFFFFFFFFFFBLL;
    *(_QWORD *)(a1 + 128) = a3 & 0xFFFFFFFFFFFFFFFBLL;
  }
  else
  {
    if ( (v4 & 4) == 0 )
    {
      v9 = operator new(0x30u);
      *(_QWORD *)v9 = v9 + 16;
      *(_QWORD *)(v9 + 8) = 0x400000000LL;
      v10 = v9 & 0xFFFFFFFFFFFFFFF8LL;
      v11 = *(unsigned int *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 12);
      *(_QWORD *)(a1 + 128) = v9 | 4;
      v12 = *(unsigned int *)((v9 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( v11 < v12 + 1 )
      {
        sub_25D6060(v10, v10 + 16, v12 + 1, 8);
        v12 = *(unsigned int *)(v10 + 8);
      }
      *(_QWORD *)(*(_QWORD *)v10 + 8 * v12) = v4 & 0xFFFFFFFFFFFFFFF8LL;
      v4 = *(_QWORD *)(a1 + 128);
      ++*(_DWORD *)(v10 + 8);
    }
    v5 = v4 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = *(unsigned int *)(v5 + 8);
    if ( *(unsigned int *)(v5 + 12) < (unsigned __int64)(v6 + 1) )
    {
      sub_25D6060(v5, v5 + 16, v6 + 1, 8);
      v6 = *(unsigned int *)(v5 + 8);
    }
    *(_QWORD *)(*(_QWORD *)v5 + 8 * v6) = a3;
    ++*(_DWORD *)(v5 + 8);
    result = *(_QWORD *)(a1 + 128);
  }
  if ( (unsigned __int64)result > 7 )
  {
    v8 = result >> 2;
    if ( (result & 4) == 0 )
    {
      if ( (v8 & 1) == 0 )
        return result;
      goto LABEL_9;
    }
    if ( *(_DWORD *)((result & 0xFFFFFFFFFFFFFFF8LL) + 8) && (v8 & 1) != 0 )
    {
LABEL_9:
      result &= 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)(result + 8) == 2 )
        return (signed __int64)sub_6B5A70(a2, (__int64)sub_7A0C80, a1 + 128);
    }
  }
  return result;
}

