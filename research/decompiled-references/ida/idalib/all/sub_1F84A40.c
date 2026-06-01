_DWORD *__fastcall sub_1F84A40(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned int v11; // ecx
  __int64 *v12; // rax
  __int64 v13; // rdi
  _DWORD *result; // rax
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edi
  bool v18; // zf
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v20[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 3096);
  v9 = *(_DWORD *)(a1 + 3112);
  v19 = a3;
  if ( !v9 )
  {
    v20[0] = 0;
    goto LABEL_11;
  }
  a6 = v9 - 1;
  v10 = *(_QWORD *)(a1 + 3096);
  v11 = a6 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( a3 == *v12 )
    goto LABEL_3;
  v15 = 1;
  v16 = nullptr;
  if ( v13 == -4096 )
  {
LABEL_5:
    v17 = *(_DWORD *)(a1 + 3104);
    v20[0] = v12;
    a4 = (unsigned int)(v17 + 1);
    a5 = (unsigned int)(4 * a4);
    if ( (unsigned int)a5 < 3 * v9 )
    {
      a5 = v9 >> 3;
      if ( v9 - *(_DWORD *)(a1 + 3108) - (unsigned int)a4 > (unsigned int)a5 )
      {
LABEL_7:
        v18 = *v12 == -4096;
        *(_DWORD *)(a1 + 3104) = a4;
        if ( !v18 )
          --*(_DWORD *)(a1 + 3108);
        *v12 = a3;
        *((_DWORD *)v12 + 2) = 0;
        goto LABEL_3;
      }
LABEL_12:
      sub_1F82880(v6, v9, a3, a4, a5, a6);
      sub_1F72DF0(v6, &v19, v20);
      a3 = v19;
      LODWORD(a4) = *(_DWORD *)(a1 + 3104) + 1;
      v12 = (__int64 *)v20[0];
      goto LABEL_7;
    }
LABEL_11:
    v9 *= 2;
    goto LABEL_12;
  }
  while ( 1 )
  {
    if ( !v16 && v13 == -8192 )
      v16 = v12;
    v11 = a6 & (v15 + v11);
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( a3 == *v12 )
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
  *result = a2;
  return result;
}
