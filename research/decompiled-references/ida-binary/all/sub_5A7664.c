__int64 __fastcall sub_5A7664(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  _BYTE v5[16]; // [rsp+10h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+20h] [rbp-90h]
  unsigned int v7; // [rsp+2Ch] [rbp-84h]
  _DWORD *v8; // [rsp+30h] [rbp-80h]
  unsigned int v9; // [rsp+3Ch] [rbp-74h]
  _DWORD *v10; // [rsp+40h] [rbp-70h]
  unsigned int v11; // [rsp+4Ch] [rbp-64h]
  __int64 v12; // [rsp+50h] [rbp-60h]
  __int64 v13; // [rsp+58h] [rbp-58h]
  unsigned __int16 v14; // [rsp+64h] [rbp-4Ch]
  bool v15; // [rsp+67h] [rbp-49h]
  __int64 v16; // [rsp+68h] [rbp-48h]
  unsigned int v17; // [rsp+74h] [rbp-3Ch]
  __int64 v18; // [rsp+78h] [rbp-38h]
  __int64 v19; // [rsp+80h] [rbp-30h]
  __int64 v20; // [rsp+88h] [rbp-28h]
  unsigned __int16 i; // [rsp+92h] [rbp-1Eh]
  unsigned int v22; // [rsp+94h] [rbp-1Ch]
  int v23; // [rsp+98h] [rbp-18h]
  unsigned int v24; // [rsp+9Ch] [rbp-14h]

  sub_5AE2B0(v5, a1, 0);
  if ( sub_59BD66((__int64)v5) )
  {
    v20 = sub_59BD66((__int64)v5);
    v19 = sub_59BD80((__int64)v5);
    v18 = sub_5A79DD(v20, 0, v19);
    if ( v18 && *(_WORD *)v18 == 23117 )
    {
      v17 = *(_DWORD *)(v18 + 60);
      v16 = sub_5A7A14(v20, v17, v19);
      if ( v16 && *(_DWORD *)v16 == 17744 && (*(_WORD *)(v16 + 24) == 523 || *(_WORD *)(v16 + 24) == 267) )
      {
        v15 = *(_WORD *)(v16 + 24) == 523;
        v14 = *(_WORD *)(v16 + 6);
        if ( v15 )
        {
          v12 = sub_5A7A4D(v20, v17, v19);
          if ( !v12 )
          {
            v2 = 1;
            goto LABEL_37;
          }
          v24 = *(_DWORD *)(v12 + 184);
          v23 = *(_DWORD *)(v12 + 188);
          v22 = v17 + 264;
        }
        else
        {
          v13 = sub_5A7A86(v20, v17, v19);
          if ( !v13 )
          {
            v2 = 1;
            goto LABEL_37;
          }
          v24 = *(_DWORD *)(v13 + 168);
          v23 = *(_DWORD *)(v13 + 172);
          v22 = v17 + 248;
        }
        v11 = v24 + v23;
        while ( 2 )
        {
          if ( v24 >= v11 )
          {
            v2 = 1;
          }
          else
          {
            for ( i = 0; ; ++i )
            {
              if ( i >= v14 )
                goto LABEL_35;
              v10 = (_DWORD *)sub_5A7ABF(v20, v22, v19);
              if ( !v10 )
              {
                v2 = 1;
                goto LABEL_37;
              }
              v22 += 40;
              if ( v24 >= v10[3] && v24 < v10[3] + v10[4] )
                break;
            }
            v9 = v24 + v10[5] - v10[3];
            v8 = (_DWORD *)sub_5A7AF6(v20, v9, v19);
            if ( !v8 )
            {
              v2 = 1;
              break;
            }
            if ( v8[3] != 2 )
            {
LABEL_35:
              v24 += 28;
              continue;
            }
            v7 = v8[4];
            if ( v7 > 0x1B )
            {
              v6 = sub_5A7B2D(v20, (unsigned int)v8[6], v19);
              if ( v6 )
              {
                v3 = *(_QWORD *)(v6 + 12);
                *(_QWORD *)(a2 + 4) = *(_QWORD *)(v6 + 4);
                *(_QWORD *)(a2 + 12) = v3;
                *(_DWORD *)(a2 + 20) = *(_DWORD *)(v6 + 20);
                v2 = 2;
              }
              else
              {
                v2 = 1;
              }
            }
            else
            {
              v2 = 1;
            }
          }
          break;
        }
      }
      else
      {
        v2 = 0;
      }
    }
    else
    {
      v2 = 0;
    }
  }
  else
  {
    v2 = 0;
  }
LABEL_37:
  sub_5AE2EA(v5);
  return v2;
}
