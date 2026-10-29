__int64 __fastcall sub_1F42630(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 **v13; // rdi
  __int64 v14; // r9
  unsigned int v15; // r12d
  __int64 v16; // r8
  __int64 *v17; // rbp
  __int64 v18; // r12
  __int64 result; // rax
  int v20; // r11d
  __int64 *v21; // r14
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rdi
  __int64 v25; // r13
  unsigned __int64 v26; // r14
  __int64 v27; // rdi
  unsigned __int64 v28; // rdi
  __int64 v29; // r15
  unsigned __int8 v30; // al
  __int64 (__fastcall *v31)(__int64); // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // edx
  unsigned int v35; // edi
  int v36; // edx
  int v37; // edi
  unsigned int v38; // r12d
  int v39; // r10d
  __int64 *v40; // r10
  int v41; // r11d
  unsigned int v42; // [rsp+8h] [rbp-50h]
  __int64 v43; // [rsp+8h] [rbp-50h]
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+18h] [rbp-40h]

  v6 = sub_B8C1B0(a2);
  v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
  v12 = *(unsigned int *)(a1 + 3640);
  v13 = (__int64 **)(a1 + 3624);
  if ( !(_DWORD)v12 )
    goto LABEL_42;
  v14 = *(_QWORD *)(a1 + 3624);
  v15 = ((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4);
  v16 = ((_DWORD)v12 - 1) & v15;
  v8 = (__int64 *)(v14 + 40 * v16);
  v9 = *v8;
  if ( v7 != *v8 )
  {
    v20 = 1;
    v21 = nullptr;
    if ( v9 != -4096 )
    {
      while ( 1 )
      {
        if ( !v21 && v9 == -8192 )
          v21 = v8;
        v16 = ((_DWORD)v12 - 1) & (unsigned int)(v20 + v16);
        v8 = (__int64 *)(v14 + 40LL * (unsigned int)v16);
        v9 = *v8;
        if ( v7 == *v8 )
          goto LABEL_3;
        if ( v9 == -4096 )
          break;
        ++v20;
      }
      if ( v21 )
        v8 = v21;
    }
    v10 = (unsigned int)(3 * v12);
    v9 = (unsigned int)(*(_DWORD *)(a1 + 3632) + 1);
    v11 = (unsigned int)(4 * v9);
    if ( (unsigned int)v11 < (unsigned int)v10 )
    {
      v16 = (unsigned int)(v12 - *(_DWORD *)(a1 + 3636) - v9);
      v14 = (unsigned int)v12 >> 3;
      if ( (unsigned int)v16 > (unsigned int)v14 )
      {
LABEL_9:
        v12 = *v8;
        goto LABEL_10;
      }
      v44 = v7;
      sub_1F38700(v13, v12, (__int64)v8, v9, v16, v14);
      v36 = *(_DWORD *)(a1 + 3640);
      if ( v36 )
      {
        v37 = v36 - 1;
        v16 = *(_QWORD *)(a1 + 3624);
        v38 = (v36 - 1) & v15;
        v9 = (unsigned int)(*(_DWORD *)(a1 + 3632) + 1);
        v7 = v44;
        v8 = (__int64 *)(v16 + 40LL * v38);
        v12 = *v8;
        if ( v44 != *v8 )
        {
          if ( v12 != -4096 )
          {
            v14 = v16 + 40LL * v38;
            v39 = 1;
            v8 = nullptr;
            while ( 1 )
            {
              if ( v12 == -8192 && !v8 )
                v8 = (__int64 *)v14;
              v38 = v37 & (v39 + v38);
              v14 = v16 + 40LL * v38;
              v12 = *(_QWORD *)v14;
              if ( v44 == *(_QWORD *)v14 )
              {
                v8 = (__int64 *)(v16 + 40LL * v38);
                goto LABEL_10;
              }
              if ( v12 == -4096 )
                break;
              ++v39;
            }
            if ( v8 )
              goto LABEL_9;
            v8 = (__int64 *)(v16 + 40LL * v38);
          }
LABEL_45:
          *(_DWORD *)(a1 + 3632) = v9;
LABEL_12:
          *v8 = v7;
          v17 = v8 + 1;
          v18 = a3;
          v8[1] = (__int64)(v8 + 3);
          v8[2] = 0x200000000LL;
          goto LABEL_13;
        }
        goto LABEL_10;
      }
      goto LABEL_69;
    }
LABEL_42:
    v43 = v7;
    sub_1F38700(v13, 2 * v12, (__int64)v8, v9, v10, v11);
    v34 = *(_DWORD *)(a1 + 3640);
    if ( v34 )
    {
      v7 = v43;
      v16 = (unsigned int)(v34 - 1);
      v14 = *(_QWORD *)(a1 + 3624);
      v9 = (unsigned int)(*(_DWORD *)(a1 + 3632) + 1);
      v35 = v16 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4));
      v8 = (__int64 *)(v14 + 40LL * v35);
      v12 = *v8;
      if ( v43 != *v8 )
      {
        if ( v12 != -4096 )
        {
          v40 = (__int64 *)(v14 + 40LL * ((unsigned int)v16 & (((unsigned int)v43 >> 9) ^ ((unsigned int)v43 >> 4))));
          v41 = 1;
          v8 = nullptr;
          while ( 1 )
          {
            if ( !v8 && v12 == -8192 )
              v8 = v40;
            v35 = v16 & (v41 + v35);
            v40 = (__int64 *)(v14 + 40LL * v35);
            v12 = *v40;
            if ( v43 == *v40 )
            {
              v8 = (__int64 *)(v14 + 40LL * v35);
              goto LABEL_10;
            }
            if ( v12 == -4096 )
              break;
            ++v41;
          }
          if ( v8 )
            goto LABEL_9;
          v8 = (__int64 *)(v14 + 40LL * v35);
        }
        goto LABEL_45;
      }
LABEL_10:
      *(_DWORD *)(a1 + 3632) = v9;
      if ( v12 != -4096 )
        --*(_DWORD *)(a1 + 3636);
      goto LABEL_12;
    }
