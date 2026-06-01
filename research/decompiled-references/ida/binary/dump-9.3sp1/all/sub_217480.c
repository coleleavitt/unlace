__int64 __fastcall sub_217480(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r14d
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r15
  int v18; // r15d
  int v19; // edx
  __int64 v20; // r9
  int v21; // r11d
  int v22; // eax
  char v23; // al
  __int64 v25; // rdx
  int v26; // r15d
  __int64 v27; // rax
  int *v28; // rdi
  bool v29; // r15
  char v30; // al
  char v31; // al
  int v32; // eax
  unsigned int v33; // [rsp+Ch] [rbp-FCh]
  __int64 v34; // [rsp+10h] [rbp-F8h]
  int v35; // [rsp+10h] [rbp-F8h]
  __int64 v36; // [rsp+10h] [rbp-F8h]
  __int64 v37; // [rsp+10h] [rbp-F8h]
  __int64 v38; // [rsp+10h] [rbp-F8h]
  __int64 v39; // [rsp+18h] [rbp-F0h]
  int v40; // [rsp+18h] [rbp-F0h]
  __int64 v41; // [rsp+18h] [rbp-F0h]
  int v42; // [rsp+18h] [rbp-F0h]
  int v43; // [rsp+18h] [rbp-F0h]
  int v44; // [rsp+18h] [rbp-F0h]
  signed __int64 v45; // [rsp+20h] [rbp-E8h]
  unsigned int v46; // [rsp+28h] [rbp-E0h]
  int v47; // [rsp+28h] [rbp-E0h]
  unsigned int v48; // [rsp+28h] [rbp-E0h]
  unsigned int v49; // [rsp+28h] [rbp-E0h]
  unsigned int v50; // [rsp+28h] [rbp-E0h]
  unsigned int v51; // [rsp+2Ch] [rbp-DCh]
  int v52[4]; // [rsp+30h] [rbp-D8h] BYREF
  signed __int64 v53; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v54; // [rsp+48h] [rbp-C0h]
  __int64 v55; // [rsp+50h] [rbp-B8h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  __int64 v57; // [rsp+68h] [rbp-A0h]
  __int64 v58; // [rsp+98h] [rbp-70h]
  __int64 v59; // [rsp+A0h] [rbp-68h]
  __int64 v60; // [rsp+B0h] [rbp-58h]
  __int64 v61; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v62; // [rsp+C8h] [rbp-40h]

  v62 = __readfsqword(0x28u);
  if ( a4 <= 0 )
    return 0;
  LOBYTE(v7) = sub_1EF510(a2, *(_QWORD *)(a1 + 1504), a3, 1);
  v8 = v7;
  if ( !(_BYTE)v7 )
    return 0;
  if ( *(_DWORD *)(a2 + 88) != a4 && !(unsigned __int8)sub_330820(a2, *(_QWORD *)(a1 + 1504), a4) )
  {
    v25 = *(int *)(a2 + 88);
    if ( v25 < a4 || !(unsigned __int8)sub_1C28A0(a2, *(_QWORD *)(a1 + 1504), v25, a4) )
      return 0;
  }
  v9 = *(_DWORD *)(a2 + 24);
  if ( (v9 & 0x100) == 0 )
    goto LABEL_31;
  v10 = (unsigned int)a4;
  v33 = *(_DWORD *)(a1 + 72);
  if ( *(_DWORD *)a2 == 1 && *(_DWORD *)(a2 + 88) != a4 )
  {
    v11 = *(_QWORD *)(a1 + 464);
    if ( v11 )
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      do
      {
        v16 = *(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v15);
        if ( *(_DWORD *)v16 == 1 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          if ( *(_QWORD *)(a2 + 8) < v17 && (v17 >= v13 || !v14) )
          {
            v13 = *(_QWORD *)(v16 + 8);
            v14 = v16;
          }
        }
        v15 = ++v12;
      }
      while ( v12 < v11 );
      if ( v14 )
      {
        v39 = v13;
        if ( !(unsigned __int8)sub_1C34E0(a2, nullptr, &v53, a4) )
          return 0;
        v18 = *(_DWORD *)(*(_QWORD *)(a1 + 1504) + 80LL);
        v52[0] = 0;
        v45 = v53;
        get_tinfo_size();
        v19 = 0;
        v10 = (unsigned int)a4;
        v20 = v39;
        v21 = 2 * v18;
        if ( (v18 & 0x40000000) == 0 )
        {
          v22 = v33;
          if ( v18 > v52[0] )
          {
            if ( v33 > 0x10 )
            {
LABEL_20:
              if ( v22 != 176 && v22 != 256 )
              {
LABEL_22:
                v46 = v10;
                v40 = v19;
                v34 = v20;
                v23 = getinf_flag();
                v20 = v34;
                v19 = v40;
                v10 = v46;
                if ( !v23 )
                  goto LABEL_24;
              }
LABEL_23:
              v18 = v19;
              goto LABEL_24;
            }
LABEL_81:
            v49 = v10;
            v43 = v19;
            v37 = v20;
            v22 = getinf();
            v10 = v49;
            v19 = v43;
            v20 = v37;
            goto LABEL_20;
          }
          if ( v33 > 0x10 )
          {
LABEL_75:
            if ( v22 == 176 || v22 == 256 )
              goto LABEL_24;
            goto LABEL_77;
          }
LABEL_87:
          v50 = v10;
          v44 = v19;
          v38 = v20;
          v22 = getinf();
          v10 = v50;
          v19 = v44;
          v20 = v38;
          goto LABEL_75;
        }
        if ( v33 <= 0x10 )
        {
          v32 = getinf();
          v21 = 2 * v18;
          v20 = v39;
          LODWORD(v10) = a4;
          if ( v32 == 176 || v32 == 256 )
          {
            if ( v18 > v21 )
            {
LABEL_80:
              v19 = v21;
              goto LABEL_81;
            }
LABEL_86:
            v19 = v21;
            goto LABEL_87;
          }
          v19 = v52[0];
        }
        else if ( v33 == 176 || v33 == 256 )
        {
          if ( v18 > v21 )
            v18 *= 2;
LABEL_24:
          if ( ((v45 + v18 - 1) & -v18) != v20 )
            return 0;
          goto LABEL_27;
        }
        v51 = v10;
        v47 = v19;
        v41 = v20;
        v35 = v21;
        v30 = getinf_flag();
        v20 = v41;
        v19 = v47;
        v10 = v51;
        if ( v30 )
          goto LABEL_23;
        v21 = v35;
        if ( v18 > v35 )
        {
          if ( v33 > 0x10 )
          {
            v19 = v35;
            goto LABEL_22;
          }
          goto LABEL_80;
        }
        if ( v33 > 0x10 )
        {
          v19 = v35;
LABEL_77:
          v48 = v10;
          v42 = v19;
          v36 = v20;
          v31 = getinf_flag();
          v20 = v36;
          v10 = v48;
          if ( v31 )
            v18 = v42;
          goto LABEL_24;
        }
        goto LABEL_86;
      }
    }
  }
