__int64 __fastcall sub_16D92B0(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __m128i a6,
        double a7)
{
  __int64 result; // rax
  int v8; // r9d
  __int64 v10; // rax
  unsigned int v11; // edx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  __int64 v15; // rax
  size_t v16; // rax
  __int64 v17; // r13
  size_t v18; // r15
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  size_t v34; // [rsp+0h] [rbp-178h]
  __int64 v36; // [rsp+8h] [rbp-170h]
  __int64 v37; // [rsp+10h] [rbp-168h]
  __int64 v38; // [rsp+10h] [rbp-168h]
  __int64 v39; // [rsp+18h] [rbp-160h]
  __int64 v40; // [rsp+28h] [rbp-150h] BYREF
  _DWORD v41[6]; // [rsp+30h] [rbp-148h] BYREF
  void *v42; // [rsp+48h] [rbp-130h]
  _BYTE v43[24]; // [rsp+58h] [rbp-120h] BYREF
  __int64 v44; // [rsp+70h] [rbp-108h] BYREF
  char v45; // [rsp+78h] [rbp-100h]
  __int64 v46; // [rsp+7Ch] [rbp-FCh]
  char v47; // [rsp+84h] [rbp-F4h]
  void *v48; // [rsp+88h] [rbp-F0h]
  __int64 v49; // [rsp+90h] [rbp-E8h]
  _BYTE v50[24]; // [rsp+98h] [rbp-E0h] BYREF
  _QWORD v51[2]; // [rsp+B0h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-B8h]
  unsigned __int8 *v53; // [rsp+D0h] [rbp-A8h] BYREF
  char v54; // [rsp+128h] [rbp-50h]
  unsigned int v55; // [rsp+130h] [rbp-48h]
  char v56; // [rsp+134h] [rbp-44h]

  result = 0;
  if ( ((*(_WORD *)a2 + 394) & 0x1FFu) <= 1 )
  {
    v8 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( (unsigned int)(v8 - 9) <= 6 || (unsigned int)(v8 - 19) <= 1 )
    {
      v10 = sub_EEC8C0(a2, a2, *(double *)a6.m128i_i64);
      v11 = *(_DWORD *)(a2 + 4);
      v40 = v10;
      sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v11, 0x1BB1u, 0);
      v12 = sub_15884C0((__int64)v51, &v40);
      if ( *(_BYTE *)(v12 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v12 + 32), a3, 5u);
      }
      else if ( *(_BYTE *)(v12 + 132) )
      {
        v37 = v12;
        v20 = sub_168B9E0((_QWORD *)v12);
        v23 = v37;
        v24 = v20;
        v25 = *(_QWORD *)(v37 + 16);
        if ( v25 )
        {
          v39 = v24;
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
          v24 = v39;
          v23 = v37;
        }
        v38 = v23;
        v44 = v25;
        v26 = sub_1587BC0(v24, &v44, v23, v24, v21, v22);
        sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * *(unsigned int *)(v38 + 128) + 8), a3, 5u);
      }
      sub_15F7200(v51);
      sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), a4, 0x17C9u, 0);
      if ( v54 )
      {
        sub_AE9DF0(&v53, a3, 5u);
      }
      else if ( v56 )
      {
        v27 = sub_168B9E0(v51);
        v31 = v52;
        if ( v52 )
        {
          v36 = v27;
          v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
          v27 = v36;
        }
        v44 = v31;
        v32 = sub_1587BC0(v27, &v44, v27, v28, v29, v30);
        sub_AE9DF0((unsigned __int8 **)(*v32 + 32LL * v55 + 8), a3, 5u);
      }
      v34 = j__strlen(")");
      v13 = sub_EEC140(*(_QWORD *)(a2 + 16));
      v14 = sub_15F0EF0(a1, v13, 0, a6, a7);
      sub_9EC740((__int64)v41, v14, ")", v34, 0);
      v15 = sub_1589170((__int64)v51, v41);
      v46 = 0;
      v48 = v50;
      v47 = 0;
      v49 = 0;
      v50[0] = 0;
      v50[16] = 0;
      LODWORD(v44) = a5;
      HIDWORD(v44) = a5;
      v45 = 1;
      sub_1589170(v15, &v44);
      if ( v48 != v50 )
        operator delete(v48);
      if ( v42 != v43 )
        operator delete(v42);
      sub_15F7200(v51);
      sub_168B9F0((__int64)v51, (__int64 *)(a1 + 8), v40, 0x17C8u, 0);
      v16 = j__strlen("(size_t)(");
      sub_9EC740((__int64)v41, v40, "(size_t)(", v16, 0);
      v17 = sub_1589170((__int64)v51, v41);
      v18 = j__strlen(")");
      v19 = sub_15F0EF0(a1, SHIDWORD(v40), 0, a6, a7);
      sub_9EC740((__int64)&v44, v19, ")", v18, 0);
      sub_1589170(v17, &v44);
      if ( v48 != v50 )
        operator delete(v48);
      if ( v42 != v43 )
        operator delete(v42);
      sub_15F7200(v51);
      return 1;
    }
  }
  return result;
}
