__int64 __fastcall sub_1B2F5E0(__int64 *a1, _DWORD *a2, int a3, __m128 a4, __m128 a5)
{
  __int64 result; // rax
  char v7; // bp
  unsigned __int64 v8; // rbx
  int v9; // edx
  unsigned int v11; // r15d
  __int64 *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rcx
  int v24; // r15d
  char v25; // al
  __int64 v26; // rdx
  __int64 v27; // r8
  char v28; // al
  int v29; // eax
  __int64 *v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned int v35; // eax
  __int64 v36; // rbp
  unsigned int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rbx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rax
  _QWORD *v52; // rax
  unsigned int v53; // [rsp+0h] [rbp-108h]
  __int64 v54; // [rsp+0h] [rbp-108h]
  unsigned __int8 v55; // [rsp+Fh] [rbp-F9h]
  __int64 v56; // [rsp+18h] [rbp-F0h] BYREF
  __int64 v57; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v58; // [rsp+28h] [rbp-E0h]
  char v59; // [rsp+2Ch] [rbp-DCh]
  char v60; // [rsp+30h] [rbp-D8h]
  _QWORD v61[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v63; // [rsp+60h] [rbp-A8h] BYREF
  char v64; // [rsp+B8h] [rbp-50h]
  unsigned int v65; // [rsp+C0h] [rbp-48h]
  char v66; // [rsp+C4h] [rbp-44h]

  if ( !a2 )
    return 1;
  result = 1;
  v7 = a3;
  v8 = (unsigned __int64)a2;
  v9 = *a2 >> 14;
  if ( (v9 & 0x10) == 0 )
  {
    if ( (v9 & 8) != 0 )
    {
LABEL_4:
      a1[12] = v8;
      result = 0;
      *((_BYTE *)a1 + 107) = v7;
      return result;
    }
    v11 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, *(double *)a4.m128_u64);
    v12 = *(__int64 **)(*a1 + 760);
    v13 = sub_1AE6910((unsigned __int64)a2);
    v14 = sub_1AF55B0(v12, v11, v13);
    if ( v14 == 1 )
      return 1;
    v8 = v14 & 0xFFFFFFFFFFFFFFFELL;
    v17 = v14 & 0xFFFFFFFFFFFFFFFELL;
    sub_C3EB00((__int64)&v57, v14 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(*a1 + 248), nullptr, v15, v16);
    LOBYTE(v22) = sub_F65320(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL), v17, v18, v19, v20, v21);
    v24 = v22;
    if ( v60 )
    {
      if ( v59 )
      {
        v27 = 0;
        v17 = 0;
      }
      else
      {
        LOBYTE(v35) = sub_1AE7A00(&v57);
        v27 = a3 ^ v35;
        LOBYTE(v17) = (_BYTE)a3 == (unsigned __int8)v35;
      }
      if ( v58 <= 0x40 )
      {
        v25 = v57 == 0;
      }
      else
      {
        v55 = v27;
        v53 = v58;
        v29 = sub_2206780(&v57);
        v27 = v55;
        v17 = (unsigned __int8)v17;
        v25 = v53 == v29;
      }
      v26 = a1[11];
      if ( *((_BYTE *)a1 + 105) )
      {
LABEL_25:
        if ( !v26 )
        {
          v28 = *((_BYTE *)a1 + 104);
          goto LABEL_14;
        }
        if ( v25 )
          goto LABEL_29;
        if ( *((_BYTE *)a1 + 104) )
        {
          if ( !(_BYTE)v27 )
          {
LABEL_11:
            if ( (_BYTE)v24 == 1 || !(_BYTE)a3 )
            {
              v28 = 1;
              goto LABEL_14;
            }
          }
        }
        else if ( !(_BYTE)v17 )
        {
LABEL_39:
          if ( (_BYTE)v24 || (_BYTE)a3 )
          {
            v28 = 0;
            goto LABEL_14;
          }
        }
LABEL_29:
        v30 = (__int64 *)(*a1 + 8);
        v31 = sub_C00A40(v8, v17, v26, v23, v27);
        sub_168B9F0((__int64)v61, v30, v31, 0x11BEu, 0);
        v32 = (__int64)(a1 + 8);
        v33 = sub_15993D0((__int64)v61, a1 + 8);
        v34 = v33;
        if ( *(_BYTE *)(v33 + 120) )
        {
          v32 = *((unsigned __int8 *)a1 + 104);
          sub_AE9DF0((unsigned __int8 **)(v33 + 32), v32, 2u);
        }
        else if ( *(_BYTE *)(v33 + 132) )
        {
          v40 = sub_168B9E0((_QWORD *)v33);
          v44 = *(_QWORD *)(v34 + 16);
          if ( v44 )
          {
            v54 = v40;
            v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v44 + 32LL))(v44);
            v40 = v54;
          }
          v56 = v44;
          v45 = sub_1587BC0(v40, &v56, v40, v41, v42, v43);
          v32 = *((unsigned __int8 *)a1 + 104);
          sub_AE9DF0((unsigned __int8 **)(*v45 + 32LL * *(unsigned int *)(v34 + 128) + 8), v32, 2u);
        }
        v56 = sub_EEC8C0(v8, v32, *(double *)a4.m128_u64);
        sub_1587DB0(v34, &v56);
        sub_15F7200(v61);
        sub_168B9F0((__int64)v61, (__int64 *)(*a1 + 8), *((_DWORD *)a1 + 7), 0x1820u, 0);
        if ( v64 )
        {
          sub_AE9DF0(&v63, *((unsigned __int8 *)a1 + 104), 2u);
        }
        else if ( v66 )
        {
          v48 = sub_168B9E0(v61);
          v51 = v62;
          if ( v62 )
            v51 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 32LL))(v62);
          v56 = v51;
          v52 = sub_1587BC0(v48, &v56, v46, v47, v49, v50);
          sub_AE9DF0((unsigned __int8 **)(*v52 + 32LL * v65 + 8), *((unsigned __int8 *)a1 + 104), 2u);
        }
        sub_15884C0((__int64)v61, a1 + 6);
        sub_15F7200(v61);
        sub_98E4B0((__int64)&v57);
        return 1;
      }
      v23 = 1;
      if ( (_BYTE)v17 )
      {
LABEL_24:
        *((_BYTE *)a1 + 104) = v23;
        *((_BYTE *)a1 + 105) = 1;
        goto LABEL_25;
      }
    }
    else
    {
      v25 = *((_BYTE *)a1 + 105);
      v26 = a1[11];
      v27 = 0;
      if ( v25 )
      {
        v28 = *((_BYTE *)a1 + 104);
        if ( !v26 )
        {
LABEL_14:
          if ( (_BYTE)a3 == v28 )
          {
            v36 = *a1;
            v37 = sub_C00A40(v8, v17, v26, v23, v27);
            v38 = v36;
            v7 = a3 ^ 1;
            v8 = sub_19249E0(v38, v37, 7u, v8, 0, v39, a4, a5) & 0xFFFFFFFFFFFFFFFELL;
          }
          sub_98E4B0((__int64)&v57);
          goto LABEL_4;
        }
        if ( v28 )
          goto LABEL_11;
        goto LABEL_39;
      }
    }
    v17 = 0;
    v23 = (a3 | v24) ^ 1u;
    goto LABEL_24;
  }
  return result;
}
