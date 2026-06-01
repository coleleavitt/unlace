_BOOL8 __fastcall sub_874500(__int64 a1, size_t *a2, __int64 a3)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // r8d
  int v6; // r9d
  _BOOL4 v7; // eax
  char *v8; // rbx
  _BOOL4 v9; // r12d
  char *v10; // rbp
  _QWORD **v11; // rbx
  _QWORD **v12; // rbp
  __int64 v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rbx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rsi
  _QWORD *v24; // rdx
  __int16 v25; // [rsp+10h] [rbp-458h] BYREF
  __int64 v26; // [rsp+18h] [rbp-450h]
  _QWORD v27[2]; // [rsp+20h] [rbp-448h] BYREF
  _QWORD *v28; // [rsp+30h] [rbp-438h]
  __int64 v29; // [rsp+38h] [rbp-430h]
  _QWORD v30[4]; // [rsp+40h] [rbp-428h] BYREF
  __int64 (__fastcall **v31)(); // [rsp+60h] [rbp-408h] BYREF
  char v32; // [rsp+68h] [rbp-400h]
  __int64 v33; // [rsp+70h] [rbp-3F8h]
  __int16 *v34; // [rsp+78h] [rbp-3F0h]
  _OWORD *v35; // [rsp+80h] [rbp-3E8h]
  __int64 v36; // [rsp+88h] [rbp-3E0h]
  int v37; // [rsp+90h] [rbp-3D8h]
  char v38; // [rsp+94h] [rbp-3D4h]
  _OWORD v39[3]; // [rsp+98h] [rbp-3D0h] BYREF
  __int64 v40; // [rsp+C8h] [rbp-3A0h]
  __int64 v41; // [rsp+D0h] [rbp-398h]
  __int64 v42; // [rsp+D8h] [rbp-390h]
  int v43; // [rsp+E8h] [rbp-380h] BYREF
  __int64 v44; // [rsp+F0h] [rbp-378h]
  int *v45; // [rsp+F8h] [rbp-370h]
  int *v46; // [rsp+100h] [rbp-368h]
  __int64 v47; // [rsp+108h] [rbp-360h]
  int v48; // [rsp+118h] [rbp-350h] BYREF
  __int64 v49; // [rsp+120h] [rbp-348h]
  int *v50; // [rsp+128h] [rbp-340h]
  int *v51; // [rsp+130h] [rbp-338h]
  __int64 v52; // [rsp+138h] [rbp-330h]
  __int64 v53; // [rsp+140h] [rbp-328h]
  int v54; // [rsp+148h] [rbp-320h]
  _DWORD *v55; // [rsp+150h] [rbp-318h]
  __int64 v56; // [rsp+158h] [rbp-310h]
  _DWORD v57[4]; // [rsp+160h] [rbp-308h] BYREF
  __int64 v58; // [rsp+170h] [rbp-2F8h]
  __int64 v59; // [rsp+178h] [rbp-2F0h]
  int v60; // [rsp+180h] [rbp-2E8h]
  __int64 v61; // [rsp+188h] [rbp-2E0h]
  char v62; // [rsp+190h] [rbp-2D8h]
  void *ptr; // [rsp+198h] [rbp-2D0h]
  __int64 v64; // [rsp+1A0h] [rbp-2C8h]
  _BYTE v65[512]; // [rsp+1A8h] [rbp-2C0h] BYREF
  char v66[16]; // [rsp+3A8h] [rbp-C0h] BYREF
  int v67; // [rsp+3B8h] [rbp-B0h]
  __int128 v68; // [rsp+3C0h] [rbp-A8h]
  __int64 v69; // [rsp+3D0h] [rbp-98h]
  unsigned int v70; // [rsp+3D8h] [rbp-90h]
  int v71; // [rsp+3E8h] [rbp-80h] BYREF
  void *v72; // [rsp+3F0h] [rbp-78h]
  int *v73; // [rsp+3F8h] [rbp-70h]
  int *v74; // [rsp+400h] [rbp-68h]
  __int64 v75; // [rsp+408h] [rbp-60h]
  __int64 v76; // [rsp+410h] [rbp-58h]
  __int64 v77; // [rsp+418h] [rbp-50h]
  __int64 v78; // [rsp+420h] [rbp-48h]

  v33 = a3;
  v34 = &v25;
  v3 = *(_QWORD *)(a3 + 2160);
  v25 = 0;
  v4 = *(_DWORD *)(v3 + 136);
  LOBYTE(v3) = *(_BYTE *)(v3 + 140);
  v26 = 0;
  v37 = v4;
  v38 = v3 & 1;
  v32 = 0;
  v31 = &off_47DA958;
  v39[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&off_47DA9F0, (__m128i)(unsigned __int64)&v31);
  memset(&v39[1], 0, 32);
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v45 = &v43;
  v46 = &v43;
  v50 = &v48;
  v51 = &v48;
  v55 = v57;
  v44 = 0;
  v56 = 0x200000001LL;
  v36 = 0x200000001LL;
  v47 = 0;
  v64 = 0x1000000000LL;
  v48 = 0;
  v49 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 1;
  v57[0] = 1;
  v57[2] = 1;
  v60 = 0;
  v58 = 0;
  v59 = 0;
  v61 = 0;
  v62 = 0;
  v35 = v39;
  ptr = v65;
  sub_69F1C0((__int64)v66, 0, 0, 0);
  v67 = 0;
  v73 = &v71;
  v74 = &v71;
  v70 = 0;
  v69 = 0;
  v71 = 0;
  v72 = nullptr;
  v75 = 0;
  v76 = 0;
  v77 = -1;
  v78 = 0x200000000LL;
  v68 = 0;
  v7 = sub_873970(a1, a2, (__int64 *)&v31, nullptr, v5, v6);
  v31 = &off_47DA958;
  v8 = (char *)ptr;
  v9 = v7;
  v10 = (char *)ptr + 32 * (unsigned int)v64;
  if ( ptr != v10 )
  {
    do
    {
      a1 = *((_QWORD *)v8 + 3);
      if ( (unsigned int)sub_B19900(a1) )
      {
        *(_BYTE *)v34 = 1;
        if ( HIDWORD(v78) <= 2 && !WORD1(v78) )
          break;
      }
      v8 += 32;
    }
    while ( v10 != v8 );
  }
  v11 = (_QWORD **)v72;
  LODWORD(v64) = 0;
  if ( v72 )
  {
    while ( 1 )
    {
      sub_822210(v11[3]);
      v12 = (_QWORD **)v11[2];
      if ( *((_DWORD *)v11 + 10) > 1u )
        sub_69F740((__int64)(v11 + 5));
      a2 = (size_t *)&qword_68;
      a1 = (__int64)v11;
      operator delete(v11, 0x68u);
      if ( !v12 )
        break;
      v11 = v12;
    }
  }
  if ( !v70 )
  {
    v13 = 0;
    goto LABEL_14;
  }
  v15 = sub_69F620(a1, a2);
  v28 = nullptr;
  v27[0] = v15;
  v27[1] = v16;
  v29 = 0;
  v17 = sub_69F630(a1, a2);
  v18 = *((_QWORD **)&v68 + 1);
  v30[2] = 0;
  v30[0] = v17;
  v30[1] = v19;
  v30[3] = 0;
  v20 = *((_QWORD *)&v68 + 1) + 40LL * v70;
  if ( *((_QWORD *)&v68 + 1) != v20 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)sub_69F550(v18, v27) )
      {
        v21 = v18[3];
        if ( v21 == v29 )
        {
          v22 = (_QWORD *)v18[2];
          v23 = &v22[v21];
          v24 = v28;
          if ( v22 == v23 )
            goto LABEL_20;
          while ( *v22 == *v24 )
          {
            ++v22;
            ++v24;
            if ( v23 == v22 )
              goto LABEL_20;
          }
        }
      }
      sub_69F550(v18, v30);
LABEL_20:
      v18 += 5;
      if ( (_QWORD *)v20 == v18 )
      {
        v13 = 40LL * v70;
        goto LABEL_14;
      }
    }
  }
  v13 = 0;
LABEL_14:
  operator delete();
  if ( ptr != v65 )
    free(ptr);
  sub_822100((__int64)v39);
  sub_A2CAF0(&v31, v13);
  return v9;
}

