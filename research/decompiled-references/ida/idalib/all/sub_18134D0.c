__int64 __fastcall sub_18134D0(__int64 a1, __int64 *a2, __int64 a3, unsigned __int64 a4, unsigned int a5, char a6)
{
  unsigned __int64 v6; // r15
  __int64 v8; // rbx
  __int64 result; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // r14
  unsigned int v12; // r15d
  unsigned __int64 v13; // r13
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  void *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ecx
  bool v29; // al
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int64 v36; // rbp
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  unsigned __int64 v40; // rbp
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r13
  void *v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // [rsp+8h] [rbp-120h]
  __int64 v49; // [rsp+10h] [rbp-118h]
  __int64 v50; // [rsp+28h] [rbp-100h]
  __int64 v51; // [rsp+28h] [rbp-100h]
  void *v52; // [rsp+30h] [rbp-F8h]
  unsigned int v54; // [rsp+3Ch] [rbp-ECh]
  unsigned int v55; // [rsp+40h] [rbp-E8h] BYREF
  unsigned int v56; // [rsp+44h] [rbp-E4h] BYREF
  __int64 *v57; // [rsp+48h] [rbp-E0h] BYREF
  void *v58; // [rsp+50h] [rbp-D8h] BYREF
  unsigned int v59; // [rsp+58h] [rbp-D0h]
  _BYTE v60[200]; // [rsp+60h] [rbp-C8h] BYREF

  v6 = a4;
  v8 = a3;
  result = *(unsigned __int16 *)(a3 + 56);
  v48 = (__int64)a2;
  if ( a5 == (_DWORD)result )
  {
    if ( (*((_BYTE *)a2 + 28) & 0x7Fu) - 35 > 3 || sub_B979F0(a2) )
    {
      sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x1D0Fu, 0);
      a2 = (__int64 *)v8;
      sub_15DD120((__int64)v60, v8);
      sub_15F7200(v60);
      result = *(unsigned __int16 *)(v8 + 56);
    }
    else
    {
      v31 = *(_QWORD *)(sub_B8C1B0((__int64)(a2 + 9)) + 16);
      if ( (v31 & 4) != 0 )
        v36 = *(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF8LL);
      else
        v36 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v36 )
        v36 -= 64LL;
      if ( !(unsigned __int8)sub_1804B40(v36, (__int64)a2, v32, v33, v34, v35)
        && !(unsigned __int8)sub_18043C0(v36, (__int64)a2, a3, a4, v37, v38) )
      {
        sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x1D0Eu, 0);
        a2 = (__int64 *)v8;
        v49 = sub_15DD120((__int64)v60, v8);
        v39 = *(_QWORD *)(sub_B8C1B0(v48 + 72) + 16);
        if ( (v39 & 4) != 0 )
          v40 = *(_QWORD *)(v39 & 0xFFFFFFFFFFFFFFF8LL);
        else
          v40 = v39 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v40 )
          v40 -= 64LL;
        if ( *(_BYTE *)(v49 + 120) )
        {
          a2 = (__int64 *)v40;
          sub_AE9DF0((unsigned __int8 **)(v49 + 32), v40, 0xAu);
        }
        else if ( *(_BYTE *)(v49 + 132) )
        {
          v45 = sub_168B9E0((_QWORD *)v49);
          v46 = *(void **)(v49 + 16);
          if ( v46 )
            v46 = (void *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v46 + 32LL))(*(_QWORD *)(v49 + 16));
          v58 = v46;
          v47 = sub_1587BC0(v45, (__int64 *)&v58, v41, v42, v43, v44);
          a2 = (__int64 *)v40;
          sub_AE9DF0((unsigned __int8 **)(*v47 + 32LL * *(unsigned int *)(v49 + 128) + 8), v40, 0xAu);
        }
        sub_15F7200(v60);
      }
      result = *(unsigned __int16 *)(v8 + 56);
    }
  }
  if ( a5 < (unsigned int)result )
  {
    v10 = a5;
    v11 = v6;
    v12 = v10;
    while ( 1 )
    {
      v13 = *(_QWORD *)(v8 + 8LL * v12 + 80) & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_DWORD *)v13 & 0x10000) != 0 )
        goto LABEL_10;
      if ( (*(_WORD *)v13 & 0x1FF) == 9 )
      {
        v14 = *(_DWORD *)(v13 + 16);
        if ( v14
          && ((*(_BYTE *)(v13 + 2) & 0x38) != 0
           || v14 * ((*(_WORD *)(v13 + 2) >> 6) & 7) != 1
           || *(_BYTE *)(v13 + 4LL * *(unsigned int *)(v13 + 4) + 20) != 42) )
        {
          sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x1D0Du, 0);
          a2 = (__int64 *)v8;
          sub_15DD120((__int64)v60, v8);
LABEL_16:
          sub_15F7200(v60);
          goto LABEL_10;
        }
        goto LABEL_10;
      }
      v57 = *(__int64 **)(v13 + 8);
      if ( (*(_WORD *)v13 & 0x1FF) == 4 && *(_BYTE *)(v13 + 2) >> 3 == 4 )
      {
        a3 = *(_QWORD *)(v13 + 16);
        if ( (*(_WORD *)a3 & 0x1FF) == 0x47 )
        {
          v51 = *(_QWORD *)(v13 + 16);
          if ( (unsigned __int8)sub_B72F20(*(_QWORD *)(a3 + 16)) )
          {
            a3 = v51;
            v57 = *(__int64 **)(*(_QWORD *)(v51 + 16) + 48LL);
          }
        }
      }
      if ( !sub_1804350((__int64)v57, (__int64)a2, a3, a4)
        && a6
        && (*(_BYTE *)(v48 + 28) & 0x7Fu) - 34 <= 5
        && (*(_WORD *)v13 & 0x1FF) == 0x34 )
      {
        break;
      }
