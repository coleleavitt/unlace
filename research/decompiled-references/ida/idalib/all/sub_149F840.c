__int64 __fastcall sub_149F840(__int64 *a1, __int64 a2, __int64 a3)
{
  void *v3; // r8
  __int64 *v4; // r12
  __int64 result; // rax
  __int64 v7; // rax
  unsigned int v9; // r13d
  __int64 *v10; // rdi
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // rdx
  size_t v14; // rdx

  v3 = a1 + 4;
  v4 = a1 + 1;
  result = *(_QWORD *)(a2 + 96);
  *a1 = result;
  if ( !a3 )
  {
    a1[2] = (__int64)v3;
    a1[1] = 0;
    a1[3] = 0x400000000LL;
    a1[44] = 0;
    goto LABEL_10;
  }
  v7 = *(_QWORD *)(a3 + 8);
  a1[2] = (__int64)v3;
  a1[44] = 0;
  a1[1] = v7;
  a1[3] = 0x400000000LL;
  v9 = *(_DWORD *)(a3 + 24);
  if ( v9 )
  {
    v10 = a1 + 2;
    if ( v10 == (__int64 *)(a3 + 16) )
    {
LABEL_6:
      *(_DWORD *)(a3 + 24) = 0;
      goto LABEL_7;
    }
    v11 = *(_QWORD *)(a3 + 16);
    if ( v11 != a3 + 32 )
    {
      a1[2] = v11;
      v12 = *(_DWORD *)(a3 + 28);
      *((_DWORD *)a1 + 6) = v9;
      *((_DWORD *)a1 + 7) = v12;
      *(_QWORD *)(a3 + 16) = a3 + 32;
      *(_DWORD *)(a3 + 28) = 0;
      goto LABEL_6;
    }
    if ( v9 > 4uLL )
    {
      sub_2237220(v10, v3, v9, 80);
      v3 = (void *)a1[2];
      v14 = 80LL * *(unsigned int *)(a3 + 24);
      if ( !v14 )
        goto LABEL_15;
    }
    else
    {
      v14 = 80LL * v9;
    }
    memcpy(v3, *(const void **)(a3 + 16), v14);
LABEL_15:
    *((_DWORD *)a1 + 6) = v9;
    goto LABEL_6;
  }
LABEL_7:
  if ( !*(_BYTE *)(a3 + 360) )
  {
    sub_1818070(*(_QWORD *)a3, *(_QWORD *)(a3 + 352), 0);
    *(_BYTE *)(a3 + 360) = 1;
  }
  result = *a1;
LABEL_10:
  v13 = *(_QWORD *)(result + 512);
  *(_QWORD *)(result + 512) = v4;
  *((_BYTE *)a1 + 360) = 0;
  a1[44] = v13;
  return result;
}
