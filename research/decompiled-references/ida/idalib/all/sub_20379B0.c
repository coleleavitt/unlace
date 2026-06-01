void __fastcall sub_20379B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool v7; // zf
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r12
  int v12; // r13d
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned int v22; // esi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // ebx
  unsigned int v27; // esi
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rdx
  char v32; // al
  int v33; // ecx
  int v34; // r11d
  __int64 v35; // r10
  int v36; // edx
  __int64 v37; // rdi
  int v38; // r12d
  __int64 v39; // r10
  int v40; // ecx
  __int64 v41; // r11
  __int64 v42; // [rsp+0h] [rbp-78h]
  _QWORD *v43; // [rsp+0h] [rbp-78h]
  __int64 *v44; // [rsp+8h] [rbp-70h]
  unsigned int v45; // [rsp+18h] [rbp-60h]
  int v46; // [rsp+18h] [rbp-60h]
  char v47; // [rsp+2Fh] [rbp-49h] BYREF
  __int64 v48; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v49[8]; // [rsp+38h] [rbp-40h] BYREF

  v7 = *(_BYTE *)(a1 + 25) == 0;
  v8 = *(_QWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 160) = 0;
  if ( v7 )
  {
    sub_2037850(a1, v8);
    v8 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v8 + 2) & 1) == 0 )
      goto LABEL_3;
  }
  else if ( (*(_BYTE *)(v8 + 2) & 1) == 0 )
  {
LABEL_3:
    v9 = *(_QWORD *)(v8 + 96);
    v10 = v9;
    goto LABEL_4;
  }
  sub_208D820(v8);
  v9 = *(_QWORD *)(v8 + 96);
  v8 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v8 + 2) & 1) != 0 )
    sub_208D820(*(_QWORD *)(a1 + 16));
  v10 = *(_QWORD *)(v8 + 96);
LABEL_4:
  v11 = v10 + 40LL * *(_QWORD *)(v8 + 104);
  if ( v11 != v9 )
  {
    a5 = (__int64)v49;
    while ( 1 )
    {
      while ( (*(_BYTE *)(v9 + 7) & 0x10) != 0 )
      {
        v9 += 40;
        if ( v9 == v11 )
          goto LABEL_11;
      }
      v12 = *(_DWORD *)(a1 + 160);
      v13 = *(_DWORD *)(a1 + 152);
      v48 = v9;
      *(_DWORD *)(a1 + 160) = v12 + 1;
      if ( !v13 )
        break;
      a6 = v13 - 1;
      v14 = *(_QWORD *)(a1 + 136);
      v10 = (unsigned int)a6 & (((unsigned int)v9 >> 9) ^ ((unsigned int)v9 >> 4));
      v15 = v14 + 16 * v10;
      a4 = *(_QWORD *)v15;
      if ( v9 != *(_QWORD *)v15 )
      {
        v34 = 1;
        v35 = 0;
        if ( a4 != -4096 )
        {
          while ( 1 )
          {
            if ( !v35 && a4 == -8192 )
              v35 = v15;
            v10 = (unsigned int)a6 & (v34 + (_DWORD)v10);
            v15 = v14 + 16LL * (unsigned int)v10;
            a4 = *(_QWORD *)v15;
            if ( *(_QWORD *)v15 == v9 )
              goto LABEL_10;
            if ( a4 == -4096 )
            {
              if ( v35 )
                v15 = v35;
              break;
            }
            ++v34;
          }
        }
        v36 = *(_DWORD *)(a1 + 144);
        a4 = 3 * v13;
        v49[0] = v15;
        v10 = (unsigned int)(v36 + 1);
        if ( 4 * (int)v10 < (unsigned int)a4 )
        {
          v37 = v9;
          a4 = v13 - *(_DWORD *)(a1 + 148) - (unsigned int)v10;
          a6 = v13 >> 3;
          if ( (unsigned int)a4 > (unsigned int)a6 )
          {
LABEL_53:
            v7 = *(_QWORD *)v15 == -4096;
            *(_DWORD *)(a1 + 144) = v10;
            if ( !v7 )
              --*(_DWORD *)(a1 + 148);
            *(_QWORD *)v15 = v37;
            *(_DWORD *)(v15 + 8) = 0;
            goto LABEL_10;
          }
          v43 = (_QWORD *)a5;
LABEL_67:
          sub_2035CD0((__int64 *)(a1 + 136), v13, v10, a4, a5, a6);
          sub_2033160((__int64 *)(a1 + 136), &v48, v43);
          v37 = v48;
          a5 = (__int64)v43;
          v10 = (unsigned int)(*(_DWORD *)(a1 + 144) + 1);
          v15 = v49[0];
          goto LABEL_53;
        }
LABEL_66:
        v43 = (_QWORD *)a5;
        v13 *= 2;
        goto LABEL_67;
      }
LABEL_10:
      v9 += 40;
      *(_DWORD *)(v15 + 8) = v12;
      if ( v9 == v11 )
        goto LABEL_11;
    }
    v49[0] = 0;
    goto LABEL_66;
  }
