__int64 __fastcall sub_7D3AE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx
  _QWORD *v14; // rax
  __int64 v15; // r12
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r8
  __int64 v26; // rdi
  int v27; // eax
  _QWORD *v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  char v32; // dl
  __int64 *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rbx
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  unsigned __int64 v47; // rbx
  _QWORD *v48; // rax
  __int64 v49; // rsi
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  char v52; // dl
  __int64 v53; // rdi
  int v54; // eax
  _QWORD *v55; // rax
  __int64 v56; // rbp
  __int64 v57; // rsi
  unsigned __int64 v58; // rax
  char v59; // dl
  __int64 v60; // rdi
  int v61; // eax
  __int64 v62; // rdi
  int v63; // eax
  __int64 v67; // [rsp+18h] [rbp-E0h]
  unsigned __int64 v68; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v69; // [rsp+20h] [rbp-D8h]
  __int64 v70; // [rsp+20h] [rbp-D8h]
  __int64 v71; // [rsp+28h] [rbp-D0h]
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v73; // [rsp+38h] [rbp-C0h]
  _BYTE v74[184]; // [rsp+40h] [rbp-B8h] BYREF

  v7 = *(_QWORD *)(sub_798D40(a1) + 18200);
  if ( v7 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v7 + 80LL))(v7, *(_QWORD *)(a1 + 72), 1);
  v8 = *(_QWORD *)(a1 + 80);
  if ( !v8 )
    v8 = sub_7D0C20(a1);
  ptr = v74;
  v73 = 0x2000000000LL;
  v9 = sub_798D40(a1);
  sub_7D3A00((__int64)&ptr, a2, a3, a4, v9);
  v67 = v8 + 104;
  v10 = sub_25AC3A0(v8 + 104, &ptr, a5, &off_47DA910);
  if ( !v10 )
  {
    if ( ptr != v74 )
      free(ptr);
    goto LABEL_46;
  }
  v11 = *(_QWORD *)(v10 - 40);
  v12 = *(_QWORD *)(v11 + 96);
  v13 = v12 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v12 & 1) != 0 )
  {
LABEL_27:
    v19 = v12 & 0xFFFFFFFFFFFFFFF8LL;
    v15 = v19;
    if ( !v13 || (v13 & 4) == 0 )
      goto LABEL_14;
    goto LABEL_29;
  }
  if ( v13 <= 3 )
  {
LABEL_33:
    v15 = 0;
    goto LABEL_14;
  }
  v14 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFCLL);
  v15 = (__int64)v14;
  if ( (v13 & 2) == 0 )
    goto LABEL_14;
  v16 = v14[2275];
  if ( !v16 )
  {
    v13 = v11 & 0xFFFFFFFFFFFFFFFALL;
    v12 = v11 & 0xFFFFFFFFFFFFFFFALL | 1;
    *(_QWORD *)(v11 + 96) = v12;
    goto LABEL_27;
  }
  v17 = v14[274];
  v14[284] += 24LL;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( *(_QWORD *)(v15 + 2200) >= v18 + 24 && v17 )
  {
    *(_QWORD *)(v15 + 2192) = v18 + 24;
  }
  else
  {
    v71 = v16;
    v70 = v11;
    v18 = sub_7CF9B0(v15 + 2192, 24, 3);
    v16 = v71;
    v11 = v70;
  }
  *(_QWORD *)v18 = v16;
  *(_DWORD *)(v18 + 8) = 0;
  *(_QWORD *)(v18 + 16) = v11;
  *(_QWORD *)(v11 + 96) = v18 | 5;
  v19 = v18 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = v19;
LABEL_29:
  if ( v19 )
  {
    v26 = *(_QWORD *)v15;
    v27 = *(_DWORD *)(*(_QWORD *)v15 + 12LL);
    if ( *(_DWORD *)(v15 + 8) != v27 )
    {
      *(_DWORD *)(v15 + 8) = v27;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 144LL))(v26, v11);
    }
    v15 = *(_QWORD *)(v15 + 16);
  }
