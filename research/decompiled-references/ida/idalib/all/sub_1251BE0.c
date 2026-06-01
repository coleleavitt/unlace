__int64 __fastcall sub_1251BE0(__int64 *a1)
{
  __int64 *v1; // rbx
  char *v2; // r13
  char *v3; // r12
  char *v4; // rsi
  char *v5; // rbp
  unsigned __int64 v6; // rax
  char *v7; // r14
  char v8; // r15
  char v9; // dl
  char *v10; // rax
  char v11; // cl
  char v12; // dl
  char *v13; // rax
  char *v14; // rax
  unsigned __int64 v15; // rbp
  char *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rsi
  char *v19; // rdi
  char *v20; // rax
  char *v21; // rdx
  char *v22; // rax
  char *v23; // rsi
  char v24; // dl
  __int64 v25; // rax
  __int64 *v26; // rsi
  __int64 v27; // rcx
  __int64 result; // rax
  unsigned __int16 v29; // r12
  __int64 v30; // r15
  char v31; // al
  _BYTE *v32; // r12
  __int64 v33; // r12
  __int64 v34; // r15
  __int64 *v35; // r12
  __int64 v36; // rax
  __int64 v37; // rbx
  char v38; // al
  __int64 (__fastcall *v39)(__int64, unsigned int); // rdx
  __int64 (__fastcall *v40)(__int64, unsigned int); // rcx
  char v41; // r15
  char v42; // dl
  char *v43; // rax
  char *v44; // rax
  char v45; // [rsp+0h] [rbp-A8h]
  __int64 v46; // [rsp+0h] [rbp-A8h]
  char v47; // [rsp+0h] [rbp-A8h]
  __int64 v48; // [rsp+20h] [rbp-88h]
  __int64 v49; // [rsp+20h] [rbp-88h]
  __int64 v50; // [rsp+20h] [rbp-88h]
  __int64 v51; // [rsp+28h] [rbp-80h]
  unsigned __int16 v52; // [rsp+28h] [rbp-80h]
  void *v53[2]; // [rsp+30h] [rbp-78h] BYREF
  __int64 v54; // [rsp+40h] [rbp-68h] BYREF
  void *v55[2]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v56[72]; // [rsp+60h] [rbp-48h] BYREF

  v1 = a1;
  v2 = (char *)a1[1];
  v3 = (char *)*a1;
  v4 = v2;
  if ( (char *)*a1 != v2 )
  {
    v5 = v3 + 1;
    _BitScanReverse64(&v6, v2 - v3);
    sub_124DD40(*a1, v2, 2LL * (int)(63 - (v6 ^ 0x3F)));
    if ( v2 - v3 <= 16 )
    {
      for ( ; v2 != v5; ++v5 )
      {
        v41 = *v5;
        if ( *v5 < *v3 )
        {
          if ( v5 != v3 )
            memmove(v3 + 1, v3, v5 - v3);
          *v3 = v41;
        }
        else
        {
          v42 = *(v5 - 1);
          v43 = v5 - 1;
          if ( v41 < v42 )
          {
            while ( 1 )
            {
              v43[1] = v42;
              v42 = *(v43 - 1);
              if ( v41 >= v42 )
                break;
              --v43;
            }
          }
          else
          {
            v43 = v5;
          }
          *v43 = v41;
        }
      }
    }
    else
    {
      v7 = v3 + 16;
      do
      {
        while ( 1 )
        {
          v8 = *v5;
          if ( *v5 < *v3 )
            break;
          v9 = *(v5 - 1);
          v10 = v5 - 1;
          if ( v8 < v9 )
          {
            while ( 1 )
            {
              v10[1] = v9;
              v9 = *(v10 - 1);
              if ( v8 >= v9 )
                break;
              --v10;
            }
          }
          else
          {
            v10 = v5;
          }
          ++v5;
          *v10 = v8;
          if ( v7 == v5 )
            goto LABEL_13;
        }
        if ( v5 != v3 )
          memmove(v3 + 1, v3, v5 - v3);
        ++v5;
        *v3 = v8;
      }
      while ( v7 != v5 );
LABEL_13:
      while ( v2 != v7 )
      {
        while ( 1 )
        {
          v11 = *v7;
          v12 = *(v7 - 1);
          v13 = v7 - 1;
          if ( *v7 < v12 )
            break;
          v44 = v7++;
          *v44 = v11;
          if ( v2 == v7 )
            goto LABEL_19;
        }
        while ( 1 )
        {
          v13[1] = v12;
          v12 = *(v13 - 1);
          if ( v11 >= v12 )
            break;
          --v13;
        }
        ++v7;
        *v13 = v11;
      }
    }
LABEL_19:
    v2 = (char *)*a1;
    v4 = (char *)a1[1];
  }
  v14 = sub_124DEF0(v2, v4);
  if ( v14 != (char *)a1[1] )
    a1[1] = (__int64)v14;
  v15 = 0;
  while ( 1 )
  {
    v16 = (char *)*v1;
    v17 = (__int64)&v14[-*v1];
    if ( v17 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v18 = v17 >> 1;
          v19 = &v16[v17 >> 1];
          if ( *v19 >= (char)v15 )
            break;
          v16 = v19 + 1;
          v17 = v17 - v18 - 1;
          if ( v17 <= 0 )
            goto LABEL_26;
        }
        v17 >>= 1;
      }
      while ( v18 );
    }
