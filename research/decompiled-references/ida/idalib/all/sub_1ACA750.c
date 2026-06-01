_WORD *__fastcall sub_1ACA750(__int64 *a1, __int64 a2, __int64 a3, char a4, char a5, char a6, double a7, _WORD *a8)
{
  __int64 v10; // r9
  _QWORD *v11; // r14
  __int64 v12; // r8
  __int64 v13; // r9
  _WORD *result; // rax
  unsigned int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // [rsp+0h] [rbp-F8h]
  __int64 v41; // [rsp+0h] [rbp-F8h]
  __int64 v42; // [rsp+0h] [rbp-F8h]
  __int64 v43; // [rsp+0h] [rbp-F8h]
  __int64 v44; // [rsp+0h] [rbp-F8h]
  __int64 v45; // [rsp+8h] [rbp-F0h]
  char v46; // [rsp+16h] [rbp-E2h] BYREF
  bool v47; // [rsp+17h] [rbp-E1h] BYREF
  __int64 v48; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v49; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+28h] [rbp-D0h]
  _QWORD v51[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v53; // [rsp+50h] [rbp-A8h] BYREF
  char v54; // [rsp+A8h] [rbp-50h]
  unsigned int v55; // [rsp+B0h] [rbp-48h]
  char v56; // [rsp+B4h] [rbp-44h]

  if ( a6 == 1 )
    return (_WORD *)sub_1AC6E80(a1, (unsigned __int64)a8, 1, 29, a4, a5, a7);
  if ( a6 )
  {
    result = a8;
    if ( (*a8 & 0x1FF) != 0x19 )
    {
      v20 = sub_EEB7E0((unsigned __int64)a8, a2, a7);
      return (_WORD *)sub_1AA2500(a1, 20, 29, v20, (__int64)a8);
    }
  }
  else
  {
    if ( (unsigned __int8)(a4 - 9) <= 2u )
    {
      v49 = a2;
      v50 = a3;
    }
    else
    {
      v10 = a1[3];
      v49 = a1[2];
      v50 = v10;
    }
    v11 = sub_1AC1150((__int64)&v49);
    result = a8;
    if ( v11 != (_QWORD *)(v12 + 8 * v13) )
    {
      v15 = sub_EEB7E0((unsigned __int64)a8, a2, a7);
      sub_168B9F0((__int64)v51, a1, v15, 0xB6Au, 0);
      if ( v54 )
      {
        sub_AE9DF0(&v53, (__int64)"num", 1u);
      }
      else if ( v56 )
      {
        v21 = sub_168B9E0(v51);
        v25 = v52;
        if ( v52 )
        {
          v41 = v21;
          v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v52 + 32LL))(v52);
          v21 = v41;
        }
        v48 = v25;
        v26 = sub_1587BC0(v21, &v48, v21, v22, v23, v24);
        sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v55 + 8), (__int64)"num", 1u);
      }
      v46 = 29;
      v16 = sub_1AA5620((__int64)v51, &v46);
      v17 = v16;
      if ( *(_BYTE *)(v16 + 120) )
      {
        v40 = v16;
        sub_1AA2FB0((unsigned __int8 **)(v16 + 32), a4);
        v17 = v40;
      }
      else if ( *(_BYTE *)(v16 + 132) )
      {
        v43 = v16;
        v33 = sub_168B9E0((_QWORD *)v16);
        v36 = v43;
        v37 = v33;
        v38 = *(_QWORD *)(v43 + 16);
        if ( v38 )
        {
          v45 = v37;
          v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
          v37 = v45;
          v36 = v43;
        }
        v44 = v36;
        v48 = v38;
        v39 = sub_1587BC0(v37, &v48, v36, v37, v34, v35);
        sub_1AA2FB0((unsigned __int8 **)(*v39 + 32LL * *(unsigned int *)(v44 + 128) + 8), a4);
        v17 = v44;
      }
      v47 = a5 != 20 && a4 == 7;
      v18 = sub_1588420(v17, (unsigned __int8 *)&v47);
      v19 = v18;
      if ( *(_BYTE *)(v18 + 120) )
      {
        sub_1AA2FB0((unsigned __int8 **)(v18 + 32), a5);
      }
      else if ( *(_BYTE *)(v18 + 132) )
      {
        v27 = sub_168B9E0((_QWORD *)v18);
        v31 = *(_QWORD *)(v19 + 16);
        if ( v31 )
        {
          v42 = v27;
          v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v31 + 32LL))(v31);
          v27 = v42;
        }
        v48 = v31;
        v32 = sub_1587BC0(v27, &v48, v27, v28, v29, v30);
        sub_1AA2FB0((unsigned __int8 **)(*v32 + 32LL * *(unsigned int *)(v19 + 128) + 8), a5);
      }
      LOBYTE(v48) = 37;
      sub_1AA5620(v19, (char *)&v48);
      sub_15F7200(v51);
      sub_168B9F0((__int64)v51, a1, *(_DWORD *)(*v11 + 12LL), 0x1675u, 0);
      LOBYTE(v48) = *(_BYTE *)(*v11 + 8LL);
      sub_1AA5620((__int64)v51, (char *)&v48);
      sub_15F7200(v51);
      return (_WORD *)(&dword_0 + 1);
    }
  }
  return result;
}