LABEL_39:
      a2 = v57;
      if ( !(unsigned __int8)sub_1809200(a1, (__int64)v57) )
      {
        a2 = (__int64 *)v13;
        if ( !(unsigned __int8)sub_1809330(a1, v13) )
        {
          sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0x1D0Au, 0);
          v30 = sub_15DD120((__int64)v60, v8);
          a2 = (__int64 *)&v57;
          sub_1605D30(v30, (__int64 *)&v57);
          goto LABEL_16;
        }
      }
LABEL_10:
      v15 = *(unsigned int *)(v11 + 8);
      a4 = *(unsigned int *)(v11 + 12);
      if ( v15 + 1 > a4 )
      {
        a2 = (__int64 *)(v11 + 16);
        sub_2237220(v11, v11 + 16, v15 + 1, 8);
        v15 = *(unsigned int *)(v11 + 8);
      }
      a3 = *(_QWORD *)v11;
      ++v12;
      *(_QWORD *)(*(_QWORD *)v11 + 8 * v15) = v13;
      ++*(_DWORD *)(v11 + 8);
LABEL_13:
      result = *(unsigned __int16 *)(v8 + 56);
      if ( (unsigned int)result <= v12 )
        return result;
    }
    v18 = sub_B76070(v48, (__int64)a2, v16, v17);
    v19 = *(unsigned int *)(v13 + 24);
    v20 = *(void **)(v13 + 16);
    v55 = v18;
    v21 = v19;
    v22 = (unsigned __int64)(v19 + 63) >> 6;
    if ( v22 > 1 )
    {
      sub_2205610(&v58, v21, v22, v20);
    }
    else
    {
      v59 = v21;
      if ( (unsigned int)v21 <= 0x40 )
      {
        v58 = v20;
        v23 = (unsigned int)(v21 - 1);
        goto LABEL_26;
      }
      sub_2205470(&v58, v20, 0);
    }
    LODWORD(v21) = v59;
    v23 = v59 - 1;
    if ( v59 > 0x40 )
    {
      if ( ((1LL << ((unsigned __int8)v59 - 1)) & *((_QWORD *)v58 + ((unsigned int)v23 >> 6))) != 0 )
        goto LABEL_27;
      v54 = v59;
      v52 = *(void **)v58;
      v50 = *(_QWORD *)v58 - 1LL;
      v27 = sub_2206780(&v58);
      LODWORD(v21) = v54;
      v24 = v52;
      v28 = v50;
      v29 = v54 == v27;
LABEL_34:
      if ( v29 || v55 < (unsigned __int64)v24 )
      {
LABEL_27:
        ++v12;
        sub_168B9F0((__int64)v60, (__int64 *)(a1 + 8), *(_DWORD *)(v8 + 24), 0xC55u, 0);
        v25 = sub_15DD120((__int64)v60, v8);
        v56 = v12;
        v26 = sub_16CF160(v25, &v56);
        a2 = (__int64 *)&v55;
        sub_1588370(v26, &v55);
        sub_15F7200(v60);
        if ( v59 > 0x40 && v58 )
          operator delete[](v58);
        goto LABEL_13;
      }
      v57 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(v48 + 120) + 8LL * v28) + 48LL);
      if ( (unsigned int)v21 > 0x40 && v58 )
        operator delete[](v58);
      goto LABEL_39;
    }
LABEL_26:
    v24 = v58;
    if ( _bittest64((const __int64 *)&v24, v23) )
      goto LABEL_27;
    v28 = (_DWORD)v58 - 1;
    v29 = v58 == nullptr;
    goto LABEL_34;
  }
  return result;
}
