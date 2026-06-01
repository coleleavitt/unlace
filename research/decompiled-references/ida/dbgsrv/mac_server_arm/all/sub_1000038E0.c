/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000038E0
// Address: 0x00000001000038E0

//----- (00000001000038E0) ----------------------------------------------------
void __fastcall sub_1000038E0(__int64 a1)
{
  __int64 v2; // x1
  __int64 v3; // x2
  __int64 v4; // x3
  __int64 v5; // x4
  __int64 v6; // x5
  __int64 v7; // x6
  __int64 v8; // x7
  __int64 *v9; // x21
  __int64 *v10; // x26
  unsigned __int64 v11; // x8
  __int64 *v12; // x8
  __int64 *v13; // x22
  _QWORD *v14; // x10
  _QWORD **v15; // x9
  unsigned int v16; // w11
  int v17; // w8
  unsigned int v18; // w9
  bool v19; // zf
  int v20; // w11
  unsigned __int64 v21; // x9
  size_t v22; // x22
  unsigned __int64 v23; // x8
  const void *v24; // x23
  void *v25; // x1
  __int64 v26; // x11
  _QWORD *v27; // x9
  unsigned __int64 v28; // x8
  __int64 v29; // x0
  __int64 v30; // x0
  _QWORD **v31; // x20
  _QWORD *v32; // x8
  __int64 *v33; // x10
  __int64 *v34; // x9
  unsigned int v35; // w11
  _QWORD *v36; // x9
  _QWORD **v37; // x8
  _Unwind_Exception *v38; // x0
  _Unwind_Exception *v39; // x19
  void (__fastcall **v40[3])(_QWORD, __int64, __int64, _BYTE *, void **); // [xsp+18h] [xbp-E8h] BYREF
  _QWORD **v41; // [xsp+30h] [xbp-D0h] BYREF
  _QWORD *v42[2]; // [xsp+38h] [xbp-C8h] BYREF
  __int64 v43; // [xsp+48h] [xbp-B8h] BYREF
  __int64 v44; // [xsp+50h] [xbp-B0h]
  char v45; // [xsp+58h] [xbp-A8h]
  _DWORD v46[8]; // [xsp+5Ch] [xbp-A4h] BYREF
  __int128 v47; // [xsp+7Ch] [xbp-84h]
  int v48; // [xsp+8Ch] [xbp-74h]

  if ( *(_QWORD *)(a1 + 1616) != -1 && *(_QWORD *)(a1 + 1632) != -1 && (unsigned int)sub_100017668(a1 + 1560) )
  {
    sub_100017938(a1 + 1560, v2, v3, v4, v5, v6, v7, v8);
    if ( !*(_DWORD *)(a1 + 1648) )
    {
      if ( under_debugger == 1 )
        goto LABEL_72;
      goto LABEL_73;
    }
    v42[0] = nullptr;
    v42[1] = nullptr;
    v40[2] = (void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, void **))a1;
    v41 = v42;
    v40[0] = (void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, void **))&off_100098BE0;
    v40[1] = (void (__fastcall **)(_QWORD, __int64, __int64, _BYTE *, void **))&v41;
    if ( sub_100017B0C(a1 + 1560, *(_DWORD *)(a1 + 1652), *(_QWORD *)(a1 + 1656), v40) )
    {
      v9 = *(__int64 **)(a1 + 1832);
      v10 = (__int64 *)(a1 + 1840);
      if ( v9 != (__int64 *)(a1 + 1840) )
      {
        while ( 1 )
        {
          v11 = v9[4];
          if ( *(_QWORD *)(a1 + 1616) != v11 )
          {
            v14 = v42[0];
            if ( !v42[0] )
              break;
            v15 = v42;
            do
            {
              if ( v14[4] < v11 )
              {
                v16 = 1;
              }
              else
              {
                v15 = (_QWORD **)v14;
                v16 = 0;
              }
              v14 = (_QWORD *)v14[v16];
            }
            while ( v14 );
            if ( v15 == v42 || (unsigned __int64)v15[4] > v11 )
              break;
          }
          v12 = (__int64 *)v9[1];
          if ( v12 )
          {
            do
            {
              v13 = v12;
              v12 = (__int64 *)*v12;
            }
            while ( v12 );
          }
          else
          {
            do
            {
              v13 = (__int64 *)v9[2];
              v19 = *v13 == (_QWORD)v9;
              v9 = v13;
            }
            while ( !v19 );
          }
LABEL_8:
          v9 = v13;
          if ( v13 == v10 )
            goto LABEL_49;
        }
        v43 = 0xFFFFFFFFLL;
        v44 = -1;
        v45 = 0;
        memset(v46, 0, sizeof(v46));
        v47 = 0u;
        v48 = 0;
        set_debug_event_code((__int64)&v43, 9);
        v17 = v46[0] & 0xFFFFFFF;
        v18 = (v46[0] & 0xFFFFFFF) - 9;
        v19 = v18 < 2 || v17 == 3;
        if ( !v19
          || (v20 = *(_DWORD *)(*(_QWORD *)(a1 + 1904) + 32LL),
              LODWORD(v43) = *(_DWORD *)(a1 + 528),
              HIDWORD(v43) = v20,
              v44 = -1,
              v45 = 1,
              v18 >= 2)
          && v17 != 3 )
        {
          if ( under_debugger != 1 )
            interr(3297);
LABEL_72:
          __break(1u);
LABEL_73:
          interr(30104);
          v39 = v38;
          sub_10000B27C((__int64)&v41, v42[0]);
          _Unwind_Resume(v39);
        }
        if ( &v46[1] != (_DWORD *)(v9 + 7) )
        {
          v21 = v9[8];
          if ( v21 )
            v22 = v21 - 1;
          else
            v22 = 0;
          if ( v21 >= 2 )
          {
            v24 = (const void *)v9[7];
            v25 = *(void **)&v46[1];
            if ( *(_QWORD *)&v46[5] <= v22 )
            {
              v25 = qvector_reserve(&v46[1], *(_QWORD **)&v46[1], v22 + 1, 1u);
              *(_QWORD *)&v46[1] = v25;
            }
            *(_QWORD *)&v46[3] = v22 + 1;
            memmove(v25, v24, v22);
            *(_BYTE *)(*(_QWORD *)&v46[1] + v22) = 0;
            v23 = *(_QWORD *)(a1 + 152);
            if ( v23 )
              goto LABEL_43;
            goto LABEL_42;
          }
          *(_QWORD *)&v46[3] = 0;
        }
        v23 = *(_QWORD *)(a1 + 152);
        if ( v23 )
        {
LABEL_43:
          v26 = *(_QWORD *)(a1 + 128);
          v27 = (_QWORD *)(v26 + 8 * (v23 / 0x38));
          v28 = *v27 + 72 * (v23 % 0x38);
          if ( *(_QWORD *)(a1 + 136) == v26 )
            v29 = 0;
          else
            v29 = v28;
          if ( v29 == *v27 )
            v29 = *(v27 - 1) + 4032LL;
          *(_QWORD *)(v29 - 72) = 0xFFFFFFFFLL;
          v30 = v29 - 72;
          *(_QWORD *)(v30 + 8) = -1;
          *(_BYTE *)(v30 + 16) = 0;
          *(_DWORD *)(v30 + 20) = 0;
          copy_debug_event(v30, (__int64)&v43);
          *(int64x2_t *)(a1 + 152) = vaddq_s64(*(int64x2_t *)(a1 + 152), (int64x2_t)xmmword_1000756F0);
          v13 = sub_10000B924((__int64 **)(a1 + 1832), v9);
          free_debug_event((__int64)&v43);
          goto LABEL_8;
        }
LABEL_42:
        sub_1000094EC(a1 + 120);
        v23 = *(_QWORD *)(a1 + 152);
        goto LABEL_43;
      }
LABEL_49:
      v31 = v41;
      if ( v41 != v42 )
      {
        do
        {
          v32 = v31[5];
          if ( v32 )
          {
            v33 = (__int64 *)*v10;
            if ( !*v10 )
              goto LABEL_62;
            v34 = (__int64 *)(a1 + 1840);
            do
            {
              if ( v33[4] < (unsigned __int64)v32 )
              {
                v35 = 1;
              }
              else
              {
                v34 = v33;
                v35 = 0;
              }
              v33 = (__int64 *)v33[v35];
            }
            while ( v33 );
            if ( v34 == v10 || (unsigned __int64)v32 < v34[4] )
LABEL_62:
              sub_100004AF0(a1, (__int128 *)(v31 + 5));
          }
          v36 = v31[1];
          if ( v36 )
          {
            do
            {
              v37 = (_QWORD **)v36;
              v36 = (_QWORD *)*v36;
            }
            while ( v36 );
          }
          else
          {
            do
            {
              v37 = (_QWORD **)v31[2];
              v19 = *v37 == v31;
              v31 = v37;
            }
            while ( !v19 );
          }
          v31 = v37;
        }
        while ( v37 != v42 );
      }
    }
    sub_10000B27C((__int64)&v41, v42[0]);
  }
}
// 100003940: variable 'v2' is possibly undefined
// 100003940: variable 'v3' is possibly undefined
// 100003940: variable 'v4' is possibly undefined
// 100003940: variable 'v5' is possibly undefined
// 100003940: variable 'v6' is possibly undefined
// 100003940: variable 'v7' is possibly undefined
// 100003940: variable 'v8' is possibly undefined
// 100003CF4: variable 'v38' is possibly undefined
// 1000756F0: using guessed type __int128 xmmword_1000756F0;
// 100098BE0: using guessed type __int64 (__fastcall *off_100098BE0)(int, int, int, char *__s);
// 10009D90D: using guessed type char under_debugger;
