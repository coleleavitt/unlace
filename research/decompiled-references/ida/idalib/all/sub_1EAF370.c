__int64 __fastcall sub_1EAF370(__int64 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, __int64 a5)
{
  size_t v7; // rax
  size_t v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // r12d
  unsigned int v14; // [rsp+1Ch] [rbp-2DCh] BYREF
  void *v15[2]; // [rsp+20h] [rbp-2D8h] BYREF
  _BYTE v16[16]; // [rsp+30h] [rbp-2C8h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-2B8h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-2A8h] BYREF
  _QWORD v19[2]; // [rsp+90h] [rbp-268h] BYREF
  char v20; // [rsp+A0h] [rbp-258h] BYREF
  _QWORD v21[2]; // [rsp+B0h] [rbp-248h] BYREF
  char v22; // [rsp+C0h] [rbp-238h] BYREF
  _QWORD v23[2]; // [rsp+D0h] [rbp-228h] BYREF
  char v24; // [rsp+E0h] [rbp-218h] BYREF
  int v25; // [rsp+F8h] [rbp-200h] BYREF
  __int64 v26; // [rsp+100h] [rbp-1F8h]
  int *v27; // [rsp+108h] [rbp-1F0h]
  int *v28; // [rsp+110h] [rbp-1E8h]
  __int64 v29; // [rsp+118h] [rbp-1E0h]
  __int128 v30; // [rsp+120h] [rbp-1D8h]
  __int64 v31; // [rsp+130h] [rbp-1C8h]
  __int64 *v32; // [rsp+138h] [rbp-1C0h] BYREF
  __int64 v33; // [rsp+148h] [rbp-1B0h] BYREF
  char v34; // [rsp+158h] [rbp-1A0h]
  __int64 v35; // [rsp+15Ch] [rbp-19Ch]
  __int64 v36; // [rsp+168h] [rbp-190h]
  __int64 v37; // [rsp+170h] [rbp-188h]
  __int64 v38; // [rsp+178h] [rbp-180h]
  int v39; // [rsp+180h] [rbp-178h]
  _BYTE *v40; // [rsp+188h] [rbp-170h]
  __int64 v41; // [rsp+190h] [rbp-168h]
  _BYTE v42[280]; // [rsp+198h] [rbp-160h] BYREF
  __int16 v43; // [rsp+2B0h] [rbp-48h]
  char v44; // [rsp+2B2h] [rbp-46h]

  v7 = j__strlen("/");
  v17[0] = v18;
  sub_1EA9D80(v17, "/", (__int64)&asc_2336F83[v7 + 2]);
  v19[0] = &v20;
  v21[0] = &v22;
  v23[0] = &v24;
  v27 = &v25;
  v28 = &v25;
  v30 = 0;
  memset(&v18[16], 0, 48);
  v19[1] = 0;
  v20 = 0;
  v21[1] = 0;
  v22 = 0;
  v23[1] = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v29 = 0;
  v31 = 0;
  v32 = &v33;
  v8 = j__strlen("raw");
  sub_1EA9D80(&v32, "raw", (__int64)&aDarnRaw[v8 + 7]);
  v43 = -30585;
  v35 = 0x28DE8000093A80LL;
  v40 = v42;
  v41 = 0x1000000000LL;
  v34 &= 0xE0u;
  v36 = 0;
  v37 = 0;
  v44 = v44 & 0xE0 | 0x10;
  v38 = 0;
  v39 = 0;
  memset(&v42[256], 0, 24);
  v14 = 0;
  sub_1EAC540((__m128i **)v15, a1, &v14);
  sub_A0AAD0((__int64)v17, v15);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  sub_1EAC540((__m128i **)v15, a1, &v14);
  sub_A0AAD0((__int64)v19, v15);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  sub_1EAC540((__m128i **)v15, a1, &v14);
  sub_A0AAD0((__int64)v21, v15);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  sub_1EAC540((__m128i **)v15, a1, &v14);
  sub_A0AAD0((__int64)v23, v15);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  v9 = *a1;
  v34 = *(_QWORD *)(*a1 + 8LL * v14) & 1 | v34 & 0xFE;
  v34 = (2 * (*(_QWORD *)(v9 + 8LL * (v14 + 1)) & 1)) | v34 & 0xFD;
  v34 = (4 * (*(_QWORD *)(v9 + 8LL * (v14 + 2)) & 1)) | v34 & 0xFB;
  v34 = (16 * (*(_QWORD *)(v9 + 8LL * (v14 + 3)) & 1)) | v34 & 0xEF;
  LOBYTE(v43) = *(_QWORD *)(v9 + 8LL * (v14 + 4)) & 1 | v43 & 0xFE;
  LOBYTE(v43) = (2 * (*(_QWORD *)(v9 + 8LL * (v14 + 5)) & 1)) | v43 & 0xFD;
  LOBYTE(v43) = (4 * (*(_QWORD *)(v9 + 8LL * (v14 + 6)) & 1)) | v43 & 0xFB;
  v10 = *(_QWORD *)(v9 + 8LL * (v14 + 7));
  v14 += 8;
  LOBYTE(v43) = (8 * (v10 & 1)) | v43 & 0xF7;
  sub_1EAC540((__m128i **)v15, a1, &v14);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, void *, void *, _QWORD))(*(_QWORD *)a5 + 72LL))(
          a5,
          v17,
          a2,
          a3,
          v15[0],
          v15[1],
          a4);
  if ( v15[0] != v16 )
    operator delete(v15[0]);
  sub_1EAF0A0((__int64)v17);
  return v11;
}
