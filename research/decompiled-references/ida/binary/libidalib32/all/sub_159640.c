__int64 __fastcall sub_159640(__int64 a1, const char *a2)
{
  int v3; // eax
  __int64 *v4; // r12
  int v5; // edx
  __int64 v6; // r13
  size_t v7; // r15
  int v8; // r14d
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rdx
  int v12; // eax
  int v14; // eax
  __int64 v15; // rax
  size_t v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]
  __int64 v21; // [rsp+8h] [rbp-40h]

  if ( !a2 )
  {
    v14 = *(_DWORD *)(a1 + 20) + 1;
    *(_DWORD *)(a1 + 20) = v14;
    if ( v14 != 500 )
      return 0;
    goto LABEL_12;
  }
  v3 = strlen(a2);
  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = v4[1];
  if ( v5 != -1 )
  {
    if ( v5 <= v3 )
      v3 = *(_DWORD *)(a1 + 16);
    v7 = v3;
    v8 = v3;
    v9 = v3;
    if ( v6 )
    {
      --v6;
      v9 = v3 + v6;
    }
    v10 = *v4;
    v11 = v9 + 1;
    if ( v4[2] < (unsigned __int64)(v9 + 1) )
    {
      v21 = v9;
      v20 = v9 + 1;
      v15 = qvector_reserve();
      v9 = v21;
      v11 = v20;
      *v4 = v15;
      v10 = v15;
    }
    v4[1] = v11;
    *(_BYTE *)(v10 + v9) = 0;
    memmove((void *)(v6 + *v4), a2, v7);
    v12 = *(_DWORD *)(a1 + 16) - v8;
    *(_DWORD *)(a1 + 16) = v12;
    if ( v12 > 0 )
      return 0;
LABEL_12:
    set_qerrno();
    return 1;
  }
  v16 = v3;
  v17 = v3;
  if ( v6 )
  {
    --v6;
    v17 = v3 + v6;
  }
  v18 = *v4;
  if ( v4[2] < (unsigned __int64)(v17 + 1) )
  {
    v19 = qvector_reserve();
    *v4 = v19;
    v18 = v19;
  }
  v4[1] = v17 + 1;
  *(_BYTE *)(v18 + v17) = 0;
  memmove((void *)(v6 + *v4), a2, v16);
  return 0;
}

