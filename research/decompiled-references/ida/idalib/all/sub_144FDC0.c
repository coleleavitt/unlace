void __fastcall sub_144FDC0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v4; // ebp
  char v5; // r14
  char v6; // r14
  char v7; // al
  bool v8; // zf
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 *v11; // rdx
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rsi
  int v15; // ecx
  void (__fastcall *v16)(__int64, _QWORD, __int64, size_t); // r14
  size_t v17; // rcx
  __int64 v18; // rbx
  int v19; // r14d
  __int64 v20; // rbx
  char v21; // dl
  int v22; // r10d
  size_t v23; // rax
  __int64 v24; // rcx
  unsigned int v25; // r10d
  int v26; // eax
  _BYTE *v27; // rdi
  void *v28; // r9
  unsigned __int64 v29; // r10
  size_t v30; // rcx
  void (__fastcall *v31)(__int64, _QWORD, const char *, size_t, _QWORD, void *, void *, unsigned __int64); // rbx
  const char *v32; // r13
  size_t v33; // rax
  int v34; // ecx
  int v35; // edx
  void *v37; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v38; // [rsp+8h] [rbp-F0h]
  unsigned __int8 v39; // [rsp+17h] [rbp-E1h]
  char *s1; // [rsp+18h] [rbp-E0h]
  __int64 v41; // [rsp+20h] [rbp-D8h]
  unsigned int v42; // [rsp+20h] [rbp-D8h]
  int v43; // [rsp+28h] [rbp-D0h]
  __int64 v44; // [rsp+28h] [rbp-D0h]
  int v45; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-C0h]
  __int16 v47; // [rsp+40h] [rbp-B8h]
  void *v48; // [rsp+50h] [rbp-A8h] BYREF
  unsigned __int64 v49; // [rsp+58h] [rbp-A0h]
  _BYTE v50[16]; // [rsp+60h] [rbp-98h] BYREF
  unsigned __int8 *v51[17]; // [rsp+70h] [rbp-88h] BYREF

  v4 = *a4;
  v5 = *(_BYTE *)(a2 + 544);
  *(_BYTE *)(a2 + 544) = v5 | 0x20;
  v6 = 32 * ((v5 & 0x20) != 0);
  sub_14634E0(a2, &v45);
  v7 = v6 | *(_BYTE *)(a2 + 544) & 0xDF;
  v8 = v47 == 5;
  *(_BYTE *)(a2 + 544) = v7;
  if ( !v8 )
    goto LABEL_6;
  v9 = v46;
  *(_BYTE *)(a2 + 544) = v7 | 0x20;
  v10 = *(_QWORD *)(a2 + 1192);
  sub_14634E0(a2, &v45);
  *(_BYTE *)(a2 + 544) = *(_BYTE *)(a2 + 544) & 0xDF | v6;
  v11 = *(__int64 **)(v9 + 16);
  v12 = *v11;
  v13 = v11 + 2;
  if ( (unsigned int)*v11 != 3 )
  {
    if ( (_DWORD)v12 == 4 && *((_DWORD *)v11 + 4) == 1752397168 )
    {
      sub_FCE3B0(*(_QWORD **)(a2 + 48));
      if ( !v10 )
        goto LABEL_24;
      v16 = *(void (__fastcall **)(__int64, _QWORD, __int64, size_t))(*(_QWORD *)v10 + 160LL);
      goto LABEL_21;
    }
LABEL_4:
    if ( (unsigned int)v12 == 7 )
    {
      if ( *v13 == 1869506409 && *((_WORD *)v11 + 10) == 25970 && *((_BYTE *)v11 + 22) == 100 )
      {
        v39 = 1;
      }
      else
      {
        if ( *v13 != 1852989815 || *((_WORD *)v11 + 10) != 28265 || *((_BYTE *)v11 + 22) != 103 )
          goto LABEL_6;
        v39 = 3;
      }
    }
    else
    {
      if ( (unsigned int)v12 != 5 )
      {
LABEL_6:
        v14 = *(_QWORD *)(a2 + 48);
        v15 = 1395;
LABEL_7:
        sub_FC70B0((__int64)v51, v14, v45, v15);
        sub_AEA040((__int64)v51);
        return;
      }
      if ( *v13 == 1869771365 && *((_BYTE *)v11 + 20) == 114 )
      {
        v39 = 4;
      }
      else
      {
        if ( *v13 != 1635017062 || *((_BYTE *)v11 + 20) != 108 )
          goto LABEL_6;
        v39 = 5;
      }
    }
    v19 = v45;
    v48 = v50;
    v49 = 0;
    v50[0] = 0;
    if ( (unsigned __int8)sub_1464000(a2, &v45, &v48, "pragma diagnostic", 0) )
    {
      v20 = *(_QWORD *)(a2 + 48);
      if ( v47 == 2 )
      {
        if ( v49 > 2 && *(_BYTE *)v48 == 45 )
        {
          v21 = *((_BYTE *)v48 + 1);
          if ( v21 == 87 )
          {
            v22 = 0;
LABEL_40:
            v43 = v22;
            v41 = v49 - 2;
            s1 = (char *)v48 + 2;
            v23 = j__strlen("everything");
            v24 = v41;
            v25 = v43;
            if ( v23 == v41 )
            {
              v44 = v41;
              v42 = v25;
              v26 = memcmp(s1, "everything", v23);
              v25 = v42;
              v24 = v44;
              if ( !v26 )
              {
                sub_FD0770(v20, v42, v39, v4);
                goto LABEL_43;
              }
            }
            if ( !(unsigned __int8)sub_FD0810(v20, v25, (__int64)s1, v24, v39) )
            {
LABEL_43:
              v27 = v48;
              if ( v10 )
              {
                v28 = v48;
                v29 = v49;
                v30 = 0;
                v31 = *(void (__fastcall **)(__int64, _QWORD, const char *, size_t, _QWORD, void *, void *, unsigned __int64))(*(_QWORD *)v10 + 176LL);
                v32 = *(const char **)(a1 + 40);
                if ( v32 )
                {
                  v37 = v48;
                  v38 = v49;
                  v33 = j__strlen(v32);
                  v28 = v37;
                  v29 = v38;
                  v30 = v33;
                }
                v31(v10, v4, v32, v30, v39, v28, v28, v29);
                v27 = v48;
              }
              goto LABEL_47;
            }
            sub_FC70B0((__int64)v51, *(_QWORD *)(a2 + 48), v19, 1398);
            sub_AEC220(v51, v48, v49);
            sub_AEA040((__int64)v51);
            v27 = v48;
LABEL_47:
            if ( v27 != v50 )
              operator delete(v27);
            return;
          }
          if ( v21 == 82 )
          {
            v22 = 1;
            goto LABEL_40;
          }
        }
        v34 = 1396;
        v35 = v19;
      }
      else
      {
        v34 = 1397;
        v35 = v45;
      }
      sub_FC70B0((__int64)v51, *(_QWORD *)(a2 + 48), v35, v34);
      sub_AEA040((__int64)v51);
    }
    v27 = v48;
    goto LABEL_47;
  }
  if ( *((_WORD *)v11 + 8) != 28528 || *((_BYTE *)v11 + 18) != 112 )
    goto LABEL_4;
  if ( !(unsigned __int8)sub_FD0B50(*(__int64 **)(a2 + 48), v4) )
  {
    sub_FC70B0((__int64)v51, *(_QWORD *)(a2 + 48), v45, 1394);
    sub_AEA040((__int64)v51);
    goto LABEL_24;
  }
  if ( !v10 )
    goto LABEL_24;
  v16 = *(void (__fastcall **)(__int64, _QWORD, __int64, size_t))(*(_QWORD *)v10 + 168LL);
LABEL_21:
  v17 = 0;
  v18 = *(_QWORD *)(a1 + 40);
  if ( v18 )
    v17 = j__strlen(*(const char **)(a1 + 40));
  v16(v10, v4, v18, v17);
LABEL_24:
  if ( v47 != 2 )
  {
    v14 = *(_QWORD *)(a2 + 48);
    v15 = 1397;
    goto LABEL_7;
  }
}
