void __fastcall sub_1E8FF10(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int8 v10; // al
  __int64 v11; // rsi
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  _QWORD *v32; // r12
  __int64 v33; // r14
  __int64 v34; // r14
  unsigned __int64 v35; // rax
  __int64 (__fastcall *v36)(__int64); // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _BYTE *v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  __int64 v55; // rbp
  __int64 v56; // rax
  __int64 v57; // r15
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r15
  unsigned int v61; // [rsp+Ch] [rbp-DCh] BYREF
  int v62; // [rsp+10h] [rbp-D8h] BYREF
  int v63; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v64; // [rsp+18h] [rbp-D0h] BYREF
  unsigned int *v65[25]; // [rsp+20h] [rbp-C8h] BYREF

  v10 = *(_BYTE *)(a3 + 73);
  v61 = a2;
  v11 = *(_QWORD *)(a3 + 104);
  v12 = (__int64 *)(v11 + 96);
  if ( v10 >> 5 == 2 )
  {
    v65[0] = (unsigned int *)a1;
    v65[1] = &v61;
    sub_7052B0(v12, v11, a3, a4, a5, a6);
    sub_1E88A90(v65, 1, (**(_BYTE **)(a3 + 128) & 4) != 0);
    sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v42, v43, v44, v45);
    sub_1E88A90(v65, 3, (**(_BYTE **)(a3 + 128) & 0x10) != 0);
    sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v46, v47, v48, v49);
    sub_1E88A90(v65, 2, (**(_BYTE **)(a3 + 128) & 8) != 0);
    sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v50, v51, v52, v53);
    sub_1E88A90(v65, 4, (**(_BYTE **)(a3 + 128) & 0x20) != 0);
  }
  else
  {
    sub_7052B0(v12, v11, a3, a4, a5, a6);
    if ( (**(_BYTE **)(a3 + 128) & 8) != 0
      || (v41 = *(_QWORD *)(a3 + 104),
          sub_7052B0((__int64 *)(v41 + 96), v41, v13, v14, v15, v16),
          (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 9LL) & 4) == 0)
      && !(unsigned __int8)sub_B9C060(a3, v41, v13, v14, v15, v16)
      || (sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v13, v14, v15, v16),
          (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 4LL) & 8) != 0) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v13, v14, v15, v16);
      if ( (**(_BYTE **)(a3 + 128) & 4) != 0
        || (sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v17, v14, v15, v16),
            (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 4LL) & 4) != 0) )
      {
        v18 = sub_1E86DC0((_QWORD *)a1, a3, 0, v14, v15, v16, a7, a8);
        v19 = v18;
        if ( v18 )
        {
          if ( (unsigned __int8)sub_B967A0(v18, a3, v13, v14) )
          {
            sub_168B9F0((__int64)v65, (__int64 *)(a1 + 8), v61, 0x192Eu, 0);
            v63 = 24;
            v56 = sub_1E889E0((__int64)v65, &v63);
            LODWORD(v64) = 0;
            v57 = v56;
            LOBYTE(v62) = sub_B99060(v19, &v64, v58, v59);
            v60 = sub_1588420(v57, (unsigned __int8 *)&v62);
            v64 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
            sub_1587DB0(v60, &v64);
            sub_15F7200(v65);
          }
        }
      }
    }
    sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v13, v14, v15, v16);
    if ( (**(_BYTE **)(a3 + 128) & 0x20) != 0
      || (v40 = *(_QWORD *)(a3 + 104),
          sub_7052B0((__int64 *)(v40 + 96), v40, v20, v21, v22, v23),
          (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 9LL) & 0x10) == 0)
      && !(unsigned __int8)sub_B9C100(a3, v40, v20, v21, v22, v23)
      || (v28 = *(__int64 **)(a3 + 104),
          sub_7052B0(v28 + 12, (__int64)v28, v20, v21, v22, v23),
          (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 4LL) & 0x20) != 0) )
    {
      sub_7052B0((__int64 *)(*(_QWORD *)(a3 + 104) + 96LL), *(_QWORD *)(a3 + 104), v20, v21, v22, v23);
      if ( (**(_BYTE **)(a3 + 128) & 0x10) != 0
        || (v28 = *(__int64 **)(a3 + 104),
            sub_7052B0(v28 + 12, (__int64)v28, v24, v25, v26, v27),
            (*(_BYTE *)(*(_QWORD *)(a3 + 128) + 4LL) & 0x10) != 0) )
      {
        v28 = (__int64 *)a3;
        v29 = sub_1E86DC0((_QWORD *)a1, a3, 1, v25, v26, v27, a7, a8);
        v32 = (_QWORD *)v29;
        if ( v29 )
        {
          if ( (unsigned __int8)sub_B967A0(v29, a3, v30, v31) )
          {
            sub_168B9F0((__int64)v65, (__int64 *)(a1 + 8), v61, 0x192Eu, 0);
            v63 = 26;
            v33 = sub_1E889E0((__int64)v65, &v63);
            LOBYTE(v62) = sub_B98360(v32, (__int64)&v63);
            v34 = sub_1588420(v33, (unsigned __int8 *)&v62);
            v28 = &v64;
            v64 = (*(__int64 (__fastcall **)(_QWORD *))(*v32 + 16LL))(v32);
            sub_1587DB0(v34, &v64);
            sub_15F7200(v65);
          }
        }
      }
    }
    v35 = sub_B97300(a3);
    if ( v35 )
    {
      v36 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v35 + 32LL);
      if ( v36 == sub_B94CD0 )
        v39 = (_BYTE *)sub_B709C0(v35);
      else
        v39 = (_BYTE *)v36(v35);
      if ( (unsigned __int8)sub_B967A0((__int64)v39, (__int64)v28, v37, v38) )
      {
        if ( (v39[83] & 2) == 0 )
        {
          sub_168B9F0((__int64)v65, (__int64 *)(a1 + 8), v61, 0x192Eu, 0);
          v62 = 23;
          v54 = sub_1E889E0((__int64)v65, &v62);
          v63 = 1;
          v55 = sub_1587D10(v54, &v63);
          v64 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v39 + 16LL))(v39);
          sub_1587DB0(v55, &v64);
          sub_15F7200(v65);
        }
      }
    }
  }
}
