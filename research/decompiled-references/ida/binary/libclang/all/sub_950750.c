__int64 __fastcall sub_950750(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(__int64, __int64), __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rsi
  char v11; // r13
  char v12; // al
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rax
  int v16; // ecx
  int v17; // esi
  int v18; // r15d
  unsigned int v19; // r13d
  char v20; // al
  int v21; // edx
  char v22; // al
  __int64 v23; // r12
  __int64 v24; // rsi
  char v25; // r13
  char v26; // r12
  unsigned int v27; // r12d
  char v29; // al
  __int64 v30; // rdx
  int v31; // ecx
  int v32; // edx
  int v33; // edi
  __int64 v34; // rax
  unsigned __int8 **v35; // r13
  __int64 v36; // rax
  __int64 v37; // rcx
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rax
  char v41; // al
  _QWORD *v42; // rsi
  char v43; // dl
  unsigned int v44; // eax
  unsigned __int8 **v45; // r13
  __int64 v46; // rax
  _QWORD *v48; // [rsp+8h] [rbp-180h]
  char v50; // [rsp+1Ch] [rbp-16Ch]
  int v51; // [rsp+1Ch] [rbp-16Ch]
  unsigned int v52; // [rsp+1Ch] [rbp-16Ch]
  int v53; // [rsp+1Ch] [rbp-16Ch]
  int v55; // [rsp+20h] [rbp-168h]
  __int64 v56; // [rsp+20h] [rbp-168h]
  __int64 v57; // [rsp+20h] [rbp-168h]
  int v58; // [rsp+28h] [rbp-160h]
  int v59; // [rsp+2Ch] [rbp-15Ch]
  __int64 v60; // [rsp+38h] [rbp-150h] BYREF
  _BYTE *v61[4]; // [rsp+40h] [rbp-148h] BYREF
  _QWORD v62[3]; // [rsp+60h] [rbp-128h] BYREF
  __int64 v63; // [rsp+78h] [rbp-110h]
  __int64 v64; // [rsp+80h] [rbp-108h]
  int v65; // [rsp+90h] [rbp-F8h]
  _QWORD v66[3]; // [rsp+A0h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+B8h] [rbp-D0h]
  __int64 v68; // [rsp+C0h] [rbp-C8h]
  int v69; // [rsp+D0h] [rbp-B8h]
  _BYTE *v70[3]; // [rsp+E0h] [rbp-A8h] BYREF
  __int64 v71; // [rsp+F8h] [rbp-90h]
  __int64 v72; // [rsp+100h] [rbp-88h]
  int v73; // [rsp+110h] [rbp-78h]
  _QWORD v74[3]; // [rsp+118h] [rbp-70h] BYREF
  __int64 v75; // [rsp+130h] [rbp-58h]
  __int64 v76; // [rsp+138h] [rbp-50h]
  int v77; // [rsp+148h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v62, v6);
  sub_A1A5E0(v5, 56);
  v7 = *(_QWORD *)(a1 + 184);
  v8 = sub_A1A5A0(v7, 56);
  sub_A1C070(v66, v8);
  sub_A1A5E0(v7, 56);
  if ( !v69 || v69 == 2 )
  {
    if ( v67 )
      goto LABEL_11;
  }
  else if ( v69 == 3 || v68 | v66[0] )
  {
    goto LABEL_11;
  }
  if ( !v65 || v65 == 2 )
  {
    if ( !v63 )
    {
LABEL_9:
      v9 = *(_QWORD *)(a1 + 184);
      v10 = 0;
LABEL_72:
      v26 = a3(a4, v10);
      *(_BYTE *)sub_A1A4E0(v9, 8) = v26;
      goto LABEL_73;
    }
  }
  else if ( v65 != 3 && !(v64 | v62[0]) )
  {
    goto LABEL_9;
  }
LABEL_11:
  sub_A1BFE0(v70, v66);
  sub_A1BFE0(v74, v62);
  if ( !v73 && v71 && *(_BYTE *)(v71 + 29) )
  {
    v48 = v70;
LABEL_134:
    v60 = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    v45 = (unsigned __int8 **)sub_A2E0C0(a1, &v60, 2276, 0);
    v46 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    sub_A248F0(v61, v48, v46);
    if ( v45 )
      sub_838D50(v45, v61[0], (size_t)v61[1]);
    std::string::_M_dispose();
    sub_A1C0C0(v74);
    sub_A1C0C0(v70);
    goto LABEL_97;
  }
  if ( !v77 && v75 && *(_BYTE *)(v75 + 29) )
  {
    v48 = v74;
    goto LABEL_134;
  }
  sub_A1C0C0(v74);
  sub_A1C0C0(v70);
  v11 = sub_A1CE20(v66, v62);
  if ( !v11 )
  {
    v50 = sub_8E9400((__int64)v66);
    v12 = sub_8E9400((__int64)v62);
    if ( v50 )
    {
      if ( !v12 )
      {
        if ( v65 && v65 != 2 )
        {
          v13 = v62[0];
          if ( v65 != 3 && !(v64 | v62[0]) )
            goto LABEL_24;
LABEL_88:
          v31 = v64;
          v32 = v13;
          if ( (_DWORD)v64 != -1 )
          {
            v33 = 0;
            if ( (unsigned int)v64 != v13 )
            {
              v53 = v64;
              v34 = sub_8E5480((__int64)v62);
              v31 = v53;
              v32 = v13;
              v33 = 32;
              if ( *(_QWORD *)(v34 + 32) )
                v33 = 16;
            }
            v32 = v32 - v31 - v33;
          }
          if ( v32 )
            goto LABEL_24;
          v61[0] = (_BYTE *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
          v35 = (unsigned __int8 **)sub_A2E0C0(a1, v61, 2270, 0);
          v36 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
          sub_A248F0(v70, v66, v36);
          if ( !v35 )
          {
LABEL_96:
            std::string::_M_dispose();
            goto LABEL_97;
          }
LABEL_95:
          sub_838D50(v35, v70[0], (size_t)v70[1]);
          goto LABEL_96;
        }
        if ( v63 )
        {
          v13 = v62[0];
          goto LABEL_88;
        }
      }
LABEL_24:
      v14 = v69;
      goto LABEL_25;
    }
    v14 = v69;
    if ( !v12 )
      goto LABEL_25;
    if ( v69 )
    {
      if ( v69 != 2 )
      {
        v15 = v66[0];
        if ( v69 == 3 )
        {
          v16 = v68;
          v17 = v66[0];
          if ( (_DWORD)v68 == -1 )
          {
            if ( LODWORD(v66[0]) )
            {
LABEL_29:
              if ( !v65 || v65 == 2 )
              {
                v11 = v63 != 0;
              }
              else
              {
                v11 = 1;
                if ( v65 != 3 )
                  v11 = (v62[0] | v64) != 0;
              }
LABEL_33:
              sub_A1BFE0(v70, v66);
              sub_A1BFE0(v74, v62);
              if ( !v73 || v73 == 2 )
              {
                if ( !v71 )
                  goto LABEL_37;
              }
              else if ( v73 != 3 && !(v72 | (__int64)v70[0]) )
              {
LABEL_37:
                if ( v77 && v77 != 2 )
                {
                  if ( v77 != 3 )
                    goto LABEL_40;
LABEL_83:
                  if ( !v11 )
                    goto LABEL_71;
                  goto LABEL_84;
                }
LABEL_82:
                if ( !v75 )
                  goto LABEL_71;
                goto LABEL_83;
              }
              if ( !v11 )
                goto LABEL_71;
              if ( (unsigned __int8)sub_A1D170(v70) )
                goto LABEL_85;
              if ( v77 )
              {
                if ( v77 == 2 )
                  goto LABEL_82;
                if ( v77 != 3 )
                {
LABEL_40:
                  if ( !(v74[0] | v76) )
                    goto LABEL_71;
                  goto LABEL_83;
                }
              }
              else if ( !v75 )
              {
                goto LABEL_71;
              }
LABEL_84:
              if ( (unsigned __int8)sub_A1D170(v74) )
              {
LABEL_85:
                v61[0] = (_BYTE *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
                sub_A2E0C0(a1, v61, 2223, 0);
                sub_A1C0C0(v74);
                sub_A1C0C0(v70);
LABEL_97:
                v27 = 0;
                goto LABEL_74;
              }
LABEL_71:
              sub_A1C0C0(v74);
              sub_A1C0C0(v70);
              v9 = *(_QWORD *)(a1 + 184);
              v10 = 4;
              goto LABEL_72;
            }
            goto LABEL_119;
          }
        }
        else
        {
          if ( !(v68 | v66[0]) )
            goto LABEL_33;
          v16 = v68;
          v17 = v66[0];
          if ( (_DWORD)v68 == -1 )
          {
            if ( LODWORD(v66[0]) )
              goto LABEL_27;
            goto LABEL_119;
          }
        }
        goto LABEL_115;
      }
      if ( !v67 )
        goto LABEL_48;
    }
    else if ( !v67 )
    {
      goto LABEL_33;
    }
    v15 = v66[0];
    v16 = v68;
    v17 = v66[0];
    if ( (_DWORD)v68 == -1 )
    {
      if ( LODWORD(v66[0]) )
      {
        if ( !v69 )
          goto LABEL_67;
LABEL_48:
        if ( !v67 )
          goto LABEL_33;
        goto LABEL_29;
      }
LABEL_119:
      v61[0] = (_BYTE *)sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
      v35 = (unsigned __int8 **)sub_A2E0C0(a1, v61, 2270, 0);
      v40 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
      sub_A248F0(v70, v62, v40);
      if ( !v35 )
        goto LABEL_96;
      goto LABEL_95;
    }
LABEL_115:
    v38 = 0;
    if ( v16 != v15 )
    {
      v59 = v69;
      v58 = v16;
      v39 = sub_8E5480((__int64)v66);
      v16 = v58;
      v38 = 32;
      v14 = v59;
      if ( *(_QWORD *)(v39 + 32) )
        v38 = 16;
    }
    if ( v17 - v16 == v38 )
      goto LABEL_119;
LABEL_25:
    if ( v14 )
    {
      if ( v14 != 2 )
      {
LABEL_27:
        if ( v14 != 3 && !(v66[0] | v68) )
          goto LABEL_33;
        goto LABEL_29;
      }
      goto LABEL_48;
    }
LABEL_67:
    if ( !v67 )
      goto LABEL_33;
    goto LABEL_29;
  }
  v18 = v65;
  if ( v69 != 1 )
  {
    v51 = v69;
    v19 = -1;
    v20 = sub_8E9400((__int64)v66);
    v21 = v51;
    if ( !v20 )
      v19 = v66[0];
    if ( v18 != 1 )
    {
      v55 = v51;
      v22 = sub_8E9400((__int64)v62);
      v52 = -1;
      v21 = v55;
      if ( !v22 )
        v52 = v62[0];
      if ( !v55 )
      {
LABEL_59:
        if ( !v67 )
          goto LABEL_61;
LABEL_60:
        if ( !sub_8E91A0((__int64)v66) )
          goto LABEL_61;
        goto LABEL_122;
      }
      goto LABEL_108;
    }
    v37 = v64;
    v52 = v64 + LODWORD(v62[0]);
    if ( v21 )
    {
LABEL_108:
      if ( v21 == 2 )
        goto LABEL_59;
      if ( v21 == 3 )
        goto LABEL_60;
      v30 = v68;
LABEL_79:
      if ( !(v66[0] | v30) )
        goto LABEL_61;
      goto LABEL_60;
    }
    if ( v67 )
      goto LABEL_60;
LABEL_105:
    if ( !(v62[0] | v37) )
      goto LABEL_64;
    goto LABEL_63;
  }
  v19 = v68 + LODWORD(v66[0]);
  if ( v65 != 1 )
  {
    v56 = v68;
    v29 = sub_8E9400((__int64)v62);
    v52 = -1;
    v30 = v56;
    if ( !v29 )
      v52 = v62[0];
    goto LABEL_79;
  }
  v37 = v64;
  v52 = v64 + LODWORD(v62[0]);
  if ( !(v66[0] | v68) )
  {
    v19 = 0;
    goto LABEL_105;
  }
  v57 = v64;
  v41 = sub_8E91A0((__int64)v66);
  v37 = v57;
  if ( !v41 )
    goto LABEL_105;
LABEL_122:
  sub_8E6410((__int64)v70, (__int64)v66);
  if ( v73 == 1 )
  {
    v19 = LODWORD(v70[0]) + v72;
  }
  else
  {
    v19 = -1;
    if ( !(unsigned __int8)sub_8E9400((__int64)v70) )
      v19 = (unsigned int)v70[0];
  }
  sub_A1C0C0(v70);
  v18 = v65;
LABEL_61:
  if ( !v18 )
  {
    if ( !v63 )
      goto LABEL_64;
    goto LABEL_63;
  }
  if ( v18 != 2 )
  {
    if ( v18 == 3 )
      goto LABEL_63;
    v37 = v64;
    goto LABEL_105;
  }
  if ( !v63 )
  {
LABEL_64:
    v23 = *(_QWORD *)(a1 + 184);
    v24 = 2;
    if ( v19 >= v52 )
      v24 = v52 < v19 ? 3 : 0;
    goto LABEL_66;
  }
LABEL_63:
  if ( !sub_8E91A0((__int64)v62) )
    goto LABEL_64;
  v42 = v62;
  sub_8E6410((__int64)v70, (__int64)v62);
  if ( v73 == 1 )
  {
    v44 = v72 + LODWORD(v70[0]);
    goto LABEL_128;
  }
  v43 = sub_8E9400((__int64)v70);
  v44 = (unsigned int)v70[0];
  if ( !v43 )
  {
LABEL_128:
    v52 = v44;
    sub_A1C0C0(v70);
    goto LABEL_64;
  }
  sub_A1C0C0(v70);
  v23 = *(_QWORD *)(a1 + 184);
  LOBYTE(v42) = v19 != -1;
  v24 = (unsigned int)(2 * (_DWORD)v42);
LABEL_66:
  v25 = a3(a4, v24);
  *(_BYTE *)sub_A1A4E0(v23, 8) = v25;
LABEL_73:
  v27 = 1;
LABEL_74:
  sub_A1C0C0(v66);
  sub_A1C0C0(v62);
  return v27;
}

