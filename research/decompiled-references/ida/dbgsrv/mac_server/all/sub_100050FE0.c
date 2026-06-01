/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100050FE0
// Address: 0x0000000100050FE0

//----- (0000000100050FE0) ----------------------------------------------------
__int64 __fastcall sub_100050FE0(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 (__fastcall *a5)(__int64 a1, __int64 a2, void *a3, _DWORD *a4))
{
  _QWORD *v6; // rbx
  unsigned int v7; // r12d
  __int64 v8; // rcx
  const char *v9; // rbx
  __int64 v11; // r12
  _QWORD *v12; // rax
  void *v13; // rdi
  unsigned __int64 v14; // r12
  char v15; // al
  unsigned __int64 v16; // rbx
  char *v17; // r12
  const char *v18; // rdi
  off_t v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rdx
  const char *v23; // rdx
  _BYTE *v24; // r13
  __int64 (__fastcall *v25)(__int64, __int64, void *, _DWORD *); // rax
  const char *v26; // rsi
  _QWORD *v27; // [rsp+0h] [rbp-90h]
  unsigned __int64 v30; // [rsp+20h] [rbp-70h]
  unsigned __int64 v31; // [rsp+20h] [rbp-70h]
  _QWORD *v32; // [rsp+28h] [rbp-68h]
  char *v33[2]; // [rsp+30h] [rbp-60h] BYREF
  __int64 v34; // [rsp+40h] [rbp-50h]
  void **p_p; // [rsp+50h] [rbp-40h]
  void *__p; // [rsp+58h] [rbp-38h] BYREF

  if ( qword_1000AD1A8 && *(_BYTE *)(qword_1000AD1A8 + 184) == 1 )
  {
    v6 = a3;
    sub_100000AE0((int)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a2);
    a3 = v6;
  }
  v7 = 1;
  if ( a2 )
  {
    if ( a2 - 1 >= (unsigned __int64)a1[14] )
    {
      v7 = -1;
      if ( qword_1000AD1A8 && *(_BYTE *)(qword_1000AD1A8 + 184) == 1 )
        sub_100000AE0((int)"No such section.\n");
    }
    else
    {
      v8 = *a1;
      if ( *a1 && *(_DWORD *)(v8 + 8) == 1 )
      {
        v27 = a3;
        if ( *(_QWORD *)(v8 + 24) )
          v9 = *(const char **)(v8 + 16);
        else
          v9 = _s1;
        v11 = a1[13] + 120 * (a2 - 1);
        v12 = open_linput(v9, 0);
        __p = v12;
        if ( v12 )
        {
          v13 = v12;
          p_p = &__p;
          v32 = (_QWORD *)v11;
          v14 = *(unsigned int *)(v11 + 8);
          if ( a5 )
          {
            v30 = v14;
            *(_OWORD *)v33 = 0;
            v34 = 0;
            v15 = qgetenv("IDA_DWARF_MAX_ZIP_RATIO", (__int64)v33);
            v16 = 1000;
            v17 = v33[0];
            if ( v15 )
            {
              v18 = _s1;
              if ( v33[1] )
                v18 = v33[0];
              v16 = atoi(v18);
            }
            if ( v17 )
            {
              v33[1] = nullptr;
              qfree(v17);
            }
            v13 = __p;
            LODWORD(v14) = v30;
            if ( v30 >= v16 )
              goto LABEL_25;
          }
          else
          {
            LODWORD(v16) = 1;
            if ( v14 )
            {
LABEL_25:
              v31 = (unsigned int)v14 / (unsigned int)v16;
              goto LABEL_29;
            }
          }
          v31 = 0;
LABEL_29:
          v19 = v32[6];
          if ( v19 == -1 )
            v19 = qlseek((__int64)v13, 0, 1);
          v20 = qlsize((__int64)v13);
          if ( v19 < 0 || (v21 = v20 - v19, v21 < 0) || v21 < v31 )
          {
            if ( qword_1000AD1A8 && *(_BYTE *)(qword_1000AD1A8 + 184) == 1 )
            {
              if ( v32[3] )
                v23 = (const char *)v32[2];
              else
                v23 = _s1;
              v26 = "Seemingly wrong";
              if ( !a5 )
                v26 = "Wrong";
              sub_100000AE0((int)"%s section '%s' size %u bytes\n", v26, v23, (unsigned int)v14);
            }
            *a4 = 435;
          }
          else
          {
            if ( v32[3] )
              v22 = (const char *)v32[2];
            else
              v22 = _s1;
            v24 = sub_100051370((__int64)a1, a2, v22, v14);
            if ( v24 )
            {
              qlseek((__int64)__p, v32[6], 0);
              v25 = sub_100050F60;
              if ( a5 )
                v25 = a5;
              v7 = v25((__int64)__p, (__int64)v32, v24, a4);
              if ( v7 )
              {
                sub_1000514A0((__int64)a1, v24);
              }
              else
              {
                *v27 = v24;
                v7 = 0;
              }
              goto LABEL_57;
            }
            if ( qword_1000AD1A8 && *(_BYTE *)(qword_1000AD1A8 + 184) == 1 )
              sub_100000AE0((int)"Couldn't allocate %u bytes of data for section.\n", (unsigned int)v14);
            *a4 = 8;
          }
          v7 = 1;
LABEL_57:
          close_linput(__p);
          return v7;
        }
        sub_100000AE0((int)"Cannot open file: %s.\n", v9);
        return 1;
      }
      else
      {
        sub_100000AE0((int)"Input source is not local file.\n");
      }
    }
  }
  return v7;
}
// 1000AD1A8: using guessed type __int64 qword_1000AD1A8;
