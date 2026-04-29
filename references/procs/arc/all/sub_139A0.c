__int64 __fastcall sub_139A0(__int64 a1, unsigned __int8 *a2)
{
  __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rdx
  const char *v7; // rsi
  __int64 v8; // rax
  __int64 v10; // r12
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int16 v14; // ax
  __int64 v15; // rsi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  const char *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  const char *v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  const char *v31; // rsi
  __int64 v32; // rax
  const char *v33; // rsi
  __int64 v34; // rax
  const char *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  const char *v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rcx
  unsigned __int8 v41; // dl
  __int64 v42; // rax
  __int64 v43; // r14
  __int64 v44; // rbp
  __int64 v45; // rax
  const char *v46; // rsi
  int v47; // r12d
  __int64 v48; // rax
  const char *v49; // rsi
  __int16 v50; // ax
  char v51; // dl
  unsigned __int8 v52; // al
  int v53; // eax
  __int64 v54; // [rsp+0h] [rbp-58h] BYREF
  __int128 v55; // [rsp+8h] [rbp-50h] BYREF
  __int64 v56; // [rsp+18h] [rbp-40h]
  int v57; // [rsp+20h] [rbp-38h]
  unsigned __int64 v58; // [rsp+28h] [rbp-30h]

  v58 = __readfsqword(0x28u);
  switch ( a2[1] )
  {
    case 1u:
      v5 = *((unsigned __int16 *)a2 + 3);
      v6 = *(_QWORD *)(a1 + 624);
      v7 = "<bad register>";
      v8 = v5;
      if ( (int)v5 >= *(_DWORD *)(v6 + 64) )
        goto LABEL_10;
      goto LABEL_9;
    case 2u:
      v10 = *((_QWORD *)a2 + 2) + 16LL * *(_QWORD *)(a1 + 224);
      if ( (*(_BYTE *)(a1 + 253) & 2) != 0 )
      {
        v39 = *(_QWORD *)(a1 + 616);
        v40 = *((_QWORD *)a2 + 2) + 16LL * *(_QWORD *)(a1 + 224);
        v54 = 0;
        v56 = 0;
        v57 = 0;
        v55 = 0;
        if ( (unsigned __int8)sub_DE80(v39, (_QWORD *)(a1 + 224), a2, v40, &v55, 0) )
        {
          v41 = a2[5];
          v42 = *(_QWORD *)a1;
          BYTE4(v54) = 8;
          BYTE5(v54) = v41;
          (*(void (__fastcall **)(__int64, __int64))(v42 + 32))(a1, 61);
          v43 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)(a1 + 16) = v10;
          *(_DWORD *)(a1 + 144) |= 0x20000u;
          v44 = *(_QWORD *)(a1 + 720);
          *(_QWORD *)(a1 + 720) = get_flags_ex(v10, 0);
          (*(void (__fastcall **)(__int64, __int64 *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, &v54, 0);
          *(_QWORD *)(a1 + 16) = v43;
          *(_QWORD *)(a1 + 720) = v44;
          return 1;
        }
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
      v11 = *(_QWORD *)a1;
      v12 = *((_QWORD *)a2 + 2);
      if ( ((*(_WORD *)(a1 + 248) - 2) & 0xFFFD) != 0 )
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64, __int64))(v11 + 120))(
                a1,
                a2,
                v10,
                v12) )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(a1, *((unsigned int *)a2 + 4), 16);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
          remember_problem(2, *(_QWORD *)(a1 + 240), 0);
        }
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(v11 + 104))(a1, (unsigned int)v12, 16);
      }
      if ( *((_QWORD *)a2 + 3) )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
        v13 = *((_QWORD *)a2 + 3);
        v14 = *(_WORD *)(a1 + 248);
        v15 = (unsigned int)v13;
        if ( v14 == 139 )
          goto LABEL_70;
        if ( v14 > 0x8Bu )
        {
          if ( v14 != 140 && (unsigned __int16)(v14 - 308) > 1u )
            goto LABEL_23;
        }
        else
        {
          if ( v14 == 3 )
            goto LABEL_22;
          if ( v14 != 138 )
          {
            if ( v14 != 1 )
            {
LABEL_23:
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, v15, 16);
              (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
              (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 104LL))(
                a1,
                *((unsigned int *)a2 + 6),
                16);
              goto LABEL_24;
            }
LABEL_22:
            v16 = *(_DWORD *)(a1 + 252);
            if ( (~(_BYTE)v16 & 0x18) != 0 )
              goto LABEL_23;
            v53 = v16 & 6;
            if ( v53 != 4 )
            {
              if ( v53 )
                goto LABEL_23;
              goto LABEL_97;
            }
LABEL_70:
            v15 = (unsigned int)(2 * v13);
            goto LABEL_23;
          }
        }
