/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DC30
// Address: 0x000000000042DC30

//----- (000000000042DC30) ----------------------------------------------------
__int64 __fastcall sub_42DC30(__int64 a1, __int64 (***a2)())
{
  int v3; // w21
  __int64 *v4; // x0
  int v5; // w0
  unsigned int v6; // w23
  unsigned int v7; // w25
  bool v8; // zf
  char *v9; // x1
  char *v10; // x0
  __int64 v11; // x24
  __int64 v12; // x21
  __int64 v13; // x20
  char *v14; // x19
  void *v15; // x0
  void *v16; // x0
  char *v17; // x0
  __int64 v18; // x24
  __int64 v19; // x21
  __int64 v20; // x20
  char *v21; // x19
  void *v22; // x0
  void *v23; // x0
  void *v25; // x0
  void *v26; // x0
  __int64 *v27; // x1
  __int64 (*v28)(); // x3
  char *v29; // x1
  char *v30; // x2
  __int64 v31; // x3
  char *v32; // x23
  __int64 (*v33)(); // x4
  unsigned __int64 v34; // x1
  __int64 *v35; // x2
  void *v36; // x0
  __int64 *v37; // x1
  __int64 (*v38)(); // x3
  void *v39; // x0
  __int64 *v40; // x1
  __int64 (*v41)(); // x3
  unsigned int v42; // [xsp+54h] [xbp-4DCh] BYREF
  void *v43; // [xsp+58h] [xbp-4D8h] BYREF
  __int64 v44; // [xsp+60h] [xbp-4D0h]
  __int64 v45; // [xsp+68h] [xbp-4C8h]
  __int64 v46; // [xsp+70h] [xbp-4C0h] BYREF
  __int64 v47; // [xsp+78h] [xbp-4B8h]
  __int64 v48; // [xsp+80h] [xbp-4B0h]
  int v49; // [xsp+88h] [xbp-4A8h]
  void *v50; // [xsp+90h] [xbp-4A0h] BYREF
  void *ptr; // [xsp+98h] [xbp-498h]
  __int64 v52; // [xsp+A0h] [xbp-490h]
  __int64 v53; // [xsp+A8h] [xbp-488h]
  char v54; // [xsp+B0h] [xbp-480h]
  __int64 s[38]; // [xsp+D0h] [xbp-460h] BYREF
  __int64 v56; // [xsp+2B0h] [xbp-280h] BYREF
  _QWORD v57[3]; // [xsp+2B8h] [xbp-278h] BYREF
  int v58; // [xsp+2D0h] [xbp-260h]
  void *v59; // [xsp+2D8h] [xbp-258h]
  __int64 v60; // [xsp+2E0h] [xbp-250h]
  __int64 v61; // [xsp+2F0h] [xbp-240h]
  __int64 v62[3]; // [xsp+308h] [xbp-228h] BYREF
  int v63; // [xsp+320h] [xbp-210h]
  void *v64; // [xsp+328h] [xbp-208h]
  unsigned __int64 v65; // [xsp+330h] [xbp-200h]
  unsigned int v66; // [xsp+358h] [xbp-1D8h]
  unsigned int v67; // [xsp+368h] [xbp-1C8h]
  unsigned int v68; // [xsp+378h] [xbp-1B8h]
  char v69; // [xsp+3B0h] [xbp-180h]
  void *v70; // [xsp+3D8h] [xbp-158h]
  __int64 v71; // [xsp+3E0h] [xbp-150h]
  __int64 v72[19]; // [xsp+418h] [xbp-118h] BYREF
  char v73; // [xsp+4B4h] [xbp-7Ch]
  char v74; // [xsp+4B5h] [xbp-7Bh]
  __int64 v75; // [xsp+4D0h] [xbp-60h]
  void *v76; // [xsp+4F8h] [xbp-38h]
  __int64 v77; // [xsp+500h] [xbp-30h]
  __int64 v78; // [xsp+510h] [xbp-20h]

  sub_428560((__int64)v57, a1, 0);
  v72[18] = (__int64)sub_419FD8;
  if ( !sub_420B70((__int64)v57) )
    goto LABEL_109;
  v3 = (unsigned __int8)sub_4210E8((__int64)v57);
  if ( !v3 || (unsigned __int8)(v73 - 1) > 1u || (unsigned __int8)(v74 - 1) > 1u )
    goto LABEL_109;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  if ( !v75 )
    goto LABEL_8;
  if ( !(unsigned __int8)sub_4288A8((__int64)v57) )
  {
LABEL_109:
    v6 = -1;
    goto LABEL_39;
  }
  qword_522120 = v61;
LABEL_8:
  sub_42BB28((__int64)v57);
  v46 = v62[0];
  v47 = v62[1];
  v48 = v62[2];
  v49 = v63;
  if ( !v62[0] )
  {
    v48 = v57[2];
    v46 = v57[0];
    v47 = v57[1];
    v49 = v58;
  }
  v4 = s;
  do
  {
    *v4 = 0;
    v4[1] = 0;
    v4 += 4;
    *(v4 - 2) = 0;
    *((_WORD *)v4 - 4) = 0;
    *((_DWORD *)v4 - 1) = 0;
  }
  while ( &v56 != v4 );
  memset(s, 0, 0x1E8u);
  if ( !v46 )
    goto LABEL_13;
  v43 = nullptr;
  v44 = 0;
  v45 = 0;
  v43 = sub_491288((__int64)&v43, nullptr, 0xAu, 0x10u);
  if ( !(unsigned __int8)sub_42A408((__int64)v57, (__int64)&v43, &v46)
    || !(unsigned __int8)sub_426880((__int64)v57, (__int64)s, (unsigned __int64 **)&v43)
    || ((_DWORD)a2[1] & 4) == 0 )
  {
    v25 = v43;
    if ( !v43 )
      goto LABEL_13;
    goto LABEL_59;
  }
  sub_4217F8((__int64)v57, v72, s);
  v30 = (char *)v43;
  v31 = v44;
  v32 = (char *)v43;
  if ( !(16 * v44) )
  {
    v25 = v43;
    if ( !v43 )
      goto LABEL_13;
LABEL_59:
    v44 = 0;
    j__free(v25);
    v5 = *((_DWORD *)a2 + 2);
    if ( (v5 & 2) != 0 )
      goto LABEL_60;
    goto LABEL_14;
  }
  while ( 1 )
  {
    v50 = nullptr;
    ptr = nullptr;
    v52 = 0;
    v34 = *(_QWORD *)v32;
    if ( *(_QWORD *)v32 <= 0xFu )
      break;
    if ( v34 == 29 )
      goto LABEL_87;
LABEL_83:
    v33 = (*a2)[3];
    if ( v33 != sub_408258 )
    {
      v35 = &qword_4B2D48;
      goto LABEL_116;
    }
LABEL_84:
    v32 += 16;
    v25 = v30;
    if ( v32 == &v30[16 * v31] )
      goto LABEL_120;
  }
  if ( v34 < 0xE && v34 != 1 )
    goto LABEL_83;
LABEL_87:
  sub_42AA98((__int64)v57, (__int64)&v50, v72, *((_DWORD *)v32 + 2));
  v35 = (__int64 *)v50;
  v33 = (*a2)[3];
  v34 = *(_QWORD *)v32;
  if ( !ptr )
    v35 = &qword_4B2D48;
  if ( v33 == sub_408258 )
    goto LABEL_90;
LABEL_116:
  if ( !((unsigned int (__fastcall *)(__int64 (***)(), unsigned __int64, __int64 *, _QWORD))v33)(
          a2,
          v34,
          v35,
          *((_QWORD *)v32 + 1)) )
  {
LABEL_90:
    if ( v50 )
    {
      ptr = nullptr;
      j__free(v50);
    }
    v30 = (char *)v43;
    v31 = v44;
    goto LABEL_84;
  }
  if ( v50 )
  {
    ptr = nullptr;
    j__free(v50);
  }
  v25 = v43;
LABEL_120:
  if ( v25 )
    goto LABEL_59;
LABEL_13:
  v5 = *((_DWORD *)a2 + 2);
  if ( (v5 & 2) == 0 )
    goto LABEL_14;
LABEL_60:
  if ( !v67 )
    goto LABEL_14;
  if ( !v69 )
    sub_4068C0();
  if ( v67 >= v65 || !((char *)v64 + 64 * (unsigned __int64)v67) )
  {
LABEL_14:
    v6 = v5 & 1;
    if ( (v5 & 1) != 0 )
    {
      v7 = v66;
      if ( v68 | v66 )
      {
        if ( v68 )
        {
          if ( !v69 )
            sub_4068C0();
          v29 = nullptr;
          if ( v68 < v65 )
            v29 = (char *)v64 + 64 * (unsigned __int64)v68;
          v6 = sub_42AC78((__int64)v57, (__int64)v29, 1, a2);
          v3 = v6 == 0;
        }
        else
        {
          v6 = 0;
        }
        if ( v7 )
          v8 = v3 == 0;
        else
          v8 = 1;
        if ( !v8 )
        {
          if ( !v69 )
            sub_4068C0();
          v9 = nullptr;
          if ( v7 < v65 )
            v9 = (char *)v64 + 64 * (unsigned __int64)v7;
          v6 = sub_42AC78((__int64)v57, (__int64)v9, 2, a2);
        }
      }
      else
      {
        v6 = 0;
        if ( (unsigned __int8)sub_427080((__int64)s, (__int64)&v50, 1u) )
          v6 = sub_42AC78((__int64)v57, (__int64)&v50, 2, a2);
      }
      v5 = *((_DWORD *)a2 + 2);
    }
    v50 = v57;
    ptr = nullptr;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    if ( (v5 & 0x10) != 0 )
    {
      if ( (unsigned __int8)sub_42C850((__int64)v57, (__int64)&v50) )
      {
        v43 = nullptr;
        v44 = 0;
        v45 = 0;
        if ( (unsigned __int8)sub_42DAB8((__int64)&v50, (__int64)&v43) )
        {
          v36 = v43;
          v37 = &qword_4B2D48;
          if ( v44 )
            v37 = (__int64 *)v43;
          v38 = (*a2)[4];
          if ( v38 == sub_408260 )
          {
            v6 = 0;
          }
          else
          {
            v6 = ((__int64 (__fastcall *)(__int64 (***)(), __int64 *))v38)(a2, v37);
            v36 = v43;
            if ( v6 )
            {
              if ( v43 )
              {
                v44 = 0;
                j__free(v43);
              }
              goto LABEL_30;
            }
          }
        }
        else
        {
          v36 = v43;
        }
        if ( v36 )
        {
          v44 = 0;
          j__free(v36);
        }
      }
      if ( ((_DWORD)a2[1] & 0x20) == 0 )
        goto LABEL_30;
    }
    else if ( (v5 & 0x20) == 0 )
    {
      goto LABEL_39;
    }
    v43 = nullptr;
    v44 = 0;
    v45 = 0;
    if ( !v69 )
      goto LABEL_30;
    if ( sub_42C4C0(v62, (__int64)&v43, &v42) )
    {
      v39 = v43;
      v40 = &qword_4B2D48;
      if ( v44 )
        v40 = (__int64 *)v43;
      v41 = (*a2)[5];
      if ( v41 == sub_408268 )
      {
        v6 = 0;
        goto LABEL_107;
      }
      v6 = ((__int64 (__fastcall *)(__int64 (***)(), __int64 *, _QWORD))v41)(a2, v40, v42);
      v39 = v43;
      if ( v6 )
      {
        if ( v43 )
        {
LABEL_108:
          v44 = 0;
          j__free(v39);
        }
LABEL_30:
        v10 = (char *)ptr;
        if ( ptr )
        {
          v11 = v52;
          if ( v52 )
          {
            v12 = 0;
            v13 = 0;
            do
            {
              v14 = &v10[v12];
              v15 = *(void **)&v10[v12 + 24];
              if ( v15 )
              {
                *((_QWORD *)v14 + 4) = 0;
                j__free(v15);
              }
              v16 = *(void **)v14;
              if ( *(_QWORD *)v14 )
              {
                *((_QWORD *)v14 + 1) = 0;
                j__free(v16);
              }
              ++v13;
              v12 += 56;
              v10 = (char *)ptr;
            }
            while ( v11 != v13 );
          }
          v52 = 0;
          j__free(v10);
        }
        goto LABEL_39;
      }
    }
    else
    {
      v39 = v43;
    }
LABEL_107:
    if ( !v39 )
      goto LABEL_30;
    goto LABEL_108;
  }
  v50 = nullptr;
  ptr = nullptr;
  v52 = 0;
  sub_42A838((__int64)v57, &v50, *((_QWORD *)v64 + 8 * (unsigned __int64)v67 + 3));
  v26 = v50;
  v27 = &qword_4B2D48;
  if ( ptr )
    v27 = (__int64 *)v50;
  v28 = (*a2)[1];
  if ( v28 == sub_408248 || (v6 = ((__int64 (__fastcall *)(__int64 (***)(), __int64 *))v28)(a2, v27), v26 = v50, !v6) )
  {
    if ( v26 )
    {
      ptr = nullptr;
      j__free(v26);
    }
    v5 = *((_DWORD *)a2 + 2);
    goto LABEL_14;
  }
  if ( v50 )
  {
    ptr = nullptr;
    j__free(v50);
  }
LABEL_39:
  if ( v78 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v78 + 8LL))(v78);
  if ( v76 )
  {
    v77 = 0;
    j__free(v76);
  }
  v17 = (char *)v70;
  if ( v70 )
  {
    v18 = v71;
    if ( v71 )
    {
      v19 = 0;
      v20 = 0;
      do
      {
        v21 = &v17[v19];
        v22 = *(void **)&v17[v19 + 24];
        if ( v22 )
        {
          *((_QWORD *)v21 + 4) = 0;
          j__free(v22);
        }
        v23 = *(void **)v21;
        if ( *(_QWORD *)v21 )
        {
          *((_QWORD *)v21 + 1) = 0;
          j__free(v23);
        }
        ++v20;
        v19 += 96;
        v17 = (char *)v70;
      }
      while ( v18 != v20 );
    }
    v71 = 0;
    j__free(v17);
  }
  if ( v64 )
  {
    v65 = 0;
    j__free(v64);
  }
  if ( v59 )
  {
    v60 = 0;
    j__free(v59);
  }
  return v6;
}
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 522120: using guessed type __int64 qword_522120;
