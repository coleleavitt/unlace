/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F984
// Address: 0x000000000004F984

//----- (000000000004F984) ----------------------------------------------------
__int64 __fastcall sub_4F984(__int64 a1)
{
  __int64 v2; // x0
  __int64 v3; // x9
  __int64 v4; // x21
  unsigned __int64 v5; // x20
  unsigned __int64 v6; // x8
  __int64 v7; // x0
  char *v8; // x0
  unsigned int v9; // w20
  int v10; // w8
  unsigned int v11; // w8
  __int64 *v12; // x26
  __int64 v13; // x10
  unsigned __int64 v14; // x20
  unsigned __int64 v15; // x8
  bool v16; // cf
  __int64 v17; // x8
  __int64 v18; // x1
  __int64 v19; // x8
  __int64 v20; // x28
  __int64 v21; // x24
  int v22; // w22
  unsigned int *v23; // x23
  __int64 v24; // x29
  int v25; // w8
  int v26; // w8
  unsigned __int64 v27; // x1
  unsigned __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x8
  int v31; // w8
  unsigned __int64 v32; // x1
  unsigned __int64 v33; // x8
  _QWORD *v34; // x8
  __int64 v35; // x20
  __int64 v36; // x23
  int v37; // w28
  int v38; // w8
  void *v39; // x25
  const char *v40; // x26
  const char *v41; // x0
  int v42; // w8
  const char *v43; // x26
  _DWORD *v44; // x10
  int v45; // w8
  _QWORD *v47; // x20
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  char v55; // [xsp+0h] [xbp-D0h]
  __int64 v56; // [xsp+20h] [xbp-B0h]
  void *ptr[2]; // [xsp+28h] [xbp-A8h] BYREF
  __int128 v58; // [xsp+38h] [xbp-98h]
  __int128 v59; // [xsp+48h] [xbp-88h]
  __int128 v60; // [xsp+58h] [xbp-78h]
  __int64 v61; // [xsp+68h] [xbp-68h]

  v61 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a1 + 544) )
  {
    v2 = qlseek(*(_QWORD *)(a1 + 472), 0, 1);
    v3 = *(_QWORD *)(a1 + 480);
    v4 = v2 - v3;
    if ( qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 544) + v3, 0) == -1 )
    {
LABEL_22:
      v9 = 0;
LABEL_117:
      qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v4, 0);
      return v9;
    }
    v5 = *(unsigned int *)(a1 + 568);
    v6 = *(_QWORD *)(a1 + 120);
    v7 = a1 + 112;
    if ( v6 >= v5 )
    {
      if ( v6 != v5 )
      {
        v60 = 0u;
        v59 = 0u;
        v58 = 0u;
        *(_OWORD *)ptr = 0u;
        v7 = (__int64)sub_5A1FC((pthread_mutex_t *)v7, v5, (char *)ptr);
      }
    }
    else
    {
      if ( *(_QWORD *)(a1 + 128) >= v5 )
      {
        v8 = *(char **)v7;
      }
      else
      {
        v8 = (char *)qvector_reserve((pthread_mutex_t *)v7, *(void **)v7, *(unsigned int *)(a1 + 568), 0x40u);
        v6 = *(_QWORD *)(a1 + 120);
        *(_QWORD *)(a1 + 112) = v8;
      }
      v7 = (__int64)memset(&v8[64 * v6], 0, (v5 - v6) << 6);
      *(_QWORD *)(a1 + 120) = v5;
    }
    v10 = *(_DWORD *)(a1 + 568);
    *(_BYTE *)(a1 + 248) = 1;
    if ( v10 )
    {
      v11 = 0;
      v12 = (__int64 *)(a1 + 112);
      while ( 1 )
      {
        v13 = *(_QWORD *)(a1 + 544);
        v14 = v11;
        v15 = *(unsigned __int16 *)(a1 + 562) * (unsigned __int64)v11;
        v16 = __CFADD__(v15, v13);
        v17 = v15 + v13;
        if ( v16 )
          goto LABEL_22;
        v7 = qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v17, 0);
        if ( v7 == -1 )
          goto LABEL_22;
        if ( !*(_BYTE *)(a1 + 248) )
        {
          v56 = v4;
          if ( !under_debugger )
            interr(20099);
          goto LABEL_129;
        }
        v18 = *(_QWORD *)(a1 + 120) <= v14 ? 0LL : *v12 + (v14 << 6);
        v7 = sub_4F66C(a1, v18);
        if ( (v7 & 1) == 0 )
          goto LABEL_22;
        v11 = v14 + 1;
        if ( (unsigned int)(v14 + 1) >= *(_DWORD *)(a1 + 568) )
          goto LABEL_24;
      }
    }
    v12 = (__int64 *)(a1 + 112);
