/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: serialize_dynamic_register_set
// Address: 0x000000010006A7D8

//----- (000000010006A7D8) ----------------------------------------------------
void __fastcall serialize_dynamic_register_set(_QWORD **a1, __int64 *a2)
{
  __int64 v2; // x27
  __int64 v3; // x28
  __int64 *v4; // x20
  bool v5; // zf
  __int64 v8; // x22
  __int64 *v9; // x8
  __int64 v10; // t1
  __int64 i; // x21
  const char *v12; // x23
  size_t v13; // x0
  size_t v14; // x24
  _QWORD *v15; // x28
  unsigned __int64 v16; // x25
  _QWORD *v17; // x8
  __int64 v18; // x20
  __int64 v19; // x22
  unsigned __int64 v20; // x21
  __int64 **v21; // x24
  __int64 **v22; // x25
  __int64 *v23; // x8
  unsigned __int64 v24; // x8
  __int64 *v25; // x1
  __int64 v26; // x20
  __int64 v27; // x21
  unsigned __int64 v28; // x22
  __int64 *v29; // x8
  __int64 **v30; // x23
  __int64 **v31; // x24
  unsigned __int64 v32; // x8
  __int64 *v33; // x1
  int v34; // w8
  unsigned int v35; // w22
  __int64 v36; // x25
  __int64 v37; // x28
  const char *v38; // x22
  size_t v39; // x0
  size_t v40; // x23
  _QWORD *v41; // x27
  unsigned __int64 v42; // x24
  _QWORD *v43; // x8
  __int64 v44; // x20
  __int64 v45; // x26
  const char *v46; // x22
  size_t v47; // x0
  size_t v48; // x23
  _QWORD *v49; // x25
  unsigned __int64 v50; // x24
  _QWORD *v51; // x8
  __int64 *v52; // x10
  unsigned __int64 v53; // x9
  __int64 **v54; // x8
  unsigned int v55; // w11
  __int64 v56; // x1
  __int64 v58; // [xsp+18h] [xbp-A8h]
  __int64 v59; // [xsp+20h] [xbp-A0h]
  __int64 **v60; // [xsp+30h] [xbp-90h] BYREF
  __int64 *v61; // [xsp+38h] [xbp-88h] BYREF
  __int64 v62; // [xsp+40h] [xbp-80h]
  __int64 **v63; // [xsp+48h] [xbp-78h] BYREF
  __int64 *v64; // [xsp+50h] [xbp-70h] BYREF
  __int64 v65; // [xsp+58h] [xbp-68h]
  char v66; // [xsp+67h] [xbp-59h] BYREF

  v3 = *a2;
  v2 = a2[1];
  v4 = (__int64 *)a2[6];
  if ( v2 )
    v5 = v3 == 0;
  else
    v5 = 1;
  if ( !v5 && v4 != nullptr )
  {
    sub_10002E2F0(a1, 0xFFFFFF01);
    v8 = -1;
    v9 = v4;
    do
    {
      v10 = *v9++;
      ++v8;
    }
    while ( v10 );
    sub_10002E2F0(a1, v8);
    v58 = v3;
    v59 = v2;
    if ( v8 )
    {
      for ( i = 0; i != v8; ++i )
      {
        if ( v4[i] )
          v12 = (const char *)v4[i];
        else
          v12 = &byte_1000931E5;
        v13 = strlen(v12);
        v14 = v13 + 1;
        if ( v13 != -1 )
        {
          v15 = a1[1];
          if ( __CFADD__(v15, v14) )
            v16 = 0x7FFFFFFFFFFFFFFFLL;
          else
            v16 = (unsigned __int64)v15 + v14;
          if ( (unsigned __int64)v15 >= v16 )
          {
            if ( v15 != (_QWORD *)v16 )
            {
              LOBYTE(v63) = 0;
              sub_10001B764(a1, v16, &v63);
            }
          }
          else
          {
            v17 = *a1;
            if ( (unsigned __int64)a1[2] < v16 )
            {
              v17 = qvector_reserve(a1, *a1, v16, 1u);
              *a1 = v17;
            }
            bzero((char *)a1[1] + (_QWORD)v17, v16 - (_QWORD)a1[1]);
            a1[1] = (_QWORD *)v16;
          }
          memcpy((char *)v15 + (_QWORD)*a1, v12, v14);
          v3 = v58;
          v2 = v59;
        }
      }
    }
    v18 = 0;
    v19 = 0;
    v64 = nullptr;
    v65 = 0;
    v63 = &v64;
    do
    {
      v20 = *(_QWORD *)(v3 + 32 * v18 + 16);
      if ( v20 )
      {
        v21 = &v64;
        v22 = &v64;
        if ( v64 )
        {
          v23 = v64;
          while ( 1 )
          {
            while ( 1 )
            {
              v21 = (__int64 **)v23;
              v24 = v23[4];
              if ( v20 >= v24 )
                break;
              v23 = *v21;
              v22 = v21;
              if ( !*v21 )
                goto LABEL_38;
            }
            if ( v24 >= v20 )
              break;
            v23 = v21[1];
            if ( !v23 )
            {
              v22 = v21 + 1;
              goto LABEL_38;
            }
          }
        }
        else
        {
LABEL_38:
          v25 = (__int64 *)operator new(0x30u);
          v25[4] = v20;
          v25[5] = v19;
          *v25 = 0;
          v25[1] = 0;
          v25[2] = (__int64)v21;
          *v22 = v25;
          if ( *v63 )
          {
            v63 = (__int64 **)*v63;
            v25 = *v22;
          }
          sub_10000BD00(v64, v25);
          ++v65;
          ++v19;
        }
      }
      ++v18;
    }
    while ( v18 != v2 );
    v61 = nullptr;
    v62 = 0;
    v60 = &v61;
    sub_10002E2F0(a1, v19);
    v26 = 0;
    do
    {
      v27 = v3 + 32 * v26;
      v28 = *(_QWORD *)(v27 + 16);
      if ( v28 )
      {
        v29 = v61;
        v30 = &v61;
LABEL_45:
        v31 = v30;
        if ( v29 )
        {
          do
          {
            v30 = (__int64 **)v29;
            v32 = v29[4];
            if ( v28 < v32 )
            {
              v29 = *v30;
              goto LABEL_45;
            }
            if ( v32 >= v28 )
              goto LABEL_41;
            v29 = v30[1];
          }
          while ( v29 );
          v31 = v30 + 1;
        }
        v33 = (__int64 *)operator new(0x28u);
        v33[4] = v28;
        *v33 = 0;
        v33[1] = 0;
        v33[2] = (__int64)v30;
        *v31 = v33;
        if ( *v60 )
        {
          v60 = (__int64 **)*v60;
          v33 = *v31;
        }
        sub_10000BD00(v61, v33);
        ++v62;
        if ( (*(_BYTE *)(v27 + 9) & 1) != 0 )
        {
          v35 = 1;
        }
        else
        {
          v34 = *(unsigned __int8 *)(v27 + 13);
          if ( v34 == 1 )
          {
            v35 = 16;
          }
          else
          {
            if ( v34 != 2 )
            {
              if ( under_debugger != 1 )
                interr(1783);
              __break(1u);
            }
            v35 = 32;
          }
        }
        sub_10002E2F0(a1, v35);
        v36 = 0;
        v37 = 8LL * v35;
        do
        {
          if ( *(_QWORD *)(*(_QWORD *)(v27 + 16) + v36) )
            v38 = *(const char **)(*(_QWORD *)(v27 + 16) + v36);
          else
            v38 = &byte_1000931E5;
          v39 = strlen(v38);
          v40 = v39 + 1;
          if ( v39 != -1 )
          {
            v41 = a1[1];
            if ( __CFADD__(v41, v40) )
              v42 = 0x7FFFFFFFFFFFFFFFLL;
            else
              v42 = (unsigned __int64)v41 + v40;
            if ( (unsigned __int64)v41 >= v42 )
            {
              if ( v41 != (_QWORD *)v42 )
              {
                v66 = 0;
                sub_10001B764(a1, v42, &v66);
              }
            }
            else
            {
              v43 = *a1;
              if ( (unsigned __int64)a1[2] < v42 )
              {
                v43 = qvector_reserve(a1, *a1, v42, 1u);
                *a1 = v43;
              }
              bzero((char *)a1[1] + (_QWORD)v43, v42 - (_QWORD)a1[1]);
              a1[1] = (_QWORD *)v42;
            }
            memcpy((char *)v41 + (_QWORD)*a1, v38, v40);
          }
          v36 += 8;
        }
        while ( v37 != v36 );
      }
LABEL_41:
      ++v26;
      v3 = v58;
    }
    while ( v26 != v59 );
    sub_10002E2F0(a1, v59);
    v44 = 0;
    do
    {
      v45 = v58 + 32 * v44;
      if ( *(_QWORD *)v45 )
        v46 = *(const char **)v45;
      else
        v46 = &byte_1000931E5;
      v47 = strlen(v46);
      v48 = v47 + 1;
      if ( v47 != -1 )
      {
        v49 = a1[1];
        if ( __CFADD__(v49, v48) )
          v50 = 0x7FFFFFFFFFFFFFFFLL;
        else
          v50 = (unsigned __int64)v49 + v48;
        if ( (unsigned __int64)v49 >= v50 )
        {
          if ( v49 != (_QWORD *)v50 )
          {
            v66 = 0;
            sub_10001B764(a1, v50, &v66);
          }
        }
        else
        {
          v51 = *a1;
          if ( (unsigned __int64)a1[2] < v50 )
          {
            v51 = qvector_reserve(a1, *a1, v50, 1u);
            *a1 = v51;
          }
          bzero((char *)a1[1] + (_QWORD)v51, v50 - (_QWORD)a1[1]);
          a1[1] = (_QWORD *)v50;
        }
        memcpy((char *)v49 + (_QWORD)*a1, v46, v48);
      }
      sub_10002E2F0(a1, *(_DWORD *)(v45 + 8));
      sub_10002E2F0(a1, *(unsigned __int8 *)(v45 + 12));
      sub_10002E2F0(a1, *(unsigned __int8 *)(v45 + 13));
      v52 = v64;
      if ( !v64 )
        goto LABEL_97;
      v53 = *(_QWORD *)(v45 + 16);
      v54 = &v64;
      do
      {
        if ( v52[4] < v53 )
        {
          v55 = 1;
        }
        else
        {
          v54 = (__int64 **)v52;
          v55 = 0;
        }
        v52 = (__int64 *)v52[v55];
      }
      while ( v52 );
      if ( v54 != &v64 && v53 >= (unsigned __int64)v54[4] )
        v56 = (__int64)v54[5] + 1;
      else
LABEL_97:
        LODWORD(v56) = 0;
      sub_10002E2F0(a1, v56);
      sub_1000530E4(a1, *(_QWORD *)(v45 + 24) + 1LL);
      ++v44;
    }
    while ( v44 != v59 );
    sub_10002E2F0(a1, *((_DWORD *)a2 + 24));
    sub_10006B698((__int64)&v60, v61);
    sub_10006B640((__int64)&v63, v64);
  }
}
// 1000931E5: using guessed type char byte_1000931E5;
// 1000A590D: using guessed type char under_debugger;
