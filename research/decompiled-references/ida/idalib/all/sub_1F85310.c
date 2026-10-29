__int64 __fastcall sub_1F85310(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rcx
  __int64 *v11; // r12
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 result; // rax
  int v17; // r10d
  __int64 v18; // r11
  int v19; // edi
  __int64 v20; // rdx
  int v21; // esi
  __int64 v22; // [rsp+8h] [rbp-40h] BYREF
  __int64 v23[6]; // [rsp+18h] [rbp-30h] BYREF

  v6 = *(_QWORD *)(a1 + 56);
  v22 = a3;
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 36);
    if ( v7 <= 7 )
    {
      result = 1LL << v7;
      if ( ((1LL << v7) & 0xBC) != 0 )
        return result;
    }
  }
  v8 = *(unsigned int *)(a1 + 840);
  v11 = (__int64 *)(a1 + 824);
  if ( !(_DWORD)v8 )
  {
    v23[0] = 0;
LABEL_28:
    v21 = 2 * v8;
LABEL_29:
    sub_1F84FE0((__int64)v11, v21, a3, v8, a5, a6);
    sub_1F72F80(v11, &v22, v23);
    LODWORD(a3) = *(_DWORD *)(a1 + 832) + 1;
    v13 = v23[0];
    goto LABEL_20;
  }
  a6 = (unsigned int)(v8 - 1);
  a5 = *(_QWORD *)(a1 + 824);
  v12 = a6 & (((unsigned int)v22 >> 9) ^ ((unsigned int)v22 >> 4));
  v13 = a5 + 16LL * v12;
  v14 = *(_QWORD *)v13;
  if ( v22 == *(_QWORD *)v13 )
    goto LABEL_5;
  v17 = 1;
  v18 = 0;
  if ( v14 != 1 )
  {
    while ( 1 )
    {
      if ( !v18 && v14 == 2 )
        v18 = v13;
      v12 = a6 & (v17 + v12);
      v13 = a5 + 16LL * v12;
      v14 = *(_QWORD *)v13;
      if ( v22 == *(_QWORD *)v13 )
        break;
      if ( v14 == 1 )
      {
        if ( v18 )
          v13 = v18;
        goto LABEL_18;
      }
      ++v17;
    }
LABEL_5:
    v15 = v13 + 8;
    result = *(unsigned int *)(v13 + 8);
    if ( (_DWORD)result )
    {
      if ( (unsigned int)result > (unsigned int)a2 )
        return result;
LABEL_24:
      *(_QWORD *)v15 = a2;
      return result;
    }
    goto LABEL_23;
  }
LABEL_18:
  v19 = *(_DWORD *)(a1 + 832);
  v23[0] = v13;
  a3 = (unsigned int)(v19 + 1);
  if ( 4 * (int)a3 >= (unsigned int)(3 * v8) )
    goto LABEL_28;
  if ( (int)v8 - *(_DWORD *)(a1 + 836) - (int)a3 <= (unsigned int)v8 >> 3 )
  {
    v21 = v8;
    goto LABEL_29;
  }
LABEL_20:
  *(_DWORD *)(a1 + 832) = a3;
  if ( *(_QWORD *)v13 != 1 )
    --*(_DWORD *)(a1 + 836);
  v20 = v22;
  *(_QWORD *)(v13 + 8) = 0;
  *(_QWORD *)v13 = v20;
  v15 = v13 + 8;
LABEL_23:
  result = *(unsigned int *)(v15 + 4);
  if ( !(_DWORD)result )
    goto LABEL_24;
  return result;
}
