__int64 __fastcall sub_3F5D80(_QWORD *a1, int a2, __int64 a3, char a4, int a5)
{
  int dtype_size; // r15d
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // r9
  __int64 v16; // rcx
  int v17; // r14d
  __int64 v18; // rsi
  unsigned __int64 v19; // r14
  int v20; // r13d
  __int64 (__fastcall *v21)(__int64, int); // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // r15d
  _DWORD *v25; // rdi
  __int64 (__fastcall *v26)(__int64, int); // rax
  int v27; // eax
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // [rsp+0h] [rbp-98h]
  __int64 v34; // [rsp+8h] [rbp-90h]
  __int64 v35; // [rsp+10h] [rbp-88h]
  __int64 v38; // [rsp+28h] [rbp-70h]
  int v39; // [rsp+38h] [rbp-60h]
  int v40; // [rsp+40h] [rbp-58h]
  char v41; // [rsp+49h] [rbp-4Fh]
  bool v42; // [rsp+4Ah] [rbp-4Eh]
  __int64 v43; // [rsp+50h] [rbp-48h]
  __int64 v44; // [rsp+58h] [rbp-40h]

  if ( *(_BYTE *)(a3 + 1) == 9 )
    v40 = bitcount(*(_QWORD *)(a3 + 24));
  else
    v40 = *(_DWORD *)(a3 + 8);
  dtype_size = get_dtype_size(*(unsigned __int8 *)(a3 + 5));
  v9 = a1[104];
  v10 = *(int *)(v9 + 624);
  v11 = *(int *)(v9 + 620);
  v35 = v10;
  if ( (a5 & 0x10) != 0 )
  {
    v35 = *(int *)(v9 + 624);
    sub_3F56D0((__int64)a1, 3u, 2u, dtype_size * (((a5 & 0x80) == 0) + v40 - 1), 0x3BEA45E214ADDC55LL, v10, 0);
    sub_3F56D0((__int64)a1, 0xDu, 2u, a2, v10, v11, 0);
  }
  else if ( (a5 & 0x80) != 0 )
  {
    sub_3F56D0((__int64)a1, 4u, 2u, a2, 0x3BEA45E214ADDC55LL, v11, 0);
  }
  else
  {
    sub_3F56D0((__int64)a1, 3u, 2u, dtype_size, 0x3BEA45E214ADDC55LL, v11, 0);
    sub_3F56D0((__int64)a1, 0xCu, 2u, a2, v11, v11, 0);
  }
  sub_3F56D0((__int64)a1, 3u, 2u, dtype_size, 0x3BEA45E214ADDC55LL, v35, 0);
  result = *(unsigned __int8 *)(a3 + 1);
  v15 = v33;
  v16 = a5 & 0x40;
  if ( (_BYTE)result == 9 )
  {
    v17 = 16;
  }
  else
  {
    v12 = *(_QWORD *)(a3 + 8);
    v17 = v12;
    if ( (int)v12 <= 0 )
    {
      if ( (a5 & 0x40) == 0 )
        return result;
      sub_3F56D0((__int64)a1, 3u, 2u, dtype_size * v40, 0x3BEA45E214ADDC55LL, v35, 0);
      if ( (a5 & 0x10) != 0 )
        sub_3F56D0((__int64)a1, 0xDu, 2u, a2, v35, v11, 0);
      else
        sub_3F56D0((__int64)a1, 0xCu, 2u, a2, v35, v11, 0);
      v41 = 0;
LABEL_47:
      result = sub_3F56D0((__int64)a1, 4u, 2u, v11, 0x3BEA45E214ADDC55LL, a2, 0);
      goto LABEL_32;
    }
  }
  v18 = v17;
  v41 = 0;
  v42 = a4 == 0;
  v19 = 0;
  v20 = 0;
  v38 = 0;
  v39 = dtype_size;
  while ( 1 )
  {
    v24 = v19;
    if ( (_BYTE)result == 9 )
      break;
    if ( v19 < *(_QWORD *)(a3 + 8) )
    {
      v24 = *(unsigned __int16 *)(a3 + 6) + (_DWORD)v19;
      goto LABEL_20;
    }
LABEL_15:
    result = v18;
    if ( ++v19 == v18 )
      goto LABEL_29;
LABEL_16:
    LOBYTE(result) = *(_BYTE *)(a3 + 1);
  }
  v29 = *(_QWORD *)(a3 + 24);
  if ( _bittest64(&v29, v19) )
  {
LABEL_20:
    v25 = (_DWORD *)a1[104];
    if ( (a5 & 1) != 0 )
    {
      v21 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v25 + 168LL);
      if ( v21 == sub_3EA010 )
      {
        v22 = sub_3EA010((__int64)v25, v24);
      }
      else
      {
        v22 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64, __int64, __int64))v21)(
                v25,
                (unsigned int)v24,
                v12,
                v16,
                v13,
                v15);
        v25 = (_DWORD *)a1[104];
      }
      v23 = sub_3F56D0((__int64)a1, 2u, *(_BYTE *)(a3 + 5), (int)v25[16], v11, v22, 4);
      v41 |= v24 == 15;
    }
    else
    {
      if ( v25[15] == a2 && v24 == 14 && a5 == 80 )
      {
        v30 = a1[1];
        v12 = *(_QWORD *)(v30 + 920);
        if ( (*(_BYTE *)(v12 + 192) & 1) == 0 )
        {
          v31 = *(_QWORD *)(a3 + 24);
          v44 = *(_QWORD *)(v30 + 920);
          *(_QWORD *)(v44 + 184) = (-(__int64)((v31 & 0x8000) == 0) & 0xFFFFFFFFFFFFFFFCLL)
                                 + *(_QWORD *)(v30 + 136)
                                 - sub_1CF5F0(a1[1], a1[5])
                                 + 8;
          *(_DWORD *)(v44 + 192) = *(_DWORD *)(v44 + 192) & 0xFFFFFFFC | 1;
LABEL_14:
          sub_3F56D0((__int64)a1, 0xCu, 2u, v11, v35, v11, 0);
          v12 = v34;
          goto LABEL_15;
        }
      }
      if ( v24 > 3 && !v42 )
        goto LABEL_14;
      v26 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)v25 + 168LL);
      if ( v26 == sub_3EA010 )
      {
        v27 = sub_3EA010((__int64)v25, v24);
      }
      else
      {
        v43 = (int)v25[16];
        v27 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64 (__fastcall *)(__int64, int), __int64, __int64))v26)(
                v25,
                (unsigned int)v24,
                v12,
                sub_3EA010,
                v43,
                v15);
        v28 = v43;
      }
      v23 = sub_3F56D0((__int64)a1, 1u, *(_BYTE *)(a3 + 5), v27, v28, v11, 4);
    }
    if ( v23 )
    {
      if ( ++v20 <= 1 )
        v38 = v23;
      else
        *(_DWORD *)(v23 + 4) |= 0x10000u;
    }
    goto LABEL_14;
  }
  result = v18;
  if ( ++v19 != v18 )
    goto LABEL_16;
LABEL_29:
  if ( v20 > 1 )
    *(_DWORD *)(v38 + 4) |= 0x10000u;
  if ( (a5 & 0x40) != 0 )
  {
    sub_3F56D0((__int64)a1, 3u, 2u, v39 * v40, 0x3BEA45E214ADDC55LL, v35, 0);
    v32 = sub_3F56D0((__int64)a1, 12 - ((unsigned int)((a5 & 0x10) == 0) - 1), 2u, a2, v35, v11, 0);
    if ( v20 > 1 )
      *(_DWORD *)(v32 + 4) |= 0x10000u;
    goto LABEL_47;
  }
LABEL_32:
  if ( v41 )
    return sub_3F56D0(
             (__int64)a1,
             0x36u,
             2u,
             0x3BEA45E214ADDC55LL,
             *(int *)(a1[104] + 64LL),
             *(int *)(a1[104] + 660LL),
             4);
  return result;
}
