unsigned __int64 __fastcall sub_4E210(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5, double a6)
{
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  int v10; // r8d
  unsigned __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  unsigned __int64 v14; // rax
  char v15; // al
  __int64 v16; // rcx
  const char *v17; // rsi
  char *v18; // rdi
  char *v19; // rdi
  int v20; // ecx
  char **v22; // r15
  char *v23; // r14
  char *v24; // rax
  const char **v25; // rbx
  char *v26; // [rsp+8h] [rbp-C8h]
  __int64 v27; // [rsp+10h] [rbp-C0h]
  __int64 v28; // [rsp+18h] [rbp-B8h]
  char *v29; // [rsp+20h] [rbp-B0h]
  __int64 v30; // [rsp+2Ch] [rbp-A4h]
  int v31; // [rsp+34h] [rbp-9Ch]
  int v33; // [rsp+40h] [rbp-90h]
  int v34; // [rsp+44h] [rbp-8Ch]
  __int64 v35; // [rsp+48h] [rbp-88h]
  const char **v36; // [rsp+48h] [rbp-88h]
  char *s1; // [rsp+50h] [rbp-80h] BYREF
  __int128 v38; // [rsp+58h] [rbp-78h]
  unsigned __int64 v39; // [rsp+98h] [rbp-38h]

  v35 = a1;
  v39 = __readfsqword(0x28u);
  if ( !(unsigned __int8)qgetenv("IDA_NORELOC", 0) )
  {
    if ( *(_QWORD *)(a2 + 120) )
    {
      v33 = 0;
      v34 = *(_DWORD *)(a2 + 192);
      v31 = *(_DWORD *)(a2 + 160);
      HIDWORD(v30) = *(_QWORD *)(a2 + 312);
      LODWORD(v30) = *(_DWORD *)(a2 + 296) - HIDWORD(v30);
      while ( 1 )
      {
        v8 = 1;
        if ( *(_DWORD *)(a2 + 568) > 1u )
          break;
LABEL_36:
        v20 = v33;
        if ( *(_QWORD *)(*(_QWORD *)(v35 + 240) + 8LL * v33 + 288) )
        {
          ++v33;
          if ( v20 != 4 )
            continue;
        }
        return v39 - __readfsqword(0x28u);
      }
      while ( 1 )
      {
        while ( 1 )
        {
          if ( !*(_BYTE *)(a2 + 248) )
          {
            if ( !under_debugger )
              interr(20099);
            BUG();
          }
          v11 = *(_QWORD *)(a2 + 120);
          if ( v8 >= v11 )
            v12 = 0;
          else
            v12 = *(_QWORD *)(a2 + 112) + (v8 << 6);
          if ( !*(_QWORD *)(v12 + 32) )
            goto LABEL_17;
          v13 = *(_DWORD *)(v12 + 4);
          if ( v13 != 4 && v13 != 9 && (unsigned int)(v13 - 1610612737) > 1 )
            goto LABEL_17;
          v14 = *(unsigned int *)(v12 + 44);
          s1 = nullptr;
          v38 = 0;
          if ( (_DWORD)v14 )
          {
            if ( v14 < v11 && *(__int64 *)(a2 + 256) > 0 && *(_QWORD *)(a2 + 272) )
              break;
          }
          if ( !*(_QWORD *)(*(_QWORD *)(v35 + 240) + 8 * (v33 + 36LL)) )
            goto LABEL_7;
LABEL_17:
          if ( (unsigned int)++v8 >= *(_DWORD *)(a2 + 568) )
            goto LABEL_36;
        }
        v15 = sub_461E0(
                *(_QWORD *)(a2 + 240),
                (__int64 *)&s1,
                (__int64 *)(a2 + 256),
                *(_DWORD *)(*(_QWORD *)(a2 + 112) + (v14 << 6)));
        v16 = *(_QWORD *)(v35 + 240);
        v17 = *(const char **)(v16 + 8LL * v33 + 288);
        if ( !v15 )
          break;
        if ( v17 )
        {
          v18 = (char *)&::s1;
          if ( (_QWORD)v38 )
            v18 = s1;
          if ( strcmp(v18, v17) )
            goto LABEL_33;
          goto LABEL_7;
        }
        v24 = (char *)&::s1;
        v27 = v12;
        if ( (_QWORD)v38 )
          v24 = s1;
        v26 = s1;
        v25 = (const char **)(v16 + 288);
        v28 = v35;
        v29 = v24;
        v36 = (const char **)(v16 + 328);
        while ( 1 )
        {
          if ( !*v25 )
          {
LABEL_65:
            v12 = v27;
            v35 = v28;
            goto LABEL_7;
          }
          if ( !strcmp(v29, *v25) )
            break;
          if ( ++v25 == v36 )
            goto LABEL_65;
        }
        v19 = v26;
        v35 = v28;
LABEL_34:
        if ( !v19 )
          goto LABEL_17;
        *(_QWORD *)&v38 = 0;
        ++v8;
        qfree(v19);
        if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 568) )
          goto LABEL_36;
      }
      if ( v17 )
      {
LABEL_33:
        v19 = s1;
        goto LABEL_34;
      }
LABEL_7:
      v9 = *(unsigned int *)(v12 + 40);
      if ( (_DWORD)v9 == v34 )
      {
        if ( HIDWORD(v30) )
        {
          v10 = 1;
          goto LABEL_15;
        }
        if ( v34 == v31 && (_DWORD)v30 )
        {
LABEL_58:
          v10 = 2;
          goto LABEL_15;
        }
        if ( !v34 )
          goto LABEL_14;
      }
      else if ( (_DWORD)v9 == v31 )
      {
        if ( (_DWORD)v30 )
          goto LABEL_58;
        if ( !v31 )
          goto LABEL_14;
        if ( HIDWORD(v30) )
        {
          sub_EAA0(
            (__int64)"Section #%u relocations are linked to empty dynsym, but proceeding with relocations since symtab is present\n",
            v8);
LABEL_14:
          v10 = 0;
LABEL_15:
          sub_4DCE0(v35, a2, v12, nullptr, v10, a4, 0.0, a6, (unsigned int)(*(_DWORD *)(v12 + 4) - 1610612737) <= 1);
          if ( s1 )
          {
            *(_QWORD *)&v38 = 0;
            qfree(s1);
          }
          goto LABEL_17;
        }
      }
      else if ( !(_DWORD)v9 )
      {
        goto LABEL_14;
      }
      if ( !*(_BYTE *)(a2 + 248) )
        sub_30AC0();
      if ( v9 < *(_QWORD *)(a2 + 120) && !*(_QWORD *)(*(_QWORD *)(a2 + 112) + (v9 << 6) + 32) && !v30 )
        goto LABEL_14;
      sub_EAA0((__int64)"Bad symbol table for section #%u relocations, skipping\n", v8);
      goto LABEL_33;
    }
    v22 = &off_872E0;
    v23 = ".drel";
    if ( !".drel" )
      goto LABEL_44;
    while ( 1 )
    {
      if ( (unsigned __int8)sub_3E2C0(a3, (__int64)&s1, *((_DWORD *)v22 + 2)) )
        sub_4DCE0(a1, a2, (__int64)&s1, v23, 2, a4, a5, a6, *((_BYTE *)v22 + 12));
      v22 += 2;
      if ( v22 == off_87330 )
        break;
      v23 = *v22;
      if ( !*v22 )
      {
LABEL_44:
        v23 = ".pltrela";
        if ( *(_DWORD *)(a3 + 480) != 7 )
          v23 = ".pltrel";
      }
    }
  }
  return v39 - __readfsqword(0x28u);
}

