__int64 __fastcall sub_1888F20(__int64 a1, __int64 a2, __int64 a3, char a4, __m128 *a5, __int64 a6)
{
  __int64 v7; // rcx
  unsigned int v9; // ebx
  __int64 v10; // r12
  __int64 v12; // kr00_8
  __int64 v13; // kr08_8
  __int64 result; // rax
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // r15
  __int64 *v25; // rax
  _QWORD *v26; // rax
  unsigned __int64 v27; // r12
  __int64 v28; // rsi
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int8 v34; // r14
  unsigned __int64 v35; // r15
  unsigned __int64 v36; // rax
  __int64 v37; // rdi
  _QWORD *v38; // rax
  char v39; // r8
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // [rsp-10h] [rbp-68h]
  __int64 v57; // [rsp+10h] [rbp-48h]

  v7 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 232) + 1LL);
  if ( (v7 & 0x10) == 0 )
    return 0;
  v9 = a3;
  v10 = a2;
  v12 = a3;
  v13 = a3;
  a3 = (unsigned int)a3;
  switch ( v12 )
  {
    case 0LL:
      a2 = *(_QWORD *)(a2 + 104);
      v15 = (__int64 *)(a2 + 96);
      if ( !a6 )
      {
        sub_7052B0(v15, a2, (unsigned int)a3, v7, (__int64)a5, 0);
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 128) + 8LL) & 4) == 0 )
          return 0;
        if ( *(_BYTE *)(v10 + 73) >> 5 == 2 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104), v47, v48, v49, v50);
          if ( *(char *)(*(_QWORD *)(v10 + 128) + 2LL) >= 0 )
          {
            sub_7052B0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104), v51, v52, v53, v54);
            if ( (*(_BYTE *)(*(_QWORD *)(v10 + 128) + 2LL) & 0x10) != 0 )
              return *(_BYTE *)(sub_B8C5D0(v10) + 1) >> 7;
          }
        }
        return 1;
      }
      if ( *(_BYTE *)(v10 + 73) >> 5 == 2 )
      {
        sub_7052B0(v15, a2, (unsigned int)a3, v7, (__int64)a5, a6);
        if ( *(char *)(*(_QWORD *)(v10 + 128) + 2LL) >= 0 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v10 + 104) + 96LL), *(_QWORD *)(v10 + 104), v43, v44, v45, v46);
          return ((*(_BYTE *)(*(_QWORD *)(v10 + 128) + 2LL) >> 4) ^ 1) & 1;
        }
        return 1;
      }
LABEL_9:
      sub_7052B0(v15, a2, a3, v7, (__int64)a5, a6);
      v19 = *(unsigned int *)(*(_QWORD *)(v10 + 128) + 20LL);
      if ( (_DWORD)v19 )
        return 0;
LABEL_10:
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) != 0 )
        return 1;
      v24 = sub_1845530(v10, a2, v16, v17, v19, v18);
      v57 = v20;
      if ( v24 == v20 )
      {
LABEL_22:
        if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) == 0 )
        {
          v27 = sub_B7E900(v10, a2, v20, v21, v22, v23);
          if ( v27 )
          {
LABEL_24:
            if ( *(char *)(v27 + 28) < 0 )
              goto LABEL_34;
            if ( v9 )
            {
              v28 = *(_QWORD *)(v27 + 48);
              v41 = sub_A71450(*(_QWORD *)(a1 + 248), v28);
              v34 = v41;
              v35 = v41 & 0xFFFFFFFFFFFFFFF0LL;
              v42 = *(_QWORD *)(*(_QWORD *)(v41 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
              v37 = *(_QWORD *)v42;
              if ( *(_BYTE *)(*(_QWORD *)v42 + 16LL) != 48 )
                goto LABEL_34;
            }
            else
            {
              if ( (*(_BYTE *)(v27 + 68) & 0xC) != 0xC && (*(_BYTE *)(v27 + 68) & 0xC) != 0 )
                goto LABEL_34;
              v28 = *(_QWORD *)(v27 + 48);
              v29 = sub_A71450(*(_QWORD *)(a1 + 248), v28);
              v34 = v29;
              v35 = v29 & 0xFFFFFFFFFFFFFFF0LL;
              v36 = *(_QWORD *)(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
              v37 = *(_QWORD *)v36;
              if ( *(_BYTE *)(*(_QWORD *)v36 + 16LL) != 48 )
                return 0;
            }
            v38 = sub_F60F10(v37, v28, v30, v31, v32, v33);
            v39 = 0;
            if ( a4 )
              v39 = ((*(_BYTE *)(v27 + 68) >> 1) ^ 1) & 1;
            if ( !(unsigned __int8)sub_1888CF0(
                                     a1,
                                     (__int64)v38,
                                     v9,
                                     (v34 | (unsigned __int8)*(_DWORD *)(v35 + 8)) & 7,
                                     v39,
                                     nullptr,
                                     0) )
              return 0;
LABEL_34:
            while ( 1 )
            {
              v40 = *(_QWORD *)(v27 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              v27 = v40;
              if ( !v40 )
                break;
              if ( (*(_BYTE *)(v40 + 28) & 0x7Fu) - 49 <= 2 )
                goto LABEL_24;
            }
          }
        }
        return 1;
      }
      while ( 1 )
      {
        v25 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(sub_1839D10(*(__int64 **)(v24 + 16), a2, v20, v21, v22)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(*v25 + 16) == 48 )
        {
          v26 = sub_F60F10(*v25, a2, v20, v21, v22, v23);
          result = sub_1888CF0(a1, (__int64)v26, v9, 0, a4, a5, a6);
          a2 = v55;
          if ( !(_BYTE)result )
            return result;
        }
        v24 += 24LL;
        if ( v24 == v57 )
          goto LABEL_22;
      }
    case 3LL:
    case 4LL:
      if ( (v7 & 0x20) == 0 )
        return 0;
      if ( (unsigned __int8)sub_BA4170(a2) )
        goto LABEL_10;
      return (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) != 0;
    case 5LL:
      sub_7052B0(
        (__int64 *)(*(_QWORD *)(a2 + 104) + 96LL),
        *(_QWORD *)(a2 + 104),
        (unsigned int)a3,
        v7,
        (__int64)a5,
        a6);
      return (*(_BYTE *)(*(_QWORD *)(a2 + 128) + 8LL) & 0x10) != 0 && *(char *)(sub_B8C5D0(a2) + 1) < 0;
    case 6LL:
      return 0;
    default:
      a3 = v13;
      if ( *(_BYTE *)(a2 + 73) >> 5 == 2 )
        return 1;
      a2 = *(_QWORD *)(a2 + 104);
      v15 = (__int64 *)(a2 + 96);
      goto LABEL_9;
  }
}
