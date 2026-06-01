__int64 __fastcall sub_B818E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rcx
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // esi
  __int64 v19; // r12
  __int64 *v20; // r13
  __int64 v21; // rdi
  unsigned int v22; // edx
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 *v25; // r10
  int v26; // edi
  __int64 v27; // rdi
  bool v28; // zf
  _DWORD *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v31[6]; // [rsp+8h] [rbp-30h] BYREF

  *(_DWORD *)(*(_QWORD *)(a1 + 128) + 108LL) = (2 * HIDWORD(a8)) | *(_DWORD *)(*(_QWORD *)(a1 + 128) + 108LL) & 1;
  if ( !(_DWORD)a9 )
    goto LABEL_2;
  v13 = sub_B685F0(a1);
  v30 = a1;
  v18 = *(_DWORD *)(v13 + 2168);
  v19 = v13;
  v20 = (__int64 *)(v13 + 2152);
  if ( !v18 )
  {
    v31[0] = 0;
LABEL_13:
    v18 *= 2;
    goto LABEL_14;
  }
  v21 = *(_QWORD *)(v13 + 2152);
  v16 = v18 - 1;
  v22 = v16 & (((unsigned int)a1 >> 9) ^ ((unsigned int)a1 >> 4));
  v23 = (__int64 *)(v21 + 16LL * v22);
  v24 = *v23;
  if ( a1 == *v23 )
  {
LABEL_5:
    *((_DWORD *)v23 + 2) = a9;
    goto LABEL_2;
  }
  v17 = 1;
  v25 = nullptr;
  if ( v24 != -4096 )
  {
    while ( 1 )
    {
      if ( !v25 && v24 == -8192 )
        v25 = v23;
      v22 = v16 & (v17 + v22);
      v23 = (__int64 *)(v21 + 16LL * v22);
      v24 = *v23;
      if ( a1 == *v23 )
        goto LABEL_5;
      if ( v24 == -4096 )
      {
        if ( v25 )
          v23 = v25;
        break;
      }
      v17 = (unsigned int)(v17 + 1);
    }
  }
  v26 = *(_DWORD *)(v19 + 2160);
  v15 = 3 * v18;
  v31[0] = v23;
  v14 = (unsigned int)(v26 + 1);
  if ( 4 * (int)v14 >= (unsigned int)v15 )
    goto LABEL_13;
  v27 = a1;
  v15 = v18 - *(_DWORD *)(v19 + 2164) - (unsigned int)v14;
  v16 = v18 >> 3;
  if ( (unsigned int)v15 <= (unsigned int)v16 )
  {
LABEL_14:
    sub_B816E0(v20, v18, v14, v15, v16, v17);
    sub_B77950(v20, &v30, v31);
    v27 = v30;
    LODWORD(v14) = *(_DWORD *)(v19 + 2160) + 1;
    v23 = (__int64 *)v31[0];
  }
  v28 = *v23 == -4096;
  *(_DWORD *)(v19 + 2160) = v14;
  if ( !v28 )
    --*(_DWORD *)(v19 + 2164);
  *v23 = v27;
  v29 = v23 + 1;
  *v29 = 0;
  *v29 = a9;
LABEL_2:
  *(_DWORD *)(*(_QWORD *)(a1 + 128) + 112LL) = a8;
  *(_QWORD *)(*(_QWORD *)(a1 + 128) + 120LL) = a7;
  v10 = *(_QWORD *)(a1 + 128);
  v11 = BYTE4(a9) & 1;
  result = v11 | *(_BYTE *)(v10 + 108) & 0xFEu;
  *(_BYTE *)(v10 + 108) = v11 | *(_BYTE *)(v10 + 108) & 0xFE;
  return result;
}

