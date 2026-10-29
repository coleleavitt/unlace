__int64 __fastcall sub_20B7440(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r15
  int v5; // ebp
  int v6; // eax
  int v7; // r8d
  unsigned int i; // r13d
  __int64 *v9; // rsi
  __int64 v10; // r14
  __int32 v11; // ecx
  unsigned __int8 v12; // al
  _BYTE *v13; // rax
  __int16 v14; // ax
  unsigned __int16 v15; // ax
  unsigned int v16; // r13d
  __int64 *v17; // r13
  __int64 result; // rax
  __int64 v19; // r9
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r8
  __int64 v24; // rcx
  bool v25; // zf
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  _QWORD *v28; // rcx
  __int64 v29; // r10
  __int64 v30; // rax
  int v31; // eax
  unsigned __int8 v32; // al
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int8 v36; // al
  __int64 v37; // r14
  unsigned __int8 v38; // al
  __int64 v39; // rax
  __int64 v40; // rcx
  int v41; // esi
  unsigned __int64 v42; // [rsp+8h] [rbp-E0h]
  int v43; // [rsp+8h] [rbp-E0h]
  _BYTE *v44; // [rsp+10h] [rbp-D8h]
  int v45; // [rsp+10h] [rbp-D8h]
  __int32 v46; // [rsp+18h] [rbp-D0h]
  int v47; // [rsp+18h] [rbp-D0h]
  int v48; // [rsp+24h] [rbp-C4h]
  __int64 v49; // [rsp+28h] [rbp-C0h] BYREF
  __m128 v50; // [rsp+30h] [rbp-B8h] BYREF
  __m128 v51; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-98h]
  int v53; // [rsp+58h] [rbp-90h]
  _BYTE *v54; // [rsp+60h] [rbp-88h]
  __int64 v55; // [rsp+68h] [rbp-80h]
  __int64 v56; // [rsp+70h] [rbp-78h]
  __int64 v57; // [rsp+78h] [rbp-70h]
  int v58; // [rsp+80h] [rbp-68h]
  int v59; // [rsp+84h] [rbp-64h]
  char v60; // [rsp+88h] [rbp-60h]
  int v61; // [rsp+8Ch] [rbp-5Ch]
  char v62; // [rsp+90h] [rbp-58h]
  int v63; // [rsp+94h] [rbp-54h]
  __int64 v64; // [rsp+98h] [rbp-50h]
  __int64 v65; // [rsp+A0h] [rbp-48h]

  v49 = a1;
  sub_209F7B0((__int64)&v51, a1);
  v3 = *(unsigned int *)(a2 + 16);
  v4 = *(_QWORD *)a2;
  if ( (_DWORD)v3 )
  {
    v5 = v3 - 1;
    v6 = sub_20A59C0((__int64)&v51);
    v7 = 1;
    for ( i = v5 & v6; ; i = v5 & v16 )
    {
      v9 = (__int64 *)(v4 + 8LL * i);
      v10 = *v9;
      if ( *v9 != -4096 && v10 != -8192 )
      {
        v11 = v51.m128_i32[0];
        if ( v51.m128_u64[1] != 0 && v51.m128_i32[0] == 13 && v54 )
        {
          if ( *v54 == 14
            && ((v12 = *(v54 - 16), (v12 & 2) == 0)
              ? (v13 = &v54[-16 - 8LL * ((v12 >> 2) & 0xF)])
              : (v13 = *((_BYTE **)v54 - 4)),
                v44 = v54,
                v42 = v51.m128_u64[1],
                *((_QWORD *)v13 + 9)) )
          {
            v48 = v7;
            v14 = sub_206CE80(v10);
            v9 = (__int64 *)(v4 + 8LL * i);
            v7 = v48;
            if ( v14 == 13 )
            {
              v38 = *(_BYTE *)(v10 - 16);
              v39 = (v38 & 2) != 0 ? *(_QWORD *)(v10 - 32) : v10 + -16 - 8LL * ((v38 >> 2) & 0xF);
              v40 = *(_QWORD *)(v39 + 16);
              if ( v40 )
              {
                if ( v42 == v40 && v44 == *(_BYTE **)(v39 + 8) )
                  goto LABEL_56;
              }
            }
            v11 = v51.m128_i32[0];
          }
          else
          {
            v11 = 13;
          }
        }
        v46 = v11;
        v45 = v7;
        v15 = sub_206CE80(v10);
        v7 = v45;
        if ( v15 == v46 )
        {
          v27 = *(_BYTE *)(v10 - 16);
          v28 = (v27 & 2) != 0 ? *(_QWORD **)(v10 - 32) : (_QWORD *)(v10 + -16 - 8LL * ((v27 >> 2) & 0xF));
          if ( v51.m128_u64[1] == v28[2] )
          {
            v29 = v52;
            v30 = v10;
            if ( *(_BYTE *)v10 != 16 )
            {
              v30 = sub_209E6C0(v10);
              v7 = v45;
            }
            if ( v29 == v30 && v53 == *(_DWORD *)(v10 + 16) && v54 == (_BYTE *)v28[1] && v28[5] == v55 && v56 == v28[3] )
            {
              v47 = v7;
              v43 = v58;
              v31 = sub_206CE70(v10);
              v7 = v47;
              if ( v43 == v31 )
              {
                v32 = *(_BYTE *)(v10 - 16);
                v33 = (v32 & 2) != 0 ? *(_QWORD *)(v10 - 32) : v10 + -16 - 8LL * ((v32 >> 2) & 0xF);
                if ( v57 == *(_QWORD *)(v33 + 32) )
                {
                  v34 = *(_QWORD *)(v10 + 28);
                  if ( v60 == BYTE4(v34) && (!v60 || v59 == (_DWORD)v34) )
                  {
                    v35 = sub_206D500(v10);
                    v7 = v47;
                    if ( v62 == BYTE4(v35) && (!v62 || v61 == (_DWORD)v35) && v63 == *(_DWORD *)(v10 + 20) )
                    {
                      v36 = *(_BYTE *)(v10 - 16);
                      v37 = (v36 & 2) != 0 ? *(_QWORD *)(v10 - 32) : -16 - 8LL * ((v36 >> 2) & 0xF) + v10;
                      if ( v64 == *(_QWORD *)(v37 + 48) && v65 == *(_QWORD *)(v37 + 56) )
                      {
LABEL_56:
                        sub_2081E40(&v50, v9, (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
                        v17 = (__int64 *)v50.m128_u64[0];
                        goto LABEL_19;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        v10 = *v9;
      }
      if ( v10 == -4096 )
      {
        v4 = *(_QWORD *)a2;
        v3 = *(unsigned int *)(a2 + 16);
        break;
      }
      v16 = v7 + i;
      ++v7;
    }
  }
  sub_2081E40(&v50, (_QWORD *)(v4 + 8 * v3), (_QWORD *)(v4 + 8 * v3), a2, 1);
  v17 = (__int64 *)v50.m128_u64[0];
LABEL_19:
  sub_2081E40(
    &v50,
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)),
    a2,
    1);
  if ( (__int64 *)v50.m128_u64[0] == v17 || (result = *v17) == 0 )
  {
    if ( (unsigned __int8)sub_207F0C0((__int64 *)a2, &v49, &v50) )
    {
      sub_2081E40(&v51, v50.m128_u64[0], (_QWORD *)(*(_QWORD *)a2 + 8LL * *(unsigned int *)(a2 + 16)), a2, 1);
      return v49;
    }
    v20 = (_QWORD *)v50.m128_u64[0];
    v21 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    v22 = *(unsigned int *)(a2 + 16);
    v51.m128_u64[0] = v50.m128_u64[0];
    v23 = (unsigned int)(4 * v21);
    v24 = (unsigned int)(2 * v22);
    if ( (unsigned int)v23 >= 3 * (int)v22 )
    {
      v41 = 2 * v22;
    }
    else
    {
      v24 = (unsigned int)(v22 - *(_DWORD *)(a2 + 12) - v21);
      if ( (unsigned int)v24 > (unsigned int)v22 >> 3 )
      {
LABEL_24:
        v25 = *v20 == -4096;
        *(_DWORD *)(a2 + 8) = v21;
        if ( !v25 )
          --*(_DWORD *)(a2 + 12);
        *v20 = v49;
        v26 = *(_QWORD *)a2;
        v50.m128_u64[0] = (unsigned __int64)v20;
        sub_2081E40(&v51, v20, (_QWORD *)(v26 + 8 * v22), a2, 1);
        return v49;
      }
      v41 = v22;
    }
    sub_2085600(a2, v41, v21, v24, v23, v19);
    sub_207F0C0((__int64 *)a2, &v49, &v51);
    v22 = *(unsigned int *)(a2 + 16);
    v20 = (_QWORD *)v51.m128_u64[0];
    LODWORD(v21) = *(_DWORD *)(a2 + 8) + 1;
    goto LABEL_24;
  }
  return result;
}
