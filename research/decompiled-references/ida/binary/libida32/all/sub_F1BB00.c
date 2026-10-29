void __fastcall sub_F1BB00(__int64 a1, __int64 a2)
{
  char *v3; // rsi
  int v4; // eax
  __int16 v5; // bx
  size_t v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  size_t v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 v14; // [rsp-20h] [rbp-88h]
  __int128 v15; // [rsp-20h] [rbp-88h]
  __int128 v16; // [rsp+0h] [rbp-68h] BYREF
  const char *v17; // [rsp+10h] [rbp-58h]
  size_t v18; // [rsp+18h] [rbp-50h]
  const char *v19; // [rsp+30h] [rbp-38h]
  size_t v20; // [rsp+38h] [rbp-30h]

  sub_F07020(a1, a2);
  v3 = *(char **)(a2 + 56);
  sub_F068D0(a1, (__int64)v3);
  v4 = *(_BYTE *)(a2 + 76) & 3;
  if ( v4 == 1 )
  {
    v3 = " required";
    sub_971800(*(_QWORD *)(a1 + 1096), " required");
  }
  else if ( v4 == 2 )
  {
    v3 = " optional";
    sub_971800(*(_QWORD *)(a1 + 1096), " optional");
  }
  v5 = *(_WORD *)(a2 + 72);
  if ( v5 )
  {
    if ( (v5 & 1) != 0 )
    {
      v3 = " readonly";
      sub_971800(*(_QWORD *)(a1 + 1096), " readonly");
    }
    if ( (v5 & 4) != 0 )
    {
      v3 = " assign";
      sub_971800(*(_QWORD *)(a1 + 1096), " assign");
    }
    if ( (v5 & 8) != 0 )
    {
      v3 = " readwrite";
      sub_971800(*(_QWORD *)(a1 + 1096), " readwrite");
    }
    if ( (v5 & 0x10) != 0 )
    {
      v3 = " retain";
      sub_971800(*(_QWORD *)(a1 + 1096), " retain");
    }
    if ( (v5 & 0x20) != 0 )
    {
      v3 = " copy";
      sub_971800(*(_QWORD *)(a1 + 1096), " copy");
    }
    if ( (v5 & 0x40) != 0 )
    {
      v3 = " nonatomic";
      sub_971800(*(_QWORD *)(a1 + 1096), " nonatomic");
    }
    if ( (v5 & 0x100) != 0 )
    {
      v3 = " atomic";
      sub_971800(*(_QWORD *)(a1 + 1096), " atomic");
    }
    if ( (v5 & 0x200) != 0 )
    {
      v3 = " weak";
      sub_971800(*(_QWORD *)(a1 + 1096), " weak");
    }
    if ( (v5 & 0x400) != 0 )
    {
      v3 = " strong";
      sub_971800(*(_QWORD *)(a1 + 1096), " strong");
    }
    if ( (v5 & 0x800) != 0 )
    {
      v3 = " unsafe_unretained";
      sub_971800(*(_QWORD *)(a1 + 1096), " unsafe_unretained");
    }
    if ( (v5 & 0x4000) != 0 )
    {
      v3 = " class";
      sub_971800(*(_QWORD *)(a1 + 1096), " class");
      if ( v5 >= 0 )
        goto LABEL_27;
    }
    else if ( v5 >= 0 )
    {
      goto LABEL_27;
    }
    v3 = " direct";
    sub_971800(*(_QWORD *)(a1 + 1096), " direct");
LABEL_27:
    if ( (v5 & 2) != 0 && *(_QWORD *)(a2 + 104) )
    {
      *(_QWORD *)&v16 = *(_QWORD *)(a2 + 104);
      v16 = (__int128)_mm_loadh_ps((const double *)&v16);
      v10 = j__strlen("getter");
      v17 = "getter";
      v18 = v10;
      *((_QWORD *)&v15 + 1) = v10;
      *(_QWORD *)&v15 = "getter";
      sub_F1BAF0(a1, (__int64)v3, (__int64)"getter", v11, v12, v13, v15, v16);
    }
    if ( (v5 & 0x80) != 0 )
    {
      if ( *(_QWORD *)(a2 + 112) )
      {
        *(_QWORD *)&v16 = *(_QWORD *)(a2 + 112);
        v16 = (__int128)_mm_loadh_ps((const double *)&v16);
        v6 = j__strlen("setter");
        v19 = "setter";
        v20 = v6;
        *((_QWORD *)&v14 + 1) = v6;
        *(_QWORD *)&v14 = "setter";
        sub_F1BAF0(a1, (__int64)v3, v7, (__int64)"setter", v8, v9, v14, v16);
      }
    }
  }
}

