__int64 __fastcall sub_A53CE0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r13
  __int64 v3; // r14
  unsigned int v4; // r12d
  int *v5; // rax
  int *v6; // rax
  int *v7; // rax
  __int64 v8; // rax
  int *v9; // rax
  void *v10; // rbp
  unsigned int v12; // ecx
  unsigned int v13; // esi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned int v19; // esi
  int *v20; // rax
  int v21; // eax
  __int64 v22; // r13
  __int64 v23; // r8
  unsigned int v24; // ecx
  int *v25; // rax
  int v26; // eax
  int v27; // eax
  int v28; // [rsp+10h] [rbp-D8h]
  unsigned int v29; // [rsp+10h] [rbp-D8h]
  unsigned int v30; // [rsp+14h] [rbp-D4h]
  __int64 v31; // [rsp+18h] [rbp-D0h]
  __int64 v32; // [rsp+20h] [rbp-C8h]
  __int64 v33; // [rsp+20h] [rbp-C8h]
  __int64 v34; // [rsp+20h] [rbp-C8h]
  __int64 v35; // [rsp+28h] [rbp-C0h]
  _QWORD v36[2]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v37[2]; // [rsp+40h] [rbp-A8h] BYREF
  _DWORD v38[8]; // [rsp+50h] [rbp-98h] BYREF
  _DWORD v39[8]; // [rsp+70h] [rbp-78h] BYREF
  int v40[22]; // [rsp+90h] [rbp-58h] BYREF

  v36[0] = 1024;
  v36[1] = 0;
  v1 = sub_9B6C60(a1);
  v37[0] = 1;
  v37[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v37);
  BYTE4(v37[0]) &= ~1u;
  LODWORD(v37[0]) = 1;
  if ( v1 != -1 )
    goto LABEL_23;
  v2 = *(_QWORD *)(a1 + 696);
  if ( !v2 )
    goto LABEL_23;
  v3 = v2 + 24LL * *(unsigned int *)(v2 - 4);
  if ( v2 == v3 )
    goto LABEL_23;
  v28 = -1;
  v30 = 0;
  do
  {
    v4 = *(_DWORD *)(v2 + 12);
    if ( v4 == -1 )
      goto LABEL_5;
    if ( ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v4 + 3) >> 4) & 3) != 1 )
      goto LABEL_5;
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v4 + 3) & 0x40) == 0 )
      goto LABEL_5;
    v5 = sub_9AD4F0(a1, v4);
    if ( !*v5 && (v5[13] & 1) == 0 && v5[12] == 1 && !v5[16] )
      goto LABEL_5;
    v6 = sub_9AD4F0(a1, v4);
    sub_8A6550((__int64)v38, (__int64)v6);
    if ( v38[0] >= 0 )
    {
      if ( v38[0] )
        goto LABEL_15;
      if ( v39[0] >= 0 && (v39[0] || v40[0] >= 0) )
        goto LABEL_84;
    }
    sub_1831620(qword_1C7F2C0, v38);
    sub_1831620(qword_1C7F2C0, v39);
    sub_1831620(qword_1C7F2C0, v40);
    if ( v38[0] < 0 )
    {
LABEL_32:
      sub_2A6060((__int64)v38);
      v12 = v28;
      if ( v28 == -1 )
        goto LABEL_40;
      v13 = ++v30;
      v14 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
      *(_DWORD *)(a1 + 1112) = v14;
      v15 = HIWORD(v14) & 0x7FFF;
LABEL_34:
      if ( v15 % v13 )
        v4 = v12;
      v28 = v4;
      goto LABEL_5;
    }
    if ( !v38[0] )
    {
LABEL_84:
      if ( sub_9B1D90((__int64)v39, (__int64)v36) )
        goto LABEL_32;
    }
