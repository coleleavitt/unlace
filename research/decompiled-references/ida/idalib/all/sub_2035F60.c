__int64 __fastcall sub_2035F60(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v6; // ecx
  __int64 *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  _QWORD *v10; // rdx
  __int64 result; // rax
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rbp
  __int64 v22; // r13
  __int64 *v23; // rax
  int v24; // esi
  int v25; // r10d
  __int64 v26; // rdi
  __int64 v27; // rcx
  char **v28; // r13
  __int64 v29; // r12
  char v30; // al
  __int64 v31[2]; // [rsp+8h] [rbp-50h] BYREF
  _QWORD *v32; // [rsp+18h] [rbp-40h] BYREF
  __m128 v33[3]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  v31[0] = a1;
  if ( !(_DWORD)v3 )
    goto LABEL_20;
  v6 = (v3 - 1) & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v7 = (__int64 *)(v4 + 16LL * v6);
  v8 = *v7;
  if ( a1 != *v7 )
  {
    v24 = 1;
    if ( v8 != -4096 )
    {
      do
      {
        v25 = v24 + 1;
        v6 = (v3 - 1) & (v24 + v6);
        v7 = (__int64 *)(v4 + 16LL * v6);
        v26 = *v7;
        if ( a1 == *v7 )
          goto LABEL_3;
        v24 = v25;
      }
      while ( v26 != -4096 );
    }
LABEL_20:
    sub_2033890(v33, (_QWORD *)(v4 + 16LL * (unsigned int)v3), (_QWORD *)(v4 + 16LL * (unsigned int)v3), a2, 1);
    v9 = v33[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_2033890(v33, v7, (_QWORD *)(16 * v3 + v4), a2, 1);
  v9 = v33[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16));
  sub_2033890(v33, v10, v10, a2, 1);
  if ( v9 == v33[0].m128_u64[0]
    || (result = *(unsigned int *)(*(_QWORD *)(a2 + 24) + 16LL * *(unsigned int *)(v9 + 8) + 8), !(_DWORD)result) )
  {
    result = *(unsigned __int8 *)v31[0];
    if ( (unsigned __int8)result <= 0x15u )
    {
      if ( (unsigned __int8)result <= 9u )
        return result;
      if ( (*(_DWORD *)(v31[0] + 4) & 0x7FFFFFF) != 0 && (unsigned __int8)(result - 13) > 3u )
      {
        v27 = 4LL * (*(_DWORD *)(v31[0] + 4) & 0x7FFFFFF);
        if ( (*(_BYTE *)(v31[0] + 7) & 0x40) != 0 )
        {
          v28 = *(char ***)(v31[0] - 8);
          v29 = (__int64)&v28[v27];
        }
        else
        {
          v29 = v31[0];
          v28 = (char **)(v31[0] - v27 * 8);
        }
        do
        {
          v30 = **v28;
          if ( (unsigned __int8)(v30 - 13) > 3u && v30 != 23 )
            sub_2035F60(*v28, a2);
          v28 += 4;
        }
        while ( (char **)v29 != v28 );
      }
    }
    v12 = *(_DWORD *)(a2 + 32) + 1;
    if ( (unsigned __int8)sub_2033160((__int64 *)a2, v31, &v32) )
    {
      sub_20336F0(v33, v32, (_QWORD *)(*(_QWORD *)a2 + 16LL * *(unsigned int *)(a2 + 16)), a2, 1);
      v16 = *(unsigned int *)(v33[0].m128_u64[0] + 8);
    }
    else
    {
      v17 = sub_2035ED0(a2, v31, v32, v13, v14, v15);
      v18 = v31[0];
      *((_DWORD *)v17 + 2) = 0;
      *v17 = v18;
      v19 = *(unsigned int *)(a2 + 16);
      v32 = v17;
      sub_20336F0(v33, v17, (_QWORD *)(*(_QWORD *)a2 + 16 * v19), a2, 1);
      v20 = *(unsigned int *)(a2 + 32);
      v21 = v33[0].m128_u64[0];
      v22 = v31[0];
      if ( v20 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 36) )
      {
        sub_2237220(a2 + 24, a2 + 40, v20 + 1, 16);
        v20 = *(unsigned int *)(a2 + 32);
      }
      v23 = (__int64 *)(*(_QWORD *)(a2 + 24) + 16 * v20);
      *v23 = v22;
      v23[1] = 0;
      v16 = *(unsigned int *)(a2 + 32);
      *(_DWORD *)(a2 + 32) = v16 + 1;
      *(_DWORD *)(v21 + 8) = v16;
    }
    result = *(_QWORD *)(a2 + 24) + 16 * v16;
    *(_DWORD *)(result + 8) = v12;
  }
  return result;
}
