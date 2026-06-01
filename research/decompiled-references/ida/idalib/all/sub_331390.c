int sub_331390()
{
  size_t v0; // rax
  char v2; // [rsp+3h] [rbp-45h] BYREF
  int v3; // [rsp+4h] [rbp-44h] BYREF
  char *v4; // [rsp+8h] [rbp-40h] BYREF
  const char *v5; // [rsp+10h] [rbp-38h] BYREF
  size_t v6; // [rsp+18h] [rbp-30h]

  v3 = 1;
  v6 = j__strlen("Import full type definitions for ThinLTO.");
  v5 = "Import full type definitions for ThinLTO.";
  v4 = &v2;
  v2 = 0;
  sub_2020400(&unk_2CFC5A0, "import-full-type-definitions", &v4, &v3, &v5);
  __cxa_atexit(sub_200E190, &unk_2CFC5A0, &off_2B25620);
  v0 = j__strlen("Force disable the lazy-loading on-demand of metadata when loading bitcode for importing.");
  v4 = &v2;
  v6 = v0;
  v5 = "Force disable the lazy-loading on-demand of metadata when loading bitcode for importing.";
  v3 = 1;
  v2 = 0;
  sub_2020400(&unk_2CFC4E0, "disable-ondemand-mds-loading", &v4, &v3, &v5);
  return __cxa_atexit(sub_200E190, &unk_2CFC4E0, &off_2B25620);
}