LABEL_97:
        v15 = (unsigned int)(4 * v13);
        goto LABEL_23;
      }
LABEL_24:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 93);
      return 1;
    case 3u:
      v17 = *((unsigned __int16 *)a2 + 3);
      if ( (unsigned int)(v17 - 68) > 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
        v18 = *(_QWORD *)(a1 + 624);
        v19 = *((unsigned __int16 *)a2 + 3);
        v20 = "<bad register>";
        if ( (int)v19 < *(_DWORD *)(v18 + 64) )
          v20 = *(const char **)(*(_QWORD *)(v18 + 56) + 8 * v19);
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v20, 33);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        goto LABEL_29;
      }
      if ( (unsigned int)(v17 - 70) > 1 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 91);
LABEL_29:
        v21 = *(_QWORD *)(a1 + 624);
        v22 = (char)a2[32];
        if ( (int)v22 >= *(_DWORD *)(v21 + 64) )
          (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "<bad register>", 33);
        else
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 56LL))(
            a1,
            *(_QWORD *)(*(_QWORD *)(v21 + 56) + 8 * v22),
            33);
        goto LABEL_24;
      }
      v6 = *(_QWORD *)(a1 + 624);
      v8 = (char)a2[32];
      if ( *(_DWORD *)(v6 + 64) > (int)v8 )
      {
LABEL_9:
        v7 = *(const char **)(*(_QWORD *)(v6 + 56) + 8 * v8);
LABEL_10:
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v7, 33);
      }
      else
      {
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, "<bad register>", 33);
      }
      return 1;
    case 4u:
      v23 = *((unsigned __int16 *)a2 + 3);
      v24 = *(_QWORD *)a1;
      if ( (unsigned int)(v23 - 68) > 3 )
      {
        (*(void (__fastcall **)(__int64, __int64))(v24 + 32))(a1, 91);
        if ( a2[32] )
        {
          if ( *((_QWORD *)a2 + 2) )
          {
LABEL_34:
            v25 = 0;
            goto LABEL_35;
          }
        }
        else
        {
          v36 = *(_QWORD *)(a1 + 624);
          v37 = *((unsigned __int16 *)a2 + 3);
          v38 = "<bad register>";
          if ( (int)v37 < *(_DWORD *)(v36 + 64) )
            v38 = *(const char **)(*(_QWORD *)(v36 + 56) + 8 * v37);
          (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v38, 33);
          if ( *((_QWORD *)a2 + 2) )
            goto LABEL_68;
        }
        if ( !(unsigned __int8)is_off(*(_QWORD *)(a1 + 720), *a2)
          && !(unsigned __int8)is_stkvar(*(_QWORD *)(a1 + 720), *a2)
          && !(unsigned __int8)is_enum(*(_QWORD *)(a1 + 720), *a2) )
        {
          v51 = is_stroff(*(_QWORD *)(a1 + 720), *a2);
          v52 = a2[32];
          if ( !v51 )
          {
            if ( !v52 )
              goto LABEL_24;
            v25 = 0;
            goto LABEL_37;
          }
          if ( v52 )
            goto LABEL_34;
          goto LABEL_69;
        }
LABEL_68:
        if ( a2[32] )
          goto LABEL_34;
LABEL_69:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
        goto LABEL_34;
      }
      if ( (unsigned int)(v23 - 70) <= 1 )
      {
        if ( a2[32] )
        {
          (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(v24 + 24))(a1, a2, 196);
          if ( !a2[32] )
            return 1;
          v25 = -1;
          goto LABEL_36;
        }
        v25 = -1;
      }
      else
      {
        v25 = 1;
        (*(void (__fastcall **)(__int64, __int64))(v24 + 32))(a1, 91);
        if ( a2[32] )
        {
LABEL_35:
          (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 196);
          if ( !a2[32] )
            goto LABEL_24;
          goto LABEL_36;
        }
        v24 = *(_QWORD *)a1;
      }
      (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(v24 + 24))(a1, a2, 196);
      if ( !a2[32] )
        goto LABEL_40;
