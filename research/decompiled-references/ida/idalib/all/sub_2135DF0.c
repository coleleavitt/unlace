__int64 __fastcall sub_2135DF0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  unsigned int v4; // r13d
  _DWORD *v6; // rax
  size_t v7; // r9
  unsigned __int8 *v8; // r15
  _BYTE *v9; // rsi
  size_t v10; // r10
  int v11; // eax
  size_t v12; // r9
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r9
  _QWORD *v17; // rax
  size_t v18; // rdx
  char *v19; // r8
  __int64 v20; // rsi
  void *v21; // rax
  _DWORD *v22; // rax
  __int64 v23; // rax
  _BYTE *v24; // rdi
  size_t v25; // [rsp+10h] [rbp-128h]
  size_t v26; // [rsp+10h] [rbp-128h]
  size_t v27; // [rsp+18h] [rbp-120h]
  size_t v28; // [rsp+18h] [rbp-120h]
  __int64 v29; // [rsp+20h] [rbp-118h] BYREF
  __int64 v30; // [rsp+28h] [rbp-110h] BYREF
  void *v31; // [rsp+30h] [rbp-108h] BYREF
  __int64 v32; // [rsp+38h] [rbp-100h]
  _BYTE v33[16]; // [rsp+40h] [rbp-F8h] BYREF
  void *src; // [rsp+50h] [rbp-E8h] BYREF
  size_t n; // [rsp+58h] [rbp-E0h]
  _BYTE v36[16]; // [rsp+60h] [rbp-D8h] BYREF
  const char *v37; // [rsp+70h] [rbp-C8h] BYREF
  __int16 v38; // [rsp+90h] [rbp-A8h]
  _QWORD v39[4]; // [rsp+A0h] [rbp-98h] BYREF
  __int16 v40; // [rsp+C0h] [rbp-78h]
  void *v41; // [rsp+D0h] [rbp-68h] BYREF
  size_t v42; // [rsp+D8h] [rbp-60h]
  _BYTE v43[16]; // [rsp+E0h] [rbp-58h] BYREF
  __int16 v44; // [rsp+F0h] [rbp-48h]

  v2 = sub_2153C00(a1);
  v3 = sub_2124B50(v2);
  v32 = 0;
  v31 = v33;
  src = v36;
  v33[0] = 0;
  n = 0;
  v36[0] = 0;
  v30 = 0;
  v37 = "expected file number";
  v38 = 259;
  if ( (unsigned __int8)sub_2154400(a1, &v29, &v37)
    || (v39[0] = "file number less than one", v40 = 259, (unsigned __int8)sub_2154450(a1, v29 <= 0, v3, v39))
    || (v41 = "unexpected token in '.cv_file' directive",
        v44 = 259,
        v6 = (_DWORD *)sub_2153C00(a1),
        (unsigned __int8)sub_2154470(a1, *v6 != 3, &v41))
    || (v4 = sub_2135140(a1, &v31), (_BYTE)v4)
    || !(unsigned __int8)sub_2154640(a1, 9)
    && ((v40 = 259,
         v39[0] = "unexpected token in '.cv_file' directive",
         v22 = (_DWORD *)sub_2153C00(a1),
         (unsigned __int8)sub_2154470(a1, *v22 != 3, v39))
     || (unsigned __int8)sub_2135140(a1, &src)
     || (v44 = 259, v41 = "expected checksum kind in '.cv_file' directive", (unsigned __int8)sub_2154400(a1, &v30, &v41))
     || (unsigned __int8)sub_21544B0(a1)) )
  {
    v4 = 1;
    goto LABEL_3;
  }
  v7 = n;
  v42 = 0;
  v8 = (unsigned __int8 *)src;
  v43[0] = 0;
  v41 = v43;
  if ( !n )
    goto LABEL_24;
  v9 = v43;
  v10 = (n + 1) >> 1;
  if ( v10 )
  {
    if ( v10 > 0xF )
    {
      v28 = n;
      v26 = (n + 1) >> 1;
      sub_998B30((__int64)&v41, 0, 0, nullptr, v26);
      v10 = v26;
      v7 = v28;
      v24 = v41;
    }
    else
    {
      if ( v10 == 1 )
      {
LABEL_41:
        v42 = v10;
        *((_BYTE *)v41 + v10) = 0;
        v9 = v41;
        goto LABEL_14;
      }
      v24 = v43;
    }
    v27 = v7;
    v25 = v10;
    memset(v24, 0, v10);
    v7 = v27;
    v10 = v25;
    goto LABEL_41;
  }
LABEL_14:
  if ( (v7 & 1) == 0 )
  {
LABEL_17:
    v12 = v7 >> 1;
    if ( v12 )
    {
      v13 = word_23E43C0[v8[1]];
      v14 = word_23E43C0[*v8];
      if ( v13 != -1 && v14 != -1 )
      {
        v15 = 0;
        do
        {
          v9[v15++] = v13 | (16 * v14);
          if ( v15 == v12 )
            break;
          v14 = word_23E43C0[v8[2 * v15]];
          v13 = word_23E43C0[v8[2 * v15 + 1]];
          if ( v14 == -1 )
            break;
        }
        while ( v13 != -1 );
      }
    }
    goto LABEL_24;
  }
  v11 = word_23E43C0[*v8];
  if ( v11 != -1 )
  {
    *v9 = v11;
    --v7;
    ++v8;
    ++v9;
    goto LABEL_17;
  }
LABEL_24:
  sub_A0AAD0((__int64)&src, &v41);
  if ( v41 != v43 )
    operator delete(v41);
  v17 = *(_QWORD **)(a1 + 16);
  v18 = n;
  v19 = (char *)v17[24];
  v20 = (unsigned int)n;
  v17[34] += (unsigned int)n;
  if ( v17[25] >= (unsigned __int64)&v19[v20] && v19 )
  {
    v17[24] = &v19[v20];
  }
  else
  {
    v23 = sub_986170((__int64)(v17 + 24), v20, v20, 0, (__int64)v19, v16);
    v18 = n;
    v19 = (char *)v23;
  }
  v21 = memcpy(v19, src, v18);
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, void *, __int64, void *, size_t, _QWORD))(**(_QWORD **)(a1 + 24) + 704LL))(
          *(_QWORD *)(a1 + 24),
          (unsigned int)v29,
          v31,
          v32,
          v21,
          n,
          (unsigned __int8)v30) )
  {
    v41 = "file number already allocated";
    v44 = 259;
    v4 = sub_2153E90(a1, v3, &v41, 0, 0);
  }
LABEL_3:
  if ( src != v36 )
    operator delete(src);
  if ( v31 != v33 )
    operator delete(v31);
  return v4;
}
