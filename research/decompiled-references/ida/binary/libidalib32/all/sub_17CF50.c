__int64 __fastcall sub_17CF50(__int64 a1)
{
  char *v1; // r12
  int v2; // eax
  const char *v3; // rbp
  const char *v4; // r15
  const char *v5; // rax
  __int64 v6; // r13
  char v7; // r14
  TView **v8; // rdi
  __int64 v9; // rbx
  __int64 i; // rbp
  const char *v11; // r14
  __int16 v12; // cx
  TView *v13; // r12
  int v14; // eax
  __int64 v15; // rax
  __int16 v16; // ax
  TView **v17; // r14
  TView **v18; // r12
  TView **v19; // rbp
  int v20; // r8d
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ebp
  __int64 v24; // rax
  int v25; // r8d
  TView **v26; // r12
  TView *v27; // r14
  int v28; // ebp
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // r12d
  int v32; // edi
  int v33; // r8d
  __int16 v34; // si
  int v35; // edi
  __int16 v36; // dx
  __int64 v37; // rax
  __int64 v38; // r12
  bool v39; // r15
  __int16 v40; // ax
  char v41; // al
  __int64 v42; // r12
  size_t v44; // r13
  __int64 v45; // rdx
  const char *v46; // rax
  int v47; // edx
  int v48; // [rsp+0h] [rbp-29D8h]
  __int64 v49; // [rsp+0h] [rbp-29D8h]
  __int16 v50; // [rsp+0h] [rbp-29D8h]
  int v51; // [rsp+14h] [rbp-29C4h]
  __int64 v52; // [rsp+18h] [rbp-29C0h]
  unsigned __int16 v53; // [rsp+20h] [rbp-29B8h]
  __int16 v54; // [rsp+20h] [rbp-29B8h]
  int v55; // [rsp+20h] [rbp-29B8h]
  _DWORD *v56; // [rsp+38h] [rbp-29A0h]
  int v57; // [rsp+44h] [rbp-2994h] BYREF
  _DWORD *v58; // [rsp+48h] [rbp-2990h] BYREF
  _QWORD v59[2]; // [rsp+50h] [rbp-2988h] BYREF
  int v60; // [rsp+60h] [rbp-2978h]
  _QWORD v61[2]; // [rsp+70h] [rbp-2968h] BYREF
  int v62; // [rsp+80h] [rbp-2958h]
  _QWORD v63[2]; // [rsp+90h] [rbp-2948h] BYREF
  int v64; // [rsp+A0h] [rbp-2938h]
  __int64 (__fastcall **v65)(); // [rsp+B0h] [rbp-2928h] BYREF
  __int128 v66; // [rsp+B8h] [rbp-2920h]
  const char *v67[3]; // [rsp+D0h] [rbp-2908h] BYREF
  int v68; // [rsp+E8h] [rbp-28F0h]
  __int64 v69; // [rsp+F0h] [rbp-28E8h]
  __int64 v70; // [rsp+F8h] [rbp-28E0h]
  __int64 v71; // [rsp+108h] [rbp-28D0h]
  __int64 v72; // [rsp+110h] [rbp-28C8h]
  int v73; // [rsp+124h] [rbp-28B4h]
  __int64 v74; // [rsp+130h] [rbp-28A8h] BYREF
  unsigned __int64 v75; // [rsp+138h] [rbp-28A0h]
  char v76; // [rsp+148h] [rbp-2890h]
  TView *v77[4]; // [rsp+150h] [rbp-2888h] BYREF
  _QWORD v78[4]; // [rsp+170h] [rbp-2868h]
  char v79[10248]; // [rsp+190h] [rbp-2848h] BYREF
  unsigned __int64 v80; // [rsp+2998h] [rbp-40h]

  v1 = *(char **)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 168);
  v80 = __readfsqword(0x28u);
  v3 = *(const char **)(a1 + 72);
  v51 = v2;
  v4 = *(const char **)(a1 + 96);
  if ( !v1 || *v1 )
  {
    if ( !v3 )
      goto LABEL_6;
  }
  else
  {
    v1 = "~Y~es";
    if ( !v3 )
    {
      v1 = "OK";
      goto LABEL_6;
    }
  }
  if ( !*v3 )
    v3 = "~N~o";
