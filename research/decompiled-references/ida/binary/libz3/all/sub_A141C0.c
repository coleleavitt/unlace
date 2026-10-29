__int64 __fastcall sub_A141C0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r14
  __int64 v3; // r15
  unsigned int v4; // r12d
  int *v5; // rax
  int *v6; // rax
  int *v7; // rax
  int v8; // eax
  void *v9; // rbp
  __int64 v11; // rax
  int *v12; // rax
  int v13; // eax
  unsigned int *v14; // r15
  unsigned int *v15; // r8
  unsigned int v16; // ecx
  int *v17; // rax
  int v18; // ecx
  int v19; // eax
  __int64 v20; // r14
  __int64 v21; // rcx
  unsigned int v22; // r15d
  int *v23; // rax
  int v24; // eax
  int v25; // [rsp+10h] [rbp-C8h]
  int v26[2]; // [rsp+10h] [rbp-C8h]
  char v27; // [rsp+20h] [rbp-B8h]
  int v28; // [rsp+20h] [rbp-B8h]
  unsigned int v29; // [rsp+2Ch] [rbp-ACh]
  unsigned int *v30; // [rsp+30h] [rbp-A8h]
  char v31; // [rsp+38h] [rbp-A0h]
  char v32; // [rsp+38h] [rbp-A0h]
  __int64 v33; // [rsp+38h] [rbp-A0h]
  _QWORD v34[2]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v35[2]; // [rsp+50h] [rbp-88h] BYREF
  char v36[32]; // [rsp+60h] [rbp-78h] BYREF
  char v37[88]; // [rsp+80h] [rbp-58h] BYREF

  v34[0] = 1024;
  v34[1] = 0;
  v1 = sub_9B68C0(a1);
  v35[0] = 1;
  v35[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v35);
  BYTE4(v35[0]) &= ~1u;
  LODWORD(v35[0]) = 1;
  if ( v1 != -1 )
    goto LABEL_23;
  v2 = *(_QWORD *)(a1 + 632);
  if ( !v2 )
    goto LABEL_23;
  v3 = v2 + 24LL * *(unsigned int *)(v2 - 4);
  if ( v2 == v3 )
    goto LABEL_23;
  v25 = -1;
  v29 = 0;
  do
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)(v2 + 12);
      if ( v4 == -1 )
        goto LABEL_5;
      if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v4 + 3) >> 4) & 3) != 1 )
        goto LABEL_5;
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v4 + 3) & 0x40) == 0 )
        goto LABEL_5;
      v5 = sub_9AA900(a1, v4);
      if ( (v5[5] & 1) == 0 && v5[4] == 1 && !v5[8] )
        goto LABEL_5;
      v6 = sub_9AA900(a1, v4);
      sub_91F480((__int64)v36, (__int64)v6);
      if ( *(int *)v36 < 0 || !*(_DWORD *)v36 && *(int *)v37 < 0 )
      {
        sub_1831620(qword_1C7F2C0, v36);
        sub_1831620(qword_1C7F2C0, v37);
      }
      v31 = sub_9B1D90((__int64)v36, (__int64)v34);
      sub_25A130(v37);
      sub_25A130(v36);
      if ( v31 )
        break;
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * v4) )
      {
        v7 = sub_9AA900(a1, v4);
        sub_992E80((__int64)v36, *(_QWORD *)(*(_QWORD *)(a1 + 688) + 8LL * v4) + 16LL, (__int64)v7);
        v32 = sub_9B1D90((__int64)v36, (__int64)v34);
        sub_25A130(v37);
        sub_25A130(v36);
        if ( v32 )
          break;
      }
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 680) + 8LL * v4);
      if ( !v11 )
        goto LABEL_5;
      v33 = v11 + 16;
      v12 = sub_9AA900(a1, v4);
      sub_992E80((__int64)v36, (__int64)v12, v33);
      v27 = sub_9B1D90((__int64)v36, (__int64)v34);
      sub_25A130(v37);
      sub_25A130(v36);
      if ( !v27 )
        goto LABEL_5;
      if ( v25 != -1 )
      {
        ++v29;
        v13 = 214013 * *(_DWORD *)(a1 + 1016) + 2531011;
        *(_DWORD *)(a1 + 1016) = v13;
        if ( (HIWORD(v13) & 0x7FFFu) % v29 )
          v4 = v25;
        v25 = v4;
        goto LABEL_5;
      }