LABEL_14:
  if ( sub_782740(v15) )
  {
    do
    {
      v20 = *(_QWORD *)(v15 + 96);
      if ( (v20 & 1) != 0 )
        goto LABEL_33;
      v21 = v20 >> 1;
      if ( (v20 & 2) != 0 )
        goto LABEL_33;
      if ( (v20 & 1) != 0 )
      {
        v22 = v20 & 0xFFFFFFFFFFFFFFF8LL;
        v23 = *(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFFELL;
        v24 = v22;
      }
      else
      {
        if ( (v20 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
          goto LABEL_33;
        v28 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v21 & 1) == 0 )
        {
          v15 = (__int64)v28;
          goto LABEL_14;
        }
        v24 = v28[2275];
        if ( v24 )
        {
          v29 = v28[274];
          v28[284] += 24LL;
          v30 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          if ( v28[275] >= v30 + 24 && v29 )
          {
            v28[274] = v30 + 24;
            v31 = (v29 + 7) & 0xFFFFFFFFFFFFFFF8LL;
          }
          else
          {
            v69 = v24;
            v31 = sub_7CF9B0((__int64)(v28 + 274), 24, 3);
            v24 = v69;
          }
          *(_QWORD *)v31 = v24;
          *(_DWORD *)(v31 + 8) = 0;
          *(_QWORD *)(v31 + 16) = v15;
          *(_QWORD *)(v15 + 96) = v31 | 5;
          v32 = v31;
          v22 = v31 & 0xFFFFFFFFFFFFFFF8LL;
          v24 = v22;
          LOBYTE(v23) = v32 & 0xFA | 4;
        }
        else
        {
          *(_QWORD *)(v15 + 96) = v15 & 0xFFFFFFFFFFFFFFFALL | 1;
          LOBYTE(v23) = v15 & 0xFA;
          if ( (v15 & 0xFFFFFFFFFFFFFFFALL) == 0 )
            goto LABEL_21;
          v22 = v15 & 0xFFFFFFFFFFFFFFF8LL;
          v24 = v15 & 0xFFFFFFFFFFFFFFF8LL;
        }
      }
      if ( (v23 & 4) != 0 && v22 )
      {
        v53 = *(_QWORD *)v24;
        v54 = *(_DWORD *)(*(_QWORD *)v24 + 12LL);
        if ( *(_DWORD *)(v24 + 8) != v54 )
        {
          *(_DWORD *)(v24 + 8) = v54;
          v68 = v24;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v53 + 144LL))(v53, v15);
          v24 = v68;
        }
        v15 = *(_QWORD *)(v24 + 16);
        goto LABEL_14;
      }
LABEL_21:
      v15 = v24;
    }
    while ( sub_782740(v24) );
  }
  if ( ptr != v74 )
    free(ptr);
  if ( !v15 )
  {
LABEL_46:
    v33 = *(__int64 **)(sub_798D40(a1) + 18200);
    if ( !v33 )
      return 0;
    v34 = *v33;
    v35 = *(_QWORD *)(a1 + 72);
    if ( !(a4
         ? (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v34 + 80))(v33, v35, 0)
         : (*(unsigned __int8 (__fastcall **)(__int64 *, __int64, __int64, __int64))(v34 + 88))(v33, v35, a2, a3)) )
      return 0;
    ptr = v74;
    v73 = 0x2000000000LL;
    v37 = sub_798D40(a1);
    sub_7D3A00((__int64)&ptr, a2, a3, a4, v37);
    v38 = sub_25AC3A0(v67, &ptr, a5, &off_47DA910);
    v15 = v38;
    if ( !v38 )
      goto LABEL_62;
    v39 = *(_QWORD *)(v38 - 40);
    v40 = *(_QWORD *)(v39 + 96);
    v41 = v40 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v40 & 1) == 0 )
    {
      if ( v41 <= 3 )
      {
LABEL_65:
        v15 = 0;
        goto LABEL_54;
      }
      v55 = (_QWORD *)(v40 & 0xFFFFFFFFFFFFFFFCLL);
      v15 = (__int64)v55;
      if ( (v41 & 2) == 0 )
      {
LABEL_54:
        if ( sub_782740(v15) )
        {
          do
          {
            v43 = *(_QWORD *)(v15 + 96);
            if ( (v43 & 1) != 0 )
              goto LABEL_65;
            v44 = v43 >> 1;
            if ( (v43 & 2) != 0 )
              goto LABEL_65;
            if ( (v43 & 1) != 0 )
            {
              v45 = v43 & 0xFFFFFFFFFFFFFFF8LL;
              v46 = *(_QWORD *)(v15 + 96) & 0xFFFFFFFFFFFFFFFELL;
              v47 = v45;
            }
            else
            {
              if ( (v43 & 0xFFFFFFFFFFFFFFFELL) <= 3 )
                goto LABEL_65;
              v48 = (_QWORD *)(v43 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v44 & 1) == 0 )
              {
                v15 = (__int64)v48;
                goto LABEL_54;
              }
              v47 = v48[2275];
              if ( v47 )
              {
                v49 = v48[274];
                v48[284] += 24LL;
                v50 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                if ( v48[275] >= v50 + 24 && v49 )
                {
                  v48[274] = v50 + 24;
                  v51 = (v49 + 7) & 0xFFFFFFFFFFFFFFF8LL;
                }
                else
                {
                  v51 = sub_7CF9B0((__int64)(v48 + 274), 24, 3);
                }
                *(_QWORD *)v51 = v47;
                *(_DWORD *)(v51 + 8) = 0;
                *(_QWORD *)(v51 + 16) = v15;
                *(_QWORD *)(v15 + 96) = v51 | 5;
                v52 = v51;
                v45 = v51 & 0xFFFFFFFFFFFFFFF8LL;
                v47 = v45;
                LOBYTE(v46) = v52 & 0xFA | 4;
              }
              else
              {
                *(_QWORD *)(v15 + 96) = v15 & 0xFFFFFFFFFFFFFFFALL | 1;
                LOBYTE(v46) = v15 & 0xFA;
                if ( (v15 & 0xFFFFFFFFFFFFFFFALL) == 0 )
                  goto LABEL_61;
                v45 = v15 & 0xFFFFFFFFFFFFFFF8LL;
                v47 = v15 & 0xFFFFFFFFFFFFFFF8LL;
              }
            }
            if ( (v46 & 4) != 0 && v45 )
            {
              v62 = *(_QWORD *)v47;
              v63 = *(_DWORD *)(*(_QWORD *)v47 + 12LL);
              if ( *(_DWORD *)(v47 + 8) != v63 )
              {
                *(_DWORD *)(v47 + 8) = v63;
                (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 144LL))(v62, v15);
              }
              v15 = *(_QWORD *)(v47 + 16);
              goto LABEL_54;
            }
LABEL_61:
            v15 = v47;
          }
          while ( sub_782740(v47) );
        }
