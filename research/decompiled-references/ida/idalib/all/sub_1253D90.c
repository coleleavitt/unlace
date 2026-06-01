__int64 __fastcall sub_1253D90(__int64 *a1)
{
  char *v1; // r12
  char *v2; // rbp
  char *v3; // rsi
  char *v4; // rbx
  unsigned __int64 v5; // rax
  char *v6; // r13
  char v7; // r15
  char v8; // dl
  char *v9; // rax
  char v10; // cl
  char v11; // dl
  char *v12; // rax
  char *v13; // rax
  unsigned __int64 v14; // rbp
  __int64 *v15; // r13
  __int64 v16; // rax
  char v17; // al
  char *v18; // rdi
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rsi
  char *v22; // r8
  char v23; // bl
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 result; // rax
  __int64 v28; // rdi
  __int64 *v29; // rax
  __int64 v30; // r9
  char **v31; // r14
  __int64 *v32; // r8
  unsigned __int64 v33; // r13
  unsigned int v34; // ebp
  char v35; // r15
  __int64 v36; // rbx
  char v37; // al
  __int64 v38; // r15
  _BYTE *v39; // r14
  __int64 v40; // r14
  __int64 *v41; // rax
  __int64 v42; // r13
  __int64 *v43; // r14
  unsigned __int16 v44; // bx
  char v45; // r15
  __int64 v46; // rax
  char v47; // dl
  char v48; // r15
  char v49; // dl
  char *v50; // rax
  char *v51; // rax
  __int64 (__fastcall *v52)(__int64, unsigned int); // rcx
  char v53; // [rsp+Ch] [rbp-CCh]
  char **v54; // [rsp+18h] [rbp-C0h]
  __int64 v55; // [rsp+18h] [rbp-C0h]
  __int64 v56; // [rsp+18h] [rbp-C0h]
  char v57; // [rsp+20h] [rbp-B8h]
  __int64 v58; // [rsp+20h] [rbp-B8h]
  __int64 v59; // [rsp+20h] [rbp-B8h]
  __int64 *v60; // [rsp+28h] [rbp-B0h]
  __int64 v61; // [rsp+28h] [rbp-B0h]
  unsigned __int8 v62; // [rsp+38h] [rbp-A0h]
  char v63; // [rsp+3Eh] [rbp-9Ah]
  char v64; // [rsp+3Eh] [rbp-9Ah]
  char v65; // [rsp+3Fh] [rbp-99h]
  void *v66; // [rsp+40h] [rbp-98h] BYREF
  __int64 v67; // [rsp+50h] [rbp-88h] BYREF
  void *v68[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v69[16]; // [rsp+70h] [rbp-68h] BYREF
  void *v70; // [rsp+80h] [rbp-58h] BYREF
  __int64 v71; // [rsp+88h] [rbp-50h]
  char v72; // [rsp+90h] [rbp-48h] BYREF
  char v73[71]; // [rsp+91h] [rbp-47h] BYREF

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
        v48 = *v4;
        if ( *v4 < *v2 )
        {
          if ( v4 != v2 )
            memmove(v2 + 1, v2, v4 - v2);
          *v2 = v48;
        }
        else
        {
          v49 = *(v4 - 1);
          v50 = v4 - 1;
          if ( v48 < v49 )
          {
            while ( 1 )
            {
              v50[1] = v49;
              v49 = *(v50 - 1);
              if ( v48 >= v49 )
                break;
              --v50;
            }
          }
          else
          {
            v50 = v4;
          }
          *v50 = v48;
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
          v51 = v6++;
          *v51 = v10;
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
      v53 = v14;
      v65 = v14;
      v62 = v14;
      v16 = std::use_facet<std::ctype<char>>(v15[13]);
      v17 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 32LL))(v16, (unsigned int)(char)v14);
      v18 = (char *)v15[1];
      v19 = (char *)*v15;
      v20 = (__int64)&v18[-*v15];
      if ( v20 <= 0 )
      {
LABEL_26:
        if ( v19 == v18 )
          goto LABEL_34;
      }
      else
      {
        do
        {
          while ( 1 )
          {
            v21 = v20 >> 1;
            v22 = &v19[v20 >> 1];
            if ( *v22 >= v17 )
              break;
            v19 = v22 + 1;
            v20 = v20 - v21 - 1;
            if ( v20 <= 0 )
              goto LABEL_26;
          }
          v20 >>= 1;
        }
        while ( v21 );
        if ( v19 == v18 )
          goto LABEL_34;
      }
      if ( *v19 <= v17 )
      {
        v23 = 1;
        goto LABEL_29;
      }
LABEL_34:
      v28 = v15[13];
      v69[0] = v14;
      v68[1] = &dword_0 + 1;
      v68[0] = v69;
      v69[1] = 0;
      v29 = (__int64 *)std::use_facet<std::collate<char>>(v28);
      v73[0] = 0;
      v72 = v69[0];
      v30 = *v29;
      v70 = &v72;
      v71 = 1;
      (*(void (__fastcall **)(void **, __int64 *, char *, char *))(v30 + 24))(&v66, v29, &v72, v73);
      if ( v70 != &v72 )
        operator delete(v70);
      if ( v68[0] != v69 )
        operator delete(v68[0]);
      v31 = (char **)v15[6];
      if ( v31 != (char **)v15[7] )
      {
        v54 = (char **)v15[7];
        v32 = v15;
        v33 = v14;
        do
        {
          v60 = v32;
          v34 = *(char *)v66;
          v35 = *v31[4];
          v63 = **v31;
          std::locale::locale((std::locale *)&v70, (const std::locale *)v32[13]);
          v36 = std::use_facet<std::ctype<char>>(&v70);
          std::locale::~locale((std::locale *)&v70);
          v57 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 32LL))(v36, v34);
          v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v36 + 16LL))(v36, v34);
          v32 = v60;
          if ( v63 <= v57 && v35 >= v57 || v63 <= v37 && v35 >= v37 )
          {
            v14 = v33;
            v15 = v60;
            goto LABEL_43;
          }
          v31 += 8;
        }
        while ( v54 != v31 );
        v14 = v33;
        v15 = v60;
      }
      v23 = sub_12536A0(v15[14], v62, *((_DWORD *)v15 + 24));
      if ( v23 )
        goto LABEL_43;
      v38 = v15[14];
      v55 = v15[4];
      v58 = std::use_facet<std::ctype<char>>(v38);
      v39 = (_BYTE *)operator new(1u);
      *v39 = v65;
      (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v58 + 40LL))(v58, v39, v39 + 1);
      v59 = std::use_facet<std::collate<char>>(v38);
      v70 = &v72;
      sub_124E3C0(&v70, v39, (__int64)(v39 + 1));
      (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v59 + 24LL))(
        v68,
        v59,
        v70,
        (char *)v70 + v71);
      if ( v70 != &v72 )
        operator delete(v70);
      operator delete(v39);
      v40 = sub_124E110(v15[3], v15[4], (__int64)v68);
      if ( v68[0] != v69 )
        operator delete(v68[0]);
      if ( v55 != v40 )
      {
LABEL_43:
        v23 = 1;
      }
      else
      {
        v56 = v15[10];
        if ( v15[9] != v56 )
        {
          v64 = v23;
          v41 = v15;
          v42 = v15[9];
          v43 = v41;
          do
          {
            v44 = *(_WORD *)v42;
            v45 = *(_BYTE *)(v42 + 2);
            v46 = std::use_facet<std::ctype<char>>(v43[14]);
            if ( (v44 & *(_WORD *)(*(_QWORD *)(v46 + 48) + 2 * v14)) == 0 )
            {
              if ( (v45 & 1) == 0 )
                goto LABEL_65;
              if ( *(_BYTE *)(v46 + 56) )
              {
                v47 = *(_BYTE *)(v46 + 152);
              }
              else
              {
                v61 = v46;
                std::ctype<char>::_M_widen_init(v46);
                v52 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v61 + 48LL);
                v47 = 95;
                if ( v52 != sub_124D700 )
                  v47 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v52)(v61, 95, 95);
              }
              if ( v47 != (_BYTE)v14 )
              {
LABEL_65:
                v15 = v43;
                goto LABEL_43;
              }
            }
            v42 += 4;
          }
          while ( v56 != v42 );
          v23 = v64;
          v15 = v43;
        }
      }
      if ( v66 != &v67 )
        operator delete(v66);
LABEL_29:
      v24 = 1LL << v53;
      v25 = &v15[v14 >> 6];
      v26 = v25[16];
      if ( *((_BYTE *)v15 + 120) == v23 )
        break;
      result = v26 | v24;
      ++v14;
      v25[16] = result;
      if ( v14 == 256 )
        return result;
    }
    ++v14;
    result = v26 & ~v24;
    v25[16] = result;
  }
  while ( v14 != 256 );
  return result;
}
