void __fastcall sub_1607C40(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // al
  int v14; // eax
  _BYTE *v15; // rax
  char v16; // al
  size_t v17; // r15
  const char *v18; // rax
  _BYTE *v19; // rdi
  unsigned __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r15
  void *v26; // rax
  _QWORD *v27; // rax
  size_t v28; // rdx
  _QWORD *v29; // [rsp+8h] [rbp-170h] BYREF
  __int8 *v30; // [rsp+10h] [rbp-168h]
  char *v31; // [rsp+18h] [rbp-160h]
  void *src; // [rsp+20h] [rbp-158h] BYREF
  size_t n; // [rsp+28h] [rbp-150h]
  _QWORD v34[2]; // [rsp+30h] [rbp-148h] BYREF
  __m128i v35; // [rsp+40h] [rbp-138h] BYREF
  unsigned __int64 v36; // [rsp+50h] [rbp-128h]
  char v37; // [rsp+60h] [rbp-118h]
  int v38; // [rsp+70h] [rbp-108h] BYREF
  int v39; // [rsp+74h] [rbp-104h]
  char v40; // [rsp+78h] [rbp-100h]
  __int64 v41; // [rsp+7Ch] [rbp-FCh]
  char v42; // [rsp+84h] [rbp-F4h]
  void *dest; // [rsp+88h] [rbp-F0h]
  __m128 v44; // [rsp+90h] [rbp-E8h] BYREF
  char v45; // [rsp+A8h] [rbp-D0h]
  _BYTE v46[16]; // [rsp+B0h] [rbp-C8h] BYREF
  void *v47; // [rsp+C0h] [rbp-B8h]
  __int64 v48[11]; // [rsp+D0h] [rbp-A8h] BYREF
  char v49; // [rsp+128h] [rbp-50h]
  unsigned int v50; // [rsp+130h] [rbp-48h]
  char v51; // [rsp+134h] [rbp-44h]

  v7 = a1[29];
  v8 = a1[34];
  if ( (*(_BYTE *)(v7 + 156) & 4) != 0 || !(_DWORD)a2 )
  {
LABEL_3:
    sub_ED21F0((__int64)&v35, v8, a2, v7 + 544, 0, a6);
    v13 = v37;
    if ( v37 < 0 )
      goto LABEL_17;
    if ( (v37 & 0x1C) == 0 )
    {
      if ( (v37 & 1) != 0 )
      {
        v15 = (_BYTE *)v35.m128i_i64[1];
        v9 = v36;
      }
      else
      {
        v15 = (_BYTE *)sub_ED1E50(&v35, a1[34], v9, v10, v11, v12);
        v37 |= 1u;
        v35.m128i_i64[1] = (__int64)v15;
        v36 = v9;
      }
      if ( v9 > 5 && *v15 == 47 )
      {
        v10 = (unsigned __int8)v15[1];
        if ( (_BYTE)v10 == 42 )
        {
          if ( v15[v9 - 1] != 47 || v15[v9 - 2] != 42 )
            goto LABEL_16;
        }
        else if ( (_BYTE)v10 != 47 )
        {
LABEL_16:
          v13 = v37;
LABEL_17:
          v16 = (v13 >> 2) & 7;
          if ( v16 == 1 )
          {
            v17 = j__strlen("///<");
            v18 = "///<";
          }
          else
          {
            if ( !v16 )
            {
              sub_168B9F0(v46, a1 + 1, (unsigned int)a2, 7378, 0);
              sub_15F7200(v46);
              return;
            }
            v17 = j__strlen("/**<");
            v18 = "/**<";
          }
          v31 = (char *)v18;
          sub_168B9F0(v46, a1 + 1, (unsigned int)a2, 7149, 0);
          v38 = a2;
          v39 = a2 + 3;
          v30 = &v44.m128_i8[8];
          dest = &v44.m128_u16[4];
          src = v34;
          v29 = v34;
          v41 = 0;
          v42 = 0;
          v44.m128_u64[0] = 0;
          v44.m128_i8[8] = 0;
          v45 = 0;
          v40 = 1;
          sub_15F0740(&src, v31, (__int64)&v31[v17]);
          v19 = dest;
          if ( src == v34 )
          {
            v28 = n;
            if ( n )
            {
              if ( n == 1 )
                *(_BYTE *)dest = v34[0];
              else
                memcpy(dest, src, n);
              v28 = n;
              v19 = dest;
            }
            v44.m128_u64[0] = v28;
            v19[v28] = 0;
            v19 = src;
            goto LABEL_25;
          }
          if ( dest == v30 )
          {
            v29 = (_QWORD *)v34[0];
            dest = src;
            v44 = _mm_loadh_ps((const double *)&v29);
          }
          else
          {
            v29 = (_QWORD *)v34[0];
            v20 = v44.m128_u64[1];
            dest = src;
            v44 = _mm_loadh_ps((const double *)&v29);
            if ( v19 )
            {
              src = v19;
              v34[0] = v20;
LABEL_25:
              n = 0;
              *v19 = 0;
              if ( src != v34 )
                operator delete(src);
              if ( v49 )
              {
                if ( v38 && v39 )
                  sub_15F8EE0(v48, (unsigned __int64)&v38);
              }
              else if ( v51 )
              {
                v25 = sub_168B9E0(v46);
                v26 = v47;
                if ( v47 )
                  v26 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v47 + 32LL))(v47);
                src = v26;
                v27 = sub_1587BC0(v25, (__int64 *)&src, v21, v22, v23, v24);
                if ( v38 && v39 )
                  sub_15F8EE0((__int64 *)(*v27 + 32LL * v50 + 8), (unsigned __int64)&v38);
              }
              if ( dest != &v44.m128_u16[4] )
                operator delete(dest);
              sub_15F7200(v46);
              goto LABEL_5;
            }
          }
          v19 = v34;
          src = v34;
          goto LABEL_25;
        }
      }
    }
LABEL_5:
    sub_A5F4C0(a1[31], &v35, v9, v10, v11, v12);
    return;
  }
  v14 = sub_1021680(v8, a2);
  if ( !v14 || v14 == 3 )
  {
    v7 = a1[29];
    v8 = a1[34];
    goto LABEL_3;
  }
}
