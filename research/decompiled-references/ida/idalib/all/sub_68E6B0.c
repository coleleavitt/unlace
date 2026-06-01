unsigned __int64 __fastcall sub_68E6B0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char *v11; // rbp
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD **v18; // rbx
  void *v19; // rdi
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 ea_name; // rax
  char *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  void *v29; // rax
  char *s1; // [rsp+0h] [rbp-478h] BYREF
  __int128 v31; // [rsp+8h] [rbp-470h]
  __int64 v32; // [rsp+20h] [rbp-458h] BYREF
  int v33; // [rsp+28h] [rbp-450h] BYREF
  void *v34; // [rsp+30h] [rbp-448h]
  int *v35; // [rsp+38h] [rbp-440h]
  int *v36; // [rsp+40h] [rbp-438h]
  __int64 v37; // [rsp+48h] [rbp-430h]
  char s[1032]; // [rsp+50h] [rbp-428h] BYREF
  unsigned __int64 v39; // [rsp+458h] [rbp-20h]

  v39 = __readfsqword(0x28u);
  switch ( (unsigned int)sub_631AD0(a1->m128i_i64[0], 5, a3, a4, a5, a6) )
  {
    case 4u:
      v11 = (char *)"ne";
      goto LABEL_3;
    case 7u:
      v11 = "lx";
      goto LABEL_3;
    case 8u:
      v11 = "le";
      goto LABEL_3;
    case 9u:
      v11 = "nlm";
      goto LABEL_3;
    case 0xAu:
      v11 = "coff";
      goto LABEL_3;
    case 0xBu:
      v11 = "pe";
      if ( sub_631C90(a1->m128i_i64[0], 3, 4, v8, v9, v10) )
        v11 = "pe64";
      goto LABEL_3;
    case 0xCu:
    case 0xEu:
    case 0xFu:
    case 0x10u:
      return v39 - __readfsqword(0x28u);
    case 0x11u:
      v11 = s;
      get_loader_name(s);
      goto LABEL_3;
    case 0x12u:
      v11 = "elf";
      if ( sub_631C90(a1->m128i_i64[0], 3, 4, v8, v9, v10) )
        v11 = "elf64";
      goto LABEL_3;
    case 0x16u:
    case 0x17u:
      v11 = "exe";
      goto LABEL_3;
    case 0x19u:
      v11 = "macho";
      if ( sub_631C90(a1->m128i_i64[0], 3, 4, v8, v9, v10) )
        v11 = "macho64";
      goto LABEL_3;
    default:
      v11 = "startup";
LABEL_3:
      v12 = a1->m128i_i64[0];
      v33 = 0;
      v34 = nullptr;
      v35 = &v33;
      v36 = &v33;
      v37 = 0;
      v13 = sub_631AD0(v12, 16, v7, v8, v9, v10);
      if ( (unsigned __int8)sub_68C680(a1, v13, v11, &v32) )
      {
        v21 = a1->m128i_i64[0];
        s1 = nullptr;
        v31 = 0;
        v22 = sub_631AD0(v21, 16, v14, v15, v16, v17);
        ea_name = get_ea_name(&s1, v22, 512, 0);
        v24 = s1;
        if ( ea_name > 0 && (_QWORD)v31 && !strcmp(s1, "PROGRAM") )
        {
          v29 = (void *)sub_631AD0(a1->m128i_i64[0], 16, v25, v26, v27, v28);
          clr_abits(v29, 1024);
          v24 = s1;
        }
        if ( v24 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v24);
        }
      }
      else if ( *(_DWORD *)(a1[1].m128i_i64[0] + 4) == 32 )
      {
        sub_689F50(a1, "ctools");
      }
      v18 = (_QWORD **)v34;
      if ( v34 )
      {
        do
        {
          sub_687ED0(v18[3]);
          v19 = v18;
          v18 = (_QWORD **)v18[2];
          operator delete(v19, 0x28u);
        }
        while ( v18 );
      }
      return v39 - __readfsqword(0x28u);
  }
}
