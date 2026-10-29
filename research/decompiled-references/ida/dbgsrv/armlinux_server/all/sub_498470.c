/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_498470
// Address: 0x0000000000498470

//----- (0000000000498470) ----------------------------------------------------
__int64 __fastcall sub_498470(__int64 a1, int *a2, int a3, __int64 a4)
{
  __int64 v6; // x23
  int v7; // w0
  char v8; // w0
  unsigned __int8 *v9; // x2
  __int64 v10; // x1
  unsigned __int64 v11; // x1
  char *v12; // x19
  unsigned __int8 *v14; // x2
  __int64 v15; // x1
  unsigned __int64 v16; // x20
  unsigned __int64 v17; // x0
  unsigned __int64 v18; // x27
  __int64 v19; // x1
  char *v20; // x19
  __int64 v21; // x2
  __int64 v22; // x5
  __int64 v23; // x0
  char *v24; // x25
  __int64 v25; // x20
  unsigned __int8 *v26; // x0
  unsigned __int64 v27; // x1
  unsigned __int8 v28; // w2
  __int64 v29; // x20
  char *v30; // x20
  char *v31; // x0
  __int64 v32; // x7
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x1
  unsigned __int64 v36; // x26
  char *v37; // x0
  unsigned __int64 v38; // x2
  __int64 v39; // x1
  char *v40; // x4
  char *v41; // x3
  __int64 v42; // x7
  __int64 v43; // x1
  char *v44; // x19
  __int64 v45; // x5
  __int64 v46; // x3
  unsigned __int64 v47; // x25
  char *v48; // x0
  unsigned __int64 v49; // x2
  __int64 v50; // x1
  char *v51; // x4
  char *v52; // x3
  __int64 v53; // x7
  unsigned __int8 *v54; // [xsp+58h] [xbp-68h] BYREF
  unsigned __int64 v55; // [xsp+60h] [xbp-60h]
  __int64 v56; // [xsp+68h] [xbp-58h] BYREF
  __int64 v57; // [xsp+70h] [xbp-50h]
  __int64 v58; // [xsp+78h] [xbp-48h]
  __int64 v59; // [xsp+80h] [xbp-40h]
  __int64 v60; // [xsp+88h] [xbp-38h]
  __int64 v61; // [xsp+90h] [xbp-30h]
  void *ptr; // [xsp+98h] [xbp-28h] BYREF
  unsigned __int64 v63; // [xsp+A0h] [xbp-20h]
  unsigned __int64 v64; // [xsp+A8h] [xbp-18h]
  int v65; // [xsp+B0h] [xbp-10h]
  char v66; // [xsp+B4h] [xbp-Ch]
  __int64 v67; // [xsp+B8h] [xbp-8h]

  if ( a4 )
  {
    v6 = nullsub_34(a4, 0);
    v7 = *a2;
    ptr = nullptr;
    v63 = 0;
    v64 = 0;
    v65 = v7;
    if ( v7 == -1 )
    {
      v14 = *((unsigned __int8 **)a2 + 1);
      v15 = (unsigned int)a2[1];
      v63 = 0;
      v11 = (unsigned __int64)&v14[v15];
      v54 = v14;
      v55 = v11;
      v66 = 0;
      if ( (unsigned __int64)v14 >= v11 )
        goto LABEL_4;
    }
    else
    {
      v8 = sub_47DBD8();
      v9 = *((unsigned __int8 **)a2 + 1);
      v10 = (unsigned int)a2[1];
      v63 = 0;
      v11 = (unsigned __int64)&v9[v10];
      v54 = v9;
      v55 = v11;
      v66 = v8;
      if ( (unsigned __int64)v9 >= v11 )
      {
LABEL_4:
        v12 = (char *)ptr;
        goto LABEL_5;
      }
    }
    v16 = sub_48E6E8(&v54, v11);
    v12 = (char *)ptr;
    v17 = v63;
    if ( v16 != v63 )
    {
      v56 = 0;
      v57 = 0;
      LOBYTE(v58) = 0;
      if ( v16 >= v63 )
      {
        if ( v16 > v63 )
        {
          v18 = v64;
          if ( ptr <= &v56 && &v56 < (__int64 *)((char *)ptr + 24 * v64) )
          {
            v59 = v56;
            v60 = v57;
            v61 = v58;
            if ( v16 <= v64 )
              goto LABEL_44;
            v12 = (char *)sub_491288((__int64)&ptr, nullptr, v16, 0x18u);
            v47 = v64;
            v48 = (char *)ptr;
            v64 = v18;
            v49 = v63 - 1;
            if ( (__int64)(v63 - 1) >= 0 )
            {
              v50 = 0;
              do
              {
                v51 = &v48[v50];
                v52 = &v12[v50];
                --v49;
                v50 += 24;
                v53 = *((_QWORD *)v51 + 1);
                *(_QWORD *)v52 = *(_QWORD *)v51;
                *((_QWORD *)v52 + 1) = v53;
                *((_QWORD *)v52 + 2) = *((_QWORD *)v51 + 2);
              }
              while ( v49 != -1 );
              v48 = (char *)ptr;
            }
            j__free(v48);
            v17 = v63;
            ptr = v12;
            v64 = v47;
            if ( v16 > v63 )
            {
LABEL_44:
              v43 = 24 * v17;
              while ( 1 )
              {
                v44 = &v12[v43];
                v45 = v61;
                v46 = v60;
                ++v17;
                *(_QWORD *)v44 = v59;
                *((_QWORD *)v44 + 1) = v46;
                *((_QWORD *)v44 + 2) = v45;
                v43 += 24;
                if ( v16 <= v17 )
                  break;
                v12 = (char *)ptr;
              }
            }
            v17 = v16;
            v12 = (char *)ptr;
            v63 = v16;
          }
          else
          {
            if ( v16 <= v64 )
              goto LABEL_16;
            v12 = (char *)sub_491288((__int64)&ptr, nullptr, v16, 0x18u);
            v36 = v64;
            v37 = (char *)ptr;
            v64 = v18;
            v38 = v63 - 1;
            if ( (__int64)(v63 - 1) >= 0 )
            {
              v39 = 0;
              do
              {
                v40 = &v37[v39];
                v41 = &v12[v39];
                --v38;
                v39 += 24;
                v42 = *((_QWORD *)v40 + 1);
                *(_QWORD *)v41 = *(_QWORD *)v40;
                *((_QWORD *)v41 + 1) = v42;
                *((_QWORD *)v41 + 2) = *((_QWORD *)v40 + 2);
              }
              while ( v38 != -1 );
              v37 = (char *)ptr;
            }
            j__free(v37);
            v17 = v63;
            ptr = v12;
            v64 = v36;
            if ( v16 > v63 )
            {
LABEL_16:
              v19 = 24 * v17;
              do
              {
                v20 = &v12[v19];
                v21 = v58;
                v22 = v57;
                ++v17;
                *(_QWORD *)v20 = v56;
                *((_QWORD *)v20 + 1) = v22;
                *((_QWORD *)v20 + 2) = v21;
                v19 += 24;
                v12 = (char *)ptr;
              }
              while ( v16 > v17 );
            }
            v17 = v16;
            v63 = v16;
          }
        }
      }
      else
      {
        v17 = v16;
        v63 = v16;
      }
    }
    v23 = 24 * v17;
    v24 = &v12[v23];
    if ( &v12[v23] == v12 )
    {
      if ( a3 )
        goto LABEL_5;
    }
    else
    {
      v25 = 0;
      do
      {
        v26 = v54;
        v27 = v55;
        v28 = 0;
        if ( v55 > (unsigned __int64)v54 )
        {
          v28 = *v54;
          v26 = v54 + 1;
        }
        v54 = v26;
        v12[16] = v28;
        v29 = sub_48E6E8(&v54, v27) + v25;
        *(_QWORD *)v12 = v29;
        v25 = v29 + sub_48E6E8(&v54, v55);
        *((_QWORD *)v12 + 1) = v25;
        v12 += 24;
      }
      while ( v24 != v12 );
      v12 = (char *)ptr;
      v23 = 24 * v63;
      v30 = (char *)ptr + 24 * v63;
      if ( a3 )
      {
LABEL_25:
        if ( v12 != v30 )
          goto LABEL_28;
LABEL_5:
        if ( !v12 )
          return v67 ^ _stack_chk_guard;
        goto LABEL_6;
      }
    }
    v30 = &v12[v23];
    if ( &v12[v23] == v12 )
      goto LABEL_5;
    v31 = v30 - 24;
    if ( v30 - 24 > v12 )
    {
      do
      {
        v32 = *((_QWORD *)v31 + 1);
        v12 += 24;
        v33 = *((_QWORD *)v12 - 3);
        v34 = *((_QWORD *)v12 - 2);
        *((_QWORD *)v12 - 3) = *(_QWORD *)v31;
        *((_QWORD *)v12 - 2) = v32;
        v35 = *((_QWORD *)v12 - 1);
        v31 -= 24;
        *(v12 - 8) = v31[40];
        v59 = v33;
        v60 = v34;
        *((_QWORD *)v31 + 3) = v33;
        *((_QWORD *)v31 + 4) = v34;
        v31[40] = v35;
        v61 = v35;
      }
      while ( v12 < v31 );
      v12 = (char *)ptr;
      v30 = (char *)ptr + 24 * v63;
      goto LABEL_25;
    }
    do
    {
LABEL_28:
      while ( (unsigned __int8)v12[16] != a3 )
      {
        sub_497350(v6, (unsigned __int64 *)v12);
        v12 += 24;
        if ( v12 == v30 )
          goto LABEL_30;
      }
      sub_4975C8(v6, (unsigned __int64 *)v12);
      v12 += 24;
    }
    while ( v12 != v30 );
LABEL_30:
    v12 = (char *)ptr;
    if ( ptr )
    {
LABEL_6:
      v63 = 0;
      j__free(v12);
    }
  }
  return v67 ^ _stack_chk_guard;
}
// 47DBE8: using guessed type __int64 __fastcall nullsub_34(_QWORD, _QWORD);
