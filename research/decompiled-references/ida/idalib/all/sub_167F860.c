__int64 __fastcall sub_167F860(__int64 a1, __int64 *a2)
{
  char v2; // r15
  __int64 v5; // rbp
  __int64 i; // rdi
  __int64 v7; // rax
  __int16 v8; // dx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // r11d
  __int64 v13; // r10
  __int64 v14; // r13
  __int64 v15; // rax
  char v16; // al
  __int64 result; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  int *v20; // r8
  int v21; // r13d
  __int64 v22; // r13
  __int64 v23; // r14
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r12
  unsigned __int64 *v26; // rsi
  int v27; // eax
  __int64 v28; // rax
  char v29; // al
  __int64 v30; // rax
  unsigned int v31; // r14d
  unsigned int v32; // r8d
  __int64 v33; // rbp
  __int64 v34; // rax
  unsigned int v35; // [rsp+Ch] [rbp-3Ch]

  v2 = 0;
  v5 = *a2;
  for ( i = a2[((*a2 & 0x4000) != 0) + 2 + ((*a2 & 0x2000) != 0)]; ; i = *(_QWORD *)(v7 + 16) )
  {
    v7 = sub_BFB9F0(i);
    v8 = *(_WORD *)v7 & 0x1FF;
    if ( v8 == 41 )
      break;
    if ( v8 != 4 || *(_BYTE *)(v7 + 2) >> 3 != 9 )
      return sub_BD92C0((__int64 *)a1, (__int64)a2);
    v2 ^= 1u;
  }
  v9 = *(_QWORD *)(v7 + 24);
  v10 = *(_QWORD *)(v7 + 16);
  v11 = HIDWORD(v9) & 0x7FFFFFFF;
  v12 = v9 & 0x7FFFFFFF;
  v13 = HIDWORD(v10) & 0x7FFFFFFF;
  if ( !((unsigned int)v11 | (unsigned int)v10 | ((unsigned int)v9 | HIDWORD(v10)) & 0x7FFFFFFF)
    || (v18 = *(unsigned int *)(a1 + 40),
        v19 = *(_QWORD *)(a1 + 32),
        v20 = (int *)(v19 + 16 * v18 - 16),
        v21 = *v20,
        *v20 >= (unsigned int)v10)
    && ((v35 = v20[3] & 0x7FFFFFFF, v31 = v20[2] & 0x7FFFFFFF, v32 = v20[1] & 0x7FFFFFFF, v21 != (_DWORD)v10)
     || (unsigned int)v13 <= v32 && ((_DWORD)v13 != v32 || v12 <= v31 && (v12 != v31 || v35 >= (unsigned int)v11))) )
  {
    v14 = a2[((v5 & 0x4000) != 0) + 3 + (unsigned int)((v5 & 0x2000) != 0)];
    if ( v14 )
    {
      v15 = *(unsigned int *)(a1 + 184);
      if ( v15 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
      {
        sub_2237220(a1 + 176, a1 + 192, v15 + 1, 8);
        v15 = *(unsigned int *)(a1 + 184);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v15) = v14;
      ++*(_DWORD *)(a1 + 184);
      v16 = sub_BC97E0((__int64 *)a1, v14);
      --*(_DWORD *)(a1 + 184);
      if ( !v16 )
        return 0;
      v5 = *a2;
    }
    if ( (v5 & 0x1000) != 0 )
    {
      v33 = a2[((v5 & 0x4000) != 0) + 4 + (unsigned int)((v5 & 0x2000) != 0)];
      if ( v33 )
      {
        v34 = *(unsigned int *)(a1 + 184);
        if ( v34 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
        {
          sub_2237220(a1 + 176, a1 + 192, v34 + 1, 8);
          v34 = *(unsigned int *)(a1 + 184);
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v34) = v33;
        ++*(_DWORD *)(a1 + 184);
        result = sub_BC97E0((__int64 *)a1, v33);
        --*(_DWORD *)(a1 + 184);
        return result;
      }
    }
    return 1;
  }
  v22 = 0;
  v23 = a2[((v5 & 0x4000) != 0) + 3 + (unsigned int)((v5 & 0x2000) != 0)];
  if ( (v5 & 0x1000) != 0 )
    v22 = a2[((v5 & 0x4000) != 0) + 4 + (unsigned int)((v5 & 0x2000) != 0)];
  if ( v2 )
  {
    v23 = v22;
    v22 = a2[((v5 & 0x4000) != 0) + 3 + (unsigned int)((v5 & 0x2000) != 0)];
  }
  v24 = (v13 << 32) | v10 & 0x80000000FFFFFFFFLL;
  v25 = (v11 << 32) | v9 & 0x80000000FFFFFFFFLL;
  if ( v18 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    sub_2237220(a1 + 32, a1 + 48, v18 + 1, 16);
    v18 = *(unsigned int *)(a1 + 40);
    v19 = *(_QWORD *)(a1 + 32);
  }
  v26 = (unsigned __int64 *)(16 * v18 + v19);
  *v26 = v24;
  v26[1] = v25;
  v27 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = v27 + 1;
  if ( !v23 )
  {
    *(_DWORD *)(a1 + 40) = v27;
    goto LABEL_20;
  }
  v28 = *(unsigned int *)(a1 + 184);
  if ( v28 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v28 + 1, 8);
    v28 = *(unsigned int *)(a1 + 184);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v28) = v23;
  ++*(_DWORD *)(a1 + 184);
  v29 = sub_BC97E0((__int64 *)a1, v23);
  --*(_DWORD *)(a1 + 184);
  --*(_DWORD *)(a1 + 40);
  if ( !v29 )
    return 0;
LABEL_20:
  if ( !v22 )
    return 1;
  v30 = *(unsigned int *)(a1 + 184);
  if ( v30 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 188) )
  {
    sub_2237220(a1 + 176, a1 + 192, v30 + 1, 8);
    v30 = *(unsigned int *)(a1 + 184);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 176) + 8 * v30) = v22;
  ++*(_DWORD *)(a1 + 184);
  result = sub_BC97E0((__int64 *)a1, v22);
  --*(_DWORD *)(a1 + 184);
  return result;
}
