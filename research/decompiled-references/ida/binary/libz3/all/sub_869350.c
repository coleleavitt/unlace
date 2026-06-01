__int64 __fastcall sub_869350(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __m128 v4; // xmm0
  __int64 v5; // rax
  __int64 v6; // r15
  _DWORD *v7; // r13
  unsigned int v8; // r14d
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  float v12; // xmm0_4
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // r8
  unsigned int v16; // r12d
  __int64 result; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r13
  int v22; // r14d
  unsigned int v23; // eax
  __int64 v24; // rdi
  bool v25; // zf
  char v26; // [rsp+1Fh] [rbp-49h] BYREF
  __int64 v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)a2;
  v4 = (__m128)*(unsigned int *)(a2 + 8);
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 16LL);
  v6 = *(_QWORD *)(v5 + 16);
  v7 = *(_DWORD **)(v5 + 40);
  v8 = *(_DWORD *)(v6 + 20);
  *(_BYTE *)(a2 + 12) = 1;
  sub_868E90(a1, v3, v4);
  v9 = *(_QWORD *)(a1 + 880);
  v10 = a1 + 184;
  if ( v9 )
    v11 = *(unsigned int *)(v9 - 4);
  else
    v11 = 0;
  v12 = sub_15B8F00(v10, *(_QWORD *)(a1 + 56), v11);
  v13 = *(_DWORD *)(v3 + 32);
  v14 = *(_QWORD *)a1;
  v15 = *(_QWORD *)(v3 + 16);
  v26 = 0;
  v16 = v13 + 1;
  if ( v13 + 1 < (unsigned int)(int)v12 )
    v16 = (int)v12;
  result = sub_7EBDC0(v14, 1, v3 + 48, v16, v15, &v26);
  if ( !(_BYTE)result )
  {
    v18 = sub_15154B0(a1 + 224, v6, v8);
    if ( v8 )
    {
      v19 = 0;
      do
      {
        *(_QWORD *)(v18 + v19) = **(_QWORD **)(v3 + v19 + 48);
        v19 += 8;
      }
      while ( v19 != 8LL * v8 );
    }
    sub_15155F0(&v27, a1 + 224);
    sub_14B9B80(*(_QWORD *)(a1 + 8) + 2192LL, &v27);
    result = *(_QWORD *)(a1 + 16);
    v20 = v27;
    if ( *(_QWORD *)(result + 856) == v27 )
    {
      ++v7[7];
      if ( !v20 )
        return result;
      v24 = v28;
      v25 = (*(_DWORD *)(v20 + 8))-- == 1;
      if ( !v25 )
        return result;
    }
    else
    {
      ++v7[5];
      ++v7[8];
      v21 = *(_QWORD *)(a1 + 8);
      ++*(_DWORD *)(a1 + 32);
      v22 = *(_DWORD *)(v21 + 2280);
      *(_DWORD *)(v21 + 2280) = v16;
      v23 = sub_79C480(v21, v20);
      result = sub_7EA180(*(_QWORD **)a1, *(_QWORD *)(v3 + 16), v3, v23);
      v20 = v27;
      *(_DWORD *)(v21 + 2280) = v22;
      if ( !v20 )
        return result;
      v24 = v28;
      v25 = (*(_DWORD *)(v20 + 8))-- == 1;
      if ( !v25 )
        return result;
    }
    return sub_15D7BC0(v24, v20);
  }
  return result;
}

