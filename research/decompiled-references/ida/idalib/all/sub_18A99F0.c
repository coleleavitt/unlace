unsigned __int64 __fastcall sub_18A99F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v8; // rax
  unsigned __int64 result; // rax
  __int64 *v10; // rbx
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 *v13; // rax
  unsigned __int64 *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  unsigned int v22; // ecx
  unsigned __int64 *v23; // rsi
  unsigned __int64 v24; // r8
  int v25; // r11d
  unsigned __int64 *v26; // r10
  int v27; // ecx
  __int64 v28; // r8
  __int64 v29; // r9
  bool v30; // zf
  unsigned __int64 v31; // [rsp+8h] [rbp-30h] BYREF
  __m128 v32[2]; // [rsp+10h] [rbp-28h] BYREF

  if ( (*(_BYTE *)(a1 + 29) & 1) == 0 )
    goto LABEL_2;
  v13 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
  a3 = *v13;
  a4 = *v13 + 8LL * *((unsigned int *)v13 + 2);
  if ( *v13 >= a4 )
  {
    if ( a3 == a4 )
      goto LABEL_2;
    if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) != 307 )
    {
      v14 = (unsigned __int64 *)(a4 + 8);
      do
      {
        a4 = (unsigned __int64)v14;
        if ( (unsigned __int64 *)a3 == v14 )
          goto LABEL_2;
        a4 = *v14++;
      }
      while ( *(_WORD *)(a4 + 36) != 307 );
    }
LABEL_23:
    v19 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 40) & 7) != 0 )
      v19 = 0;
    v20 = *(unsigned int *)(a2 + 16);
    v31 = v19;
    if ( (_DWORD)v20 )
    {
      v21 = *(_QWORD *)a2;
      v22 = (v20 - 1) & (((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4));
      v23 = (unsigned __int64 *)(*(_QWORD *)a2 + 8LL * v22);
      v24 = *v23;
      if ( v19 == *v23 )
      {
LABEL_27:
        sub_18983B0(v32, v23, (_QWORD *)(v21 + 8 * v20), a2, 1);
        goto LABEL_2;
      }
      v25 = 1;
      v26 = nullptr;
      if ( v24 != -4096 )
      {
        while ( 1 )
        {
          if ( v24 == -8192 && !v26 )
            v26 = v23;
          v22 = (v20 - 1) & (v25 + v22);
          v23 = (unsigned __int64 *)(v21 + 8LL * v22);
          v24 = *v23;
          if ( v19 == *v23 )
            goto LABEL_27;
          if ( v24 == -4096 )
          {
            if ( v26 )
              v23 = v26;
            break;
          }
          ++v25;
        }
      }
      v27 = *(_DWORD *)(a2 + 8);
      a5 = (unsigned int)(3 * v20);
      v32[0].m128_u64[0] = (unsigned __int64)v23;
      a4 = (unsigned int)(v27 + 1);
      a6 = (unsigned int)(4 * a4);
      if ( (unsigned int)a6 < (unsigned int)a5 )
      {
        v28 = (unsigned int)(v20 - *(_DWORD *)(a2 + 12) - a4);
        v29 = (unsigned int)v20 >> 3;
        if ( (unsigned int)v28 > (unsigned int)v29 )
        {
LABEL_31:
          v30 = *v23 == -4096;
          *(_DWORD *)(a2 + 8) = a4;
          if ( !v30 )
            --*(_DWORD *)(a2 + 12);
          *v23 = v19;
          sub_18983B0(v32, v23, (_QWORD *)(v21 + 8 * v20), a2, 1);
          goto LABEL_2;
        }
        sub_18A9790(a2, v20, v19, a4, v28, v29);
LABEL_36:
        sub_18974C0((__int64 *)a2, (__int64 *)&v31, v32);
        v19 = v31;
        v21 = *(_QWORD *)a2;
        v20 = *(unsigned int *)(a2 + 16);
        LODWORD(a4) = *(_DWORD *)(a2 + 8) + 1;
        v23 = (unsigned __int64 *)v32[0].m128_u64[0];
        goto LABEL_31;
      }
    }
    else
    {
      v32[0].m128_u64[0] = 0;
    }
    sub_18A9790(a2, 2 * v20, v19, a4, a5, a6);
    goto LABEL_36;
  }
  v18 = (__int64 *)*v13;
  while ( 1 )
  {
    a3 = *v18;
    if ( *(_WORD *)(*v18 + 36) == 307 )
      break;
    if ( (__int64 *)a4 == ++v18 )
      goto LABEL_2;
  }
  if ( (__int64 *)a4 != v18 )
    goto LABEL_23;
LABEL_2:
  v8 = *(_QWORD *)(a1 + 104);
  if ( v8 )
  {
    result = v8 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !result )
      return result;
    goto LABEL_4;
  }
  sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
  result = *(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( result )
  {
LABEL_4:
    v10 = *(__int64 **)(result + 8);
    result = *(unsigned int *)(result + 16);
    v11 = &v10[result];
    goto LABEL_5;
  }
  if ( *(_QWORD *)(a1 + 104) )
    return result;
  sub_A79820((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), 0, v15, v16, v17);
  result = *(_QWORD *)(a1 + 104) & 0xFFFFFFFFFFFFFFF8LL;
  if ( !result )
    return result;
  v10 = *(__int64 **)(result + 8);
  v11 = nullptr;
LABEL_5:
  while ( v11 != v10 )
  {
    v12 = *v10++;
    result = sub_18A99F0(v12, a2);
  }
  return result;
}
