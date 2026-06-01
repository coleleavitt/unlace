__int64 __fastcall sub_C0D200(unsigned __int16 *a1, __int64 *a2, unsigned int a3, _QWORD *a4, unsigned __int64 a5)
{
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r13
  _QWORD *v26; // rax
  unsigned __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // r13
  __int64 v32; // r14
  unsigned int *v33; // rdi
  __int64 v34; // rax
  unsigned int v35; // ebp
  __int64 *v36; // rsi
  _QWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // r14
  int v43; // r13d
  __int64 v44; // rdx
  unsigned __int64 v45; // r13
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // r11
  unsigned __int8 v52; // [rsp+8h] [rbp-A0h]
  unsigned int v53; // [rsp+8h] [rbp-A0h]
  unsigned int v54; // [rsp+14h] [rbp-94h]
  unsigned int v55; // [rsp+14h] [rbp-94h]
  unsigned int v56; // [rsp+14h] [rbp-94h]
  __int64 v57; // [rsp+18h] [rbp-90h]
  void *v58; // [rsp+20h] [rbp-88h] BYREF
  __int64 v59; // [rsp+28h] [rbp-80h]
  unsigned int v60; // [rsp+30h] [rbp-78h] BYREF
  char v61; // [rsp+34h] [rbp-74h]

  v8 = *a1;
  LOWORD(v8) = v8 & 0x1FF;
  if ( !(_BYTE)a3 )
  {
    LOWORD(v8) = (v8 + 508) & 0x1FF;
    switch ( v8 )
    {
      case 0LL:
        if ( *((_BYTE *)a1 + 2) >> 3 != 12 )
          goto LABEL_23;
        goto LABEL_16;
      case 4LL:
      case 56LL:
      case 57LL:
        goto LABEL_16;
      case 5LL:
      case 33LL:
      case 41LL:
      case 50LL:
        return 1;
      case 16LL:
        return sub_C0D200(*((_QWORD *)a1 + 3), a2, 0);
      case 17LL:
        v17 = 0x800000020LL;
        if ( (*(_DWORD *)a1 & 0x8000) != 0 )
          goto LABEL_31;
        sub_BF7A50((__int64)&v58, *((_QWORD *)a1 + 4));
        if ( BYTE4(v59) )
        {
          v33 = (unsigned int *)v58;
          v35 = (unsigned int)v58;
          if ( (unsigned int)v59 <= 0x40 )
            goto LABEL_64;
        }
        else
        {
          v33 = (unsigned int *)v58;
          if ( (unsigned int)v59 <= 0x40 )
          {
            LODWORD(v34) = 0;
            if ( (_DWORD)v59 )
              v34 = (__int64)((_QWORD)v58 << (64 - (unsigned __int8)v59)) >> (64 - (unsigned __int8)v59);
            v35 = v34;
LABEL_64:
            v17 = 8LL * v35 + 40;
LABEL_31:
            v11 = *(_QWORD *)((char *)a1 + v17);
            return sub_C0D200(v11, a2, 0);
          }
        }
        v35 = *v33;
        operator delete[](v33);
        goto LABEL_64;
      case 44LL:
        goto LABEL_6;
      case 49LL:
        v27 = *((unsigned __int64 **)a1 + 2);
        if ( (*((_BYTE *)a1 + 1) & 6) != 0 )
        {
          v11 = *v27;
          return sub_C0D200(v11, a2, 0);
        }
        v28 = (__int64)(*((_QWORD *)a1 + 3) - (_QWORD)v27) >> 3;
        if ( (_DWORD)v28 == 1 )
        {
          v11 = *v27;
          if ( *v27 )
          {
            v15 = *((_QWORD *)a1 + 1);
            if ( (*(_BYTE *)(v11 + 1) & 6) == 0
              || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) != 48 )
            {
              v29 = *(_QWORD *)&byte_8[*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL];
              v30 = v29 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v29 | (unsigned __int8)*(_QWORD *)(v11 + 8)) & 7;
              a5 = *(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                 | ((unsigned __int8)v15 | (unsigned __int8)*(_QWORD *)&byte_8[v15 & 0xFFFFFFFFFFFFFFF0LL]) & 7;
              if ( v30 == a5 )
                return sub_C0D200(v11, a2, 0);
            }
          }
          else
          {
            v15 = *((_QWORD *)a1 + 1);
          }
          v16 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                 + 16LL)
              - 2;
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) <= 4u )
            goto LABEL_49;
        }
        else
        {
          v15 = *((_QWORD *)a1 + 1);
          v16 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                             & 0xFFFFFFFFFFFFFFF0LL)
                                                 + 16LL)
              - 2;
          if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
                               - 2) <= 4u )
          {
            if ( (_DWORD)v28 )
            {
LABEL_49:
              v31 = 0;
              v32 = 8LL * (unsigned int)(v28 - 1);
              while ( (unsigned __int8)sub_C0D200(v27[v31 / 8], a2, 0) )
              {
                if ( v32 == v31 )
                  return 1;
                v27 = *((unsigned __int64 **)a1 + 2);
                v31 += 8LL;
              }
              return a3;
            }
            return 1;
          }
        }
        v36 = (__int64 *)(v15 & 0xFFFFFFFFFFFFFFF0LL);
        v37 = (_QWORD *)(*(_QWORD *)(*v36 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v37 + 16LL) == 48 )
        {
          v42 = sub_F60F10(*v37, v36, v28, v16, a5);
          if ( (*(_BYTE *)(v42 + 28) & 0x7Fu) - 59 <= 2
            && (v36 = *(__int64 **)(v42 + 104),
                sub_7052B0(v36 + 12, (__int64)v36, v38, v39, v40, v41),
                v40 = *(unsigned int *)(*(_QWORD *)(v42 + 128) + 16LL),
                (_DWORD)v40) )
          {
            v43 = 0;
            v44 = 0;
            do
            {
              v39 = *((_QWORD *)a1 + 2);
              if ( (unsigned int)v44 < (unsigned int)((*((_QWORD *)a1 + 3) - v39) >> 3) )
              {
                v36 = a2;
                v54 = v40;
                v53 = v44 + 1;
                if ( !(unsigned __int8)sub_C0D200(*(_QWORD *)(v39 + 8 * v44), a2, 0) )
                  return a3;
                v44 = v53;
                v40 = v54;
              }
              ++v43;
            }
            while ( v43 != (_DWORD)v40 );
          }
          else
          {
            v44 = 0;
          }
          v55 = v44;
          v45 = sub_B7E900(v42, (__int64)v36, v44, v39, v40, v41);
          if ( v45 )
          {
            v46 = v55;
LABEL_79:
            if ( *(_BYTE *)(v42 + 73) >> 5 != 2
              || (v50 = *((_QWORD *)a1 + 7)) != 0 && (v50 & 2) != 0 && v45 == (v50 & 0xFFFFFFFFFFFFFFFCLL) )
            {
              if ( (*(_BYTE *)(v45 + 68) & 1) != 0 )
              {
                if ( !*(_QWORD *)(v45 + 40) )
                  goto LABEL_85;
                v47 = *((_QWORD *)a1 + 2);
                if ( (unsigned int)v46 >= (unsigned int)((*((_QWORD *)a1 + 3) - v47) >> 3) )
                  goto LABEL_85;
                v51 = *(_QWORD *)(v47 + 8 * v46);
                v61 &= ~1u;
                v57 = v51;
                v56 = v46 + 1;
                LOWORD(v58) = 0;
                v59 = 0;
                v60 = 0;
                result = sub_C3F220(v51, &v58, a2, 0, 0);
                if ( !(_BYTE)result )
                {
                  if ( a4 )
                    *a4 = v57;
                  if ( v60 > 1 )
                  {
                    sub_A4F8E0((int *)&v60);
                    return 0;
                  }
                  return result;
                }
                if ( v60 > 1 )
                  sub_A4F8E0((int *)&v60);
              }
              else
              {
                v49 = *((_QWORD *)a1 + 2);
                if ( (unsigned int)v46 >= (unsigned int)((*((_QWORD *)a1 + 3) - v49) >> 3) )
                  goto LABEL_85;
                v56 = v46 + 1;
                if ( !(unsigned __int8)sub_C0D200(
                                         *(_QWORD *)(v49 + 8 * v46),
                                         a2,
                                         (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v45 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                                                                  + 8LL)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 16LL)
                                       - 43 <= 1) )
                  return a3;
              }
              v46 = v56;
            }
LABEL_85:
            while ( 1 )
            {
              v48 = *(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v45 = v48;
              if ( !v48 )
                break;
              if ( (*(_BYTE *)(v48 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_79;
            }
          }
        }
        else
        {
LABEL_23:
          if ( !(unsigned __int8)sub_C3D680(a1, a2, 1) )
          {
LABEL_24:
            if ( a4 )
              *a4 = a1;
            return a3;
          }
        }
        return 1;
      case 53LL:
        return sub_C0D200(
                 *(_QWORD *)&a1[4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0)
                              + 16
                              + 4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF)],
                 a2,
                 0);
      case 63LL:
        if ( !(unsigned __int8)sub_C0D200(*((_QWORD *)a1 + 2), a2, 0) )
          return a3;
        return sub_C0D200(*((_QWORD *)a1 + 3), a2, 0);
      case 72LL:
        return sub_C0D200(*((_QWORD *)a1 + 4), a2, 0);
      case 73LL:
        if ( ((**((_DWORD **)a1 + 2) >> 14) & 0xC) != 0 )
          goto LABEL_24;
        if ( (a1[1] & 8) != 0 )
          v11 = *((_QWORD *)a1 + 3);
        else
          v11 = *((_QWORD *)a1 + 4);
        return sub_C0D200(v11, a2, 0);
      case 75LL:
      case 76LL:
      case 77LL:
      case 78LL:
      case 79LL:
      case 80LL:
      case 81LL:
      case 82LL:
      case 83LL:
        v13 = ((unsigned __int8)(a1[1] >> 3) + 124) & 0x7F;
        if ( (unsigned __int8)v13 > 0x3Cu )
          goto LABEL_23;
        v14 = 0x10C0000000010243LL;
        if ( !_bittest64(&v14, v13) )
          goto LABEL_23;
LABEL_16:
        v11 = *((_QWORD *)a1 + 2);
        return sub_C0D200(v11, a2, 0);
      case 107LL:
        v18 = sub_C94CC0(a1);
        return sub_C0D200(v18, a2, 0);
      case 108LL:
        v18 = sub_C94C80(a1);
        return sub_C0D200(v18, a2, 0);
      case 109LL:
      case 110LL:
        v19 = *((_QWORD *)a1 + 2);
        if ( *(char *)(v19 + 82) >= 0 )
          goto LABEL_23;
        v20 = sub_B72690(v19 + 72);
        v25 = v20;
        if ( !v20 )
          BUG();
        sub_7052B0((__int64 *)(*(_QWORD *)(v20 + 40) + 96LL), *(_QWORD *)(v20 + 40), v21, v22, v23, v24);
        if ( (*(_BYTE *)(*(_QWORD *)(v25 + 64) + 5LL) & 0x10) == 0 )
          goto LABEL_23;
        if ( !*((_DWORD *)a1 + 8) )
          return 1;
        v26 = a1 + 20;
        if ( (*a1 & 0x1FF) == 0x72 )
          v26 = a1 + 24;
        return sub_C0D200(*v26, a2, 0);
      default:
        goto LABEL_23;
    }
  }
  if ( (_WORD)v8 == 60 )
    return sub_C0D200(*((_QWORD *)a1 + 2), a2, 1);
  if ( (_WORD)v8 == 48 )
  {
LABEL_6:
    v10 = *((_QWORD *)a1 + 2);
    if ( (v10 & 4) != 0 )
      v11 = *(_QWORD *)((v10 & 0xFFFFFFFFFFFFFFF8LL) + 40);
    else
      v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    return sub_C0D200(v11, a2, 0);
  }
  v61 &= ~1u;
  LOWORD(v58) = 0;
  v59 = 0;
  v60 = 0;
  result = sub_C7F270(a1, &v58, a2, 0);
  if ( !(_BYTE)result || (_BYTE)v58 )
  {
    result = 0;
    if ( a4 )
      *a4 = a1;
  }
  if ( v60 > 1 )
  {
    v52 = result;
    sub_A4F8E0((int *)&v60);
    return v52;
  }
  return result;
}
