__int64 __fastcall sub_A47FE0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r14
  __int64 v3; // r13
  unsigned int v4; // r12d
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  void *v9; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // esi
  __int64 v17; // rax
  int v18; // eax
  unsigned int *v19; // r14
  unsigned int *v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rax
  int v23; // eax
  char v24; // [rsp+10h] [rbp-98h]
  unsigned int *v25; // [rsp+10h] [rbp-98h]
  int v26; // [rsp+18h] [rbp-90h]
  unsigned int v27; // [rsp+18h] [rbp-90h]
  unsigned int v28; // [rsp+1Ch] [rbp-8Ch]
  char v29; // [rsp+20h] [rbp-88h]
  char v30; // [rsp+20h] [rbp-88h]
  __int64 v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+20h] [rbp-88h]
  __int64 v33; // [rsp+20h] [rbp-88h]
  __int64 v34; // [rsp+28h] [rbp-80h]
  _QWORD v35[2]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v36[2]; // [rsp+40h] [rbp-68h] BYREF
  char v37[88]; // [rsp+50h] [rbp-58h] BYREF

  v35[0] = 1024;
  v35[1] = 0;
  v1 = sub_9B64C0(a1);
  v36[0] = 1;
  v36[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v36);
  BYTE4(v36[0]) &= ~1u;
  LODWORD(v36[0]) = 1;
  if ( v1 != -1 )
    goto LABEL_17;
  v2 = *(_QWORD *)(a1 + 568);
  if ( !v2 )
    goto LABEL_17;
  v3 = v2 + 24LL * *(unsigned int *)(v2 - 4);
  if ( v2 == v3 )
    goto LABEL_17;
  v26 = -1;
  v28 = 0;
  do
  {
    v4 = *(_DWORD *)(v2 + 12);
    if ( v4 == -1 )
      goto LABEL_5;
    if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v4 + 3) >> 4) & 3) != 1 )
      goto LABEL_5;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v4 + 3) & 0x40) == 0 )
      goto LABEL_5;
    v5 = sub_999800(a1, v4);
    if ( (*(_BYTE *)(v5 + 20) & 1) == 0 && *(_DWORD *)(v5 + 16) == 1 )
      goto LABEL_5;
    v6 = sub_999800(a1, v4);
    sub_3EC020((__int64)v37, v6);
    v29 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v37, (__int64)v35);
    sub_25A130(v37);
    if ( !v29 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * v4) )
      {
        v7 = sub_999800(a1, v4);
        sub_3EBB80((__int64)v37, *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * v4) + 16LL, v7);
        v30 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v37, (__int64)v35);
        sub_25A130(v37);
        if ( v30 )
        {
          if ( v26 == -1 )
            goto LABEL_28;
          ++v28;
          v8 = 214013 * *(_DWORD *)(a1 + 920) + 2531011;
          *(_DWORD *)(a1 + 920) = v8;
          if ( (HIWORD(v8) & 0x7FFFu) % v28 )
            v4 = v26;
          v26 = v4;
          goto LABEL_5;
        }
      }
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 616) + 8LL * v4);
      if ( !v11 )
        goto LABEL_5;
      v31 = v11 + 16;
      v12 = sub_999800(a1, v4);
      sub_3EBB80((__int64)v37, v12, v31);
      v24 = sub_3ED700((__int64)qword_1C7F2C0, (__int64)v37, (__int64)v35);
      sub_25A130(v37);
      if ( !v24 )
        goto LABEL_5;
    }
    if ( v26 == -1 )
    {
LABEL_28:
      v26 = v4;
      v28 = 1;
      goto LABEL_5;
    }
    ++v28;
    v13 = 214013 * *(_DWORD *)(a1 + 920) + 2531011;
    *(_DWORD *)(a1 + 920) = v13;
    if ( (HIWORD(v13) & 0x7FFFu) % v28 )
      v4 = v26;
    v26 = v4;
LABEL_5:
    v2 += 24;
  }
  while ( v2 != v3 );
  if ( v26 != -1 )
    goto LABEL_19;
  v14 = *(_QWORD *)(a1 + 568);
  if ( v14 )
  {
    v15 = v14 + 24LL * *(unsigned int *)(v14 - 4);
    if ( v14 != v15 )
    {
      do
      {
        v16 = *(_DWORD *)(v14 + 12);
        if ( v16 != -1
          && ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v16 + 3) >> 4) & 3) == 1
          && (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v16 + 3) & 0x40) != 0 )
        {
          v34 = v15;
          v32 = v14;
          v17 = sub_999800(a1, v16);
          v14 = v32;
          v15 = v34;
          if ( (*(_BYTE *)(v17 + 20) & 1) != 0 || *(_DWORD *)(v17 + 16) != 1 )
          {
            if ( v26 == -1 )
            {
              v26 = v16;
              v28 = 1;
            }
            else
            {
              ++v28;
              v18 = 214013 * *(_DWORD *)(a1 + 920) + 2531011;
              *(_DWORD *)(a1 + 920) = v18;
              if ( (HIWORD(v18) & 0x7FFFu) % v28 )
                v16 = v26;
              v26 = v16;
            }
          }
        }
        v14 += 24;
      }
      while ( v14 != v15 );
      if ( v26 == -1 )
      {
        v19 = *(unsigned int **)(a1 + 568);
        if ( v19 )
        {
          v20 = &v19[6 * *(v19 - 1)];
          if ( v19 != v20 )
          {
            v1 = -1;
            do
            {
              v21 = v19[3];
              if ( v21 != -1
                && ((*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v21 + 3) >> 4) & 3) == 2
                && (*(_BYTE *)(*(_QWORD *)(a1 + 592) + 4LL * v21 + 3) & 0x40) != 0 )
              {
                v33 = v21;
                v25 = v20;
                v27 = v19[3];
                v22 = sub_999800(a1, v21);
                v20 = v25;
                if ( (*(_BYTE *)(v22 + 20) & 1) != 0 || *(_DWORD *)(v22 + 16) != 1 )
                {
                  sub_A47D30((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 592) + 4 * v33) & 0xFFFFFFF);
                  v20 = v25;
                  if ( v1 == -1 )
                  {
                    v28 = 1;
                    v1 = v27;
                  }
                  else
                  {
                    ++v28;
                    v23 = 214013 * *(_DWORD *)(a1 + 920) + 2531011;
                    *(_DWORD *)(a1 + 920) = v23;
                    if ( !((HIWORD(v23) & 0x7FFFu) % v28) )
                      v1 = v27;
                  }
                }
              }
              v19 += 6;
            }
            while ( v19 != v20 );
          }
        }
      }
      else
      {
LABEL_19:
        v1 = v26;
      }
    }
  }
LABEL_17:
  v9 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v35);
  sub_182CBA0(v9, v36);
  return v1;
}

