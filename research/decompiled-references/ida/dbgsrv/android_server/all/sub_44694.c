/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44694
// Address: 0x0000000000044694

//----- (0000000000044694) ----------------------------------------------------
void __fastcall sub_44694(__int64 a1, pthread_mutex_t *a2, _DWORD *a3, unsigned __int64 a4, unsigned int a5)
{
  __int64 v5; // x22
  __int64 v6; // x30
  __int64 v7; // x21
  __int64 v9; // x19
  __int64 *v10; // x24
  __int64 **v11; // x22
  __int64 *v12; // x21
  unsigned __int64 v13; // x8
  _BYTE *v14; // x0
  __int64 v15; // x8
  __int64 *v16; // x1
  __int128 v17; // q0
  __int64 *v18; // x0
  __int64 *v19; // x21
  __int64 *v20; // x9
  unsigned __int64 v21; // x10
  bool v22; // cf
  _BOOL4 v23; // w10
  __int64 *v24; // x9
  __int64 **v25; // x8
  __int64 v26; // x9
  __int64 *v27; // x10
  __int64 **v28; // t1
  _DWORD *v29; // x19
  __int64 *p_align; // x21
  __int64 v31; // x20
  unsigned __int16 v32; // [xsp+4h] [xbp-9Ch] BYREF
  __int64 v33; // [xsp+8h] [xbp-98h]
  __int64 v34; // [xsp+10h] [xbp-90h]
  __int64 v35; // [xsp+20h] [xbp-80h]
  unsigned __int64 v36; // [xsp+28h] [xbp-78h]
  __int64 v37; // [xsp+30h] [xbp-70h]
  __int64 v38; // [xsp+38h] [xbp-68h]
  __int128 v39; // [xsp+40h] [xbp-60h] BYREF
  __int64 v40; // [xsp+50h] [xbp-50h]
  __int64 v41; // [xsp+58h] [xbp-48h]

  v41 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( (_DWORD)a3 != 4 )
    return;
  v7 = a5;
  v9 = a1;
  if ( a2 )
  {
    a1 = sub_9C594((_BYTE *)a1, a2, a4, a5);
    if ( (a1 & 0x80000000) != 0 )
      return;
  }
  if ( (v7 & 0x80000000) != 0 )
    v7 = *(unsigned int *)(v9 + 416);
  if ( (int)v7 >= 1 )
  {
    v5 = (int)v7;
    if ( *(_QWORD *)(v9 + 416) >= (unsigned __int64)(int)v7 )
    {
      *(_QWORD *)&v39 = a4;
      LOBYTE(v40) = v7;
      HIDWORD(v40) = 0;
      if ( (unsigned __int8)v7 < 8u )
      {
        if ( !(*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, _QWORD, _QWORD))(*(_QWORD *)v9 + 288LL))(
                v9,
                a4,
                (char *)&v39 + 8,
                (int)v7,
                0)
          || (*(__int64 (__fastcall **)(__int64, unsigned __int64, char *, _QWORD, _QWORD))(*(_QWORD *)v9 + 296LL))(
               v9,
               a4,
               "",
               (int)v7,
               0) != (int)v7 )
        {
          return;
        }
        v10 = *(__int64 **)(v9 + 440);
        v11 = (__int64 **)(v9 + 440);
        if ( v10 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v13 = v10[4];
              if ( v13 > a4 )
                break;
              if ( v13 >= a4 )
                goto LABEL_23;
              v11 = (__int64 **)(v10 + 1);
              if ( !v10[1] )
                goto LABEL_23;
              v10 = (__int64 *)v10[1];
            }
            if ( !*v10 )
              break;
            v11 = (__int64 **)v10;
            v10 = (__int64 *)*v10;
          }
          v11 = (__int64 **)v10;
LABEL_23:
          v12 = *v11;
          if ( *v11 )
            goto LABEL_28;
        }
        else
        {
          v10 = (__int64 *)(v9 + 440);
          v12 = *v11;
          if ( *v11 )
            goto LABEL_28;
        }
        v14 = operator new(0x40u);
        v14[56] = 0;
        *((_DWORD *)v14 + 15) = 0;
        *(_QWORD *)v14 = 0;
        *((_QWORD *)v14 + 1) = 0;
        *((_QWORD *)v14 + 2) = v10;
        *((_QWORD *)v14 + 4) = a4;
        *((_QWORD *)v14 + 5) = -1;
        *v11 = (__int64 *)v14;
        v12 = (__int64 *)v14;
        v15 = **(_QWORD **)(v9 + 432);
        if ( v15 )
        {
          *(_QWORD *)(v9 + 432) = v15;
          v16 = *v11;
        }
        else
        {
          v16 = (__int64 *)v14;
        }
        sub_48ED8(*(__int64 **)(v9 + 440), v16);
        ++*(_QWORD *)(v9 + 448);
LABEL_28:
        v17 = v39;
        v12[7] = v40;
        *(_OWORD *)(v12 + 5) = v17;
        v18 = *(__int64 **)(v9 + 1904);
        if ( v18 )
        {
          v19 = (__int64 *)(v9 + 1904);
          v20 = *(__int64 **)(v9 + 1904);
          do
          {
            v21 = v20[4];
            v22 = v21 >= a4;
            v23 = v21 < a4;
            if ( v22 )
              v19 = v20;
            v20 = (__int64 *)v20[v23];
          }
          while ( v20 );
          if ( v19 != (__int64 *)(v9 + 1904) && v19[4] <= a4 )
          {
            v24 = (__int64 *)v19[1];
            if ( v24 )
            {
              do
              {
                v25 = (__int64 **)v24;
                v24 = (__int64 *)*v24;
              }
              while ( v24 );
            }
            else
            {
              v26 = (__int64)(v19 + 2);
              v25 = (__int64 **)v19[2];
              if ( *v25 != v19 )
              {
                do
                {
                  v27 = *(__int64 **)v26;
                  v28 = *(__int64 ***)(*(_QWORD *)v26 + 16LL);
                  v26 = *(_QWORD *)v26 + 16LL;
                  v25 = v28;
                }
                while ( *v28 != v27 );
              }
            }
            if ( *(__int64 **)(v9 + 1896) == v19 )
              *(_QWORD *)(v9 + 1896) = v25;
            --*(_QWORD *)(v9 + 1912);
            sub_4AD74(v18, v19);
            operator delete(v19);
          }
        }
        return;
      }
      goto LABEL_47;
    }
  }
  if ( !under_debugger )
  {
    a1 = (__int64)interr(30066);
LABEL_47:
    if ( !under_debugger )
      a1 = (__int64)interr(1796);
  }
  __break(1u);
  v34 = v5;
  v35 = v7;
  v36 = a4;
  v37 = v9;
  v38 = v6;
  v29 = a3;
  p_align = &a2->__align;
  v31 = a1;
  v33 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  sub_A2FBC(a1, a2, a3);
  if ( *v29 == 2
    && (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 *, __int64, _QWORD))(*(_QWORD *)v31 + 288LL))(
         v31,
         *p_align,
         &v32,
         2,
         0) >= 1
    && sub_A0D6C(v32) )
  {
    *v29 |= 0x80u;
  }
}
// 4495C: variable 'v5' is possibly undefined
// 44964: variable 'v6' is possibly undefined
// 44970: variable 'a3' is possibly undefined
// 44974: variable 'a2' is possibly undefined
// 168DF0: using guessed type char under_debugger;
