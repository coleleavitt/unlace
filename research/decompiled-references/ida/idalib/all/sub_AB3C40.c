_DWORD *__fastcall sub_AB3C40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  int v7; // ebp
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rdi
  _DWORD *result; // rax
  int v15; // r10d
  __int64 *v16; // r11
  int v17; // edi
  bool v18; // zf
  int v19; // esi
  __int64 v20; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v21[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 2176);
  v7 = a3;
  v9 = *(unsigned int *)(a1 + 2192);
  v20 = a2;
  if ( !(_DWORD)v9 )
  {
    v21[0] = 0;
    goto LABEL_20;
  }
  a6 = (unsigned int)(v9 - 1);
  v10 = *(_QWORD *)(a1 + 2176);
  v11 = a6 & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( a2 == *v12 )
    goto LABEL_3;
  v15 = 1;
  v16 = nullptr;
  if ( v13 == -4096 )
  {
LABEL_5:
    v17 = *(_DWORD *)(a1 + 2184);
    v21[0] = v12;
    a3 = (unsigned int)(v17 + 1);
    a5 = (unsigned int)(4 * a3);
    if ( (unsigned int)a5 < 3 * (int)v9 )
    {
      a5 = (unsigned int)v9 >> 3;
      if ( (int)v9 - *(_DWORD *)(a1 + 2188) - (int)a3 > (unsigned int)a5 )
      {
LABEL_7:
        v18 = *v12 == -4096;
        *(_DWORD *)(a1 + 2184) = a3;
        if ( !v18 )
          --*(_DWORD *)(a1 + 2188);
        *v12 = a2;
        *((_DWORD *)v12 + 2) = 0;
        goto LABEL_3;
      }
      v19 = v9;
LABEL_21:
      sub_AB37A0(v6, v19, a3, v9, a5, a6);
      sub_A6F430(v6, &v20, v21);
      a2 = v20;
      LODWORD(a3) = *(_DWORD *)(a1 + 2184) + 1;
      v12 = (__int64 *)v21[0];
      goto LABEL_7;
    }
LABEL_20:
    v19 = 2 * v9;
    goto LABEL_21;
  }
  while ( 1 )
  {
    if ( !v16 && v13 == -8192 )
      v16 = v12;
    v11 = a6 & (v15 + v11);
    v12 = (__int64 *)(v10 + 16LL * v11);
    v13 = *v12;
    if ( a2 == *v12 )
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
