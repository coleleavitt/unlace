/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_52DA4
// Address: 0x0000000000052DA4

//----- (0000000000052DA4) ----------------------------------------------------
__int64 __fastcall sub_52DA4(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x24
  __int64 v7; // x27
  __int64 v8; // x8
  __int64 v9; // x26
  __int64 v10; // x20
  __int64 **v11; // x23
  __int64 **i; // x21
  __int64 *v13; // x8
  __int64 *v14; // x1
  __int64 v15; // x26
  unsigned __int64 v16; // x22
  __int64 **v17; // x23
  __int64 **v18; // x29
  __int64 *v19; // x8
  __int64 *v20; // x1
  __int64 v22; // [xsp+10h] [xbp-D0h]
  __int64 v23; // [xsp+20h] [xbp-C0h]
  _BYTE v24[12]; // [xsp+28h] [xbp-B8h] BYREF
  unsigned int v25; // [xsp+34h] [xbp-ACh]
  __int64 **v26; // [xsp+38h] [xbp-A8h] BYREF
  __int64 *v27; // [xsp+40h] [xbp-A0h] BYREF
  __int64 v28; // [xsp+48h] [xbp-98h]
  _BYTE v29[2]; // [xsp+50h] [xbp-90h] BYREF
  unsigned __int16 v30; // [xsp+52h] [xbp-8Eh]
  unsigned int v31; // [xsp+58h] [xbp-88h]
  unsigned int v32; // [xsp+5Ch] [xbp-84h]
  __int64 **v33; // [xsp+60h] [xbp-80h] BYREF
  __int64 *v34; // [xsp+68h] [xbp-78h] BYREF
  __int64 v35; // [xsp+70h] [xbp-70h]
  __int64 v36; // [xsp+78h] [xbp-68h]

  v36 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = a1[1];
  v7 = a3 + a2;
  v8 = qlseek(*(_QWORD *)(v6 + 472), 0, 1) - *(_QWORD *)(v6 + 480);
  v34 = nullptr;
  v35 = 0;
  v22 = v8;
  v33 = &v34;
  if ( a3 + a2 > a2 )
  {
    v9 = 0;
    v10 = a2;
LABEL_12:
    v11 = &v34;
    i = &v34;
LABEL_13:
    if ( !*v11 )
    {
      do
      {
        v14 = (__int64 *)operator new(0x28u);
        v14[4] = v10;
        *v14 = 0;
        v14[1] = 0;
        v14[2] = (__int64)i;
        *v11 = v14;
        if ( *v33 )
        {
          v33 = (__int64 **)*v33;
          v14 = *v11;
        }
        sub_48ED8(v34, v14);
        ++v35;
        if ( qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(v6 + 480) + v10, 0) == -1 || !sub_5BE38((__int64)v29, a1[1]) )
          break;
        (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, __int64))*a1)(a1, v29, v10 - a2, v9);
        v23 = v9;
        v27 = nullptr;
        v28 = 0;
        v26 = &v27;
        v15 = v10 + v31;
        if ( v15 < v7 )
        {
          v16 = 0;
LABEL_29:
          v17 = &v27;
          v18 = &v27;
LABEL_30:
          if ( !*v18 )
          {
            do
            {
              v20 = (__int64 *)operator new(0x28u);
              v20[4] = v15;
              *v20 = 0;
              v20[1] = 0;
              v20[2] = (__int64)v17;
              *v18 = v20;
              if ( *v26 )
              {
                v26 = (__int64 **)*v26;
                v20 = *v18;
              }
              sub_48ED8(v27, v20);
              ++v28;
              if ( v16 >= v30 )
                break;
              if ( qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(v6 + 480) + v15, 0) == -1 )
                break;
              if ( !sub_5BF7C((__int64)v24, a1[1]) )
                break;
              (*(void (__fastcall **)(__int64 *, _BYTE *, __int64, unsigned __int64))(*a1 + 8))(a1, v24, v15 - a2, v16);
              v15 += v25;
              if ( v15 >= v7 )
                break;
              ++v16;
              if ( !v27 )
                goto LABEL_29;
              v17 = (__int64 **)v27;
              v18 = &v27;
              while ( 1 )
              {
                while ( 1 )
                {
                  v19 = v17[4];
                  if ( v15 < (__int64)v19 )
                    break;
                  if ( (__int64)v19 >= v15 )
                    goto LABEL_30;
                  v18 = v17 + 1;
                  if ( !v17[1] )
                    goto LABEL_30;
                  v17 = (__int64 **)v17[1];
                }
                if ( !*v17 )
                  break;
                v18 = v17;
                v17 = (__int64 **)*v17;
              }
              v18 = v17;
            }
            while ( !*v17 );
          }
        }
        v10 += v32;
        sub_5C0C0((__int64)&v26, v27);
        if ( v10 >= v7 )
          break;
        v9 = v23 + 1;
        if ( !v34 )
          goto LABEL_12;
        v11 = &v34;
        for ( i = (__int64 **)v34; ; i = (__int64 **)*i )
        {
          while ( 1 )
          {
            v13 = i[4];
            if ( v10 < (__int64)v13 )
              break;
            if ( (__int64)v13 >= v10 )
              goto LABEL_13;
            v11 = i + 1;
            if ( !i[1] )
              goto LABEL_13;
            i = (__int64 **)i[1];
          }
          if ( !*i )
            break;
          v11 = i;
        }
        v11 = i;
      }
      while ( !*i );
    }
  }
  sub_5C0C0((__int64)&v33, v34);
  return qlseek(*(_QWORD *)(v6 + 472), *(_QWORD *)(v6 + 480) + v22, 0);
}
