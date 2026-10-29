__int64 *__fastcall sub_AB1BE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  __int64 v7; // rbp
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 *result; // rax
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edi
  bool v18; // zf
  __int64 v19; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 1216);
  v7 = a3;
  v19 = a2;
  v9 = *(_DWORD *)(a1 + 1232);
  if ( !v9 )
  {
    v20 = nullptr;
    goto LABEL_11;
  }
  a4 = v19;
  a6 = v9 - 1;
  v10 = *(_QWORD *)(a1 + 1216);
  v11 = a6 & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( v19 == *v12 )
    goto LABEL_3;
  v15 = 1;
  v16 = nullptr;
  if ( v13 == -4096 )
  {
LABEL_5:
    v17 = *(_DWORD *)(a1 + 1224);
    v20 = v12;
    a3 = (unsigned int)(v17 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * v9 )
    {
      a5 = v9 >> 3;
      if ( v9 - *(_DWORD *)(a1 + 1228) - (unsigned int)a3 > (unsigned int)a5 )
      {
LABEL_7:
        v18 = *v12 == -4096;
        *(_DWORD *)(a1 + 1224) = a3;
        if ( !v18 )
          --*(_DWORD *)(a1 + 1228);
        *v12 = a4;
        v12[1] = 0;
        goto LABEL_3;
      }
LABEL_12:
      sub_AB19D0((__int64)v6, v9, a3, a4, a5, a6);
      sub_A6ECD0(v6, &v19, &v20);
      a4 = v19;
      LODWORD(a3) = *(_DWORD *)(a1 + 1224) + 1;
      v12 = v20;
      goto LABEL_7;
    }
LABEL_11:
    v9 *= 2;
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( v13 == -8192 && !v16 )
      v16 = v12;
    v11 = a6 & (v15 + v11);
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( v19 == *v12 )
      break;
    if ( v13 == -4096 )
    {
      if ( v16 )
        v12 = v16;
      goto LABEL_5;
    }
    ++v15;
  }
LABEL_3:
  result = v12 + 1;
  *result = v7;
  return result;
}