LABEL_36:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
      if ( !a2[32] )
        goto LABEL_40;
LABEL_37:
      v26 = *(_QWORD *)(a1 + 624);
      v27 = *((unsigned __int16 *)a2 + 3);
      v28 = "<bad register>";
      if ( (int)v27 < *(_DWORD *)(v26 + 64) )
        v28 = *(const char **)(*(_QWORD *)(v26 + 56) + 8 * v27);
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v28, 33);
LABEL_40:
      if ( v25 != -1 )
        goto LABEL_24;
      return 1;
    case 5u:
      if ( *a2 != 1
        || (unsigned __int8)is_defarg(*(_QWORD *)(a1 + 720), 1)
        || (v50 = *(_WORD *)(a1 + 248), ((v50 - 2) & 0xFFFD) != 0) && v50 != 141 )
      {
        (*(void (__fastcall **)(__int64, unsigned __int8 *, _QWORD))(*(_QWORD *)a1 + 24LL))(a1, a2, 0);
      }
      else
      {
        sub_138F0(a1, *(_QWORD *)(a1 + 616) + 5120LL, (__int64)a2);
      }
      return 1;
    case 7u:
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 120LL))(
              a1,
              a2,
              *((_QWORD *)a2 + 2) + 16LL * *(_QWORD *)(a1 + 224)) )
      {
        (*(void (__fastcall **)(__int64, unsigned __int8 *, __int64))(*(_QWORD *)a1 + 24LL))(a1, a2, 201);
        remember_problem(2, *(_QWORD *)(a1 + 240), 0);
      }
      return 1;
    case 8u:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 123);
      v4 = *((_QWORD *)a2 + 3);
      if ( (v4 & 0xF) == 0xF )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 64LL))(a1, 18);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 104LL))(a1, 15, 16);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 18);
      }
      else
      {
        if ( (v4 & 0xF) == 0 )
        {
          if ( (v4 & 0x10) == 0 )
          {
            if ( (v4 & 0x20) == 0 )
            {
              if ( (v4 & 0x40) == 0 )
                goto LABEL_63;
              goto LABEL_58;
            }
            goto LABEL_54;
          }
          goto LABEL_49;
        }
        v45 = *(_QWORD *)(a1 + 624);
        v46 = "<bad register>";
        if ( *(int *)(v45 + 64) > 13 )
          v46 = *(const char **)(*(_QWORD *)(v45 + 56) + 104LL);
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v46, 33);
        if ( (v4 & 0xE) != 0 )
        {
          v47 = (v4 & 0xF) + 12;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 45);
          v48 = *(_QWORD *)(a1 + 624);
          v49 = "<bad register>";
          if ( v47 < *(_DWORD *)(v48 + 64) )
            v49 = *(const char **)(*(_QWORD *)(v48 + 56) + 8LL * v47);
          (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v49, 33);
        }
      }
      v29 = *((_QWORD *)a2 + 3);
      if ( (v29 & 0x10) == 0 )
        goto LABEL_52;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
LABEL_49:
      v30 = *(_QWORD *)(a1 + 624);
      v31 = "<bad register>";
      if ( *(int *)(v30 + 64) > 27 )
        v31 = *(const char **)(*(_QWORD *)(v30 + 56) + 216LL);
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v31, 33);
      v29 = *((_QWORD *)a2 + 3);
LABEL_52:
      if ( (v29 & 0x20) == 0 )
      {
        if ( (v29 & 0x40) == 0 )
          goto LABEL_63;
        goto LABEL_57;
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
LABEL_54:
      v32 = *(_QWORD *)(a1 + 624);
      v33 = "<bad register>";
      if ( *(int *)(v32 + 64) > 31 )
        v33 = *(const char **)(*(_QWORD *)(v32 + 56) + 248LL);
      (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v33, 33);
      if ( (a2[24] & 0x40) != 0 )
      {
LABEL_57:
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 44);
LABEL_58:
        v34 = *(_QWORD *)(a1 + 624);
        v35 = "<bad register>";
        if ( *(int *)(v34 + 64) > 63 )
          v35 = *(const char **)(*(_QWORD *)(v34 + 56) + 504LL);
        (*(void (__fastcall **)(__int64, const char *, __int64))(*(_QWORD *)a1 + 56LL))(a1, v35, 33);
      }
LABEL_63:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 125);
      return 1;
    default:
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, 63);
      return 1;
  }
}
