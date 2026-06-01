unsigned __int64 __fastcall sub_EFEBC0(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdx
  __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rcx
  unsigned int v17; // [rsp+Ch] [rbp-1Ch]

  v3 = *a1;
  v4 = *(unsigned int *)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 12);
  v6 = v4 + 1;
  if ( *a1 - 1 <= 0xFFFFFFFFFFFFFFD1LL )
  {
    if ( v6 > v5 )
    {
      sub_22134E0(a2, a2 + 16, v6, 4);
      v4 = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * v4) = 0;
    v13 = *(unsigned int *)(a2 + 12);
    v14 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = v14;
    if ( v14 + 1 > v13 )
    {
      sub_22134E0(a2, a2 + 16, v14 + 1, 4);
      v14 = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * v14) = v3;
    v15 = HIDWORD(v3);
    v16 = *(unsigned int *)(a2 + 12);
    result = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    *(_DWORD *)(a2 + 8) = result;
    if ( result + 1 > v16 )
    {
      sub_22134E0(a2, a2 + 16, result + 1, 4);
      result = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * result) = v15;
    ++*(_DWORD *)(a2 + 8);
  }
  else
  {
    v8 = v4;
    if ( v6 > v5 )
    {
      sub_22134E0(a2, a2 + 16, v6, 4);
      v8 = *(unsigned int *)(a2 + 8);
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * v8) = 1;
    v9 = *(unsigned int *)(a2 + 12);
    v10 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v11 = *a1;
    *(_DWORD *)(a2 + 8) = v10;
    result = -(__int64)v11;
    if ( result >= 0x2E )
      result = 0;
    if ( v10 + 1 > v9 )
    {
      v17 = result;
      sub_22134E0(a2, a2 + 16, v10 + 1, 4);
      v10 = *(unsigned int *)(a2 + 8);
      result = v17;
    }
    *(_DWORD *)(*(_QWORD *)a2 + 4 * v10) = result;
    ++*(_DWORD *)(a2 + 8);
  }
  return result;
}