LABEL_15:
    sub_2A6060((__int64)v38);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v4) )
    {
      v7 = sub_9AD4F0(a1, v4);
      sub_9F7AE0((__int64)v38, *(_QWORD *)(*(_QWORD *)(a1 + 752) + 8LL * v4) + 16LL, (__int64)v7);
      if ( v38[0] < 0 || !v38[0] && sub_9B1D90((__int64)v39, (__int64)v36) )
      {
        sub_2A6060((__int64)v38);
        v12 = v28;
        if ( v28 == -1 )
          goto LABEL_40;
        ++v30;
        v16 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
        v13 = v30;
        *(_DWORD *)(a1 + 1112) = v16;
        v15 = HIWORD(v16) & 0x7FFF;
        goto LABEL_34;
      }
      sub_2A6060((__int64)v38);
    }
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 744) + 8LL * v4);
    if ( !v8 )
      goto LABEL_5;
    v32 = v8 + 16;
    v9 = sub_9AD4F0(a1, v4);
    sub_9F7AE0((__int64)v38, (__int64)v9, v32);
    if ( v38[0] >= 0 && (v38[0] || !sub_9B1D90((__int64)v39, (__int64)v36)) )
    {
      sub_2A6060((__int64)v38);
      goto LABEL_5;
    }
    sub_2A6060((__int64)v38);
    if ( v28 == -1 )
    {
LABEL_40:
      v28 = v4;
      v30 = 1;
      goto LABEL_5;
    }
    ++v30;
    v27 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
    *(_DWORD *)(a1 + 1112) = v27;
    if ( (HIWORD(v27) & 0x7FFFu) % v30 )
      v4 = v28;
    v28 = v4;
LABEL_5:
    v2 += 24;
  }
  while ( v2 != v3 );
  if ( v28 != -1 )
    goto LABEL_25;
  v17 = *(_QWORD *)(a1 + 696);
  if ( v17 )
  {
    v18 = v17 + 24LL * *(unsigned int *)(v17 - 4);
    if ( v17 != v18 )
    {
      do
      {
        v19 = *(_DWORD *)(v17 + 12);
        if ( v19 != -1
          && ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v19 + 3) >> 4) & 3) == 1
          && (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v19 + 3) & 0x40) != 0 )
        {
          v35 = v18;
          v33 = v17;
          v20 = sub_9AD4F0(a1, v19);
          v17 = v33;
          v18 = v35;
          if ( *v20 || (v20[13] & 1) != 0 || v20[12] != 1 || v20[16] )
          {
            if ( v28 == -1 )
            {
              v28 = v19;
              v30 = 1;
            }
            else
            {
              ++v30;
              v21 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
              *(_DWORD *)(a1 + 1112) = v21;
              if ( (HIWORD(v21) & 0x7FFFu) % v30 )
                v19 = v28;
              v28 = v19;
            }
          }
        }
        v17 += 24;
      }
      while ( v17 != v18 );
      if ( v28 == -1 )
      {
        v22 = *(_QWORD *)(a1 + 696);
        if ( v22 )
        {
          v23 = v22 + 24LL * *(unsigned int *)(v22 - 4);
          if ( v22 != v23 )
          {
            v1 = -1;
            do
            {
              v24 = *(_DWORD *)(v22 + 12);
              if ( v24 != -1
                && ((*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v24 + 3) >> 4) & 3) == 2
                && (*(_BYTE *)(*(_QWORD *)(a1 + 720) + 4LL * v24 + 3) & 0x40) != 0 )
              {
                v34 = v24;
                v31 = v23;
                v29 = *(_DWORD *)(v22 + 12);
                v25 = sub_9AD4F0(a1, v24);
                v23 = v31;
                if ( *v25 || (v25[13] & 1) != 0 || v25[12] != 1 || v25[16] )
                {
                  sub_A53A70((_QWORD *)a1, *(_DWORD *)(*(_QWORD *)(a1 + 720) + 4 * v34) & 0xFFFFFFF);
                  v23 = v31;
                  if ( v1 == -1 )
                  {
                    v30 = 1;
                    v1 = v29;
                  }
                  else
                  {
                    ++v30;
                    v26 = 214013 * *(_DWORD *)(a1 + 1112) + 2531011;
                    *(_DWORD *)(a1 + 1112) = v26;
                    if ( !((HIWORD(v26) & 0x7FFFu) % v30) )
                      v1 = v29;
                  }
                }
              }
              v22 += 24;
            }
            while ( v22 != v23 );
          }
        }
      }
      else
      {
LABEL_25:
        v1 = v28;
      }
    }
  }
LABEL_23:
  v10 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v36);
  sub_182CBA0(v10, v37);
  return v1;
}

