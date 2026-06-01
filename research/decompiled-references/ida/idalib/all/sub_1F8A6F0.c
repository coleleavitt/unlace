__int64 __fastcall sub_1F8A6F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // r12
  unsigned int v9; // esi
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 *v12; // rax
  __int64 v13; // rdi
  unsigned int *v14; // rdx
  __int64 result; // rax
  int v16; // r10d
  __int64 *v17; // r11
  int v18; // edi
  bool v19; // zf
  __int64 v20; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v21[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = (__int64 *)(a1 + 936);
  v9 = *(_DWORD *)(a1 + 952);
  v20 = a3;
  if ( !v9 )
  {
    v21[0] = 0;
LABEL_14:
    v9 *= 2;
    goto LABEL_15;
  }
  a4 = a3;
  a6 = v9 - 1;
  v10 = *(_QWORD *)(a1 + 936);
  v11 = a6 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
  v12 = (__int64 *)(v10 + 16LL * v11);
  v13 = *v12;
  if ( a4 == *v12 )
  {
LABEL_3:
    v14 = (unsigned int *)(v12 + 1);
    result = *((unsigned int *)v12 + 2);
    goto LABEL_4;
  }
  v16 = 1;
  v17 = nullptr;
  if ( v13 != -4096 )
  {
    while ( 1 )
    {
      if ( v13 == -8192 && !v17 )
        v17 = v12;
      v11 = a6 & (v16 + v11);
      v12 = (__int64 *)(v10 + 16LL * v11);
      v13 = *v12;
      if ( a4 == *v12 )
        goto LABEL_3;
      if ( v13 == -4096 )
      {
        if ( v17 )
          v12 = v17;
        break;
      }
      ++v16;
    }
  }
  v18 = *(_DWORD *)(a1 + 944);
  v21[0] = v12;
  a3 = (unsigned int)(v18 + 1);
  a5 = (unsigned int)(4 * a3);
  if ( (unsigned int)a5 >= 3 * v9 )
    goto LABEL_14;
  a5 = v9 >> 3;
  if ( v9 - *(_DWORD *)(a1 + 948) - (unsigned int)a3 <= (unsigned int)a5 )
  {
LABEL_15:
    sub_1F88510(v6, v9, a3, a4, a5, a6);
    sub_1F74A50(v6, &v20, v21);
    a4 = v20;
    LODWORD(a3) = *(_DWORD *)(a1 + 944) + 1;
    v12 = (__int64 *)v21[0];
  }
  v19 = *v12 == -4096;
  *(_DWORD *)(a1 + 944) = a3;
  if ( !v19 )
    --*(_DWORD *)(a1 + 948);
  *v12 = a4;
  v14 = (unsigned int *)(v12 + 1);
  *((_DWORD *)v12 + 2) = 0;
  result = 0;
LABEL_4:
  if ( a2 > (unsigned int)result )
    *v14 = a2;
  return result;
}
