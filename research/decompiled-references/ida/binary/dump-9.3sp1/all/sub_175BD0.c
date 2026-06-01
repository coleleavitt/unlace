__int64 __fastcall sub_175BD0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r13
  int v6; // eax
  int v7; // r13d
  int v8; // eax
  unsigned int v9; // r12d
  __int64 v10; // rax
  char v11; // bp
  char v12; // al
  char v14; // dl
  int v15; // eax
  int v16; // r12d
  __int64 v17; // rax
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  int v22; // eax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // edx
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  int v30; // [rsp+0h] [rbp-98h] BYREF
  int v31; // [rsp+4h] [rbp-94h] BYREF
  unsigned __int8 *v32; // [rsp+8h] [rbp-90h] BYREF
  char v33[8]; // [rsp+10h] [rbp-88h] BYREF
  __int128 v34; // [rsp+18h] [rbp-80h]
  char v35; // [rsp+28h] [rbp-70h]
  unsigned __int64 v36; // [rsp+30h] [rbp-68h] BYREF
  __int64 v37; // [rsp+38h] [rbp-60h]
  unsigned __int64 v38; // [rsp+40h] [rbp-58h] BYREF
  __int64 v39; // [rsp+48h] [rbp-50h]
  unsigned __int64 v40; // [rsp+50h] [rbp-48h] BYREF
  __int64 v41; // [rsp+58h] [rbp-40h]
  __int64 v42; // [rsp+60h] [rbp-38h]
  unsigned __int64 v43; // [rsp+68h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 56);
  v43 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 1504);
  v6 = *(_DWORD *)a2;
  if ( *(_DWORD *)v4 == 62 )
  {
    if ( v6 == 1 || v6 == 4 )
    {
      if ( *(_QWORD *)(v4 + 24) == *(_QWORD *)(a2 + 24) )
      {
        if ( sub_1255D0((unsigned __int8 *)(v4 + 64), v5, a2 + 32, 0) )
        {
          if ( *(_DWORD *)a2 != 1 )
          {
LABEL_30:
            v9 = 1;
            sub_125180(a2 + 32, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 32LL));
            sub_125180(a2 + 48, (unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 48LL));
            *(_DWORD *)a2 = 62;
            sub_11D5A0(*(_QWORD *)(a1 + 56));
            return v9;
          }
          if ( *(_BYTE *)(a2 + 64) != 1 || !sub_64930((_QWORD *)(v5 + 104), *(_DWORD *)(a2 + 72)) )
          {
            v23 = *(_DWORD *)(a2 + 4);
            if ( (v23 & 0x10) == 0 )
            {
              BYTE1(v23) |= 0x10u;
              *(_DWORD *)(a2 + 4) = v23;
              goto LABEL_30;
            }
          }
        }
        return 0;
      }
      if ( !under_debugger )
        sub_383060(50531);
    }
    else if ( !under_debugger )
    {
      sub_383060(50530);
    }
    BUG();
  }
  if ( (unsigned int)(v6 - 19) <= 1 )
  {
    v31 = -1;
    v14 = sub_11E2C0((int **)a2, &v30, &v31, 1);
    v15 = v31;
    if ( !v14 || (v15 = sub_11CA90(v30 + v31), v31 = v15, *(_DWORD *)(a2 + 36) != v15) )
    {
      if ( v15 != -1 )
      {
        v16 = sub_64B20(a1 + 272);
        v17 = sub_317010(a1 + 288);
        if ( v31 == v17 + v16 )
        {
          if ( *(_DWORD *)a2 == 19 )
          {
            if ( sub_11C8A0(a2, &v32) )
            {
              sub_123A40((__int64)v33, v32, v24, v25);
              if ( (unsigned __int8)sub_12AB50(v32, v5, v31, 1) )
              {
                v9 = sub_175BD0(
                       a1,
                       a2,
                       v26,
                       v27,
                       v28,
                       v29,
                       v30,
                       (_DWORD)v32,
                       *(_DWORD *)v33,
                       v34,
                       DWORD2(v34),
                       v35,
                       v36,
                       v37,
                       v38,
                       v39,
                       v40,
                       v41,
                       v42);
                if ( v9 )
                {
                  sub_1207E0((char *)v32, v5, 9, *(_QWORD *)(a2 + 24), *(_DWORD *)(a2 + 68));
                  sub_11CDA0((__int64)v33);
                  return v9;
                }
              }
              sub_11CA10((char *)v32, v33);
              sub_11CDA0((__int64)v33);
            }
            goto LABEL_3;
          }
          if ( (*(_BYTE *)(a2 + 5) & 8) == 0 )
          {
            v36 = 0xFFFFFFFF00000000LL;
            v37 = 0;
            v38 = 0xFFFFFFFF00000000LL;
            v39 = 0;
            v40 = 0xFFFFFFFF00000000LL;
            v41 = 0;
            v34 = 0;
            sub_1253A0((__int64)v33, a2);
            if ( (unsigned __int8)sub_1221A0(a2, v5, v31, 273, 1) )
            {
              v22 = sub_175BD0(
                      a1,
                      a2,
                      v18,
                      v19,
                      v20,
                      v21,
                      v30,
                      (_DWORD)v32,
                      *(_DWORD *)v33,
                      v34,
                      DWORD2(v34),
                      v35,
                      v36,
                      v37,
                      v38,
                      v39,
                      v40,
                      v41,
                      v42);
              v9 = v22;
              if ( v22 > 0 )
              {
                sub_12B6F0(a2, v5, 9, -1, 1);
                sub_125180(a2 + 64, (unsigned __int8 *)&v40);
              }
              else if ( !v22 )
              {
                goto LABEL_21;
              }
              sub_11CDA0((__int64)&v40);
              sub_11CDA0((__int64)&v38);
              sub_11CDA0((__int64)&v36);
              return v9;
            }
LABEL_21:
            sub_1253A0(a2, (__int64)v33);
            sub_11CDA0((__int64)&v40);
            sub_11CDA0((__int64)&v38);
            sub_11CDA0((__int64)&v36);
          }
        }
      }
    }
  }
LABEL_3:
  ++*(_DWORD *)(a1 + 336);
  v7 = *(_DWORD *)(a1 + 44);
  *(_BYTE *)(a1 + 348) = 0;
  v8 = sub_11E900((_BYTE *)a2, a1);
  --*(_DWORD *)(a1 + 336);
  v9 = v8;
  if ( (unsigned int)(v8 + 3) > 1 && v8 != -4 )
  {
    if ( v8 > 0 )
    {
      v10 = *(_QWORD *)(a1 + 320);
      if ( v10 != *(_QWORD *)(a1 + 328) )
      {
        if ( *(_BYTE *)(a1 + 351) != 1 && v10 )
        {
          v11 = *(_DWORD *)(a1 + 344) == 1;
          v12 = sub_11CC50((unsigned __int8 *)(*(_QWORD *)(a1 + 56) + 64LL), *(_QWORD *)(v10 + 480));
          *(_BYTE *)(a1 + 349) = sub_AB6D0(
                                   *(_QWORD *)(a1 + 320),
                                   *(unsigned int **)(a1 + 56),
                                   (unsigned int)*(_QWORD *)(a1 + 56) + 64,
                                   3 * (unsigned int)(v11 == v12) + 4);
        }
        *(_DWORD *)(a1 + 344) = 0;
      }
    }
    return (unsigned int)(*(_DWORD *)(a1 + 44) - v7);
  }
  return v9;
}