LABEL_27:
  sub_1C7740(v52, a1, a2, v10);
  if ( !v52[0] )
  {
LABEL_46:
    cleanup_argloc();
    return 0;
  }
  if ( *(int *)(a2 + 88) < a4 && *(_QWORD *)(a1 + 464) )
  {
    v26 = 0;
    v27 = 0;
    do
    {
      v28 = (int *)(*(_QWORD *)(a1 + 432) + 104LL * *(int *)(*(_QWORD *)(a1 + 456) + 4 * v27));
      if ( (int *)a2 != v28 )
      {
        if ( (unsigned __int8)sub_1C4AE0(v28, v28[22], (int *)a2, a4) )
          goto LABEL_46;
      }
      v27 = ++v26;
    }
    while ( (unsigned __int64)v26 < *(_QWORD *)(a1 + 464) );
  }
  if ( (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
    goto LABEL_30;
  if ( v33 - 208 <= 0x2F )
    goto LABEL_30;
  v29 = (get_tinfo_property() & 0xF) == 9;
  if ( v29 == ((get_tinfo_property() & 0xF) == 9)
    && (get_tinfo_property() & 0x2F) != 0xD
    && (get_tinfo_property() & 0x2F) != 0xD )
  {
    goto LABEL_30;
  }
  sub_D10B0((__int64)&v53, *(_QWORD *)(a1 + 1496), v33);
  if ( !(unsigned __int8)sub_D4680((__int64)&v53, a1, (_DWORD *)a2) )
  {
    if ( v60 )
    {
      v61 = 0;
      qfree(v60);
    }
    if ( v58 )
    {
      v59 = 0;
      qfree(v58);
    }
    if ( v56 )
    {
      v57 = 0;
      qfree(v56);
    }
    if ( v54 )
    {
      v55 = 0;
      qfree(v54);
    }
    goto LABEL_46;
  }
  if ( v60 )
  {
    v61 = 0;
    qfree(v60);
  }
  if ( v58 )
  {
    v59 = 0;
    qfree(v58);
  }
  if ( v56 )
  {
    v57 = 0;
    qfree(v56);
  }
  if ( v54 )
  {
    v55 = 0;
    qfree(v54);
  }
LABEL_30:
  cleanup_argloc();
  v9 = *(_DWORD *)(a2 + 24);
LABEL_31:
  if ( (v9 & 0x80u) == 0 || *(_DWORD *)(a2 + 88) == a4 )
  {
    sub_1EF530(a2);
    *(_DWORD *)(a2 + 24) |= 0x42u;
    *(_DWORD *)(a2 + 88) = a4;
    return v8;
  }
  return 0;
}