LABEL_24:
    v56 = v4;
    v20 = *(_QWORD *)(a1 + 112);
    v19 = *(_QWORD *)(a1 + 120);
    v21 = v19 << 6;
    if ( !(v19 << 6) )
    {
LABEL_50:
      v33 = *(unsigned int *)(a1 + 572);
      if ( (_DWORD)v33 )
      {
        if ( !*(_BYTE *)(a1 + 248) )
        {
LABEL_127:
          if ( !under_debugger )
            v7 = (__int64)interr(20099);
          goto LABEL_129;
        }
        if ( *(_QWORD *)(a1 + 120) > v33 && *v12 + (v33 << 6) )
        {
          v34 = (_QWORD *)(*v12 + (v33 << 6));
          *(_QWORD *)(a1 + 256) = v34[3];
          *(_QWORD *)(a1 + 264) = v34[2];
          *(_QWORD *)(a1 + 272) = v34[4];
        }
      }
      ptr[1] = nullptr;
      *(_QWORD *)&v58 = 0;
      ptr[0] = nullptr;
      v35 = *v12;
      v36 = v20 + v21;
      if ( *v12 == v20 + v21 )
      {
        v44 = (_DWORD *)(a1 + 168);
      }
      else
      {
        v37 = 0;
        do
        {
          if ( v37 && *(_QWORD *)(v35 + 32) )
          {
            ptr[1] = nullptr;
            if ( *(__int64 *)(a1 + 256) >= 1 && *(_QWORD *)(a1 + 272) )
              sub_55D60(*(_QWORD *)(a1 + 240), (__int64)ptr, (__int64 *)(a1 + 256), *(_DWORD *)v35);
            v38 = *(_DWORD *)(v35 + 4);
            if ( v38 > 1879048188 )
            {
              switch ( v38 )
              {
                case 1879048189:
                  *(_DWORD *)(a1 + 216) = v37;
                  break;
                case 1879048190:
                  *(_DWORD *)(a1 + 220) = v37;
                  break;
                case 1879048191:
                  *(_DWORD *)(a1 + 224) = v37;
                  break;
              }
            }
            else
            {
              switch ( v38 )
              {
                case 1:
                  v39 = ptr[1];
                  if ( ptr[1] )
                    v40 = (const char *)ptr[0];
                  else
                    v40 = &byte_F154B;
                  if ( !strcmp(v40, ".interp") )
                  {
                    *(_DWORD *)(a1 + 176) = v37;
                  }
                  else if ( !strcmp(v40, ".got") )
                  {
                    *(_DWORD *)(a1 + 164) = v37;
                    *(_BYTE *)(a1 + 249) = 1;
                  }
                  else if ( !strcmp(v40, ".got.plt") )
                  {
                    *(_DWORD *)(a1 + 168) = v37;
                  }
                  else if ( !strcmp(v40, ".plt.got") )
                  {
                    *(_DWORD *)(a1 + 212) = v37;
                  }
                  else if ( !strcmp(v40, ".plt.sec") )
                  {
                    *(_DWORD *)(a1 + 228) = v37;
                  }
                  else if ( !strcmp(v40, ".gnu_debugdata") )
                  {
                    *(_DWORD *)(a1 + 232) = v37;
                  }
                  else if ( !strcmp(v40, ".eh_frame") )
                  {
                    *(_DWORD *)(a1 + 236) = v37;
                  }
                  else
                  {
                    if ( !*(_BYTE *)(a1 + 617) || strcmp(v40, ".opd") )
                      goto LABEL_82;
                    *(_DWORD *)(a1 + 200) = v37;
                  }
                  break;
                case 3:
                  if ( ptr[1] )
                    v43 = (const char *)ptr[0];
                  else
                    v43 = &byte_F154B;
                  if ( !strcmp(v43, ".strtab") )
                  {
                    sub_5012C(a1, (__int64 *)(a1 + 320), v35, 0);
                  }
                  else if ( !strcmp(v43, ".dynstr") )
                  {
                    sub_5012C(a1, (__int64 *)(a1 + 352), v35, 0);
                  }
                  break;
                case 8:
                  v39 = ptr[1];
LABEL_82:
                  if ( v39 )
                    v41 = (const char *)ptr[0];
                  else
                    v41 = &byte_F154B;
                  if ( !strcmp(v41, ".plt") )
                    *(_DWORD *)(a1 + 184) = v37;
                  break;
                case 18:
                  v42 = *(_DWORD *)(v35 + 40);
                  if ( v42 )
                  {
                    if ( v42 == *(_DWORD *)(a1 + 192) )
                    {
                      *(_DWORD *)(a1 + 204) = v37;
                      v42 = *(_DWORD *)(v35 + 40);
                    }
                    if ( v42 == *(_DWORD *)(a1 + 160) )
                      *(_DWORD *)(a1 + 208) = v37;
                  }
                  break;
                default:
                  break;
              }
            }
          }
          v35 += 64;
          ++v37;
        }
        while ( v36 != v35 );
        v44 = (_DWORD *)(a1 + 168);
      }
      v45 = *(_DWORD *)(a1 + 164);
      if ( !*(_DWORD *)(a1 + 168) || !v45 )
        *v44 = v45;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        *(_QWORD *)&v58 = 0;
      }
      v9 = 1;
      goto LABEL_117;
    }
    v22 = 0;
    v23 = (unsigned int *)(v20 + 40);
    v24 = v19 << 6;
    while ( 1 )
    {
      if ( !v22 || !*((_QWORD *)v23 - 1) )
        goto LABEL_47;
      v25 = *(v23 - 9);
      if ( v25 == 11 )
        break;
      if ( v25 == 6 )
      {
        if ( !*(_BYTE *)(a1 + 248) )
          goto LABEL_123;
        v28 = *v23;
        if ( *(_QWORD *)(a1 + 120) <= v28 || (v29 = *v12 + (v28 << 6)) == 0 )
        {
          v7 = sub_39FA0((__int64)"Illegal link section %d of the dynamic linking information section\n", v28);
          goto LABEL_47;
        }
        v30 = *v12 + (v28 << 6);
        if ( *(_DWORD *)(v30 + 4) != 11 )
          goto LABEL_43;
        *(_DWORD *)(v30 + 40) = 0;
      }
      else if ( v25 == 2 )
      {
        v26 = *(unsigned __int8 *)(a1 + 248);
        *(_DWORD *)(a1 + 192) = v22;
        if ( !v26 )
        {
          if ( !under_debugger )
          {
            v7 = (__int64)interr(20099);
LABEL_123:
            if ( !under_debugger )
            {
              v7 = (__int64)interr(20099);
LABEL_125:
              if ( !under_debugger )
              {
                v7 = (__int64)interr(20099);
                goto LABEL_127;
              }
            }
          }
LABEL_129:
          __break(1u);
          v47 = (_QWORD *)v7;
          qlseek(*(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 480) + v56, 0);
          Unwind_Resume(v47, v48, v49, v50, v51, v52, v53, v54, v55);
        }
        v27 = *v23;
        if ( *(_QWORD *)(a1 + 120) > v27 && *v12 + (v27 << 6) )
          sub_5012C(a1, (__int64 *)(a1 + 320), *v12 + (v27 << 6), 1);
        else
          v7 = sub_39FA0((__int64)"Illegal link section %d of the string table for symbols\n", v27);
      }
LABEL_47:
      ++v22;
      v24 -= 64;
      v23 += 16;
      if ( !v24 )
        goto LABEL_50;
    }
    v31 = *(unsigned __int8 *)(a1 + 248);
    *(_DWORD *)(a1 + 160) = v22;
    if ( !v31 )
      goto LABEL_125;
    v32 = *v23;
    if ( *(_QWORD *)(a1 + 120) <= v32 || (v29 = *v12 + (v32 << 6)) == 0 )
    {
      v7 = sub_39FA0((__int64)"Illegal link section %d of the string table for dynamic linking symbols\n", v32);
      goto LABEL_47;
    }
LABEL_43:
    sub_5012C(a1, (__int64 *)(a1 + 352), v29, 1);
    goto LABEL_47;
  }
  return 0;
}
// 500D0: variable 'v7' is possibly undefined
// 500EC: variable 'v48' is possibly undefined
// 500EC: variable 'v49' is possibly undefined
// 500EC: variable 'v50' is possibly undefined
// 500EC: variable 'v51' is possibly undefined
// 500EC: variable 'v52' is possibly undefined
// 500EC: variable 'v53' is possibly undefined
// 500EC: variable 'v54' is possibly undefined
// 500EC: variable 'v55' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 168DF0: using guessed type char under_debugger;
