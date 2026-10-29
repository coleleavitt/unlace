/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_680A4
// Address: 0x000680A4

//----- (000680A4) --------------------------------------------------------
int __fastcall sub_680A4(_DWORD *a1, signed int a2)
{
  unsigned __int64 v2; // r4
  int v5; // r3
  int v6; // r3
  unsigned __int64 v7; // r6
  int v8; // r6
  int v9; // r3
  int *v10; // r0
  int v11; // r0
  int v12; // r10
  unsigned __int64 v13; // r0
  int v14; // r3
  __suseconds_t v15; // r0
  unsigned int v16; // r1
  unsigned __int64 v17; // r0
  __suseconds_t v18; // r0
  unsigned int v19; // r1
  unsigned __int64 v20; // kr00_8
  unsigned int v21; // r1
  unsigned __int64 v22; // r10
  __suseconds_t v23; // r0
  unsigned int v24; // r1
  unsigned __int64 v25; // r0
  _BOOL4 v26; // r3
  unsigned __int64 v28; // [sp+0h] [bp-34h]
  unsigned __int64 v29; // [sp+10h] [bp-24h]
  struct pollfd fds; // [sp+24h] [bp-10h] BYREF

  while ( 1 )
  {
    if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 76))(a1) )
    {
      v12 = -1;
      a1[11] = "select";
      return v12;
    }
    v5 = a1[5];
    if ( v5 )
    {
      v6 = 3 * v5;
      if ( a2 < 0 )
        v2 = 0;
      v7 = *(_QWORD *)(a1[4] + 8 * v6 - 16);
      v28 = v7;
      if ( a2 >= 0 )
      {
        v23 = sub_78F48();
        LODWORD(v25) = sub_66608(v23, v24, a2);
        v2 = v25;
        if ( v25 )
        {
          v26 = v7 >= v25;
          if ( !v7 )
            v26 = 1;
          if ( v26 )
          {
            v28 = v25;
LABEL_21:
            v18 = sub_78F48();
            v20 = __PAIR64__((__PAIR64__(v19 >> 27, 32 * v19) - v19) >> 23, 15872 * v19) + v19;
            v29 = __PAIR64__(v20 >> 26, 1015872 * v19) - v20 + v19 + (unsigned int)v18;
            v21 = ((__int64)(__PAIR64__(HIDWORD(v28) >> 27, 32 * HIDWORD(v28)) - HIDWORD(v28)) >> 23)
                + __CFADD__(15872 * HIDWORD(v28), HIDWORD(v28));
            v22 = __PAIR64__((v21 << 6) | ((unsigned int)(15873 * HIDWORD(v28)) >> 26), 1015872 * HIDWORD(v28))
                - __PAIR64__(v21, 15873 * HIDWORD(v28))
                + HIDWORD(v28)
                + (unsigned int)v28;
            if ( v29 < v22 )
              v8 = (v22 - v29) / 0x3E8;
            else
              v8 = 0;
            goto LABEL_9;
          }
        }
      }
      if ( v7 )
        goto LABEL_21;
    }
    else
    {
      if ( a2 < 0 )
      {
        v2 = 0;
        v8 = -1;
        goto LABEL_9;
      }
      v15 = sub_78F48();
      LODWORD(v17) = sub_66608(v15, v16, a2);
      v2 = v17;
      v28 = v17;
      if ( v17 )
      {
        v2 = v17;
        goto LABEL_21;
      }
    }
    v8 = -1;
LABEL_9:
    v9 = a1[7];
    fds.events = 1;
    fds.fd = v9;
    while ( 1 )
    {
      v11 = poll(&fds, 1u, v8);
      v12 = v11;
      if ( v11 != -1 )
        break;
      v10 = _errno_location();
      if ( *v10 != 4 )
        goto LABEL_33;
    }
    if ( v11 )
      break;
    if ( v2 )
    {
      LODWORD(v13) = sub_78F48();
      if ( v13 >= v2 )
      {
        v12 = -1;
        v14 = 62;
        a1[11] = "poll";
        goto LABEL_16;
      }
    }
  }
  if ( v11 < 0 )
  {
    v10 = _errno_location();
LABEL_33:
    a1[11] = "poll";
    v14 = *v10;
LABEL_16:
    a1[12] = v14;
  }
  return v12;
}
// 68254: variable 'v24' is possibly undefined
// 6813A: variable 'v2' is possibly undefined
// 68146: variable 'v13' is possibly undefined
// 68172: variable 'v16' is possibly undefined
// 68176: variable 'v17' is possibly undefined
// 6819E: variable 'v19' is possibly undefined
// 68258: variable 'v25' is possibly undefined
