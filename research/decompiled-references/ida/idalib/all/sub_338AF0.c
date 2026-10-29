int sub_338AF0()
{
  size_t v0; // rax
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  size_t v5; // rax
  size_t v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  size_t v11; // rax
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+8h] [rbp-20h]

  v0 = j__strlen(
         "Cutoff value about how many symbols in profile symbol list will be used. This is very useful for performance debugging");
  qword_2CFFF70 = 0;
  v1 = v0;
  qword_2CFFF78 = 0;
  qword_2CFFF80 = 0;
  qword_2CFFF60 = (__int64)&off_2C758B0;
  qword_2CFFF68 = (unsigned int)qword_2CFFF68 & 0x80000000;
  qword_2CFFFA8 = 0x100000000LL;
  qword_2CFFF88 = 0;
  qword_2CFFF90 = 0;
  qword_2CFFF98 = 0;
  qword_2CFFFA0 = (__int64)&unk_2CFFFB0;
  qword_2CFFFB8 = (__int64)&unk_2CFFFD0;
  qword_2CFFFC0 = 1;
  dword_2CFFFC8 = 0;
  byte_2CFFFCC = 1;
  v2 = sub_2210FF0(
         "Cutoff value about how many symbols in profile symbol list will be used. This is very useful for performance debugging");
  v3 = (unsigned int)qword_2CFFFA8;
  v4 = (unsigned int)qword_2CFFFA8 + 1LL;
  if ( v4 > HIDWORD(qword_2CFFFA8) )
  {
    v13 = v2;
    sub_2237220((char *)&unk_2CFFFB0 - 16, &unk_2CFFFB0, v4, 8);
    v3 = (unsigned int)qword_2CFFFA8;
    v2 = v13;
  }
  *(_QWORD *)(qword_2CFFFA0 + 8 * v3) = v2;
  xmmword_2D00010 = (__int128)_mm_loadh_ps((const double *)off_2C78C90);
  LODWORD(qword_2CFFFA8) = qword_2CFFFA8 + 1;
  qword_2CFFFE0 = (__int64)off_2C71B28;
  qword_2CFFFD8 = 0;
  byte_2CFFFF0 = 0;
  qword_2CFFF60 = (__int64)off_2C71B48;
  qword_2CFFFE8 = 0;
  qword_2CFFFF8 = (__int64)off_2BEABC8;
  v5 = j__strlen("profile-symbol-list-cutoff");
  sub_2217250(&qword_2CFFF60, "profile-symbol-list-cutoff", v5);
  qword_2CFFF88 = v1;
  byte_2CFFFF0 = 1;
  BYTE2(qword_2CFFF68) = BYTE2(qword_2CFFF68) & 0x9F | 0x20;
  qword_2CFFFD8 = -1;
  qword_2CFFFE8 = -1;
  qword_2CFFF80 = (__int64)"Cutoff value about how many symbols in profile symbol list will be used. This is very useful "
                           "for performance debugging";
  sub_2218140(&qword_2CFFF60);
  __cxa_atexit(sub_2014000, &qword_2CFFF60, &off_2B25620);
  v6 = j__strlen(
         "When generating nested context-sensitive profiles, always generate extra base profile for function with all its"
         " context profiles merged into it.");
  byte_2CFFF0C = 1;
  qword_2CFFEB0 = 0;
  v7 = v6;
  qword_2CFFEA0 = (__int64)&off_2C758B0;
  qword_2CFFEA8 = (unsigned int)qword_2CFFEA8 & 0x80000000;
  qword_2CFFEE8 = 0x100000000LL;
  qword_2CFFEB8 = 0;
  qword_2CFFEC0 = 0;
  qword_2CFFEC8 = 0;
  qword_2CFFED0 = 0;
  qword_2CFFED8 = 0;
  qword_2CFFEE0 = (__int64)&unk_2CFFEF0;
  qword_2CFFEF8 = (__int64)&unk_2CFFF10;
  qword_2CFFF00 = 1;
  dword_2CFFF08 = 0;
  v8 = sub_2210FF0(
         "When generating nested context-sensitive profiles, always generate extra base profile for function with all its"
         " context profiles merged into it.");
  v9 = (unsigned int)qword_2CFFEE8;
  v10 = (unsigned int)qword_2CFFEE8 + 1LL;
  if ( v10 > HIDWORD(qword_2CFFEE8) )
  {
    v14 = v8;
    sub_2237220((char *)&unk_2CFFEF0 - 16, &unk_2CFFEF0, v10, 8);
    v9 = (unsigned int)qword_2CFFEE8;
    v8 = v14;
  }
  *(_QWORD *)(qword_2CFFEE0 + 8 * v9) = v8;
  word_2CFFF28 = 0;
  xmmword_2CFFF48 = (__int128)_mm_loadh_ps((const double *)off_2C78368);
  LODWORD(qword_2CFFEE8) = qword_2CFFEE8 + 1;
  qword_2CFFF20 = (__int64)off_2C714E8;
  byte_2CFFF18 = 0;
  qword_2CFFEA0 = (__int64)off_2C75848;
  qword_2CFFF30 = (__int64)off_2BEAB08;
  v11 = j__strlen("generate-merged-base-profiles");
  sub_2217250(&qword_2CFFEA0, "generate-merged-base-profiles", v11);
  qword_2CFFEC8 = v7;
  qword_2CFFEC0 = (__int64)"When generating nested context-sensitive profiles, always generate extra base profile for fun"
                           "ction with all its context profiles merged into it.";
  sub_2218140(&qword_2CFFEA0);
  return __cxa_atexit(sub_200E190, &qword_2CFFEA0, &off_2B25620);
}
