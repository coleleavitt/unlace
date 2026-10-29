__int64 __fastcall sub_40C5B0(__m128d a1, __int64 a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned int v7; // edx
  int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  _BYTE *v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-50h] BYREF
  __int64 *v17; // [rsp+10h] [rbp-48h] BYREF
  int v18; // [rsp+1Ch] [rbp-3Ch] BYREF
  _BYTE v19[32]; // [rsp+20h] [rbp-38h] BYREF

  if ( a4 == 2 )
  {
    v9 = sub_47CE30(a3, a5[1], &v17, &v18);
    v7 = 1;
    if ( v9 )
      return v7;
    switch ( v18 )
    {
      case 1:
        v10 = *v17;
        if ( *v17 <= 0 )
        {
          if ( !*v17 )
          {
            v11 = a5[1];
            v13 = *(_BYTE **)(v11 + 8);
            if ( v13 )
            {
              while ( *v13 != 48 )
              {
                if ( *v13 == 45 )
                {
                  v12 = sub_47BE30(0);
                  goto LABEL_17;
                }
                ++v13;
              }
            }
            goto LABEL_13;
          }
          if ( v10 != 0x8000000000000000LL )
          {
            v12 = sub_47BE30(-v10);
            goto LABEL_17;
          }
          sub_4A6520(v19, 0x8000000000000000LL, 1);
          goto LABEL_29;
        }
        break;
      case 4:
        a1.m128d_f64[0] = *(double *)v17;
        v16 = *(_QWORD *)&a1.m128d_f64[0];
        if ( a1.m128d_f64[0] == 0.0 )
        {
          if ( !memcmp(&v16, qword_505DE0, 8u) )
            break;
        }
        else if ( a1.m128d_f64[0] > 0.0 )
        {
          break;
        }
        v12 = sub_47B930(-_mm_unpacklo_pd(a1, a1).m128d_f64[0]);
LABEL_17:
        v11 = v12;
        goto LABEL_13;
      case 3:
        if ( (unsigned int)sub_4B0550(v17, 0, 1) == -1 )
        {
          sub_47C9E0(0, a5[1], v19);
LABEL_29:
          sub_4B21C0(v19, v19);
          v12 = sub_47CCC0(v19, v19, v14);
          goto LABEL_17;
        }
        break;
      default:
        v7 = 0;
        if ( v18 != 5 )
          return v7;
        sub_47BA50(a3, a5[1], &v15);
        return 1;
    }
    v11 = a5[1];
LABEL_13:
    sub_48AFD0(a3, v11);
    return 0;
  }
  sub_409E40(a3, 2, a4, a5);
  return 1;
}

