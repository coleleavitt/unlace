__int64 __fastcall sub_1252110(__int64 *a1)
{
  char *v1; // r13
  char *v2; // r12
  char *v3; // rsi
  char *v4; // rbp
  unsigned __int64 v5; // rax
  char *v6; // r14
  char v7; // r15
  char v8; // dl
  char *v9; // rax
  char v10; // cl
  char v11; // dl
  char *v12; // rax
  char *v13; // rax
  unsigned __int64 v14; // r14
  __int64 *v15; // r15
  char v16; // bl
  __int64 v17; // rax
  char v18; // al
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  char *v22; // r8
  char *v23; // r12
  __int64 *v24; // rcx
  char v25; // bl
  char v26; // bp
  __int64 v27; // r13
  char v28; // al
  char v29; // dl
  __int64 v30; // rax
  __int64 *v31; // rsi
  __int64 v32; // rcx
  __int64 result; // rax
  unsigned __int16 v34; // bp
  __int64 v35; // r12
  char v36; // al
  _BYTE *v37; // rbp
  __int64 v38; // rbx
  __int64 v39; // rbx
  __int64 v40; // rbx
  unsigned __int16 v41; // bp
  __int64 v42; // r12
  char v43; // al
  __int64 (__fastcall *v44)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v45)(__int64, unsigned int); // rdx
  char v46; // r15
  char v47; // dl
  char *v48; // rax
  char *v49; // rax
  char *v50; // [rsp+18h] [rbp-A0h]
  char v51; // [rsp+18h] [rbp-A0h]
  __int64 v52; // [rsp+18h] [rbp-A0h]
  char v53; // [rsp+18h] [rbp-A0h]
  __int64 v54; // [rsp+28h] [rbp-90h]
  __int64 v55; // [rsp+28h] [rbp-90h]
  char v56; // [rsp+30h] [rbp-88h]
  __int64 v57; // [rsp+30h] [rbp-88h]
  __int64 *v58; // [rsp+38h] [rbp-80h]
  void *v59[2]; // [rsp+40h] [rbp-78h] BYREF
  __int64 v60; // [rsp+50h] [rbp-68h] BYREF
  void *v61[2]; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v62[72]; // [rsp+70h] [rbp-48h] BYREF

  v1 = (char *)a1[1];
  v2 = (char *)*a1;
  v3 = v1;
  if ( (char *)*a1 != v1 )
  {
    v4 = v2 + 1;
    _BitScanReverse64(&v5, v1 - v2);
    sub_124DD40(*a1, v1, 2LL * (int)(63 - (v5 ^ 0x3F)));
    if ( v1 - v2 <= 16 )
    {
      for ( ; v1 != v4; ++v4 )
      {
        v46 = *v4;
        if ( *v4 < *v2 )
        {
          if ( v4 != v2 )
            memmove(v2 + 1, v2, v4 - v2);
          *v2 = v46;
        }
        else
        {
          v47 = *(v4 - 1);
          v48 = v4 - 1;
          if ( v46 < v47 )
          {
            while ( 1 )
            {
              v48[1] = v47;
              v47 = *(v48 - 1);
              if ( v46 >= v47 )
                break;
              --v48;
            }
          }
          else
          {
            v48 = v4;
          }
          *v48 = v46;
        }
      }
    }
    else
    {
      v6 = v2 + 16;
      do
      {
        while ( 1 )
        {
          v7 = *v4;
          if ( *v4 < *v2 )
            break;
          v8 = *(v4 - 1);
          v9 = v4 - 1;
          if ( v7 < v8 )
          {
            while ( 1 )
            {
              v9[1] = v8;
              v8 = *(v9 - 1);
              if ( v7 >= v8 )
                break;
              --v9;
            }
          }
          else
          {
            v9 = v4;
          }
          ++v4;
          *v9 = v7;
          if ( v6 == v4 )
            goto LABEL_13;
        }
        if ( v4 != v2 )
          memmove(v2 + 1, v2, v4 - v2);
        ++v4;
        *v2 = v7;
      }
      while ( v6 != v4 );
LABEL_13:
      while ( v1 != v6 )
      {
        while ( 1 )
        {
          v10 = *v6;
          v11 = *(v6 - 1);
          v12 = v6 - 1;
          if ( *v6 < v11 )
            break;
          v49 = v6++;
          *v49 = v10;
          if ( v1 == v6 )
            goto LABEL_19;
        }
        while ( 1 )
        {
          v12[1] = v11;
          v11 = *(v12 - 1);
          if ( v10 >= v11 )
            break;
          --v12;
        }
        ++v6;
        *v12 = v10;
      }
    }
LABEL_19:
    v1 = (char *)*a1;
    v3 = (char *)a1[1];
  }
  v13 = sub_124DEF0(v1, v3);
  if ( v13 != (char *)a1[1] )
    a1[1] = (__int64)v13;
  v14 = 0;
  v15 = a1;
  do
  {
    while ( 1 )
    {
      v16 = v14;
      v17 = std::use_facet<std::ctype<char>>(v15[13]);
      v18 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v17 + 32LL))(v17, (unsigned int)(char)v14);
      v19 = (char *)*v15;
      v20 = v15[1] - *v15;
      if ( v20 > 0 )
      {
        do
        {
          while ( 1 )
          {
            v21 = v20 >> 1;
            v22 = &v19[v20 >> 1];
            if ( *v22 >= v18 )
              break;
            v19 = v22 + 1;
            v20 = v20 - v21 - 1;
            if ( v20 <= 0 )
              goto LABEL_26;
          }
          v20 >>= 1;
        }
        while ( v21 );
      }
