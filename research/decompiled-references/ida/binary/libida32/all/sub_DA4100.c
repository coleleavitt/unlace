__int64 __fastcall sub_DA4100(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // r13d
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 i; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // r14
  unsigned __int8 **v17; // rax
  unsigned __int8 **v18; // rbp
  __int64 v21; // [rsp+18h] [rbp-D0h]
  _DWORD v22[6]; // [rsp+20h] [rbp-C8h] BYREF
  int v23; // [rsp+38h] [rbp-B0h]
  __int64 v24; // [rsp+40h] [rbp-A8h]
  unsigned int v25; // [rsp+48h] [rbp-A0h]
  _BYTE v26[48]; // [rsp+50h] [rbp-98h] BYREF
  _QWORD v27[3]; // [rsp+80h] [rbp-68h] BYREF
  int v28; // [rsp+98h] [rbp-50h]
  __int64 v29; // [rsp+A0h] [rbp-48h]
  unsigned int v30; // [rsp+A8h] [rbp-40h]

  v4 = 1;
  if ( !*(_DWORD *)(a3 + 24) )
  {
    v4 = sub_CDA840(a3);
    if ( !(_BYTE)v4 )
    {
      v7 = *(_QWORD *)(a3 + 32);
      v8 = *(unsigned int *)(a3 + 40);
      if ( (*(_BYTE *)(v7 + v8 + 28) & 0x10) != 0 )
      {
        return 1;
      }
      else
      {
        if ( (_DWORD)v8 == -1 )
          sub_DFF4E0(v22, v7, v8, 0);
        else
          sub_DFF4E0(
            v22,
            v7,
            (unsigned int)(v8 - *(_DWORD *)(v7 + v8 + 24)),
            (unsigned int)(v8 - *(_DWORD *)(v7 + v8 + 24)));
        sub_DFF4A0(v26, a3);
        if ( !v23 )
        {
          if ( v24 )
          {
            if ( *(_DWORD *)(*(_QWORD *)(v24 + 32) + 24LL) != v25 )
            {
              if ( v25 )
              {
                for ( i = v24 + v25 + 24; (*(_BYTE *)(v24 + v25 + 28) & 0x10) == 0; i = v24 + v25 + 24 )
                {
                  v10 = *(_QWORD *)(*(_QWORD *)(i + 8) + 32LL);
                  if ( v10 && *(_BYTE *)(v10 + 649) )
                    break;
                  sub_DFF5C0(v26, v22);
                  if ( v25 == -1 )
                  {
                    sub_DFF4E0(v27, v24, 0xFFFFFFFFLL, 0);
                  }
                  else
                  {
                    v11 = v25 - *(_DWORD *)(v24 + v25 + 24);
                    sub_DFF4E0(v27, v24, v11, (unsigned int)v11);
                  }
                  sub_DFF6C0(v22, v27);
                  sub_DFF560(v27);
                  if ( v23 )
                    break;
                  if ( !v24 )
                    break;
                  if ( *(_DWORD *)(*(_QWORD *)(v24 + 32) + 24LL) == v25 )
                    break;
                  if ( !v25 )
                    break;
                }
              }
            }
          }
        }
        v12 = sub_CDA220((__int64)v22);
        if ( sub_CCBCA0(v12) )
        {
          v21 = sub_CDA870((__int64)v26);
          v13 = *(_QWORD *)(sub_CDA220((__int64)v22) + 32);
          v14 = *(_QWORD *)(v13 + 280);
          v15 = v14 + 24LL * *(unsigned int *)(v13 + 288);
          if ( v15 == v14 )
          {
LABEL_33:
            v16 = 0;
          }
          else
          {
            while ( 1 )
            {
              sub_DFF4E0(
                v27,
                v24,
                (unsigned int)(v22[0] + *(_DWORD *)(v14 + 8)),
                (unsigned int)(v22[0] + *(_DWORD *)(v14 + 8)));
              if ( v28
                || !v29
                || *(_DWORD *)(*(_QWORD *)(v29 + 32) + 24LL) == v30
                || !v30
                || (*(_BYTE *)(v29 + v30 + 28) & 0x10) != 0 )
              {
                break;
              }
              v14 += 24;
              sub_DFF560(v27);
              if ( v15 == v14 )
                goto LABEL_33;
            }
            v16 = sub_CDA870((__int64)v27);
            sub_DFF560(v27);
          }
          v27[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
          v17 = (unsigned __int8 **)sub_E0FE60(a1, v27, 2367, 0);
          v18 = v17;
          if ( v17 )
          {
            sub_AC60B0(v17, a4, 2u);
            sub_AC60B0(v18, v21, 0xAu);
            sub_AC60B0(v18, v16 == 0, 2u);
            sub_AC60B0(v18, v16, 0xAu);
          }
          sub_DFF560(v26);
          sub_DFF560(v22);
        }
        else
        {
          v4 = 1;
          sub_DFF560(v26);
          sub_DFF560(v22);
        }
      }
    }
  }
  return v4;
}