LABEL_62:
        if ( ptr != v74 )
          free(ptr);
        return v15;
      }
      v56 = v55[2275];
      if ( v56 )
      {
        v57 = v55[274];
        v55[284] += 24LL;
        v58 = (v57 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( *(_QWORD *)(v15 + 2200) >= v58 + 24 && v57 )
          *(_QWORD *)(v15 + 2192) = v58 + 24;
        else
          v58 = sub_7CF9B0(v15 + 2192, 24, 3);
        *(_QWORD *)v58 = v56;
        *(_DWORD *)(v58 + 8) = 0;
        *(_QWORD *)(v58 + 16) = v39;
        *(_QWORD *)(v39 + 96) = v58 | 5;
        v59 = v58;
        v42 = v58 & 0xFFFFFFFFFFFFFFF8LL;
        v15 = v42;
        LOBYTE(v41) = v59 & 0xFA | 4;
LABEL_53:
        if ( (v41 & 4) != 0 && v42 )
        {
          v60 = *(_QWORD *)v15;
          v61 = *(_DWORD *)(*(_QWORD *)v15 + 12LL);
          if ( *(_DWORD *)(v15 + 8) != v61 )
          {
            *(_DWORD *)(v15 + 8) = v61;
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v60 + 144LL))(v60, v39);
          }
          v15 = *(_QWORD *)(v15 + 16);
        }
        goto LABEL_54;
      }
      v41 = v39 & 0xFFFFFFFFFFFFFFFALL;
      v40 = v39 & 0xFFFFFFFFFFFFFFFALL | 1;
      *(_QWORD *)(v39 + 96) = v40;
    }
    v42 = v40 & 0xFFFFFFFFFFFFFFF8LL;
    v15 = v42;
    if ( !v41 )
      goto LABEL_54;
    goto LABEL_53;
  }
  return v15;
}