LABEL_27:
      v25 = v4;
      v29 = 1;
LABEL_5:
      v2 += 24;
      if ( v2 == v3 )
        goto LABEL_21;
    }
    if ( v25 == -1 )
      goto LABEL_27;
    ++v29;
    v8 = 214013 * *(_DWORD *)(a1 + 1016) + 2531011;
    *(_DWORD *)(a1 + 1016) = v8;
    if ( (HIWORD(v8) & 0x7FFFu) % v29 )
      v4 = v25;
    v2 += 24;
    v25 = v4;
  }
  while ( v2 != v3 );
LABEL_21:
  if ( v25 != -1 )
    goto LABEL_22;
  v14 = *(unsigned int **)(a1 + 632);
  if ( v14 )
  {
    v15 = &v14[6 * *(v14 - 1)];
    if ( v14 != v15 )
    {
      do
      {
        v16 = v14[3];
        if ( v16 != -1
          && ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v16 + 3) >> 4) & 3) == 1
          && (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v16 + 3) & 0x40) != 0 )
        {
          v30 = v15;
          v28 = v14[3];
          v17 = sub_9AA900(a1, v16);
          v18 = v28;
          v15 = v30;
          if ( (v17[5] & 1) != 0 || v17[4] != 1 || v17[8] )
          {
            if ( v25 == -1 )
            {
              v25 = v28;
              v29 = 1;
            }
            else
            {
              ++v29;
              v19 = 214013 * *(_DWORD *)(a1 + 1016) + 2531011;
              *(_DWORD *)(a1 + 1016) = v19;
              if ( (HIWORD(v19) & 0x7FFFu) % v29 )
                v18 = v25;
              v25 = v18;
            }
          }
        }
        v14 += 6;
      }
      while ( v14 != v15 );
      if ( v25 == -1 )
      {
        v20 = *(_QWORD *)(a1 + 632);
        if ( v20 )
        {
          v21 = v20 + 24LL * *(unsigned int *)(v20 - 4);
          if ( v20 != v21 )
          {
            v1 = -1;
            do
            {
              v22 = *(_DWORD *)(v20 + 12);
              if ( v22 != -1
                && ((*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v22 + 3) >> 4) & 3) == 2
                && (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4LL * v22 + 3) & 0x40) != 0 )
              {
                *(_QWORD *)v26 = v21;
                v23 = sub_9AA900(a1, v22);
                v21 = *(_QWORD *)v26;
                if ( (v23[5] & 1) != 0 || v23[4] != 1 || v23[8] )
                {
                  sub_A13F70((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 656) + 4LL * v22) & 0xFFFFFFF);
                  v21 = *(_QWORD *)v26;
                  if ( v1 == -1 )
                  {
                    v29 = 1;
                    v1 = v22;
                  }
                  else
                  {
                    ++v29;
                    v24 = 214013 * *(_DWORD *)(a1 + 1016) + 2531011;
                    *(_DWORD *)(a1 + 1016) = v24;
                    if ( !((HIWORD(v24) & 0x7FFFu) % v29) )
                      v1 = v22;
                  }
                }
              }
              v20 += 24;
            }
            while ( v20 != v21 );
          }
        }
      }
      else
      {
LABEL_22:
        v1 = v25;
      }
    }
  }
LABEL_23:
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v34);
  sub_182CBA0(v9, v35);
  return v1;
}

