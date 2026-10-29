_QWORD *__fastcall sub_13FDFD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned int v14; // esi
  __int64 v15; // r8
  unsigned int v16; // edx
  __int64 *v17; // rax
  __int64 v18; // rdi
  _QWORD *result; // rax
  int v20; // r10d
  __int64 *v21; // r11
  int v22; // edx
  __int64 v23; // [rsp+8h] [rbp-50h] BYREF
  void *v24[2]; // [rsp+10h] [rbp-48h] BYREF
  _BYTE v25[56]; // [rsp+20h] [rbp-38h] BYREF

  v9 = *(_BYTE *)(a2 + 96) == 2;
  *(_QWORD *)(a2 + 88) = a3;
  if ( !v9 )
    *(_BYTE *)(a2 + 96) = 2;
  sub_2253560(v24, a4);
  sub_A0AAD0(a2 + 128, v24);
  if ( v24[0] != v25 )
    operator delete(v24[0]);
  sub_2253560(v24, a5);
  sub_A0AAD0(a2 + 160, v24);
  if ( v24[0] != v25 )
    operator delete(v24[0]);
  v13 = *(_QWORD *)(a3 + 8);
  v14 = *(_DWORD *)(a1 + 456);
  v23 = v13;
  if ( !v14 )
  {
    v24[0] = nullptr;
    goto LABEL_17;
  }
  v12 = v14 - 1;
  v15 = *(_QWORD *)(a1 + 440);
  v16 = v12 & (((unsigned int)v13 >> 9) ^ ((unsigned int)v13 >> 4));
  v17 = (__int64 *)(v15 + 16LL * v16);
  v18 = *v17;
  if ( v13 == *v17 )
    goto LABEL_9;
  v20 = 1;
  v21 = nullptr;
  if ( v18 == -4096 )
  {
LABEL_11:
    v22 = *(_DWORD *)(a1 + 448);
    v24[0] = v17;
    v10 = (unsigned int)(v22 + 1);
    v11 = (unsigned int)(4 * v10);
    if ( (unsigned int)v11 < 3 * v14 )
    {
      v11 = v14 >> 3;
      if ( v14 - *(_DWORD *)(a1 + 452) - (unsigned int)v10 > (unsigned int)v11 )
      {
LABEL_13:
        v9 = *v17 == -4096;
        *(_DWORD *)(a1 + 448) = v10;
        if ( !v9 )
          --*(_DWORD *)(a1 + 452);
        *v17 = v13;
        v17[1] = 0;
        goto LABEL_9;
      }
LABEL_18:
      sub_13FDC70(a1 + 440, v14, v10, v13, v11, v12);
      sub_13F78D0((__int64 *)(a1 + 440), &v23, v24);
      v13 = v23;
      LODWORD(v10) = *(_DWORD *)(a1 + 448) + 1;
      v17 = (__int64 *)v24[0];
      goto LABEL_13;
    }
LABEL_17:
    v14 *= 2;
    goto LABEL_18;
  }
  while ( 1 )
  {
    if ( !v21 && v18 == -8192 )
      v21 = v17;
    v16 = v12 & (v20 + v16);
    v17 = (__int64 *)(v15 + 16LL * v16);
    v18 = *v17;
    if ( v13 == *v17 )
      break;
    if ( v18 == -4096 )
    {
      if ( v21 )
        v17 = v21;
      goto LABEL_11;
    }
    ++v20;
  }
LABEL_9:
  result = v17 + 1;
  *result = a2;
  return result;
}
