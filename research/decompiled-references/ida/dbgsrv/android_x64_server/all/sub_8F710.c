/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F710
// Address: 0x000000000008F710

//----- (000000000008F710) ----------------------------------------------------
__int64 __fastcall sub_8F710(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 (__fastcall *a5)(__int64 a1, __int64 a2, void *a3, _DWORD *a4))
{
  _QWORD *v8; // rcx
  unsigned int v9; // r13d
  __int64 (__fastcall *v10)(__int64, __int64, void *, _DWORD *); // rbp
  __int64 v11; // rax
  __int64 v12; // r15
  const char *v13; // rbx
  __int64 v15; // r13
  __int64 v16; // r12
  unsigned __int64 v17; // r15
  char *v18; // rbp
  const char *v19; // rdi
  unsigned __int64 v20; // rbx
  __int64 v21; // rbp
  unsigned __int64 v22; // rax
  const char *v23; // rdx
  const char *v24; // rdx
  _BYTE *v25; // r14
  __int64 v26; // r13
  __int64 (__fastcall *v27)(__int64, __int64, void *, _DWORD *); // rbp
  __int64 v28; // rax
  __int64 v29; // rsi
  const char *v30; // rsi
  _QWORD *v31; // [rsp+0h] [rbp-88h]
  _DWORD *v32; // [rsp+8h] [rbp-80h]
  __int64 (__fastcall *v33)(__int64, __int64, void *, _DWORD *); // [rsp+10h] [rbp-78h]
  _QWORD *ptr; // [rsp+18h] [rbp-70h]
  _QWORD *v35; // [rsp+28h] [rbp-60h]
  char *nptr[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v37; // [rsp+40h] [rbp-48h]
  unsigned __int64 v38; // [rsp+50h] [rbp-38h]

  v8 = a1;
  v38 = __readfsqword(0x28u);
  if ( qword_1559F8 && *(_BYTE *)(qword_1559F8 + 184) )
  {
    sub_390A0((int)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a2);
    v8 = a1;
  }
  v9 = 1;
  if ( a2 )
  {
    v35 = a3;
    v10 = a5;
    if ( (unsigned __int64)(a2 - 1) >= v8[14] )
    {
      v9 = -1;
      if ( qword_1559F8 && *(_BYTE *)(qword_1559F8 + 184) )
        sub_390A0((int)"No such section.\n");
    }
    else
    {
      v11 = *v8;
      if ( *v8 && *(_DWORD *)(v11 + 8) == 1 )
      {
        v32 = a4;
        v12 = v8[13];
        v31 = v8;
        if ( *(_QWORD *)(v11 + 24) )
          v13 = *(const char **)(v11 + 16);
        else
          v13 = s1;
        ptr = open_linput(v13, 0);
        if ( ptr )
        {
          v15 = v12;
          v16 = 120 * (a2 - 1);
          v17 = *(unsigned int *)(v12 + v16 + 8);
          v33 = v10;
          if ( !v10 )
          {
            v20 = 1;
            goto LABEL_27;
          }
          *(_OWORD *)nptr = 0;
          v37 = 0;
          if ( (unsigned __int8)qgetenv("IDA_DWARF_MAX_ZIP_RATIO", (__int64)nptr) )
          {
            v18 = nptr[0];
            v19 = s1;
            if ( nptr[1] )
              v19 = nptr[0];
            v20 = atoi(v19);
            if ( !v18 )
            {
LABEL_27:
              v21 = *(_QWORD *)(v15 + v16 + 48);
              if ( v21 == -1 )
                v21 = qlseek((__int64)ptr, 0, 1);
              v22 = qlsize((__int64)ptr) - v21;
              if ( v22 < v17 / v20 || ((v21 | v22) & 0x8000000000000000LL) != 0LL )
              {
                if ( qword_1559F8 && *(_BYTE *)(qword_1559F8 + 184) )
                {
                  if ( *(_QWORD *)(v15 + v16 + 24) )
                    v24 = *(const char **)(v15 + v16 + 16);
                  else
                    v24 = s1;
                  v30 = "Seemingly wrong";
                  if ( !v33 )
                    v30 = "Wrong";
                  sub_390A0((int)"%s section '%s' size %u bytes\n", v30, v24, (unsigned int)v17);
                }
                *v32 = 435;
              }
              else
              {
                if ( *(_QWORD *)(v15 + v16 + 24) )
                  v23 = *(const char **)(v15 + v16 + 16);
                else
                  v23 = s1;
                v25 = sub_8FB20(v31, a2, v23, v17);
                if ( v25 )
                {
                  qlseek((__int64)ptr, *(_QWORD *)(v16 + v15 + 48), 0);
                  v26 = v16 + v15;
                  v27 = sub_8F690;
                  if ( v33 )
                    v27 = v33;
                  v9 = v27((__int64)ptr, v26, v25, v32);
                  if ( v9 )
                  {
                    v28 = 72LL * v31[30];
                    if ( v28 )
                    {
                      v29 = v31[29];
                      while ( *(_BYTE **)(v29 + 56) != v25 )
                      {
                        v29 += 72;
                        v28 -= 72;
                        if ( !v28 )
                          goto LABEL_58;
                      }
                      sub_90500(v31 + 29, v29);
                      qfree(v25);
                    }
                  }
                  else
                  {
                    *v35 = v25;
                    v9 = 0;
                  }
                  goto LABEL_58;
                }
                if ( qword_1559F8 && *(_BYTE *)(qword_1559F8 + 184) )
                  sub_390A0((int)"Couldn't allocate %u bytes of data for section.\n", (unsigned int)v17);
                *v32 = 8;
              }
              v9 = 1;
LABEL_58:
              close_linput(ptr);
              return v9;
            }
          }
          else
          {
            v18 = nptr[0];
            v20 = 1000;
            if ( !nptr[0] )
              goto LABEL_27;
          }
          nptr[1] = nullptr;
          qfree(v18);
          nptr[0] = nullptr;
          v37 = 0;
          goto LABEL_27;
        }
        sub_390A0((int)"Cannot open file: %s.\n", v13);
      }
      else
      {
        sub_390A0((int)"Input source is not local file.\n");
      }
    }
  }
  return v9;
}
// 1559F8: using guessed type __int64 qword_1559F8;