LABEL_26:
    if ( v14 != v16 && *v16 <= (char)v15 )
      goto LABEL_35;
    v20 = (char *)v1[6];
    v21 = (char *)v1[7];
    if ( v20 != v21 )
    {
      if ( v20[1] >= (char)v15 && *v20 <= (char)v15 )
        goto LABEL_35;
      v22 = v20 + 2;
      while ( 1 )
      {
        v23 = v22;
        if ( v21 == v22 )
          break;
        v22 += 2;
        if ( *v23 <= (char)v15 && v23[1] >= (char)v15 )
          goto LABEL_35;
      }
    }
    v29 = *((_WORD *)v1 + 48);
    v45 = *((_BYTE *)v1 + 98);
    v30 = std::use_facet<std::ctype<char>>(v1[13]);
    if ( (v29 & *(_WORD *)(*(_QWORD *)(v30 + 48) + 2 * v15)) != 0 )
      goto LABEL_35;
    if ( (v45 & 1) != 0 )
    {
      if ( *(_BYTE *)(v30 + 56) )
      {
        v31 = *(_BYTE *)(v30 + 152);
      }
      else
      {
        std::ctype<char>::_M_widen_init(v30);
        v39 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v30 + 48LL);
        v31 = 95;
        if ( v39 != sub_124D700 )
          v31 = v39(v30, 95u);
      }
      if ( v31 == (_BYTE)v15 )
        goto LABEL_35;
    }
    v51 = v1[13];
    v46 = v1[4];
    v48 = std::use_facet<std::ctype<char>>(v51);
    v32 = (_BYTE *)operator new(1u);
    *v32 = v15;
    (*(void (__fastcall **)(__int64, _BYTE *, _BYTE *))(*(_QWORD *)v48 + 40LL))(v48, v32, v32 + 1);
    v49 = std::use_facet<std::collate<char>>(v51);
    v55[0] = v56;
    sub_124E3C0(v55, v32, (__int64)(v32 + 1));
    (*(void (__fastcall **)(void **, __int64, void *, char *))(*(_QWORD *)v49 + 24LL))(
      v53,
      v49,
      v55[0],
      (char *)v55[0] + (unsigned __int64)v55[1]);
    if ( v55[0] != v56 )
      operator delete(v55[0]);
    operator delete(v32);
    v33 = sub_124E110(v1[3], v1[4], (__int64)v53);
    if ( v53[0] != &v54 )
      operator delete(v53[0]);
    if ( v46 != v33 )
    {
LABEL_35:
      v24 = 1;
      goto LABEL_36;
    }
    v34 = v1[9];
    if ( v34 != v1[10] )
    {
      v50 = v1[10];
      v35 = v1;
      do
      {
        v52 = *(_WORD *)v34;
        v47 = *(_BYTE *)(v34 + 2);
        v36 = std::use_facet<std::ctype<char>>(v35[13]);
        v37 = v36;
        if ( (v52 & *(_WORD *)(*(_QWORD *)(v36 + 48) + 2 * v15)) == 0 )
        {
          if ( (v47 & 1) == 0 )
            goto LABEL_58;
          if ( *(_BYTE *)(v36 + 56) )
          {
            v38 = *(_BYTE *)(v36 + 152);
          }
          else
          {
            std::ctype<char>::_M_widen_init(v36);
            v40 = *(__int64 (__fastcall **)(__int64, unsigned int))(*(_QWORD *)v37 + 48LL);
            v38 = 95;
            if ( v40 != sub_124D700 )
              v38 = v40(v37, 95u);
          }
          if ( v38 != (_BYTE)v15 )
          {
LABEL_58:
            v1 = v35;
            goto LABEL_35;
          }
        }
        v34 += 4;
      }
      while ( v50 != v34 );
      v1 = v35;
    }
    v24 = 0;
LABEL_36:
    v25 = 1LL << v15;
    v26 = &v1[v15 >> 6];
    v27 = v26[15];
    if ( *((_BYTE *)v1 + 112) == v24 )
      break;
    result = v27 | v25;
    ++v15;
    v26[15] = result;
    if ( v15 == 256 )
      return result;
LABEL_38:
    v14 = (char *)v1[1];
  }
  ++v15;
  result = v27 & ~v25;
  v26[15] = result;
  if ( v15 != 256 )
    goto LABEL_38;
  return result;
}
