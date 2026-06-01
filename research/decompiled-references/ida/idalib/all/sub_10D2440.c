__int64 __fastcall sub_10D2440(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 result; // rax
  unsigned __int64 v12; // rcx

  v8 = *(unsigned int *)(a1 + 8);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_2237220(a1, a1 + 16, v8 + 1, 8);
    v8 = *(unsigned int *)(a1 + 8);
  }
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v8) = a2;
  v9 = *(unsigned int *)(a1 + 48);
  v10 = *(unsigned int *)(a1 + 52);
  ++*(_DWORD *)(a1 + 8);
  if ( v9 + 1 > v10 )
  {
    sub_2237220(a1 + 40, a1 + 56, v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 48);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v9) = a3;
  result = *(unsigned int *)(a1 + 88);
  v12 = *(unsigned int *)(a1 + 92);
  ++*(_DWORD *)(a1 + 48);
  if ( result + 1 > v12 )
  {
    sub_2237220(a1 + 80, a1 + 96, result + 1, 8);
    result = *(unsigned int *)(a1 + 88);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8 * result) = a4;
  ++*(_DWORD *)(a1 + 88);
  if ( (a5 & 4) != 0 )
  {
    result = *(unsigned int *)(a1 + 128);
    if ( *(unsigned int *)(a1 + 132) < (unsigned __int64)(result + 1) )
    {
      sub_2237220(a1 + 120, a1 + 136, result + 1, 4);
      result = *(unsigned int *)(a1 + 128);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * result) = 4;
    ++*(_DWORD *)(a1 + 128);
    if ( (a5 & 2) == 0 )
    {
LABEL_9:
      if ( (a5 & 8) == 0 )
        goto LABEL_10;
      goto LABEL_18;
    }
  }
  else if ( (a5 & 2) == 0 )
  {
    goto LABEL_9;
  }
  result = *(unsigned int *)(a1 + 128);
  if ( *(unsigned int *)(a1 + 132) < (unsigned __int64)(result + 1) )
  {
    sub_2237220(a1 + 120, a1 + 136, result + 1, 4);
    result = *(unsigned int *)(a1 + 128);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * result) = 2;
  ++*(_DWORD *)(a1 + 128);
  if ( (a5 & 8) == 0 )
  {
LABEL_10:
    if ( (a5 & 0x10) == 0 )
      return result;
    goto LABEL_21;
  }
LABEL_18:
  result = *(unsigned int *)(a1 + 128);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
  {
    sub_2237220(a1 + 120, a1 + 136, result + 1, 4);
    result = *(unsigned int *)(a1 + 128);
  }
  *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * result) = 8;
  ++*(_DWORD *)(a1 + 128);
  if ( (a5 & 0x10) != 0 )
  {
LABEL_21:
    result = *(unsigned int *)(a1 + 128);
    if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 132) )
    {
      sub_2237220(a1 + 120, a1 + 136, result + 1, 4);
      result = *(unsigned int *)(a1 + 128);
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 120) + 4 * result) = 16;
    ++*(_DWORD *)(a1 + 128);
  }
  return result;
}
