__int16 __fastcall sub_18CB420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int16 result; // ax
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // rdi
  _QWORD *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // r14
  char v17; // al
  int v18; // r10d
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  int v23; // edi
  __int64 v24; // r14
  __int64 v25; // r11
  __int64 *v26; // rdi
  int v27; // r11d
  __int64 v28; // r14
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // esi
  __int64 v32; // rdi
  int v33; // esi
  __int64 v34; // rdi
  int v35; // r11d
  __int64 *v36; // r10
  int v37; // r11d
  __int64 v38; // [rsp+0h] [rbp-50h]
  __int64 v39; // [rsp+8h] [rbp-48h]
  unsigned int v40; // [rsp+10h] [rbp-40h]
  char v41; // [rsp+17h] [rbp-39h]
  char v42; // [rsp+17h] [rbp-39h]

  result = *(_WORD *)a3 & 0x1FF;
  if ( result != 71 || (*(_DWORD *)a3 & 0x10000) != 0 || *(char *)(a3 + 2) >= 0 )
    return result;
  v8 = a3;
  v9 = *(_QWORD *)(a1 + 32);
  v38 = a2;
  v10 = v9 + 8LL * *(unsigned int *)(a1 + 40);
  v11 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  v40 = ((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4);
  if ( v9 != v10 )
  {
    v39 = v8;
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 - 8);
      if ( (*(_BYTE *)(v12 + 8) & 7) == 2 )
      {
        v13 = *(_QWORD *)(v12 + 1584);
        if ( v13 )
        {
          a2 = *(_QWORD *)(a1 + 544);
          if ( !(unsigned __int8)sub_B91990(v13 + 64, a2, v11, a4, a5, a6) )
          {
            if ( *(_BYTE *)(v12 + 1600) )
            {
LABEL_25:
              v8 = v39;
              goto LABEL_26;
            }
          }
        }
        v14 = *(_QWORD **)(v12 + 1592);
        v15 = v14[6] & 0xFFFFFFFFFFFFFFF0LL;
        if ( v15 )
        {
          v16 = *(_QWORD *)v15;
          if ( *(_BYTE *)(*(_QWORD *)v15 + 16LL) == 26
            || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
            && (v16 = sub_F63050(v16, a2, v11, a4)) != 0 )
          {
            v17 = sub_B981D0(v14, a2);
            if ( v17 )
            {
              v11 = *(_QWORD *)(*(_QWORD *)(v16 + 48) & 0xFFFFFFFFFFFFFFF0LL);
              if ( (*(_BYTE *)(v11 + 17) & 4) != 0 )
                break;
            }
          }
        }
      }
LABEL_24:
      v10 -= 8;
      if ( v9 == v10 )
        goto LABEL_25;
    }
    a4 = *(unsigned int *)(v12 + 1304);
    a2 = *(_QWORD *)(v12 + 1288);
    if ( !(_DWORD)a4 )
      goto LABEL_23;
    v18 = a4 - 1;
    a6 = ((_DWORD)a4 - 1) & v40;
    v11 = a2 + 16 * a6;
    a5 = *(_QWORD *)v11;
    if ( v38 == *(_QWORD *)v11 )
    {
LABEL_17:
      v19 = 32LL * (unsigned int)(*(_DWORD *)(v11 + 8) - 1);
      goto LABEL_18;
    }
    LODWORD(v24) = a6;
    v23 = 1;
    if ( a5 == -4096 )
    {
LABEL_23:
      if ( *(_DWORD *)(v12 + 1280) == 1 )
      {
LABEL_20:
        v8 = v39;
        goto LABEL_21;
      }
      goto LABEL_24;
    }
    while ( 1 )
    {
      v24 = v18 & (unsigned int)(v24 + v23);
      v25 = *(_QWORD *)(a2 + 16 * v24);
      if ( v25 == v38 )
        break;
      ++v23;
      if ( v25 == -4096 )
        goto LABEL_23;
    }
    v26 = (__int64 *)(v12 + 1288);
    v27 = 1;
    v28 = 0;
    while ( 1 )
    {
      if ( a5 == -8192 && !v28 )
        v28 = v11;
      a6 = v18 & (unsigned int)(v27 + a6);
      v11 = a2 + 16LL * (unsigned int)a6;
      a5 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 == v38 )
        goto LABEL_17;
      if ( a5 == -4096 )
        break;
      ++v27;
    }
    if ( v28 )
      v11 = v28;
    a5 = (unsigned int)(*(_DWORD *)(v12 + 1296) + 1);
    v29 = (unsigned int)(3 * a4);
    if ( 4 * (int)a5 >= (unsigned int)v29 )
    {
      v41 = v17;
      sub_EC2030(v26, 2 * a4, v11, a4, a5, v29);
      v31 = *(_DWORD *)(v12 + 1304);
      if ( !v31 )
        goto LABEL_69;
      a2 = (unsigned int)(v31 - 1);
      a6 = *(_QWORD *)(v12 + 1288);
      LODWORD(v32) = a2 & v40;
      a5 = (unsigned int)(*(_DWORD *)(v12 + 1296) + 1);
      v17 = v41;
      v11 = a6 + 16LL * ((unsigned int)a2 & v40);
      v30 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 != v38 )
      {
        v37 = 1;
        v36 = nullptr;
        if ( v30 != -4096 )
        {
          while ( 1 )
          {
            if ( v30 == -8192 && !v36 )
              v36 = (__int64 *)v11;
            v32 = (unsigned int)a2 & ((_DWORD)v32 + v37);
            v11 = a6 + 16 * v32;
            v30 = *(_QWORD *)v11;
            if ( v38 == *(_QWORD *)v11 )
              goto LABEL_43;
            if ( v30 == -4096 )
            {
LABEL_59:
              if ( !v36 )
                goto LABEL_52;
              v30 = *v36;
              v11 = (__int64)v36;
              goto LABEL_43;
            }
            ++v37;
          }
        }
        goto LABEL_52;
      }
    }
    else
    {
      a2 = (unsigned int)(a4 - *(_DWORD *)(v12 + 1300) - a5);
      a6 = (unsigned int)a4 >> 3;
      if ( (unsigned int)a2 > (unsigned int)a6 )
      {
        v30 = *(_QWORD *)v11;
        goto LABEL_43;
      }
      v42 = v17;
      sub_EC2030(v26, a4, v11, a4, a5, a6);
      v33 = *(_DWORD *)(v12 + 1304);
      if ( !v33 )
      {
LABEL_69:
        ++*(_DWORD *)(v12 + 1296);
        BUG();
      }
      a2 = (unsigned int)(v33 - 1);
      a6 = *(_QWORD *)(v12 + 1288);
      LODWORD(v34) = a2 & v40;
      a5 = (unsigned int)(*(_DWORD *)(v12 + 1296) + 1);
      v17 = v42;
      v11 = a6 + 16LL * ((unsigned int)a2 & v40);
      v30 = *(_QWORD *)v11;
      if ( *(_QWORD *)v11 != v38 )
      {
        v35 = 1;
        v36 = nullptr;
        if ( v30 != -4096 )
        {
          while ( 1 )
          {
            if ( v30 == -8192 && !v36 )
              v36 = (__int64 *)v11;
            v34 = (unsigned int)a2 & ((_DWORD)v34 + v35);
            v11 = a6 + 16 * v34;
            v30 = *(_QWORD *)v11;
            if ( v38 == *(_QWORD *)v11 )
              goto LABEL_43;
            if ( v30 == -4096 )
              goto LABEL_59;
            ++v35;
          }
        }
LABEL_52:
        *(_DWORD *)(v12 + 1296) = a5;
LABEL_45:
        a4 = v38;
        *(_DWORD *)(v11 + 8) = 0;
        *(_QWORD *)v11 = v38;
        v19 = 0x1FFFFFFFE0LL;
LABEL_18:
        v11 = *(_QWORD *)(v12 + 1320) + v19;
        if ( v11 )
        {
          if ( (*(_BYTE *)(v11 + 24) & 3) == 0 )
            goto LABEL_20;
          goto LABEL_24;
        }
        goto LABEL_23;
      }
    }
    v30 = v38;
LABEL_43:
    *(_DWORD *)(v12 + 1296) = a5;
    if ( v30 != -4096 )
      --*(_DWORD *)(v12 + 1300);
    goto LABEL_45;
  }
LABEL_26:
  v17 = 0;
LABEL_21:
  v20 = *(_QWORD *)(a1 + 248);
  v21 = *(_BYTE *)(v8 + 3) & 0xFE;
  *(_BYTE *)(v8 + 3) = *(_BYTE *)(v8 + 3) & 0xFE | v17 & 1;
  v22 = sub_B63DB0((unsigned __int64 *)v8, v20, v21, a4, a5);
  *(_BYTE *)(v8 + 1) = (v22 << 6) | *(_BYTE *)(v8 + 1) & 0x3F;
  result = *(_BYTE *)(v8 + 2) & 0xF8 | (v22 >> 2) & 7;
  *(_BYTE *)(v8 + 2) = result;
  return result;
}
