__int64 __fastcall sub_217840(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v8; // eax
  unsigned int v9; // r14d
  int v10; // eax
  signed int v11; // ecx
  unsigned __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r15
  int v19; // r15d
  __int64 v20; // rsi
  __int64 v21; // r8
  int v22; // edx
  __int64 v23; // r9
  int v24; // r11d
  unsigned int v25; // eax
  char v26; // al
  __int64 v28; // rdx
  int v29; // r15d
  __int64 v30; // rax
  int *v31; // rdi
  bool v32; // r15
  char v33; // al
  char v34; // al
  int v35; // eax
  __int64 v36; // [rsp+0h] [rbp-108h]
  unsigned int v37; // [rsp+Ch] [rbp-FCh]
  __int64 v38; // [rsp+10h] [rbp-F8h]
  int v39; // [rsp+10h] [rbp-F8h]
  __int64 v40; // [rsp+10h] [rbp-F8h]
  __int64 v41; // [rsp+10h] [rbp-F8h]
  __int64 v42; // [rsp+10h] [rbp-F8h]
  __int64 v43; // [rsp+18h] [rbp-F0h]
  int v44; // [rsp+18h] [rbp-F0h]
  __int64 v45; // [rsp+18h] [rbp-F0h]
  int v46; // [rsp+18h] [rbp-F0h]
  int v47; // [rsp+18h] [rbp-F0h]
  int v48; // [rsp+18h] [rbp-F0h]
  signed __int64 v49; // [rsp+20h] [rbp-E8h]
  signed int v50; // [rsp+28h] [rbp-E0h]
  int v51; // [rsp+28h] [rbp-E0h]
  signed int v52; // [rsp+28h] [rbp-E0h]
  signed int v53; // [rsp+28h] [rbp-E0h]
  signed int v54; // [rsp+28h] [rbp-E0h]
  int v55; // [rsp+28h] [rbp-E0h]
  signed int v56; // [rsp+2Ch] [rbp-DCh]
  _DWORD v57[4]; // [rsp+30h] [rbp-D8h] BYREF
  signed __int64 v58; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+48h] [rbp-C0h]
  __int64 v60; // [rsp+50h] [rbp-B8h]
  __int64 v61; // [rsp+60h] [rbp-A8h]
  __int64 v62; // [rsp+68h] [rbp-A0h]
  __int64 v63; // [rsp+98h] [rbp-70h]
  __int64 v64; // [rsp+A0h] [rbp-68h]
  __int64 v65; // [rsp+B0h] [rbp-58h]
  __int64 v66; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v67; // [rsp+C8h] [rbp-40h]

  v67 = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return 0;
  LOBYTE(v8) = sub_1EF8D0(a2, *(_QWORD *)(a1 + 1504), a3, 1);
  v9 = v8;
  if ( !(_BYTE)v8 )
    return 0;
  if ( *(_DWORD *)(a2 + 88) != a4 && !(unsigned __int8)sub_330B40(a2, *(_QWORD *)(a1 + 1504), a4) )
  {
    v28 = *(int *)(a2 + 88);
    if ( v28 < a4 || !(unsigned __int8)sub_1C22E0(a2, *(_QWORD *)(a1 + 1504), v28, a4) )
      return 0;
  }
  v10 = *(_DWORD *)(a2 + 24);
  if ( (v10 & 0x100) == 0 )
    goto LABEL_32;
  v11 = a4;
  v37 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)a2 == 1 && *(_DWORD *)(a2 + 88) != a4 )
  {
    v12 = *(_QWORD *)(a1 + 464);
    if ( v12 )
    {
      v13 = 0;
      v14 = 0;
      v15 = 0;
      v16 = 0;
      do
      {
        v17 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v16);
        if ( *(_DWORD *)v17 == 1 )
        {
          v18 = *(_QWORD *)(v17 + 8);
          if ( *(_QWORD *)(a2 + 8) < v18 && (v18 >= v14 || !v15) )
          {
            v14 = *(_QWORD *)(v17 + 8);
            v15 = v17;
          }
        }
        v16 = ++v13;
      }
      while ( v13 < v12 );
      if ( v15 )
      {
        v36 = v15;
        v43 = v14;
        if ( !(unsigned __int8)sub_1C2F20(a2, nullptr, &v58, a4) )
          return 0;
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        v20 = *(_QWORD *)(v36 + 80);
        v57[0] = 0;
        v49 = v58;
        get_tinfo_size(v57, v20, 0);
        v22 = v57[0];
        v11 = a4;
        v23 = v43;
        if ( (v57[0] & (v57[0] - 1)) != 0 )
        {
          if ( !under_debugger )
            interr(2858, v20, v57[0], (unsigned int)a4, v21);
          BUG();
        }
        v24 = 2 * v19;
        if ( v57[0] <= 2 * v19 )
        {
          v25 = v37;
          if ( v19 > v57[0] )
          {
            if ( v37 > 0x10 )
            {
LABEL_21:
              if ( v25 != 176 && v25 != 256 )
              {
LABEL_23:
                v50 = v11;
                v44 = v22;
                v38 = v23;
                v26 = getinf_flag(67, 2);
                v23 = v38;
                v22 = v44;
                v11 = v50;
                if ( !v26 )
                  goto LABEL_25;
              }
LABEL_24:
              v19 = v22;
              goto LABEL_25;
            }
LABEL_82:
            v53 = v11;
            v47 = v22;
            v41 = v23;
            v25 = getinf(99);
            v11 = v53;
            v22 = v47;
            v23 = v41;
            goto LABEL_21;
          }
          if ( v37 > 0x10 )
          {
LABEL_76:
            if ( v25 == 176 || v25 == 256 )
              goto LABEL_25;
            goto LABEL_78;
          }
LABEL_88:
          v54 = v11;
          v48 = v22;
          v42 = v23;
          v25 = getinf(99);
          v11 = v54;
          v22 = v48;
          v23 = v42;
          goto LABEL_76;
        }
        if ( v37 <= 0x10 )
        {
          v55 = v57[0];
          v35 = getinf(99);
          v24 = 2 * v19;
          v23 = v43;
          v11 = a4;
          if ( v35 == 176 || v35 == 256 )
          {
            if ( v19 > v24 )
            {
LABEL_81:
              v22 = v24;
              goto LABEL_82;
            }
LABEL_87:
            v22 = v24;
            goto LABEL_88;
          }
          v22 = v55;
        }
        else if ( v37 == 176 || v37 == 256 )
        {
          if ( v19 > v24 )
            v19 *= 2;
LABEL_25:
          if ( ((v49 + v19 - 1) & -v19) != v23 )
            return 0;
          goto LABEL_28;
        }
        v56 = v11;
        v51 = v22;
        v45 = v23;
        v39 = v24;
        v33 = getinf_flag(67, 512);
        v23 = v45;
        v22 = v51;
        v11 = v56;
        if ( v33 )
          goto LABEL_24;
        v24 = v39;
        if ( v19 > v39 )
        {
          if ( v37 > 0x10 )
          {
            v22 = v39;
            goto LABEL_23;
          }
          goto LABEL_81;
        }
        if ( v37 > 0x10 )
        {
          v22 = v39;
LABEL_78:
          v52 = v11;
          v46 = v22;
          v40 = v23;
          v34 = getinf_flag(67, 4);
          v23 = v40;
          v11 = v52;
          if ( v34 )
            v19 = v46;
          goto LABEL_25;
        }
        goto LABEL_87;
      }
    }
  }
