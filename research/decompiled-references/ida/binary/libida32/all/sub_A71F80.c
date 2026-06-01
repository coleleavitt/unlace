__int64 *__fastcall sub_A71F80(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // r8
  unsigned int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 *result; // rax
  int v21; // r10d
  __int64 *v22; // r11
  int v23; // edi
  bool v24; // zf
  unsigned int v25; // [rsp+8h] [rbp-40h]
  __int64 v26; // [rsp+8h] [rbp-40h]
  __int64 v27; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-30h] BYREF

  v10 = *(_QWORD *)(a1 + 2352);
  *(_QWORD *)(a1 + 2432) += 16LL;
  v11 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(a1 + 2360) >= v11 + 16 && v10 )
  {
    *(_QWORD *)(a1 + 2352) = v11 + 16;
    v12 = (v10 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v25 = a5;
    v12 = sub_962430(a1 + 2352, 16, 16, 3, a5, a6);
    a5 = v25;
    v11 = v12 & 0xFFFFFFFFFFFFFFFBLL;
  }
  *(_DWORD *)(v12 + 8) = a5;
  v13 = v11 | 4;
  v14 = a3 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(a4 - 1));
  *(_QWORD *)v12 = v14;
  v15 = *(_DWORD *)(a1 + 1896);
  v27 = a2;
  if ( !v15 )
  {
    v28 = nullptr;
    goto LABEL_24;
  }
  a6 = v15 - 1;
  v16 = *(_QWORD *)(a1 + 1880);
  v17 = a6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v18 = (__int64 *)(v16 + 16LL * v17);
  v19 = *v18;
  if ( a2 == *v18 )
    goto LABEL_6;
  v21 = 1;
  v22 = nullptr;
  if ( v19 == -4096 )
  {
LABEL_9:
    v23 = *(_DWORD *)(a1 + 1888);
    v28 = v18;
    v14 = (unsigned int)(v23 + 1);
    a5 = (unsigned int)(4 * v14);
    if ( (unsigned int)a5 < 3 * v15 )
    {
      a5 = v15 >> 3;
      if ( v15 - *(_DWORD *)(a1 + 1892) - (unsigned int)v14 > (unsigned int)a5 )
      {
LABEL_11:
        v24 = *v18 == -4096;
        *(_DWORD *)(a1 + 1888) = v14;
        if ( !v24 )
          --*(_DWORD *)(a1 + 1892);
        *v18 = a2;
        v18[1] = 0;
        goto LABEL_6;
      }
      v26 = v13;
LABEL_25:
      sub_A71D90(a1 + 1880, v15, v14, v13, a5, a6);
      sub_A4A850((__int64 *)(a1 + 1880), &v27, &v28);
      a2 = v27;
      v13 = v26;
      LODWORD(v14) = *(_DWORD *)(a1 + 1888) + 1;
      v18 = v28;
      goto LABEL_11;
    }
LABEL_24:
    v26 = v13;
    v15 *= 2;
    goto LABEL_25;
  }
  while ( 1 )
  {
    if ( !v22 && v19 == -8192 )
      v22 = v18;
    v17 = a6 & (v21 + v17);
    v18 = (__int64 *)(v16 + 16LL * v17);
    v19 = *v18;
    if ( a2 == *v18 )
      break;
    if ( v19 == -4096 )
    {
      if ( v22 )
        v18 = v22;
      goto LABEL_9;
    }
    ++v21;
  }
LABEL_6:
  result = v18 + 1;
  *result = v13;
  return result;
}

