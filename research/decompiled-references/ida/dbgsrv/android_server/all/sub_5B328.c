/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5B328
// Address: 0x000000000005B328

//----- (000000000005B328) ----------------------------------------------------
__int64 __fastcall sub_5B328(_QWORD *a1, __int64 a2, int a3, __int64 (__fastcall ***a4)(_QWORD, __int64, char *))
{
  unsigned __int64 v5; // x9
  unsigned __int64 v7; // x11
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x12
  unsigned __int64 v10; // x11
  unsigned __int64 v11; // x12
  bool v12; // cf
  unsigned __int64 v13; // x9
  int v14; // w26
  unsigned __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x4
  __int64 v18; // x5
  __int64 v19; // x6
  __int64 v20; // x7
  unsigned int v21; // w23
  unsigned int v22; // w9
  __int64 v23; // x3
  __int64 v24; // x20
  __int64 *v25; // x2
  __int64 v26; // x23
  char *v27; // x2
  _QWORD *v29; // x19
  __int64 *v30; // [xsp+0h] [xbp-F0h]
  _QWORD v32[3]; // [xsp+18h] [xbp-D8h] BYREF
  unsigned __int64 v33; // [xsp+30h] [xbp-C0h]
  unsigned __int64 v34; // [xsp+38h] [xbp-B8h]
  void *v35[2]; // [xsp+40h] [xbp-B0h] BYREF
  __int64 v36; // [xsp+50h] [xbp-A0h]
  __int64 v37; // [xsp+58h] [xbp-98h]
  __int64 v38; // [xsp+60h] [xbp-90h]
  __int64 v39; // [xsp+68h] [xbp-88h] BYREF
  void *ptr; // [xsp+70h] [xbp-80h] BYREF
  __int64 v41; // [xsp+78h] [xbp-78h]
  __int64 v42; // [xsp+80h] [xbp-70h]
  __int64 v43; // [xsp+88h] [xbp-68h]

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v32[0] = &off_156998;
  v32[1] = a1;
  v5 = *(_QWORD *)(a2 + 24);
  v7 = 0;
  v32[2] = v5;
  v33 = 0;
  v8 = *(_QWORD *)(a2 + 56);
  v37 = 0;
  v38 = 0;
  v35[1] = nullptr;
  v36 = 0;
  v34 = v8;
  v35[0] = nullptr;
  if ( *(_DWORD *)(a2 + 4) != 8 )
  {
    v9 = a1[14];
    v10 = *(_QWORD *)(a1[30] + 488LL) - *(_QWORD *)(a1[30] + 480LL);
    if ( a2 + 64 >= v9 && a2 + 64 < v9 + (a1[15] << 6) )
    {
      v11 = *(_QWORD *)(a2 + 88);
      if ( v11 < v10 && v11 >= v5 )
        v10 = *(_QWORD *)(a2 + 88);
    }
    v12 = v10 >= v5;
    v13 = v10 - v5;
    if ( v13 != 0 && v12 )
    {
      v7 = *(_QWORD *)(a2 + 32);
      if ( v7 >= v13 )
        v7 = v13;
    }
    else
    {
      v7 = 0;
    }
  }
  if ( v8 )
    v7 /= v8;
  v14 = 0;
  v33 = v7;
  v30 = a1 + 44;
  while ( 1 )
  {
    v15 = sub_5B624((unsigned __int64)v32, &v39);
    if ( (v15 & 1) == 0 )
      break;
    if ( v14 )
    {
      v21 = 0;
      v22 = *(unsigned __int16 *)(v39 + 54);
      v23 = *(unsigned int *)(v39 + 48);
      v24 = *(_QWORD *)(v39 + 56);
      if ( v22 > 0xFF1E )
      {
        if ( v22 != 65311 && v22 != 65521 )
        {
LABEL_19:
          v21 = 0;
          if ( (_DWORD)v23 && (*(_BYTE *)(v39 + 52) & 0xFu) - 1 <= 1 )
          {
            v25 = a1 + 40;
            ptr = nullptr;
            v41 = 0;
            v42 = 0;
            if ( qword_166A40 == -1 )
              v26 = 0;
            else
              v26 = qword_166A40;
            if ( a3 != 1 )
            {
              v25 = v30;
              if ( a3 != 2 )
              {
                if ( !under_debugger )
                  v15 = (unsigned __int64)interr(20086);
                __break(1u);
                v29 = (_QWORD *)v15;
                if ( ptr )
                {
                  v41 = 0;
                  qfree(ptr);
                  ptr = nullptr;
                  v42 = 0;
                }
                v32[0] = &off_156998;
                if ( v35[0] )
                {
                  sub_5A14C((__int64 *)v35, 0);
                  qfree(v35[0]);
                  v35[0] = nullptr;
                  v36 = 0;
                }
                Unwind_Resume(v29, v16, (__int64)v25, v23, v17, v18, v19, v20, (char)v30);
              }
            }
            sub_55D60((__int64)a1, (__int64)&ptr, v25, v23);
            if ( v41 )
              v27 = (char *)ptr;
            else
              v27 = &byte_F154B;
            v21 = (**a4)(a4, v24 - v26, v27);
            if ( ptr )
            {
              v41 = 0;
              qfree(ptr);
              ptr = nullptr;
              v42 = 0;
            }
          }
        }
      }
      else if ( *(_WORD *)(v39 + 54) && v22 != 65280 )
      {
        goto LABEL_19;
      }
    }
    else
    {
      v21 = 0;
    }
    --v14;
    if ( v21 )
      goto LABEL_37;
  }
  v21 = 0;
LABEL_37:
  v32[0] = &off_156998;
  if ( v35[0] )
  {
    sub_5A14C((__int64 *)v35, 0);
    qfree(v35[0]);
    v35[0] = nullptr;
    v36 = 0;
  }
  return v21;
}
// 5B61C: variable 'v16' is possibly undefined
// 5B61C: variable 'v25' is possibly undefined
// 5B61C: variable 'v23' is possibly undefined
// 5B61C: variable 'v17' is possibly undefined
// 5B61C: variable 'v18' is possibly undefined
// 5B61C: variable 'v19' is possibly undefined
// 5B61C: variable 'v20' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 156998: using guessed type _UNKNOWN *off_156998;
// 166A40: using guessed type __int64 qword_166A40;
// 168DF0: using guessed type char under_debugger;