LABEL_28:
  sub_1C7180(v57, a1, a2, v11);
  if ( !v57[0] )
  {
LABEL_47:
    cleanup_argloc(v57);
    return 0;
  }
  if ( *(int *)(a2 + 88) < a4 && *(_QWORD *)(a1 + 464) )
  {
    v29 = 0;
    v30 = 0;
    do
    {
      v31 = (int *)(*(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v30));
      if ( (int *)a2 != v31 )
      {
        if ( (unsigned __int8)sub_1C4520(v31, v31[22], (int *)a2, a4) )
          goto LABEL_47;
      }
      v30 = ++v29;
    }
    while ( (unsigned __int64)v29 < *(_QWORD *)(a1 + 464) );
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
    goto LABEL_31;
  if ( v37 - 208 <= 0x2F )
    goto LABEL_31;
  v32 = (get_tinfo_property(*a3, 2) & 0xF) == 9;
  if ( v32 == ((get_tinfo_property(*(_QWORD *)(a2 + 80), 2) & 0xF) == 9)
    && (get_tinfo_property(*a3, 2) & 0x2F) != 0xD
    && (get_tinfo_property(*(_QWORD *)(a2 + 80), 2) & 0x2F) != 0xD )
  {
    goto LABEL_31;
  }
  sub_D0AF0((__int64)&v58, *(_QWORD *)(a1 + 1496), v37);
  if ( !(unsigned __int8)sub_D40C0((__int64)&v58, a1, a2, a3) )
  {
    if ( v65 )
    {
      v66 = 0;
      qfree(v65);
    }
    if ( v63 )
    {
      v64 = 0;
      qfree(v63);
    }
    if ( v61 )
    {
      v62 = 0;
      qfree(v61);
    }
    if ( v59 )
    {
      v60 = 0;
      qfree(v59);
    }
    goto LABEL_47;
  }
  if ( v65 )
  {
    v66 = 0;
    qfree(v65);
  }
  if ( v63 )
  {
    v64 = 0;
    qfree(v63);
  }
  if ( v61 )
  {
    v62 = 0;
    qfree(v61);
  }
  if ( v59 )
  {
    v60 = 0;
    qfree(v59);
  }
LABEL_31:
  cleanup_argloc(v57);
  v10 = *(_DWORD *)(a2 + 24);
LABEL_32:
  if ( (v10 & 0x80u) == 0 || *(_DWORD *)(a2 + 88) == a4 )
  {
    sub_1EF8F0(a2, a3);
    *(_DWORD *)(a2 + 24) |= 0x42u;
    *(_DWORD *)(a2 + 88) = a4;
    return v9;
  }
  return 0;
}
