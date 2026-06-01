__int64 __fastcall sub_1EE0AF0(__int64 *a1, __int64 a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v5; // rax
  bool v6; // cl
  unsigned int v8; // ebx
  char v9; // al
  unsigned __int8 *v10; // rbp
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  _BYTE *v14; // rsi
  __int64 v15; // rdx
  size_t v16; // rax
  unsigned int v17; // edx
  __int64 v18; // r12
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  unsigned int v22; // eax
  size_t v24; // rax
  __int64 v25; // r14
  unsigned __int64 v26; // rax
  __int64 v27; // rdx
  char v28; // al
  __int64 v29; // rcx
  unsigned __int64 *v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // r8
  __int64 v35; // r8
  bool v36; // zf
  unsigned int v37; // [rsp+8h] [rbp-130h]
  __int64 *v38; // [rsp+8h] [rbp-130h]
  _QWORD *v39; // [rsp+10h] [rbp-128h]
  __int64 v40; // [rsp+20h] [rbp-118h]
  __int64 v41; // [rsp+20h] [rbp-118h]
  unsigned __int8 *v42; // [rsp+30h] [rbp-108h]
  unsigned __int64 v43; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+58h] [rbp-E0h]
  void *v46[2]; // [rsp+60h] [rbp-D8h] BYREF
  _BYTE v47[16]; // [rsp+70h] [rbp-C8h] BYREF
  void *v48[2]; // [rsp+80h] [rbp-B8h] BYREF
  _BYTE v49[16]; // [rsp+90h] [rbp-A8h] BYREF
  _QWORD *v50; // [rsp+A0h] [rbp-98h]
  __m128 v51; // [rsp+B0h] [rbp-88h] BYREF
  _BYTE v52[16]; // [rsp+C0h] [rbp-78h] BYREF
  void *v53; // [rsp+D0h] [rbp-68h] BYREF
  _QWORD v54[11]; // [rsp+E0h] [rbp-58h] BYREF

  v5 = &a3[a4];
  v6 = 0;
  v8 = *a3;
  v42 = v5;
  LOWORD(v44) = v44 & 0xF000;
  v45 = 0;
  v39 = nullptr;
  v9 = v8 & 0x40;
  if ( (v8 & 0x40) != 0 )
  {
    v39 = sub_1EC1DC0(a1, a2);
    if ( v39 )
    {
      v25 = *(_QWORD *)(*a1 + 136);
      v26 = (unsigned __int64)v39;
      while ( 1 )
      {
        v27 = *(_QWORD *)(v26 + 8);
        if ( !v27 )
          break;
        v26 = v27 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v27 & 4) == 0 || !v26 )
          goto LABEL_31;
      }
      v26 = 0;
