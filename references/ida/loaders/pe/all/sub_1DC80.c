unsigned __int64 __fastcall sub_1DC80(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // r15
  size_t v8; // r15
  __int64 v9; // r12
  size_t v10; // r8
  __int64 v11; // rsi
  const char *v12; // rsi
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r14
  int v20; // eax
  unsigned int v21; // r15d
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r13
  int v30; // eax
  const char *v31; // rsi
  char v32; // [rsp+0h] [rbp-150h]
  unsigned int v33; // [rsp+38h] [rbp-118h]
  size_t v34; // [rsp+38h] [rbp-118h]
  __int64 v35; // [rsp+40h] [rbp-110h]
  unsigned __int64 v36; // [rsp+40h] [rbp-110h]
  unsigned int v37; // [rsp+40h] [rbp-110h]
  unsigned int v38; // [rsp+4Ch] [rbp-104h] BYREF
  unsigned int v39; // [rsp+54h] [rbp-FCh] BYREF
  unsigned int v40; // [rsp+58h] [rbp-F8h] BYREF
  unsigned int v41; // [rsp+5Ch] [rbp-F4h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-F0h] BYREF
  int v43; // [rsp+64h] [rbp-ECh] BYREF
  __int64 v44; // [rsp+68h] [rbp-E8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-E0h] BYREF
  _DWORD *v46; // [rsp+78h] [rbp-D8h] BYREF
  __int128 v47; // [rsp+80h] [rbp-D0h] BYREF
  void *src; // [rsp+90h] [rbp-C0h] BYREF
  __int128 v49; // [rsp+98h] [rbp-B8h]
  __int64 v50; // [rsp+B0h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-98h]
  unsigned __int64 v52; // [rsp+C0h] [rbp-90h]
  const char *v53; // [rsp+D0h] [rbp-80h] BYREF
  __int128 v54; // [rsp+D8h] [rbp-78h]
  _OWORD v55[2]; // [rsp+F0h] [rbp-60h] BYREF
  _BYTE v56[4]; // [rsp+114h] [rbp-3Ch] BYREF
  unsigned __int64 v57; // [rsp+118h] [rbp-38h]

  v38 = a2;
  v57 = __readfsqword(0x28u);
  memset(v55, 0, 28);
  v44 = 0;
  v2 = *(_QWORD *)qword_44A20;
  v39 = 0;
  v40 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(v2 + 48))(qword_44A20) )
  {
    sub_A660((__int64)"%s: invalid token.", "display_method");
    return v57 - __readfsqword(0x28u);
  }
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, void *, __int64, unsigned int *, char *, __int64 *, unsigned int *, char *, char *))(*(_QWORD *)qword_44A20 + 216LL))(
         qword_44A20,
         v38,
         v55,
         &unk_34A00,
         0x8000,
         &v39,
         (char *)v55 + 4,
         &v44,
         &v40,
         (char *)v55 + 8,
         (char *)v55 + 12);
  if ( !(unsigned __int8)sub_1CDD0("GetMethodProps", v3) )
  {
    if ( v39 > 0x7FFF )
      word_449FE = 0;
    v49 = 0;
    src = 0;
    utf16_utf8();
    sub_1D230((__int64 *)&src);
    sub_F030(v38, (__int64)&src);
    if ( (BYTE5(v55[0]) & 0x60) != 0 )
    {
      v50 = 0;
      if ( !(*(unsigned int (__fastcall **)(__int64, _QWORD, __int64 *, void *, __int64, unsigned int *, char *))(*(_QWORD *)qword_44A20 + 256LL))(
              qword_44A20,
              v38,
              &v50,
              &unk_34A00,
              0x8000,
              &v39,
              (char *)&v50 + 4) )
      {
        if ( v39 > 0x7FFF )
          word_449FE = 0;
        v53 = 0;
        v54 = 0;
        utf16_utf8();
        sub_1D230((__int64 *)&v53);
        sub_EF20(v38, &v50, 8, 107);
        v31 = s1;
        if ( (_QWORD)v54 )
          v31 = v53;
        sub_EF20(v38, v31, 0, 108);
        if ( v53 )
        {
          *(_QWORD *)&v54 = 0;
          qfree();
        }
      }
    }
    if ( (BYTE12(v55[0]) & 3) == 1 )
      DWORD2(v55[0]) = 0;
    sub_EC40((__int64)&v50);
    v35 = v51;
    if ( v51 )
    {
      v7 = v51 + 1;
      v6 = v51 + 2;
      v5 = v50;
      v35 = v51 - 1;
      if ( v52 >= v51 + 2 )
        goto LABEL_12;
    }
    else
    {
      v5 = v50;
      v6 = 3;
      v7 = 2;
      if ( v52 >= 3 )
      {
LABEL_12:
        v51 = v6;
        *(_BYTE *)(v5 + v7) = 0;
        *(_WORD *)(v50 + v35) = 14906;
        v36 = v49;
        if ( (_QWORD)v49 )
        {
          v8 = v49 - 1;
          if ( (_QWORD)v49 != 1 )
          {
            v9 = v51;
            v10 = v49 - 1;
            if ( v51 )
            {
              v9 = v51 - 1;
              v10 = v8 + v51 - 1;
              v36 = v8 + v51;
            }
            v11 = v50;
            if ( v52 < v36 )
            {
              v34 = v10;
              v50 = qvector_reserve();
              v10 = v34;
              v11 = v50;
            }
            v51 = v36;
            *(_BYTE *)(v11 + v10) = 0;
            memcpy((void *)(v9 + v50), src, v8);
          }
        }
        v12 = s1;
        if ( v51 )
          v12 = (const char *)v50;
        LODWORD(v55[1]) = sub_139E0(v38, v12, (__int64)v55, (unsigned __int64 *)&qword_44A10);
        sub_EF20(v38, v55, 28, 97);
        sub_EF20(v38, v44, v40, 100);
        sub_EF20(DWORD2(v55[0]), &v38, 4, 112);
        if ( (v55[1] & 0xFFFFFF) != 0 )
        {
          v53 = 0;
          LODWORD(v47) = 0;
          v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, const char **, __int128 *))(*(_QWORD *)qword_44A20 + 288LL))(
                  qword_44A20,
                  LODWORD(v55[1]),
                  &v53,
                  &v47);
          if ( (unsigned __int8)sub_1CDD0("GetSigFromToken", v13) )
          {
LABEL_46:
            if ( v50 )
            {
              v51 = 0;
              qfree();
            }
            if ( src )
            {
              *(_QWORD *)&v49 = 0;
              qfree();
            }
            return v57 - __readfsqword(0x28u);
          }
          sub_EF20(LODWORD(v55[1]), v53, (unsigned int)v47, 100);
        }
        sub_1CFE0(v38);
        v45 = 0;
        v14 = *(_QWORD *)qword_44A20;
        v41 = 0;
        v37 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _BYTE *, __int64, unsigned int *))(v14 + 112))(
                qword_44A20,
                &v45,
                v38,
                v56,
                1,
                &v41);
        if ( !v37 && v41 )
        {
          (*(void (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)qword_44A20 + 24LL))(
            qword_44A20,
            v45,
            &v41);
          (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)qword_44A20 + 32LL))(qword_44A20, v45, 0);
          v15 = qcalloc();
          v19 = v15;
          if ( !v15 )
            sub_DA00((__int64)"No memory (requested memory for %zu tokens)", v41, v16, v17, v41, v18, v32);
          v20 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, __int64, _QWORD, unsigned int *))(*(_QWORD *)qword_44A20 + 112LL))(
                  qword_44A20,
                  &v45,
                  v38,
                  v15,
                  v41,
                  &v41);
          if ( !(unsigned __int8)sub_1CDD0("EnumParams(&enr, tok, toks, count, &count)", v20) && v41 )
          {
            do
            {
              v21 = *(_DWORD *)(v19 + 4LL * (int)v37);
              v46 = 0;
              v47 = 0;
              v33 = v38;
              v22 = *(_QWORD *)qword_44A20;
              v42 = 0;
              v43 = 0;
              v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *, void *, __int64, unsigned int *, char *, char *, _DWORD **, int *))(v22 + 248))(
                      qword_44A20,
                      v21,
                      0,
                      (char *)&v47 + 4,
                      &unk_34A00,
                      0x8000,
                      &v42,
                      (char *)&v47 + 8,
                      (char *)&v47 + 12,
                      &v46,
                      &v43);
              if ( !(unsigned __int8)sub_1CDD0("GetParamProps", v23) )
              {
                if ( v42 > 0x7FFF )
                  word_449FE = 0;
                v53 = 0;
                v54 = 0;
                utf16_utf8();
                v32 = v21;
                sub_F030((int)v21, (__int64)&v53);
                LODWORD(v47) = v33;
                sub_EF20((int)v21, &v47, 16, 97);
                sub_1CD80(v21, HIDWORD(v47), v46, v43);
                if ( v53 )
                {
                  *(_QWORD *)&v54 = 0;
                  qfree();
                }
              }
              ++v37;
            }
            while ( v37 < v41 );
            sub_EF90();
          }
          qfree();
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)qword_44A20 + 40LL))(qword_44A20, v45);
        v53 = 0;
        LODWORD(v47) = 0;
        v24 = (*(__int64 (__fastcall **)(__int64, const char **, _QWORD, _BYTE *, __int64, __int128 *))(*(_QWORD *)qword_44A20 + 88LL))(
                qword_44A20,
                &v53,
                v38,
                v56,
                1,
                &v47);
        if ( !v24 && (_DWORD)v47 )
        {
          (*(void (__fastcall **)(__int64, const char *, __int128 *))(*(_QWORD *)qword_44A20 + 24LL))(
            qword_44A20,
            v53,
            &v47);
          (*(void (__fastcall **)(__int64, const char *, _QWORD))(*(_QWORD *)qword_44A20 + 32LL))(qword_44A20, v53, 0);
          v25 = qcalloc();
          v29 = v25;
          if ( !v25 )
            sub_DA00(
              (__int64)"No memory (requested memory for %zu tokens)",
              (unsigned int)v47,
              v26,
              v27,
              (unsigned int)v47,
              v28,
              v32);
          v30 = (*(__int64 (__fastcall **)(__int64, const char **, _QWORD, __int64, _QWORD, __int128 *))(*(_QWORD *)qword_44A20 + 88LL))(
                  qword_44A20,
                  &v53,
                  v38,
                  v25,
                  (unsigned int)v47,
                  &v47);
          if ( !(unsigned __int8)sub_1CDD0("EnumMemberRefs(&enr, tok, toks, count, &count)", v30) && (_DWORD)v47 )
          {
            do
              sub_1CE40(*(_DWORD *)(v29 + 4LL * (int)v24++));
            while ( v24 < (unsigned int)v47 );
            sub_EF90();
          }
          qfree();
        }
        (*(void (__fastcall **)(__int64, const char *))(*(_QWORD *)qword_44A20 + 40LL))(qword_44A20, v53);
        goto LABEL_46;
      }
    }
    v50 = qvector_reserve();
    v5 = v50;
    goto LABEL_12;
  }
  return v57 - __readfsqword(0x28u);
}
