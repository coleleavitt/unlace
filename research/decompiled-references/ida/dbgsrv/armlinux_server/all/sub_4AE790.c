/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AE790
// Address: 0x00000000004AE790

//----- (00000000004AE790) ----------------------------------------------------
bool __fastcall sub_4AE790(char *s1, void (__fastcall *a2)(_BYTE *, __int64, __int64), __int64 a3)
{
  int v6; // w23
  unsigned int v7; // w22
  int v8; // w0
  bool v9; // zf
  int v11; // w0
  bool v12; // zf
  size_t v13; // x0
  int v14; // w25
  _DWORD *v15; // x24
  int v16; // w0
  int v17; // w22
  int v18; // w0
  __int64 v19; // x0
  char *v20; // x21
  unsigned int *v21; // x22
  bool v22; // zf
  char *v24; // x4
  int v25; // w0
  int v26; // w0
  int v28; // w2
  int v29; // t1
  int v30; // w0
  __int64 v31; // x2
  _DWORD *v32; // x5
  int v33; // w1
  __int64 v34; // x3
  bool v35; // zf
  __int64 v36; // x2
  void (__fastcall *v37)(_BYTE *, __int64, __int64); // x4
  __int64 v38; // x1
  int v39; // w2
  char *i; // x1
  int v41; // t1
  _DWORD v43[2]; // [xsp+0h] [xbp+0h] BYREF
  char *v44; // [xsp+8h] [xbp+8h]
  __int64 v45; // [xsp+10h] [xbp+10h]
  _QWORD v46[2]; // [xsp+58h] [xbp+58h] BYREF
  int v47; // [xsp+68h] [xbp+68h]
  char *s; // [xsp+70h] [xbp+70h]
  _DWORD *v49; // [xsp+78h] [xbp+78h]
  int v50; // [xsp+80h] [xbp+80h]
  int v51; // [xsp+84h] [xbp+84h]
  _DWORD *v52; // [xsp+88h] [xbp+88h]
  int v53; // [xsp+90h] [xbp+90h]
  int v54; // [xsp+94h] [xbp+94h]
  int v55; // [xsp+98h] [xbp+98h]
  __int64 v56; // [xsp+A0h] [xbp+A0h]
  __int64 v57; // [xsp+A8h] [xbp+A8h]
  int v58; // [xsp+B0h] [xbp+B0h]
  _BYTE v59[256]; // [xsp+B8h] [xbp+B8h] BYREF
  __int64 v60; // [xsp+1B8h] [xbp+1B8h]
  char v61; // [xsp+1C0h] [xbp+1C0h]
  void (__fastcall *v62)(_BYTE *, __int64, __int64); // [xsp+1C8h] [xbp+1C8h]
  __int64 v63; // [xsp+1D0h] [xbp+1D0h]
  __int64 v64; // [xsp+1D8h] [xbp+1D8h]
  __int64 v65; // [xsp+1E0h] [xbp+1E0h]
  __int64 v66; // [xsp+1E8h] [xbp+1E8h]
  int v67; // [xsp+1F0h] [xbp+1F0h]
  __int64 v68; // [xsp+1F8h] [xbp+1F8h]
  __int64 v69; // [xsp+200h] [xbp+200h]
  _DWORD *v70; // [xsp+208h] [xbp+208h]
  __int64 v71; // [xsp+210h] [xbp+210h] BYREF
  _DWORD *v72; // [xsp+218h] [xbp+218h]
  _QWORD v73[2]; // [xsp+220h] [xbp+220h] BYREF

  v6 = (unsigned __int8)*s1;
  if ( v6 != 95 || (v7 = 1, s1[1] != 90) )
  {
    v7 = 0;
    if ( !strncmp(s1, "_GLOBAL_", 8u) )
    {
      v8 = (unsigned __int8)s1[8];
      v9 = v8 == 46 || v8 == 95;
      if ( v9 || v8 == 36 )
      {
        v11 = (unsigned __int8)s1[9];
        v12 = v11 == 68 || v11 == 73;
        if ( v12 && s1[10] == 95 )
          v7 = (v11 != 73) + 2;
      }
    }
  }
  v13 = strlen(s1);
  v14 = 2 * v13;
  v53 = 0;
  v54 = v13;
  v46[0] = s1;
  v46[1] = &s1[v13];
  v47 = 17;
  v50 = 0;
  v51 = 2 * v13;
  v15 = v43;
  s = s1;
  v49 = v43;
  v52 = v43;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v58 = 0;
  if ( v7 == 1 )
  {
    if ( v6 != 95 || s1[1] != 90 )
      return 0;
    s = s1 + 2;
    v21 = (unsigned int *)sub_4A8CC0((__int64)v46, 1);
    if ( (v47 & 1) != 0 )
    {
      while ( 1 )
      {
        v24 = s;
        v25 = (unsigned __int8)*s;
        if ( v25 != 46 )
          break;
        v26 = (unsigned __int8)s[1];
        if ( v26 != 95 && (unsigned __int8)(v26 - 97) > 0x19u )
        {
          if ( (unsigned __int8)(v26 - 48) > 9u )
          {
            v25 = (unsigned __int8)*s;
            break;
          }
          v39 = (unsigned __int8)*s;
          i = s;
        }
        else
        {
          v39 = (unsigned __int8)s[2];
          for ( i = s + 2; v39 == 95 || (unsigned __int8)(v39 - 97) <= 0x19u; ++i )
          {
            v41 = (unsigned __int8)i[1];
            v39 = v41;
          }
        }
LABEL_41:
        if ( v39 == 46 )
        {
          do
          {
            if ( (unsigned __int8)(i[1] - 48) > 9u )
              break;
            v39 = (unsigned __int8)i[2];
            i += 2;
            if ( (unsigned __int8)(v39 - 48) > 9u )
              goto LABEL_41;
            do
            {
              v29 = (unsigned __int8)*++i;
              v28 = v29;
            }
            while ( (unsigned __int8)(v29 - 48) <= 9u );
          }
          while ( v28 == 46 );
        }
        v30 = v50;
        s = i;
        if ( v50 < v51
          && (v31 = 6LL * v50,
              v32 = v49,
              v33 = (_DWORD)i - (_DWORD)v24,
              v34 = (__int64)&v49[v31],
              v49[v31 + 1] = 0,
              v50 = v30 + 1,
              v33) )
        {
          *(_DWORD *)(v34 + 4) = 0;
          v32[v31] = 0;
          *(_QWORD *)(v34 + 8) = v24;
          *(_DWORD *)(v34 + 16) = v33;
        }
        else
        {
          v34 = 0;
        }
        v21 = (unsigned int *)sub_4A5090((__int64)v46, 77, (__int64)v21, v34);
      }
    }
    else
    {
      v25 = (unsigned __int8)*s;
    }
  }
  else
  {
    if ( v7 && v7 <= 3 )
    {
      v16 = (unsigned __int8)s1[11];
      s = s1 + 11;
      v17 = (v7 != 2) + 67;
      if ( v16 == 95 && s1[12] == 90 )
      {
        s = s1 + 13;
        v15 = (_DWORD *)sub_4A8CC0((__int64)v46, 0);
      }
      else
      {
        v18 = strlen(s1 + 11);
        if ( v14 > 0 && (v43[1] = 0, v50 = 1, v18) )
        {
          v43[0] = 0;
          v44 = s1 + 11;
          LODWORD(v45) = v18;
        }
        else
        {
          v15 = nullptr;
        }
      }
      v19 = sub_4A5090((__int64)v46, v17, (__int64)v15, 0);
      v20 = s;
      v21 = (unsigned int *)v19;
      s = &v20[strlen(s)];
      if ( *s )
        v22 = 1;
      else
        v22 = v21 == nullptr;
      if ( !v22 )
        goto LABEL_57;
      return 0;
    }
    v21 = (unsigned int *)sub_4A7538((__int64)v46);
    v25 = (unsigned __int8)*s;
  }
  if ( v25 )
    v35 = 1;
  else
    v35 = v21 == nullptr;
  if ( v35 )
    return 0;
LABEL_57:
  v60 = 0;
  v61 = 0;
  v62 = a2;
  v63 = a3;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  v70 = nullptr;
  v71 = 0;
  v72 = nullptr;
  v73[0] = 0;
  sub_4A5180((__int64)v73 + 4, (_DWORD *)&v71 + 1, (__int64)v21);
  v73[1] = 0;
  HIDWORD(v73[0]) *= HIDWORD(v71);
  v70 = v43;
  v72 = v43;
  def_4AD1E4((__int64)v59, 0x11u, v21);
  v37 = v62;
  v36 = v63;
  v38 = v60;
  v59[v60] = 0;
  v37(v59, v38, v36);
  return (_DWORD)v66 == 0;
}