LABEL_11:
  v16 = *(_QWORD *)(a1 + 16);
  v17 = *(_QWORD *)(v16 + 80);
  v42 = v16 + 72;
  if ( v16 + 72 != v17 )
  {
    if ( !v17 )
LABEL_98:
      BUG();
    v18 = 0x8000000000041LL;
    v44 = (__int64 *)(a1 + 136);
    if ( (*(_BYTE *)(v17 - 17) & 0x10) == 0 )
      goto LABEL_30;
    while ( 1 )
    {
      v19 = *(_QWORD *)(v17 + 32);
      if ( v17 + 24 != v19 )
        break;
LABEL_27:
      v17 = *(_QWORD *)(v17 + 8);
      if ( v42 == v17 )
        goto LABEL_33;
      if ( !v17 )
        goto LABEL_98;
      if ( (*(_BYTE *)(v17 - 17) & 0x10) == 0 )
      {
LABEL_30:
        v26 = *(_DWORD *)(a1 + 160);
        v27 = *(_DWORD *)(a1 + 152);
        v28 = v17 - 24;
        v48 = v17 - 24;
        *(_DWORD *)(a1 + 160) = v26 + 1;
        if ( !v27 )
        {
          v49[0] = 0;
          goto LABEL_63;
        }
        a6 = v27 - 1;
        a5 = *(_QWORD *)(a1 + 136);
        a4 = (unsigned int)a6 & (((unsigned int)v28 >> 9) ^ ((unsigned int)v28 >> 4));
        v29 = a5 + 16 * a4;
        v30 = *(_QWORD *)v29;
        if ( v28 == *(_QWORD *)v29 )
          goto LABEL_32;
        v38 = 1;
        v39 = 0;
        if ( v30 == -4096 )
        {
LABEL_57:
          v40 = *(_DWORD *)(a1 + 144);
          v49[0] = v29;
          a4 = (unsigned int)(v40 + 1);
          a5 = (unsigned int)(4 * a4);
          if ( (unsigned int)a5 < 3 * v27 )
          {
            a5 = v27 >> 3;
            if ( v27 - *(_DWORD *)(a1 + 148) - (unsigned int)a4 > (unsigned int)a5 )
            {
LABEL_59:
              v7 = *(_QWORD *)v29 == -4096;
              *(_DWORD *)(a1 + 144) = a4;
              if ( !v7 )
                --*(_DWORD *)(a1 + 148);
              *(_QWORD *)v29 = v28;
              *(_DWORD *)(v29 + 8) = 0;
              goto LABEL_32;
            }
LABEL_64:
            sub_2035CD0(v44, v27, v28, a4, a5, a6);
            sub_2033160(v44, &v48, v49);
            v28 = v48;
            a4 = (unsigned int)(*(_DWORD *)(a1 + 144) + 1);
            v29 = v49[0];
            goto LABEL_59;
          }
LABEL_63:
          v27 *= 2;
          goto LABEL_64;
        }
        while ( 1 )
        {
          if ( v30 == -8192 && !v39 )
            v39 = v29;
          a4 = (unsigned int)a6 & (v38 + (_DWORD)a4);
          v29 = a5 + 16LL * (unsigned int)a4;
          v30 = *(_QWORD *)v29;
          if ( v28 == *(_QWORD *)v29 )
            break;
          if ( v30 == -4096 )
          {
            if ( v39 )
              v29 = v39;
            goto LABEL_57;
          }
          ++v38;
        }
LABEL_32:
        *(_DWORD *)(v29 + 8) = v26;
      }
    }
    while ( 1 )
    {
      if ( !v19 )
        BUG();
      if ( *(_BYTE *)(*(_QWORD *)(v19 - 16) + 8LL) == 7 || (*(_BYTE *)(v19 - 17) & 0x10) != 0 )
        goto LABEL_16;
      a5 = *(unsigned int *)(a1 + 160);
      v22 = *(_DWORD *)(a1 + 152);
      v23 = v19 - 24;
      v48 = v19 - 24;
      *(_DWORD *)(a1 + 160) = a5 + 1;
      if ( !v22 )
        break;
      a6 = *(_QWORD *)(a1 + 136);
      a4 = (v22 - 1) & (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4));
      v24 = a6 + 16 * a4;
      v25 = *(_QWORD *)v24;
      if ( v23 != *(_QWORD *)v24 )
      {
        if ( v25 != -4096 )
        {
          v46 = 1;
          v41 = 0;
          while ( 1 )
          {
            if ( !v41 && v25 == -8192 )
              v41 = v24;
            a4 = (v22 - 1) & (v46 + (_DWORD)a4);
            v24 = a6 + 16LL * (unsigned int)a4;
            v25 = *(_QWORD *)v24;
            if ( v23 == *(_QWORD *)v24 )
              goto LABEL_26;
            if ( v25 == -4096 )
            {
              if ( v41 )
                v24 = v41;
              break;
            }
            ++v46;
          }
        }
        v33 = *(_DWORD *)(a1 + 144);
        v49[0] = v24;
        a4 = (unsigned int)(v33 + 1);
        a6 = (unsigned int)(4 * a4);
        if ( (unsigned int)a6 < 3 * v22 )
        {
          a6 = v22 >> 3;
          if ( v22 - *(_DWORD *)(a1 + 148) - (unsigned int)a4 > (unsigned int)a6 )
          {
LABEL_39:
            v7 = *(_QWORD *)v24 == -4096;
            *(_DWORD *)(a1 + 144) = a4;
            if ( !v7 )
              --*(_DWORD *)(a1 + 148);
            *(_QWORD *)v24 = v23;
            *(_DWORD *)(v24 + 8) = 0;
            goto LABEL_26;
          }
          v45 = a5;
LABEL_44:
          sub_2035CD0(v44, v22, v23, a4, a5, a6);
          sub_2033160(v44, &v48, v49);
          v23 = v48;
          a5 = v45;
          a4 = (unsigned int)(*(_DWORD *)(a1 + 144) + 1);
          v24 = v49[0];
          goto LABEL_39;
        }
LABEL_43:
        v45 = a5;
        v22 *= 2;
        goto LABEL_44;
      }
LABEL_26:
      *(_DWORD *)(v24 + 8) = a5;
LABEL_16:
      if ( (unsigned __int8)(*(_BYTE *)(v19 - 24) - 34) <= 0x33u )
      {
        if ( _bittest64(&v18, (unsigned int)*(unsigned __int8 *)(v19 - 24) - 34) )
        {
          v49[0] = *(_QWORD *)(v19 + 48);
          v20 = sub_2049510(v49);
          if ( v20 )
            sub_2036410(a1, v20, v21, a4, a5, a6);
        }
      }
      v19 = *(_QWORD *)(v19 + 8);
      if ( v17 + 24 == v19 )
        goto LABEL_27;
    }
    v49[0] = 0;
    goto LABEL_43;
  }
LABEL_33:
  if ( *(_QWORD *)(a1 + 80) )
  {
    v31 = *(_QWORD *)(a1 + 16);
    v32 = *(_BYTE *)(a1 + 25);
    v48 = a1;
    v49[0] = v31;
    v47 = v32;
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD *, char *))(a1 + 88))(a1 + 64, &v48, v49, &v47);
  }
  *(_BYTE *)(a1 + 24) = 1;
}