LABEL_6:
  if ( v4 && !*v4 )
    v4 = "~C~ancel";
  sub_17CC60(
    (__int64)v67,
    *(const char **)(a1 + 120),
    *(const char **)(a1 + 24),
    *(_DWORD *)(a1 + 172),
    *(_DWORD *)(a1 + 176));
  qvsnprintf();
  sub_17C3C0(&v74, nullptr, v79);
  v5 = sub_17C430((__int64)v67, v79);
  v6 = TProgram::application;
  if ( TProgram::application )
  {
    v52 = TProgram::application + 136LL;
    v7 = (*(__int64 (__fastcall **)(__int64, int *, const char **))(*(_QWORD *)(TProgram::application + 136LL) + 184LL))(
           TProgram::application + 136LL,
           &v57,
           v67);
    if ( v7 )
    {
      v51 = v57;
      sub_8F660((__int64)"[autohidden] ");
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 136) + 160LL))(v52) != 1 || v7 )
    {
      v65 = nullptr;
      v66 = 0;
      if ( v51 )
      {
        if ( v51 == 1 )
        {
          if ( v1 )
          {
            v4 = v1;
            v44 = strlen(v1);
            v45 = v44 + 1;
          }
          else
          {
            v45 = 4;
            v44 = 3;
            v4 = "Yes";
          }
        }
        else if ( v51 == -1 )
        {
          if ( v4 )
          {
            v44 = strlen(v4);
            v45 = v44 + 1;
          }
          else
          {
            v45 = 7;
            v44 = 6;
            v4 = "Cancel";
          }
        }
        else
        {
          v45 = 2;
          v44 = 1;
          v4 = "?";
        }
      }
      else if ( v3 )
      {
        v4 = v3;
        v44 = strlen(v3);
        v45 = v44 + 1;
      }
      else
      {
        v45 = 3;
        v44 = 2;
        v4 = "No";
      }
      v49 = v45;
      v65 = (__int64 (__fastcall **)())qvector_reserve();
      *(_QWORD *)&v66 = v49;
      memmove(v65, v4, v44);
      *((_BYTE *)v65 + v44) = 0;
      if ( v7 )
      {
        sub_17BCA0((__int64)&v65, "~", "");
        if ( (_QWORD)v66 )
          v4 = (const char *)v65;
        else
          v4 = s1;
      }
      strrpl();
      v46 = sub_17C430((__int64)v67, v79);
      sub_8F660((__int64)"%s -> %s\n", v46, v4);
      v42 = v51;
      if ( v65 )
      {
        *(_QWORD *)&v66 = 0;
        qfree();
      }
    }
    else
    {
      v8 = nullptr;
      v58 = nullptr;
      if ( v73 )
        v8 = (TView **)&v58;
      v9 = sub_17C8B0(v8, 40, 5, 0, v67, v79);
      if ( v9 )
      {
        if ( v76 )
        {
          if ( v51 == -1 )
            v51 = 0;
          v4 = nullptr;
        }
        v78[0] = v1;
        v78[3] = 0;
        v56 = v58;
        v78[2] = v4;
        v48 = 0;
        v78[1] = v3;
        for ( i = 0; i != 4; ++i )
        {
          v11 = (const char *)v78[i];
          if ( v11 )
          {
            v12 = 12;
            if ( i )
              v12 = 2 * (i == 1) + 11;
            v53 = v12;
            v13 = (TView *)operator new(0x58u);
            v14 = cstrlen(v11);
            v65 = nullptr;
            LODWORD(v66) = v14 + 4;
            DWORD1(v66) = 2;
            TButton::TButton(v13, &v65, v11, v53, 0);
            v77[v48] = v13;
            TGroup::insert((TGroup *)v9, v13);
            ++v48;
          }
        }
        TView::select(v77[1 - v51]);
        v15 = *(_QWORD *)(v9 + 152);
        v60 = 0;
        v59[1] = v15;
        v59[0] = &off_234BE0;
        TGroup::forEach((TGroup *)v9, (void (*)(TView *, void *))sub_17BC70, v59);
        v16 = v60;
        *(_WORD *)(v9 + 50) = 0;
        if ( v48 <= 0 )
        {
          v23 = 0;
          v20 = 0;
        }
        else
        {
          v17 = v77;
          v54 = v16 + 1;
          v18 = &v77[v48];
          v19 = v77;
          do
            TView::moveTo(*v19++, 0, v54);
          while ( v18 != v19 );
          if ( v48 == 1 && v56 )
            v20 = v56[8] + v56[4];
          else
            v20 = 0;
          v21 = 0;
          do
          {
            v22 = (__int64)*v17++;
            v21 += *(_DWORD *)(v22 + 16) + 2;
          }
          while ( v17 != v18 );
          v23 = v21 + 2;
        }
        v24 = *(_QWORD *)(v9 + 152);
        v55 = v20;
        v62 = 0;
        v61[1] = v24;
        v61[0] = &off_234BC8;
        TGroup::forEach((TGroup *)v9, (void (*)(TView *, void *))sub_17BC70, v61);
        if ( v62 + 2 <= v55 + v23 + 2 )
        {
          TView::growTo((TView *)v9, v55 + v23 + 2, *(_WORD *)(v9 + 20));
          v25 = v55;
        }
        else
        {
          v25 = (v62 - (v55 + v23)) / 2 + v55;
        }
        if ( v48 > 0 )
        {
          v26 = v77;
          do
          {
            v27 = *v26;
            v28 = v25 + 2;
            TView::moveTo(*v26, v25 + 2, *((_WORD *)*v26 + 18));
            ++v26;
            v25 = v28 + *((_DWORD *)v27 + 4);
          }
          while ( &v77[v48] != v26 );
        }
        v29 = *(_QWORD *)(v9 + 152);
        v64 = 0;
        v63[1] = v29;
        v63[0] = &off_234BC8;
        TGroup::forEach((TGroup *)v9, (void (*)(TView *, void *))sub_17BC70, v63);
        v30 = *(_QWORD *)(v9 + 152);
        v31 = v64;
        DWORD2(v66) = 0;
        *(_QWORD *)&v66 = v30;
        v65 = &off_234BE0;
        TGroup::forEach((TGroup *)v9, (void (*)(TView *, void *))sub_17BC70, &v65);
        v32 = *(_DWORD *)(v9 + 32);
        v33 = v32 + v31 + 4;
        v34 = TScreen::screenWidth - 2 - v32;
        v35 = *(_DWORD *)(v9 + 36);
        if ( v33 < TScreen::screenWidth )
          v34 = v31 + 2;
        v36 = TScreen::screenHeight - 1 - v35;
        if ( v35 + DWORD2(v66) + 2 < TScreen::screenHeight )
          v36 = WORD4(v66) + 1;
        TView::growTo((TView *)v9, v34, v36);
        v37 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v6 + 136) + 88LL))(v52);
        v38 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v37 + 64LL))(v37, 0);
        v39 = v4 == nullptr;
        while ( 1 )
        {
          v40 = TGroup::execView(TProgram::deskTop, (TView *)v9);
          if ( v40 != 11 )
            break;
          v41 = v76;
          if ( v76 != 1 && v39 )
          {
            v47 = 1;
            if ( v75 > 1 )
              v47 = 2;
            if ( v47 < v48 )
              continue;
          }
          if ( v38 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
            v41 = v76;
          }
LABEL_51:
          if ( v41 == 1 || !v39 )
          {
            v42 = -1;
            goto LABEL_54;
          }
          v42 = (__int16)v51;
          if ( !v56 || (_WORD)v51 == 0xFFFF )
          {
LABEL_54:
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
            goto LABEL_55;
          }
LABEL_83:
          (*(void (__fastcall **)(_DWORD *, __int64 (__fastcall ***)(), __int64))(*(_QWORD *)v56 + 96LL))(v56, &v65, 2);
          if ( (_WORD)v65 )
            (*(void (__fastcall **)(__int64, const char **, _QWORD))(*(_QWORD *)(v6 + 136) + 192LL))(
              v52,
              v67,
              (unsigned int)(__int16)v42);
          goto LABEL_54;
        }
        if ( v38 )
        {
          v50 = v40;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 8LL))(v38);
          v40 = v50;
        }
        if ( v40 == 12 )
        {
          v42 = 1;
          if ( !v56 )
            goto LABEL_54;
        }
        else
        {
          if ( v40 != 13 )
          {
            v41 = v76;
            goto LABEL_51;
          }
          v42 = 0;
          if ( !v56 )
            goto LABEL_54;
        }
        goto LABEL_83;
      }
      v42 = 0;
    }
  }
  else
  {
    sub_8F660((__int64)"[%s] %s -> Cancel\n", (&off_234C20)[v68], v5);
    v42 = -1;
  }
LABEL_55:
  if ( v74 )
  {
    v75 = 0;
    qfree();
  }
  if ( v71 )
  {
    v72 = 0;
    qfree();
  }
  if ( v69 )
  {
    v70 = 0;
    qfree();
  }
  if ( v67[0] )
  {
    v67[1] = nullptr;
    qfree();
  }
  return v42;
}

