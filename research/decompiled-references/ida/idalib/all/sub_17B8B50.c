__int64 __fastcall sub_17B8B50(__int64 a1, void *a2, unsigned int a3, __int64 a4, char a5, unsigned int a6)
{
  __int64 v10; // r9
  __int64 *v11; // r12
  const char *v12; // rax
  __int64 v13; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbp
  _QWORD *v26; // rax
  const char *v27; // rax
  __int64 *v28; // rsi
  const char *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rdi
  const char *v33; // rax
  char *v34; // r13
  size_t v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  void *v43; // rax
  _QWORD *v44; // rax
  char *v45; // [rsp+0h] [rbp-118h]
  __int64 v46; // [rsp+0h] [rbp-118h]
  char *v47; // [rsp+8h] [rbp-110h]
  __int64 v48; // [rsp+8h] [rbp-110h]
  int v49; // [rsp+14h] [rbp-104h] BYREF
  unsigned __int64 v50; // [rsp+18h] [rbp-100h] BYREF
  _QWORD v51[2]; // [rsp+20h] [rbp-F8h] BYREF
  void *v52[2]; // [rsp+30h] [rbp-E8h] BYREF
  _BYTE v53[16]; // [rsp+40h] [rbp-D8h] BYREF
  _QWORD v54[2]; // [rsp+50h] [rbp-C8h] BYREF
  _QWORD *v55; // [rsp+60h] [rbp-B8h]
  unsigned __int8 *v56; // [rsp+70h] [rbp-A8h] BYREF
  char v57; // [rsp+C8h] [rbp-50h]
  unsigned int v58; // [rsp+D0h] [rbp-48h]
  char v59; // [rsp+D4h] [rbp-44h]

  sub_1A4A0D0(a1, a4);
  v50 = sub_AA8980(*(_QWORD **)(a1 + 248), a3, &v49, nullptr);
  if ( v49 )
  {
    if ( a5 == 1 && v49 != 1 )
    {
      v11 = *(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL);
      v12 = (const char *)sub_FBD4B0(v11, a3);
      if ( !strchr(v12, 84) )
      {
        v27 = (const char *)sub_FBD4B0(v11, a3);
        v13 = (__int64)strchr(v27, 116);
        if ( !v13 )
        {
          v28 = (__int64 *)(a1 + 8);
          if ( v49 == 3 )
          {
            sub_168B9F0((__int64)v54, v28, a6, 0x1B71u, 0);
            sub_FBD280((__int64)v52, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17520LL), a3);
            v32 = v54;
          }
          else
          {
            sub_168B9F0((__int64)v54, v28, a6, 0x1B72u, 0);
            switch ( v49 )
            {
              case 0:
                v34 = (char *)&byte_22F0C30;
                v35 = j__strlen(&byte_22F0C30);
                break;
              case 1:
                sub_FBD1A0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), a3);
                v34 = sub_FBCFC0((_WORD *)(v37 + 16));
                v35 = 0;
                if ( v34 )
                  v35 = j__strlen(v34);
                break;
              case 2:
                v34 = "stdio.h";
                v35 = j__strlen("stdio.h");
                break;
              case 3:
                v34 = "setjmp.h";
                v35 = j__strlen("setjmp.h");
                break;
              case 4:
                v34 = "ucontext.h";
                v35 = j__strlen("ucontext.h");
                break;
            }
            v51[0] = v34;
            v51[1] = v35;
            v36 = sub_166BAF0((__int64)v54, (__int64)v51);
            sub_FBD280((__int64)v52, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17520LL), a3);
            v32 = (_QWORD *)v36;
          }
          sub_1682AF0((__int64)v32, (__int64)v52);
          if ( v52[0] != v53 )
            operator delete(v52[0]);
          sub_15F7200(v54);
          return v13;
        }
      }
    }
    return 0;
  }
  if ( !a5 )
  {
    v29 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), a3);
    if ( strchr(v29, 102)
      || (v33 = (const char *)sub_FBD4B0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), a3), strchr(v33, 104)) )
    {
      sub_168B9F0((__int64)v54, (__int64 *)(a1 + 8), a6, ((**(_BYTE **)(a1 + 232) & 1) != 0) + 5577, 0);
      sub_FBD280((__int64)v52, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17520LL), a3);
      v30 = sub_1682AF0((__int64)v54, (__int64)v52);
      sub_1605D30(v30, (__int64 *)&v50);
      if ( v52[0] != v53 )
        operator delete(v52[0]);
      sub_15F7200(v54);
      sub_FBD1A0(*(__int64 **)(*(_QWORD *)(a1 + 248) + 17520LL), a3);
      v47 = sub_FBCFC0((_WORD *)(v31 + 16));
      if ( v47 )
      {
        sub_168B9F0((__int64)v54, (__int64 *)(a1 + 8), a6, 0x1797u, 0);
        if ( v57 )
        {
          sub_AE9DF0(&v56, (__int64)v47, 1u);
        }
        else if ( v59 )
        {
          v45 = v47;
          v38 = sub_168B9E0(v54);
          v41 = (__int64)v47;
          v42 = v38;
          v43 = v55;
          if ( v55 )
          {
            v48 = v42;
            v43 = (void *)(*(__int64 (__fastcall **)(_QWORD *, __int64, __int64, _QWORD, __int64, __int64))(*v55 + 32LL))(
                            v55,
                            a1 + 8,
                            v42,
                            *v55,
                            v40,
                            v41);
            v42 = v48;
            v41 = (__int64)v45;
          }
          v46 = v41;
          v52[0] = v43;
          v44 = sub_1587BC0(v42, (__int64 *)v52, v42, v39, v40, v41);
          sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * v58 + 8), v46, 1u);
        }
        sub_FBD280((__int64)v52, *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17520LL), a3);
        sub_1682AF0((__int64)v54, (__int64)v52);
        if ( v52[0] != v53 )
          operator delete(v52[0]);
        sub_15F7200(v54);
      }
    }
  }
  if ( (v50 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 0;
  v13 = sub_17AC170(a1, a2, v50, a3, a6, v10);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0 )
    goto LABEL_12;
  v19 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
  {
    if ( (*(_BYTE *)(sub_B8EAA0(*(_QWORD *)(v19 + 8)) + 8) & 0x7F) == 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( (*(_BYTE *)(sub_B8EAA0(v19) + 8) & 0x7F) != 0 )
  {
LABEL_12:
    v20 = sub_A7A420(*(_QWORD *)(a1 + 248), (__int64)a2, v15, v16, v17, v18);
    sub_B94A80(v20 + 40, v13, v21, v22, v23, v24);
  }
LABEL_13:
  v25 = *(_QWORD *)(a1 + 544);
  v26 = (_QWORD *)(*(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
    v26 = (_QWORD *)*v26;
  *(_QWORD *)(a1 + 544) = v26;
  sub_17B7670(a1, v13, *(_QWORD *)(a1 + 192), 1, v17, v18);
  *(_QWORD *)(a1 + 544) = v25;
  return v13;
}
