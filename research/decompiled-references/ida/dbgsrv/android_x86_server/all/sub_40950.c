/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40950
// Address: 0x00040950

//----- (00040950) --------------------------------------------------------
int __cdecl sub_40950(char *a1, _DWORD *a2, char a3)
{
  _DWORD *v3; // eax
  void *v4; // esi
  int v5; // edi
  int v6; // edi
  int v7; // edi
  int v8; // ecx
  _DWORD *v9; // edx
  char *v10; // ecx
  int v11; // edi
  void *v12; // ecx
  int v13; // eax
  char *v14; // eax
  unsigned int v15; // edx
  _DWORD *v16; // edx
  int v17; // eax
  int v18; // eax
  _DWORD *v19; // eax
  unsigned int v20; // ecx
  _DWORD *v21; // edx
  char *v22; // eax
  int v23; // eax
  char *v24; // eax
  int v25; // eax
  __int64 v27; // [esp+4h] [ebp-468h]
  __int64 v28; // [esp+Ch] [ebp-460h]
  __int64 v29; // [esp+18h] [ebp-454h]
  int v30; // [esp+18h] [ebp-454h]
  unsigned int v31; // [esp+18h] [ebp-454h]
  char v32; // [esp+1Ch] [ebp-450h]
  char v33; // [esp+1Ch] [ebp-450h]
  int v34; // [esp+20h] [ebp-44Ch]
  unsigned __int32 v35; // [esp+2Ch] [ebp-440h] BYREF
  char *v36; // [esp+30h] [ebp-43Ch] BYREF
  int v37; // [esp+34h] [ebp-438h]
  int v38; // [esp+38h] [ebp-434h]
  __int128 v39; // [esp+40h] [ebp-42Ch] BYREF
  int v40[6]; // [esp+50h] [ebp-41Ch] BYREF
  __int64 v41; // [esp+68h] [ebp-404h]
  __int64 v42; // [esp+70h] [ebp-3FCh]
  int v43; // [esp+78h] [ebp-3F4h]
  int v44; // [esp+7Ch] [ebp-3F0h]
  __int64 v45; // [esp+80h] [ebp-3ECh]
  int v46; // [esp+88h] [ebp-3E4h]
  int v47; // [esp+8Ch] [ebp-3E0h]
  _QWORD s[2]; // [esp+90h] [ebp-3DCh] BYREF
  __int64 v49; // [esp+A0h] [ebp-3CCh]
  __int64 v50; // [esp+A8h] [ebp-3C4h]
  __int64 v51; // [esp+B0h] [ebp-3BCh]
  int v52; // [esp+B8h] [ebp-3B4h]
  int v53; // [esp+BCh] [ebp-3B0h]
  __int64 v54; // [esp+C0h] [ebp-3ACh]
  unsigned __int16 v55; // [esp+C8h] [ebp-3A4h]
  int v56; // [esp+CCh] [ebp-3A0h]
  int v57[7]; // [esp+278h] [ebp-1F4h] BYREF
  int v58; // [esp+294h] [ebp-1D8h]
  __int128 v59; // [esp+2A0h] [ebp-1CCh] BYREF
  int v60; // [esp+2B0h] [ebp-1BCh]
  unsigned int v61; // [esp+2B4h] [ebp-1B8h]
  unsigned int v62; // [esp+2D4h] [ebp-198h]
  unsigned int v63; // [esp+2E4h] [ebp-188h]
  unsigned int v64; // [esp+2F4h] [ebp-178h]
  char v65; // [esp+328h] [ebp-144h]
  _QWORD v66[2]; // [esp+37Ch] [ebp-F0h] BYREF
  __int64 v67; // [esp+38Ch] [ebp-E0h]
  __int64 v68; // [esp+394h] [ebp-D8h]
  bool (__cdecl *v69)(int, int); // [esp+3F4h] [ebp-78h]
  char v70; // [esp+3FCh] [ebp-70h]
  char v71; // [esp+3FDh] [ebp-6Fh]
  __int64 v72; // [esp+418h] [ebp-54h]
  unsigned int v73; // [esp+458h] [ebp-14h]

  v73 = __readgsdword(0x14u);
  v3 = open_linput(a1, a3);
  if ( v3 )
  {
    v4 = v3;
    sub_8EAC0();
    sub_33460((int)v57, (int)v4, 0);
    v69 = sub_42C90;
    v5 = -1;
    if ( (unsigned __int8)sub_2FB60((int)v57)
      && (unsigned __int8)sub_2FDE0((int)v57)
      && (unsigned __int8)(v70 - 1) <= 1u
      && (unsigned __int8)(v71 - 1) <= 1u )
    {
      v39 = 0;
      if ( !v72 )
        goto LABEL_9;
      v5 = -1;
      if ( (unsigned __int8)sub_353C0((int)v57) )
      {
        dword_13BD24 = v58;
LABEL_9:
        sub_34640((int)v57);
        v39 = v59;
        if ( (_DWORD)v59 )
        {
          memset(s, 0, 0x1E4u);
        }
        else
        {
          v39 = *(_OWORD *)v57;
          v6 = v57[0];
          memset(s, 0, 0x1E4u);
          if ( !v6 )
            goto LABEL_38;
        }
        memset(v40, 0, 12);
        v40[0] = (int)qvector_reserve((int)v40, nullptr, 0xAu, 0x10u);
        if ( !sub_3B3E0((int)v57, (int)v40, (unsigned int *)&v39)
          || !(unsigned __int8)sub_3B810((int)&qword_13ACD8, (int)v57, (int)s, v40)
          || (a2[1] & 4) == 0 )
        {
LABEL_35:
          v12 = (void *)v40[0];
LABEL_36:
          if ( !v12 )
            goto LABEL_38;
          goto LABEL_37;
        }
        if ( s[0] >= 1LL && v49 )
        {
          if ( v66[0] >= 1LL && v67 )
          {
            if ( s[0] == v66[0] )
              goto LABEL_23;
            v28 = s[0];
            v27 = v66[0];
            sub_333F0();
          }
          v68 = v50;
          v67 = v49;
          v66[1] = s[1];
          v66[0] = s[0];
        }
LABEL_23:
        v7 = v40[0];
        if ( (v40[1] & 0xFFFFFFF) != 0 )
        {
          while ( 1 )
          {
            v36 = nullptr;
            v37 = 0;
            v38 = 0;
            v29 = *(_QWORD *)v7;
            v34 = v7;
            if ( *(_QWORD *)v7 <= 0x1Du && (v8 = 536920066, _bittest(&v8, v29)) )
            {
              sub_3C8A0(v57, (void **)&v36, v66, *(_DWORD *)(v7 + 8));
              v9 = (_DWORD *)(v7 + 8);
              v29 = *(_QWORD *)v7;
              if ( v37 )
              {
                v10 = v36;
                goto LABEL_30;
              }
            }
            else
            {
              v9 = (_DWORD *)(v7 + 8);
            }
            v10 = byte_EF875;
LABEL_30:
            v11 = (*(int (__cdecl **)(_DWORD *, _DWORD, _DWORD, char *, _DWORD, _DWORD))(*a2 + 12))(
                    a2,
                    v29,
                    HIDWORD(v29),
                    v10,
                    *v9,
                    v9[1]);
            if ( v36 )
            {
              v37 = 0;
              qfree(v36);
              v36 = nullptr;
              v38 = 0;
            }
            if ( v11 )
              goto LABEL_35;
            v7 = v34 + 16;
            v12 = (void *)v40[0];
            if ( v34 + 16 == v40[0] + 16 * v40[1] )
              goto LABEL_36;
          }
        }
        v12 = (void *)v40[0];
        if ( !v40[0] )
        {
LABEL_38:
          v13 = a2[1];
          if ( (v13 & 2) != 0 && v63 )
          {
            if ( !v65 )
            {
              if ( !(_BYTE)under_debugger )
                interr(20099);
              goto LABEL_108;
            }
            if ( v61 > v63 && (v63 << 6) + v60 )
            {
              memset(v40, 0, 12);
              sub_37E10(v57, v40, *(_QWORD *)(v60 + (v63 << 6) + 24));
              if ( v40[1] )
                v14 = (char *)v40[0];
              else
                v14 = byte_EF875;
              v5 = (*(int (__cdecl **)(_DWORD *, char *))(*a2 + 4))(a2, v14);
              if ( v40[0] )
              {
                v40[1] = 0;
                qfree((void *)v40[0]);
                v40[0] = 0;
                v40[2] = 0;
              }
              if ( v5 )
                goto LABEL_98;
              v13 = a2[1];
            }
          }
          v5 = 0;
          v30 = 0;
          if ( (v13 & 1) == 0 )
            goto LABEL_69;
          v15 = v62;
          if ( !(v64 | v62) )
          {
            v30 = 0;
            if ( v51 < 1 || !v54 )
              goto LABEL_68;
            v43 = 0;
            *(_OWORD *)v40 = 0;
            v45 = 0;
            v40[5] = v53;
            v40[4] = v52;
            v41 = v51;
            v42 = v54;
            v44 = v56;
            v40[1] = 11;
            v46 = v55;
            v47 = 0;
            v18 = sub_42CB0(v57, v40, 2, (int (__cdecl ***)(_DWORD, int, char *))a2);
            goto LABEL_67;
          }
          if ( v64 )
          {
            v31 = v62;
            if ( !v65 )
            {
              if ( !(_BYTE)under_debugger )
                interr(20099);
              goto LABEL_108;
            }
            v16 = nullptr;
            if ( v61 > v64 )
              v16 = (_DWORD *)(v60 + (v64 << 6));
            v17 = sub_42CB0(v57, v16, 1, (int (__cdecl ***)(_DWORD, int, char *))a2);
            v15 = v31;
          }
          else
          {
            v17 = 0;
          }
          v30 = v17;
          if ( !v15 || v17 )
            goto LABEL_68;
          if ( v65 )
          {
            v19 = (_DWORD *)(v60 + (v15 << 6));
            v20 = v15;
            v21 = nullptr;
            if ( v61 > v20 )
              v21 = v19;
            v18 = sub_42CB0(v57, v21, 2, (int (__cdecl ***)(_DWORD, int, char *))a2);
LABEL_67:
            v30 = v18;
LABEL_68:
            v13 = a2[1];
LABEL_69:
            v40[0] = (int)v57;
            memset(&v40[1], 0, 13);
            if ( (v13 & 0x10) == 0 )
              goto LABEL_82;
            sub_364A0((int)v57, (int)v40);
            v36 = nullptr;
            v37 = 0;
            v38 = 0;
            if ( sub_3DB60((int)v40, (int)&v36) )
            {
              if ( v37 )
                v22 = v36;
              else
                v22 = byte_EF875;
              v23 = (*(int (__cdecl **)(_DWORD *, char *, _DWORD, _DWORD, _DWORD))(*a2 + 16))(
                      a2,
                      v22,
                      HIDWORD(v27),
                      v28,
                      HIDWORD(v28));
              v5 = v23;
              if ( v23 )
              {
                v32 = 0;
                v30 = v23;
LABEL_78:
                if ( v36 )
                {
                  v37 = 0;
                  qfree(v36);
                  v36 = nullptr;
                  v38 = 0;
                }
                if ( !v32 )
                  goto LABEL_96;
                v13 = a2[1];
LABEL_82:
                if ( (v13 & 0x20) == 0 )
                {
LABEL_95:
                  v5 = v30;
LABEL_96:
                  if ( v40[1] )
                  {
                    sub_41CE0(&v40[1], 0);
                    qfree((void *)v40[1]);
                    v40[1] = 0;
                    v40[3] = 0;
                  }
                  goto LABEL_98;
                }
                v36 = nullptr;
                v37 = 0;
                v38 = 0;
                if ( v65 && (unsigned __int8)sub_3CE10((int)&v59, (int)&v36, &v35) )
                {
                  if ( v37 )
                    v24 = v36;
                  else
                    v24 = byte_EF875;
                  v25 = (*(int (__cdecl **)(_DWORD *, char *, unsigned __int32))(*a2 + 20))(a2, v24, v35);
                  if ( v25 )
                  {
                    v33 = 0;
                    v30 = v25;
                    v5 = v25;
                    goto LABEL_92;
                  }
                  v30 = 0;
                }
                v33 = 1;
LABEL_92:
                if ( v36 )
                {
                  v37 = 0;
                  qfree(v36);
                  v36 = nullptr;
                  v38 = 0;
                }
                if ( !v33 )
                  goto LABEL_96;
                goto LABEL_95;
              }
              v30 = 0;
            }
            v5 = 0;
            v32 = 1;
            goto LABEL_78;
          }
          if ( !(_BYTE)under_debugger )
            interr(20099);
LABEL_108:
          BUG();
        }
LABEL_37:
        v40[1] = 0;
        qfree(v12);
        v40[0] = 0;
        v40[2] = 0;
        goto LABEL_38;
      }
    }
LABEL_98:
    sub_30A40(v57);
    sub_8EAD0();
    close_linput(v4);
    return v5;
  }
  return -1;
}
// 41102: variable 'v27' is possibly undefined
// 41102: variable 'v28' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BD24: using guessed type int dword_13BD24;
// 13E34C: using guessed type int under_debugger;
