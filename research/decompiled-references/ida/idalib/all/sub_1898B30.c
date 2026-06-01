__int64 __fastcall sub_1898B30(__int64 a1, __int64 a2, char a3, char a4)
{
  _QWORD *v8; // rdi
  __int64 result; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rdi
  unsigned int v16; // r14d
  __int64 *v17; // r15
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r15
  unsigned int v22; // r14d
  unsigned int v23; // eax
  __int64 v24; // rcx
  __int64 *v25; // rsi
  int v26; // eax
  int v27; // esi
  __int64 v28; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v29; // [rsp+8h] [rbp-40h] BYREF

  v8 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v8 = (_QWORD *)*v8;
  result = sub_B8C1B0((__int64)v8);
  if ( *(char *)(result + 28) >= 0 )
  {
    v14 = *(_QWORD *)(a2 + 40);
    v15 = *(_QWORD *)(*(_QWORD *)a1 + 552LL);
    if ( v15 )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 256LL))(v15, v14);
      v14 = *(_QWORD *)(a2 + 40);
    }
    v16 = *(_DWORD *)(a1 + 80);
    v28 = v14;
    if ( v16 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      v22 = v16 - 1;
      v23 = v22 & sub_FDE780(v14);
      v10 = (_QWORD *)(v21 + 40LL * v23);
      v24 = *v10;
      if ( v28 == *v10 )
      {
LABEL_14:
        v25 = v10 + 1;
        *(_BYTE *)(a2 + 58) = (32 * (a3 & 1)) | *(_BYTE *)(a2 + 58) & 0xDF;
        if ( !a4 )
          v25 = v10 + 3;
        return sub_1896550(a1, v25, a2);
      }
      if ( v24 != -1 )
      {
        v27 = 1;
        v12 = 0;
        while ( 1 )
        {
          if ( v24 == -2 && !v12 )
            v12 = (__int64)v10;
          v13 = (unsigned int)(v27 + 1);
          v23 = v22 & (v27 + v23);
          v10 = (_QWORD *)(v21 + 40LL * v23);
          v24 = *v10;
          if ( v28 == *v10 )
            goto LABEL_14;
          if ( v24 == -1 )
          {
            v18 = *(_DWORD *)(a1 + 80);
            v16 = v18;
            if ( !v12 )
              goto LABEL_20;
            v10 = (_QWORD *)v12;
            goto LABEL_21;
          }
          ++v27;
        }
      }
      v18 = *(_DWORD *)(a1 + 80);
LABEL_20:
      v16 = v18;
LABEL_21:
      v26 = *(_DWORD *)(a1 + 72);
      v11 = 3 * v18;
      v17 = (__int64 *)(a1 + 64);
      v29 = v10;
      v19 = v26 + 1;
      if ( 4 * v19 < (unsigned int)v11 )
      {
        v11 = v18 >> 3;
        if ( v18 - (v19 + *(_DWORD *)(a1 + 76)) > (unsigned int)v11 )
          goto LABEL_10;
        goto LABEL_9;
      }
    }
    else
    {
      v29 = nullptr;
      v17 = (__int64 *)(a1 + 64);
    }
    v18 = 2 * v16;
LABEL_9:
    sub_18988F0((__int64)v17, v18, (__int64)v10, v11, v12, v13);
    sub_1895990(v17, &v28, &v29);
    v10 = v29;
    v19 = *(_DWORD *)(a1 + 72) + 1;
LABEL_10:
    *(_DWORD *)(a1 + 72) = v19;
    if ( *v10 != -1 )
      --*(_DWORD *)(a1 + 76);
    v20 = v28;
    v10[1] = 0;
    v10[2] = 0;
    *v10 = v20;
    v10[3] = 0;
    v10[4] = 0;
    goto LABEL_14;
  }
  return result;
}
