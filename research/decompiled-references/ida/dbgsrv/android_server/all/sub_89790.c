/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_89790
// Address: 0x0000000000089790

//----- (0000000000089790) ----------------------------------------------------
__int64 __fastcall sub_89790(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        int *a4,
        __int64 (__fastcall *a5)(_QWORD *, __int64, _BYTE *, int *))
{
  __int64 v10; // x28
  __int64 v11; // x8
  __int64 v12; // x26
  const char *v13; // x25
  unsigned int v14; // w20
  int v15; // w1
  __int64 v16; // x25
  void *v17; // x26
  const char *v18; // x0
  unsigned __int64 v19; // x19
  __int64 v20; // x25
  __int64 *v21; // x25
  __int64 v22; // x26
  __int64 v23; // t1
  __int64 v24; // x0
  char *v25; // x2
  const char *v26; // x2
  _BYTE *v27; // x24
  __int64 v28; // x1
  unsigned int v29; // w0
  __int64 v30; // x1
  _QWORD *v31; // x21
  __int64 v32; // t1
  __int64 v33; // x8
  int v34; // w8
  const char *v35; // x1
  __int64 v37; // [xsp+8h] [xbp-98h]
  unsigned __int64 v38; // [xsp+10h] [xbp-90h]
  _QWORD *v39; // [xsp+18h] [xbp-88h]
  void *ptr; // [xsp+20h] [xbp-80h] BYREF
  __int64 v41; // [xsp+28h] [xbp-78h]
  __int64 v42; // [xsp+30h] [xbp-70h]
  __int64 v43; // [xsp+38h] [xbp-68h]
  int8x16x2_t v44; // 0:q0.32

  v43 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
    sub_39FA0((__int64)"bfd_load_section(obj=%p, section_index=%llu).\n", a1, a2);
  if ( a2 )
  {
    v10 = a2 - 1;
    if ( a2 - 1 >= (unsigned __int64)a1[14] )
    {
      if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
        sub_39FA0((__int64)"No such section.\n");
      return (unsigned int)-1;
    }
    else
    {
      v11 = *a1;
      if ( *a1 && *(_DWORD *)(v11 + 8) == 1 )
      {
        v12 = a1[13];
        if ( *(_QWORD *)(v11 + 24) )
          v13 = *(const char **)(v11 + 16);
        else
          v13 = &byte_F154B;
        v39 = open_linput(v13, 0);
        if ( v39 )
        {
          v38 = *(unsigned int *)(v12 + 120 * v10 + 8);
          if ( !a5 )
          {
            v19 = 1;
            goto LABEL_30;
          }
          ptr = nullptr;
          v41 = 0;
          v42 = 0;
          v16 = v12;
          if ( (qgetenv("IDA_DWARF_MAX_ZIP_RATIO", (__int64)&ptr) & 1) != 0 )
          {
            v17 = ptr;
            if ( v41 )
              v18 = (const char *)ptr;
            else
              v18 = &byte_F154B;
            v19 = atoi(v18);
            if ( !v17 )
              goto LABEL_29;
          }
          else
          {
            v17 = ptr;
            v19 = 1000;
            if ( !ptr )
            {
LABEL_29:
              v12 = v16;
LABEL_30:
              v37 = v12;
              v20 = v12 + 120 * v10;
              v23 = *(_QWORD *)(v20 + 48);
              v21 = (__int64 *)(v20 + 48);
              v22 = v23;
              if ( v23 == -1 )
                v22 = qlseek((__int64)v39, 0, 1);
              v24 = qlsize((__int64)v39, v15, v44);
              if ( v24 - v22 < v38 / v19 || ((v24 - v22) | v22) < 0 )
              {
                if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
                {
                  if ( *(_QWORD *)(v37 + 120 * v10 + 24) )
                    v26 = *(const char **)(v37 + 120 * v10 + 16);
                  else
                    v26 = &byte_F154B;
                  if ( a5 )
                    v35 = "Seemingly wrong";
                  else
                    v35 = "Wrong";
                  sub_39FA0((__int64)"%s section '%s' size %u bytes\n", v35, v26, v38);
                }
                v34 = 435;
              }
              else
              {
                if ( *(_QWORD *)(v37 + 120 * v10 + 24) )
                  v25 = *(char **)(v37 + 120 * v10 + 16);
                else
                  v25 = &byte_F154B;
                v27 = sub_89B74((__int64)a1, a2, v25, v38);
                if ( v27 )
                {
                  qlseek((__int64)v39, *v21, 0);
                  v28 = v37 + 120 * v10;
                  if ( a5 )
                    v29 = a5(v39, v28, v27, a4);
                  else
                    v29 = sub_89704((__int64)v39, v28, v27, a4);
                  v14 = v29;
                  if ( v29 )
                  {
                    v32 = a1[29];
                    v31 = a1 + 29;
                    v30 = v32;
                    v33 = 72LL * v31[1];
                    if ( v33 )
                    {
                      while ( *(_BYTE **)(v30 + 56) != v27 )
                      {
                        v33 -= 72;
                        v30 += 72;
                        if ( !v33 )
                          goto LABEL_62;
                      }
                      sub_8A7D0(v31, v30);
                      qfree(v27);
                    }
                  }
                  else
                  {
                    *a3 = v27;
                  }
                  goto LABEL_62;
                }
                if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
                  sub_39FA0((__int64)"Couldn't allocate %u bytes of data for section.\n", v38);
                v34 = 8;
              }
              *a4 = v34;
              v14 = 1;
LABEL_62:
              close_linput(v39);
              return v14;
            }
          }
          v41 = 0;
          qfree(v17);
          ptr = nullptr;
          v42 = 0;
          goto LABEL_29;
        }
        sub_39FA0((__int64)"Cannot open file: %s.\n", v13);
        return 1;
      }
      else
      {
        sub_39FA0((__int64)"Input source is not local file.\n");
        return 1;
      }
    }
  }
  else
  {
    return 1;
  }
}
// 8995C: variable 'v15' is possibly undefined
// 8995C: variable 'v44' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 166CB0: using guessed type __int64 qword_166CB0;
