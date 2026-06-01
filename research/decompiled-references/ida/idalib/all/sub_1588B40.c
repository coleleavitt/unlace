__int64 *__fastcall sub_1588B40(
        __int64 a1,
        unsigned __int16 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7)
{
  unsigned __int64 v7; // r14
  char v8; // r12
  int v10; // eax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // r13
  char v14; // al
  unsigned int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rdi
  unsigned int v21; // r13d
  __int64 v22; // rbx
  char v23; // al
  __int64 v24; // rax
  __int64 *result; // rax
  _QWORD *v26; // rax
  __int64 v27; // r9
  char *v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  _QWORD *v44; // rax
  __int64 v45; // rsi
  unsigned __int64 v46; // rbx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r15
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // r14
  __int64 v58; // rax
  _QWORD *v59; // rax
  unsigned int v61; // [rsp+1Ch] [rbp-DCh] BYREF
  __int64 v62; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v63; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v64[200]; // [rsp+30h] [rbp-C8h] BYREF

  v7 = (unsigned __int64)a2;
  v8 = a3;
  v10 = *a2;
  v63 = 0;
  LOWORD(v10) = v10 & 0x1FF;
  v61 = 0;
  if ( (_WORD)v10 == 123 )
  {
    v11 = *((_QWORD *)a2 + 3);
    v12 = v11;
    v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v14 = *(_BYTE *)(v13 + 16);
    switch ( v14 )
    {
      case 13:
        if ( (((*(_WORD *)(v13 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          break;
        goto LABEL_14;
      case 47:
        v26 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
                (__int64)a2,
                a3,
                a4,
                a5,
                a6);
        if ( (*((_BYTE *)v26 + 74) & 1) != 0 || (v26[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v28 = (char *)sub_F60F10(v13, (__int64)a2, a3, a4, a5, v27);
          v11 = *((_QWORD *)a2 + 3);
          if ( v28[76] >= 0 )
          {
LABEL_14:
            v12 = *((_QWORD *)a2 + 2);
            break;
          }
          v12 = *((_QWORD *)a2 + 3);
        }
        else
        {
          v11 = *((_QWORD *)a2 + 3);
          v12 = v11;
        }
        break;
      case 10:
        v12 = *((_QWORD *)a2 + 2);
        break;
    }
    v15 = sub_C00A40(v12, (__int64)a2, a3, a4, a5);
    v20 = v11;
    v21 = v15;
    v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v23 = *(_BYTE *)(v22 + 16);
    switch ( v23 )
    {
      case 13:
        if ( (((*(_WORD *)(v22 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          goto LABEL_6;
        break;
      case 47:
        v33 = sub_F60F10(v22, (__int64)a2, v16, v17, v18, v19);
        if ( (*((_BYTE *)v33 + 74) & 1) == 0 && (v33[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
          || *((char *)sub_F60F10(v22, (__int64)a2, v34, v35, v36, v37) + 76) < 0 )
        {
          v20 = *((_QWORD *)a2 + 3);
LABEL_6:
          v61 = 2;
          v63 = sub_EEC8C0(v20, (__int64)a2, a7);
          if ( !v8 )
          {
LABEL_7:
            sub_168B9F0(v64, *(_QWORD *)(a1 + 8) + 8LL, v21, 7503, 0);
            v24 = sub_1588370((__int64)v64, &v61);
            sub_15884C0(v24, &v63);
            result = (__int64 *)sub_15F7200(v64);
LABEL_8:
            if ( *(_BYTE *)(a1 + 16) )
            {
              sub_168B9F0(v64, *(_QWORD *)(a1 + 8) + 8LL, v21, 6359, 0);
              return (__int64 *)sub_15F7200(v64);
            }
            return result;
          }
LABEL_21:
          sub_168B9F0(v64, *(_QWORD *)(a1 + 8) + 8LL, v21, 6441, 0);
          v31 = sub_1588370((__int64)v64, &v61);
          sub_15884C0(v31, &v63);
          return (__int64 *)sub_15F7200(v64);
        }
        break;
      case 10:
        break;
      default:
        goto LABEL_6;
    }
    v20 = *((_QWORD *)a2 + 2);
    goto LABEL_6;
  }
  v29 = (unsigned int)(v10 + 394);
  v21 = 0;
  LOWORD(v29) = (v10 + 394) & 0x1FF;
  if ( (unsigned __int16)v29 <= 1u )
  {
    v38 = (((a2[1] >> 3) & 0x3F) + 39) & 0x3F;
    if ( (unsigned __int8)v38 > 1u && ((((a2[1] >> 3) & 0x3F) + 59) & 0x3Fu) > 1 )
    {
LABEL_20:
      if ( !v8 )
        goto LABEL_7;
      goto LABEL_21;
    }
    if ( !sub_9EC890(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 3) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
            (__int64)a2,
            v38,
            a4,
            a5) )
    {
      v30 = *((_QWORD *)a2 + 3);
      goto LABEL_19;
    }
LABEL_18:
    v30 = *((_QWORD *)a2 + 2);
LABEL_19:
    v21 = sub_C00A40(v30, (__int64)a2, v29, a4, a5);
    v61 = 1;
    v63 = sub_EEC8C0(v30, (__int64)a2, a7);
    goto LABEL_20;
  }
  if ( (_WORD)v10 == 4 )
  {
    if ( *((_BYTE *)a2 + 2) > 0x1Fu )
      goto LABEL_20;
    goto LABEL_18;
  }
  if ( (((_WORD)v10 + 423) & 0x1FFu) <= 4 || (v32 = (unsigned int)(unsigned __int16)v10 - 113, (unsigned int)v32 <= 1) )
  {
    v61 = 3;
    goto LABEL_29;
  }
  if ( (_WORD)v10 == 46 )
  {
    v50 = *((_QWORD *)a2 + 3);
    v61 = 5;
    v21 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a7);
    v63 = sub_EEC8C0((unsigned __int64)a2, (__int64)a2, a7);
    if ( v8 )
      goto LABEL_21;
    if ( !v50 )
      goto LABEL_7;
    goto LABEL_52;
  }
  if ( (((_WORD)v10 + 432) & 0x1FFu) > 8 )
  {
LABEL_29:
    v21 = sub_EEB7E0((unsigned __int64)a2, (__int64)a2, a7);
    v63 = sub_EEC8C0((unsigned __int64)a2, (__int64)a2, a7);
    if ( !v8 )
      goto LABEL_7;
    goto LABEL_21;
  }
  result = (__int64 *)(*((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*result + 16) == 42 )
  {
    if ( (v39 = (__int64 *)(sub_F68450(*result, (__int64)a2, v32, a4, a5) & 0xFFFFFFFFFFFFFFF0LL),
          (v44 = sub_F631C0(*v39, (__int64)a2, v40, v41, v42, v43)) != nullptr)
      && (*((_BYTE *)v44 + 74) & 1) == 0
      || (v45 = *v39,
          v46 = sub_A97D20(a4, *v39),
          a2 = *(unsigned __int16 **)(sub_F68450(
                                        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                                        v45,
                                        v47,
                                        v48,
                                        v49)
                                    & 0xFFFFFFFFFFFFFFF0LL),
          result = (__int64 *)sub_A97D20(a4, (__int64)a2),
          v46 > (unsigned __int64)result) )
    {
      result = (__int64 *)sub_BFB9F0(*(_QWORD *)(v7 + 16));
      if ( (*(_WORD *)result & 0x1FF) == 0x5C )
      {
        result = (__int64 *)sub_C946E0((__int64)result);
        v50 = (__int64)result;
        if ( result )
        {
          v61 = 4;
          v21 = sub_EEB7E0(v7, (__int64)a2, a7);
          v63 = sub_EEC8C0(v7, (__int64)a2, a7);
          if ( v8 )
            goto LABEL_21;
LABEL_52:
          sub_168B9F0(v64, *(_QWORD *)(a1 + 8) + 8LL, v21, 7503, 0);
          v51 = sub_1588370((__int64)v64, &v61);
          v52 = v51;
          if ( *(_BYTE *)(v51 + 120) )
          {
            sub_157E260((unsigned __int8 **)(v51 + 32), v50);
          }
          else if ( *(_BYTE *)(v51 + 132) )
          {
            v57 = sub_168B9E0(v51);
            v58 = *(_QWORD *)(v52 + 16);
            if ( v58 )
              v58 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v58 + 32LL))(*(_QWORD *)(v52 + 16));
            v62 = v58;
            v59 = sub_1587BC0(v57, &v62, v53, v54, v55, v56);
            sub_157E260((unsigned __int8 **)(*v59 + 32LL * *(unsigned int *)(v52 + 128) + 8), v50);
          }
          sub_15884C0(v52, &v63);
          result = (__int64 *)sub_15F7200(v64);
          goto LABEL_8;
        }
      }
    }
  }
  return result;
}
