/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63A14
// Address: 0x0000000000063A14

//----- (0000000000063A14) ----------------------------------------------------
__int64 __fastcall sub_63A14(__int64 a1, char *a2, char a3, unsigned int a4)
{
  __int64 v5; // x20
  _QWORD *v8; // x0
  int v9; // w1
  __int64 v10; // x30
  int v11; // w2
  int v12; // kr00_4
  _QWORD *v13; // x2
  __int64 (__fastcall ***v14)(_QWORD, char *, _QWORD *); // x0
  unsigned __int64 v15; // x0
  __int64 result; // x0
  bool v17; // zf
  char v18; // w8
  char v19; // w9
  __int64 v20; // x22
  __int64 v21; // x8
  _BYTE *v22; // x0
  char v23; // w1
  char *v24; // x1
  unsigned __int16 v25; // w0
  bool v26; // cc
  char v27; // w8
  char v28; // w9
  unsigned __int8 v29; // w1
  char v30; // w1
  __int64 v31; // x22
  __int64 v32; // x8
  _BYTE *v33; // x0
  __int64 v34; // x21
  __int64 v35; // x8
  _BYTE *v36; // x0
  unsigned __int16 v37; // w2
  __int64 v38; // x8
  int v39; // w21
  int v40; // w0
  unsigned __int64 v41; // x8
  _UNKNOWN **v42; // x8
  char v43[4]; // [xsp+4h] [xbp-7Ch] BYREF
  __int64 v44; // [xsp+8h] [xbp-78h]
  char *v45; // [xsp+10h] [xbp-70h]
  __int64 v46; // [xsp+18h] [xbp-68h]
  __int64 v47; // [xsp+20h] [xbp-60h]
  __int64 v48; // [xsp+28h] [xbp-58h]
  int v49; // [xsp+30h] [xbp-50h] BYREF
  int v50; // [xsp+34h] [xbp-4Ch] BYREF
  __int64 v51; // [xsp+38h] [xbp-48h]

  v5 = a4;
  v51 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v8 = (_QWORD *)sub_62274((_QWORD *)a1, a2, &v49);
  v12 = v11;
  v13 = v8;
  switch ( v49 )
  {
    case 0:
    case 5:
      v14 = *(__int64 (__fastcall ****)(_QWORD, char *, _QWORD *))(a1 + 416);
      if ( v14 )
      {
        v15 = (**v14)(v14, a2, v13);
        if ( v15 != -1 )
        {
          sub_5EF88(a1, v15);
          return 0;
        }
      }
      set_error_string(nullptr, a2);
      return 53;
    case 1:
      v17 = (a3 & 1) == 0;
      v18 = 96;
      v19 = 64;
      goto LABEL_29;
    case 2:
      if ( (a3 & 1) != 0 && !v8 && *(_QWORD *)(a1 + 184) )
        return 1539;
      v17 = (a3 & 1) == 0;
      v18 = 112;
      v19 = 80;
LABEL_29:
      if ( v17 )
        v29 = v18;
      else
        v29 = v19;
      sub_5EE24(a1, v29, (unsigned __int16)v8);
      if ( !(_DWORD)v5 )
        return 0;
      goto LABEL_21;
    case 3:
      if ( (a3 & 1) != 0 )
        v23 = -39;
      else
        v23 = -43;
      sub_5ECDC(a1, v23, (unsigned __int16)v8);
      if ( (_DWORD)v5 )
        goto LABEL_21;
      return 0;
    case 4:
      if ( (a3 & 1) != 0 )
      {
        if ( dword_164A74 < 1 )
          return 1611;
        v20 = *(_QWORD *)(a1 + 200);
        *(_BYTE *)(a1 + 212) = -44;
        v21 = *(_QWORD *)(v20 + 8);
        if ( *(_QWORD *)(v20 + 16) >= (unsigned __int64)(v21 + 1) )
        {
          v22 = *(_BYTE **)v20;
        }
        else
        {
          v22 = qvector_reserve((pthread_mutex_t *)v20, *(void **)v20, v21 + 1, 1u);
          v21 = *(_QWORD *)(v20 + 8);
          *(_QWORD *)v20 = v22;
        }
        v22[v21] = -44;
        ++*(_QWORD *)(v20 + 8);
        ++*(_DWORD *)(a1 + 208);
        sub_5EC14(a1, a2, 0);
        v37 = dword_164A74;
      }
      else
      {
        if ( dword_164A70 < 1 )
          return 1610;
        v31 = *(_QWORD *)(a1 + 200);
        *(_BYTE *)(a1 + 212) = -86;
        v32 = *(_QWORD *)(v31 + 8);
        if ( *(_QWORD *)(v31 + 16) >= (unsigned __int64)(v32 + 1) )
        {
          v33 = *(_BYTE **)v31;
        }
        else
        {
          v33 = qvector_reserve((pthread_mutex_t *)v31, *(void **)v31, v32 + 1, 1u);
          v32 = *(_QWORD *)(v31 + 8);
          *(_QWORD *)v31 = v33;
        }
        v33[v32] = -86;
        ++*(_QWORD *)(v31 + 8);
        ++*(_DWORD *)(a1 + 208);
        sub_5EC14(a1, a2, 0);
        v37 = dword_164A70;
      }
      sub_5EE24(a1, 0, v37);
      if ( !(_DWORD)v5 )
        return 0;
      goto LABEL_21;
    case 6:
      if ( (a3 & 1) != 0 )
        return 53;
      sub_5EC14(a1, a2, 0);
      v34 = *(_QWORD *)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -82;
      v35 = *(_QWORD *)(v34 + 8);
      if ( *(_QWORD *)(v34 + 16) >= (unsigned __int64)(v35 + 1) )
      {
        v36 = *(_BYTE **)v34;
      }
      else
      {
        v36 = qvector_reserve((pthread_mutex_t *)v34, *(void **)v34, v35 + 1, 1u);
        v35 = *(_QWORD *)(v34 + 8);
        *(_QWORD *)v34 = v36;
      }
      v36[v35] = -82;
      ++*(_QWORD *)(v34 + 8);
      ++*(_DWORD *)(a1 + 208);
      if ( !(_DWORD)v5 )
        return 0;
LABEL_21:
      if ( *(_QWORD *)(a1 + 48) )
        v24 = *(char **)(a1 + 40);
      else
        v24 = &byte_F154B;
      v25 = sub_62274((_QWORD *)a1, v24, &v50);
      switch ( v50 )
      {
        case 3:
          v26 = (int)v5 <= 0;
          v27 = -35;
          v28 = -37;
          break;
        case 2:
          v26 = (int)v5 <= 0;
          v27 = -58;
          v28 = -62;
          break;
        case 1:
          v26 = (int)v5 <= 0;
          v27 = -60;
          v28 = -64;
          break;
        default:
          return set_qerrno(0x3Au);
      }
      if ( v26 )
        v30 = v27;
      else
        v30 = v28;
      sub_5ECDC(a1, v30, v25);
      return 0;
    default:
      if ( !under_debugger )
        interr(271);
      __break(1u);
      v45 = a2;
      v46 = v5;
      v47 = a1;
      v48 = v10;
      v44 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
      v43[0] = 0;
      if ( v9 < 0 )
      {
        v41 = -v9;
        result = 0;
        if ( qword_164A28 <= v41 )
          return result;
        v42 = &off_164A30[5 * v41];
        v39 = *((_DWORD *)v42 + 8);
        v40 = sub_6B064((const char *)v42[2], v43);
      }
      else
      {
        if ( v9 == 0x7FFFFFFF || v8[1] <= (unsigned __int64)v9 )
          return 0;
        v38 = *(_QWORD *)(*v8 + 8LL * v9);
        v39 = *(_DWORD *)(v38 + 72);
        v40 = *(_DWORD *)(v38 + 24);
      }
      if ( v39 + v12 < v40 )
        return 0;
      return (v40 >= v12) | (unsigned int)(v43[0] != 0);
  }
}
// 63A58: variable 'v11' is possibly undefined
// 63DA0: variable 'v10' is possibly undefined
// 63DB8: variable 'v9' is possibly undefined
// 48: using guessed type __int64;
// F154B: using guessed type char byte_F154B;
// 164A28: using guessed type __int64 qword_164A28;
// 164A30: using guessed type _UNKNOWN **off_164A30;
// 164A70: using guessed type int dword_164A70;
// 164A74: using guessed type int dword_164A74;
// 168DF0: using guessed type char under_debugger;
