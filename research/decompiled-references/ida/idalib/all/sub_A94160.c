__int64 __fastcall sub_A94160(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  const void *v7; // r12
  __int64 *v8; // rbp
  unsigned int v10; // esi
  __int64 v11; // rdi
  unsigned int v12; // r8d
  __int64 *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rbp
  _QWORD *v16; // r14
  __int64 result; // rax
  unsigned __int64 v18; // rcx
  signed __int64 v19; // r13
  unsigned __int64 v20; // rdx
  int v21; // r10d
  __int64 *v22; // r11
  int v23; // edi
  bool v24; // zf
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // [rsp+8h] [rbp-40h] BYREF
  __int64 *v28; // [rsp+18h] [rbp-30h] BYREF

  v6 = a4;
  v7 = (const void *)a3;
  v8 = (__int64 *)(a1 + 1776);
  v27 = a2;
  v10 = *(_DWORD *)(a1 + 1792);
  if ( !v10 )
  {
    v28 = nullptr;
    goto LABEL_18;
  }
  a3 = v27;
  a6 = v10 - 1;
  v11 = *(_QWORD *)(a1 + 1776);
  v12 = a6 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
  v13 = (__int64 *)(v11 + 16LL * v12);
  v14 = *v13;
  if ( v27 == *v13 )
    goto LABEL_3;
  v21 = 1;
  v22 = nullptr;
  if ( v14 == -4096 )
  {
LABEL_11:
    v23 = *(_DWORD *)(a1 + 1784);
    a4 = 3 * v10;
    v28 = v13;
    a5 = (unsigned int)(v23 + 1);
    if ( 4 * (int)a5 < (unsigned int)a4 )
    {
      a4 = v10 - *(_DWORD *)(a1 + 1788) - (unsigned int)a5;
      if ( (unsigned int)a4 > v10 >> 3 )
      {
LABEL_13:
        v24 = *v13 == -4096;
        *(_DWORD *)(a1 + 1784) = a5;
        if ( !v24 )
          --*(_DWORD *)(a1 + 1788);
        *v13 = a3;
        v16 = v13 + 1;
        v13[1] = 0;
        goto LABEL_16;
      }
LABEL_19:
      sub_A93BE0((__int64)v8, v10, a3, a4, a5, a6);
      sub_A6E350(v8, &v27, &v28);
      a3 = v27;
      LODWORD(a5) = *(_DWORD *)(a1 + 1784) + 1;
      v13 = v28;
      goto LABEL_13;
    }
LABEL_18:
    v10 *= 2;
    goto LABEL_19;
  }
  while ( 1 )
  {
    if ( !v22 && v14 == -8192 )
      v22 = v13;
    v12 = a6 & (v21 + v12);
    v13 = (__int64 *)(v11 + 16LL * v12);
    v14 = *v13;
    if ( v27 == *v13 )
      break;
    if ( v14 == -4096 )
    {
      if ( v22 )
        v13 = v22;
      goto LABEL_11;
    }
    ++v21;
  }
LABEL_3:
  v15 = (_QWORD *)v13[1];
  v16 = v13 + 1;
  if ( v15 )
  {
    result = *((unsigned int *)v15 + 14);
    v18 = *((unsigned int *)v15 + 15);
    goto LABEL_5;
  }
LABEL_16:
  v25 = (_QWORD *)sub_A794A0((__int64 *)(a1 + 2352), 96, 3u);
  v18 = 4;
  v15 = v25;
  *v25 = v25 + 2;
  v26 = v25 + 8;
  v25[1] = 0x400000000LL;
  v25[7] = 0x400000000LL;
  result = 0;
  v15[6] = v26;
  *v16 = v15;
LABEL_5:
  v19 = 8 * v6;
  v20 = (v19 >> 3) + result;
  if ( v20 > v18 )
  {
    sub_2237220(v15 + 6, v15 + 8, v20, 8);
    result = *((unsigned int *)v15 + 14);
  }
  if ( v19 )
  {
    memcpy((void *)(v15[6] + 8 * result), v7, v19);
    result = *((unsigned int *)v15 + 14);
  }
  *((_DWORD *)v15 + 14) = result + (v19 >> 3);
  return result;
}