LABEL_69:
    ++*(_DWORD *)(a1 + 3632);
    BUG();
  }
LABEL_3:
  v17 = v8 + 1;
  v18 = a3;
  if ( a3 >= *((_DWORD *)v8 + 4) || (result = *(_QWORD *)(v8[1] + 8LL * a3)) == 0 )
  {
LABEL_13:
    v22 = sub_1F42380(a2, v12, (__int64)v8, v9, v16, v14);
    v23 = v22;
    if ( !v22 || *(char *)(sub_B8C1B0(v22) + 29) < 0 || (v24 = v23, v25 = 0, (v26 = sub_B8E970(v24)) == 0) )
    {
LABEL_15:
      result = 0;
      if ( a3 < *((_DWORD *)v17 + 2) )
        return *(_QWORD *)(*v17 + 8 * v18);
      return result;
    }
    while ( 1 )
    {
      v30 = *(_BYTE *)(v26 + 28) & 0x7F;
      if ( v30 != 86 )
        break;
      v27 = *(_QWORD *)(v26 + 40);
      if ( v27 )
      {
        if ( (v27 & 4) == 0 )
        {
          v28 = v27 & 0xFFFFFFFFFFFFFFF8LL;
          if ( v28 )
          {
            v29 = v28;
            v30 = *(_BYTE *)(v28 + 28) & 0x7F;
LABEL_23:
            if ( (unsigned int)v30 - 18 <= 0x3F && sub_1EA74C0(v29) )
            {
              v42 = v25 + 1;
              v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 32LL);
              if ( (_DWORD)v25 == *((_DWORD *)v17 + 2) )
              {
                v32 = v31(v29);
                v33 = *((unsigned int *)v17 + 2);
                if ( v33 + 1 > (unsigned __int64)*((unsigned int *)v17 + 3) )
                {
                  v45 = v32;
                  sub_2237220(v17, v17 + 2, v33 + 1, 8);
                  v33 = *((unsigned int *)v17 + 2);
                  v32 = v45;
                }
                v25 = v42;
                *(_QWORD *)(*v17 + 8 * v33) = v32;
                ++*((_DWORD *)v17 + 2);
              }
              else
              {
                *(_QWORD *)(*v17 + 8 * v25) = v31(v29);
                v25 = v42;
              }
            }
          }
        }
      }
      v26 = *(_QWORD *)(v26 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v26 )
        goto LABEL_15;
    }
    v29 = v26;
    goto LABEL_23;
  }
  return result;
}
