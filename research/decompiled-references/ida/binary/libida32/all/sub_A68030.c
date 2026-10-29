__int64 __fastcall sub_A68030(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  __int64 *v9; // rdi
  __int64 v10; // r8
  unsigned __int64 v11; // r13
  _QWORD *v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 result; // rax
  __int64 v16; // rdx
  unsigned int v17; // edx
  unsigned int v18; // edx
  int v19; // edi
  int v20; // r10d
  __int64 v21; // r8
  __m128 v22[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a1 + 2072;
  v6 = *(unsigned int *)(a1 + 2088);
  v7 = *(_QWORD *)(a1 + 2072);
  if ( !(_DWORD)v6 )
    goto LABEL_18;
  v8 = (v6 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
  v9 = (__int64 *)(v7 + 16LL * v8);
  v10 = *v9;
  if ( a2 != *v9 )
  {
    v19 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v20 = v19 + 1;
        v8 = (v6 - 1) & (v19 + v8);
        v9 = (__int64 *)(v7 + 16LL * v8);
        v21 = *v9;
        if ( a2 == *v9 )
          goto LABEL_3;
        v19 = v20;
      }
      while ( v21 != -4096 );
    }
LABEL_18:
    sub_A67FC0(v22, (_QWORD *)(v7 + 16LL * (unsigned int)v6), (_QWORD *)(v7 + 16LL * (unsigned int)v6), v3, 1);
    v11 = v22[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_A67FC0(v22, v9, (_QWORD *)(16 * v6 + v7), v3, 1);
  v11 = v22[0].m128_u64[0];
LABEL_4:
  v12 = (_QWORD *)(*(_QWORD *)(a1 + 2072) + 16LL * *(unsigned int *)(a1 + 2088));
  sub_A67FC0(v22, v12, v12, v3, 1);
  if ( v22[0].m128_u64[0] == v11
    || (v13 = *(_QWORD *)(a1 + 2096),
        v14 = v13 + 16LL * *(unsigned int *)(v11 + 8),
        v14 == 16LL * *(unsigned int *)(a1 + 2104) + v13) )
  {
    result = 1;
  }
  else
  {
    result = *(unsigned int *)(v14 + 8);
  }
  v16 = *(_QWORD *)(a1 + 2320);
  if ( (*(_BYTE *)(v16 + 60) & 0x10) != 0 && (*(_BYTE *)(v16 + 89) & 4) == 0 )
  {
    v17 = result;
    result = (unsigned __int16)result;
    v18 = HIWORD(v17);
    if ( a3 )
      result = v18;
  }
  if ( !(_DWORD)result )
    return 1;
  return result;
}