LABEL_31:
      v43 = v26;
      v38 = (__int64 *)(v25 + 1712);
      v28 = sub_101E950((__int64 *)(v25 + 1712), (__int64 *)&v43, v46);
      v29 = v25 + 1712;
      if ( v28 )
      {
        sub_101F7C0(
          &v51,
          (_QWORD *)v46[0],
          (_QWORD *)(*(_QWORD *)(v25 + 1712) + 8LL * *(unsigned int *)(v25 + 1728)),
          v29,
          1);
      }
      else
      {
        v30 = (unsigned __int64 *)v46[0];
        v31 = (unsigned int)(*(_DWORD *)(v25 + 1720) + 1);
        v32 = *(unsigned int *)(v25 + 1728);
        v51.m128_u64[0] = (unsigned __int64)v46[0];
        v33 = (unsigned int)(4 * v31);
        v34 = (unsigned int)(3 * v32);
        if ( (unsigned int)v33 >= (unsigned int)v34 )
        {
          sub_1024740((__int64)v38, 2 * v32, v31, v29, v34, v33);
          sub_101E950(v38, (__int64 *)&v43, &v51);
          v32 = *(unsigned int *)(v25 + 1728);
          v30 = (unsigned __int64 *)v51.m128_u64[0];
          LODWORD(v31) = *(_DWORD *)(v25 + 1720) + 1;
          v29 = v25 + 1712;
        }
        else
        {
          v35 = (unsigned int)v32 >> 3;
          if ( (int)v32 - *(_DWORD *)(v25 + 1724) - (int)v31 <= (unsigned int)v35 )
          {
            sub_1024740((__int64)v38, v32, v31, v29, v35, (__int64)&v51);
            sub_101E950(v38, (__int64 *)&v43, &v51);
            v32 = *(unsigned int *)(v25 + 1728);
            v30 = (unsigned __int64 *)v51.m128_u64[0];
            LODWORD(v31) = *(_DWORD *)(v25 + 1720) + 1;
            v29 = v25 + 1712;
          }
        }
        v36 = *v30 == -4096;
        *(_DWORD *)(v25 + 1720) = v31;
        if ( !v36 )
          --*(_DWORD *)(v25 + 1724);
        *v30 = v43;
        v46[0] = v30;
        sub_101F7C0(&v51, v30, (_QWORD *)(*(_QWORD *)(v25 + 1712) + 8 * v32), v29, 1);
      }
    }
    v6 = (v44 & 4) != 0;
    v9 = (v44 & 2) != 0;
  }
  v10 = a3 + 9;
  v11 = *((_QWORD *)v10 - 1);
  LOBYTE(v44) = (8 * ((v8 >> 1) & 7))
              | (4 * ((v8 & 0x10) != 0 || v6)) & 0xC7
              | v44 & 0xC1
              | (2 * (((v8 & 0x20) != 0) | v9 & 1)) & 0xC7;
  if ( v11 && (v12 = sub_1EE0A70(*a1, a1[1], v11)) != 0 )
    v13 = 2 * v12 + 1;
  else
    v13 = 0;
  v45 = v13;
  while ( v42 != v10 )
  {
    v17 = *(_DWORD *)v10;
    v18 = 0;
    v10 += 4;
    v19 = *a1;
    v20 = v17 & 7;
    v21 = v17 >> 3;
    v37 = v20;
    if ( v21 )
    {
      v22 = sub_1EDFD20(v19, a1[1], v21);
      v19 = *a1;
      if ( v22 )
      {
        if ( v22 > *(_DWORD *)(v19 + 4480) )
        {
          v41 = *a1;
          v24 = j__strlen("submodule ID out of range in AST file");
          sub_1EAD680(v41, "submodule ID out of range in AST file", v24);
          v19 = *a1;
        }
        else
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v19 + 4472) + 8LL * (v22 - 1));
        }
      }
    }
    v40 = *(_QWORD *)(*(_QWORD *)(v19 + 136) + 104LL) + 632LL;
    if ( v39 || (v39 = sub_1EC1DC0(a1, a2)) != nullptr )
    {
      v14 = *(_BYTE **)(a2 + 16);
      v15 = *(_QWORD *)(a2 + 24);
      v46[0] = v47;
      sub_1EA9D80(v46, v14, (__int64)&v14[v15]);
      v48[0] = v49;
      v16 = j__strlen(&byte_22F0C30);
      sub_1EA9D80(v48, &byte_22F0C30, (__int64)(&byte_22F0C30 + v16));
      v50 = v39;
      v51.m128_u64[0] = (unsigned __int64)v52;
      sub_1EA9CC0(&v51, (_BYTE *)v46[0], (__int64)v46[0] + (unsigned __int64)v46[1]);
      v53 = v54;
      sub_1EA9CC0(&v53, (_BYTE *)v48[0], (__int64)v48[0] + (unsigned __int64)v48[1]);
      v54[2] = v50;
      sub_1400A10(v40, v18, (__m128i *)&v51, v37, 1);
      if ( v53 != v54 )
        operator delete(v53);
      if ( (_BYTE *)v51.m128_u64[0] != v52 )
        operator delete((void *)v51.m128_u64[0]);
      if ( v48[0] != v49 )
        operator delete(v48[0]);
      if ( v46[0] != v47 )
        operator delete(v46[0]);
    }
    sub_13C0500((char *)&v44, v37);
  }
  LOWORD(v44) = v44 | 0x840;
  return v44;
}