LABEL_26:
      if ( (char *)v15[1] != v19 && *v19 <= v18 )
        goto LABEL_33;
      v23 = (char *)v15[6];
      if ( v23 != (char *)v15[7] )
      {
        v50 = (char *)v15[7];
        v24 = v15;
        do
        {
          v58 = v24;
          v25 = *v23;
          v26 = v23[1];
          std::locale::locale((std::locale *)v61, (const std::locale *)v24[13]);
          v27 = std::use_facet<std::ctype<char>>(v61);
          std::locale::~locale((std::locale *)v61);
          v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 32LL))(v27, (unsigned int)(char)v14);
          v28 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v27 + 16LL))(v27, (unsigned int)(char)v14);
          v24 = v58;
          if ( v25 <= v56 && v26 >= v56 || v25 <= v28 && v26 >= v28 )
          {
            v15 = v58;
            goto LABEL_33;
          }
          v23 += 2;
        }
        while ( v50 != v23 );
        v16 = v14;
        v15 = v58;
      }
      v34 = *((_WORD *)v15 + 48);
      v51 = *((_BYTE *)v15 + 98);
      v35 = std::use_facet<std::ctype<char>>(v15[14]);
      if ( (v34 & *(_WORD *)(*(_QWORD *)(v35 + 48) + 2 * v14)) != 0 )
        goto LABEL_33;
      if ( (v51 & 1) != 0 )
      {
        if ( *(_BYTE *)(v35 + 56) )
        {
          v36 = *(_BYTE *)(v35 + 152);
        }
        else
        {
          std::ctype<char>::_M_widen_init(v35);
          v45 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v35 + 48LL);
          v36 = 95;
          if ( v45 != sub_124D700 )
            v36 = v45(v35, 95u);
        }
        if ( v36 == (_BYTE)v14 )
          goto LABEL_33;
      }
      v57 = v15[14];
      v52 = v15[4];
      v54 = std::use_facet<std::ctype<char>>(v57);
      v37 = (_BYTE *)operator new(1u);
      *v37 = v16;
      (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v54 + 40LL))(v54, v37, v37 + 1);
      v38 = std::use_facet<std::collate<char>>(v57);
      v61[0] = v62;
      sub_124E3C0(v61, v37, (__int64)(v37 + 1));
      (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v38 + 24LL))(
        v59,
        v38,
        v61[0],
        (char *)v61[0] + (unsigned __int64)v61[1]);
      if ( v61[0] != v62 )
        operator delete(v61[0]);
      operator delete(v37);
      v39 = sub_124E110(v15[3], v15[4], (__int64)v59);
      if ( v59[0] != &v60 )
        operator delete(v59[0]);
      if ( v52 != v39 )
        goto LABEL_33;
      v40 = v15[9];
      if ( v40 != v15[10] )
      {
        v55 = v15[10];
        while ( 1 )
        {
          v41 = *(_WORD *)v40;
          v53 = *(_BYTE *)(v40 + 2);
          v42 = std::use_facet<std::ctype<char>>(v15[14]);
          if ( (v41 & *(_WORD *)(*(_QWORD *)(v42 + 48) + 2 * v14)) == 0 )
          {
            if ( (v53 & 1) == 0 )
              break;
            if ( *(_BYTE *)(v42 + 56) )
            {
              v43 = *(_BYTE *)(v42 + 152);
            }
            else
            {
              std::ctype<char>::_M_widen_init(v42);
              v44 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v42 + 48LL);
              v43 = 95;
              if ( v44 != sub_124D700 )
                v43 = v44(v42, 95u);
            }
            if ( v43 != (_BYTE)v14 )
              break;
          }
          v40 += 4;
          if ( v55 == v40 )
            goto LABEL_61;
        }
LABEL_33:
        v29 = 1;
        goto LABEL_34;
      }
LABEL_61:
      v29 = 0;
LABEL_34:
      v30 = 1LL << v14;
      v31 = &v15[v14 >> 6];
      v32 = v31[16];
      if ( *((_BYTE *)v15 + 120) == v29 )
        break;
      result = v32 | v30;
      ++v14;
      v31[16] = result;
      if ( v14 == 256 )
        return result;
    }
    ++v14;
    result = v32 & ~v30;
    v31[16] = result;
  }
  while ( v14 != 256 );
  return result;
}
