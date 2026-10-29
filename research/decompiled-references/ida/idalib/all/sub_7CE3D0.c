__int64 __fastcall sub_7CE3D0(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_2CD47E0 && __cxa_guard_acquire(&byte_2CD47E0) )
  {
    qword_2C81CC8 = a1 + 8;
    qword_2C81CD8 = a1 + 16;
    qword_2C81CE8 = a1 + 24;
    qword_2C81CF8 = a1 + 32;
    qword_2C81D08 = a1 + 40;
    qword_2C81D18 = a1 + 48;
    qword_2C81D28 = a1 + 56;
    qword_2C81D38 = a1 + 64;
    qword_2C81D48 = a1 + 72;
    qword_2C81D58 = a1 + 80;
    qword_2C81D68 = a1 + 88;
    qword_2C81D78 = a1 + 96;
    qword_2C81D88 = a1 + 104;
    qword_2C81D98 = a1 + 112;
    qword_2C81DA8 = a1 + 120;
    qword_2C81DB8 = a1 + 128;
    qword_2C81DC8 = a1 + 136;
    qword_2C81DD8 = a1 + 144;
    qword_2C81DE8 = a1 + 152;
    qword_2C81DF8 = a1 + 160;
    qword_2C81E08 = a1 + 168;
    qword_2C81E18 = a1 + 176;
    qword_2C81E28 = a1 + 184;
    qword_2C81E38 = a1 + 192;
    qword_2C81E48 = a1 + 200;
    qword_2C81E58 = a1 + 208;
    qword_2C81E68 = a1 + 216;
    qword_2C81E78 = a1 + 224;
    qword_2C81E88 = a1 + 232;
    qword_2C81E98 = a1 + 240;
    qword_2C81EA8 = a1 + 248;
    qword_2C81EB8 = a1 + 256;
    qword_2C81EC8 = a1 + 264;
    qword_2C81ED8 = a1 + 272;
    qword_2C81EE8 = a1 + 280;
    qword_2C81EF8 = a1 + 288;
    qword_2C81F08 = a1 + 296;
    qword_2C81F18 = a1 + 304;
    qword_2C81F28 = a1 + 312;
    qword_2C81F38 = a1 + 320;
    qword_2C81F48 = a1 + 328;
    qword_2C81F58 = a1 + 336;
    qword_2C81F68 = a1 + 344;
    qword_2C81F78 = a1 + 352;
    qword_2C81F88 = a1 + 360;
    __cxa_guard_release(&byte_2CD47E0);
  }
  v2 = &off_2C81CC0;
  do
  {
    v4 = dlsym(a2, *v2);
    if ( !v4 )
    {
      if ( strcmp(*v2, "SSL_get_peer_certificate") )
        return 0;
      v4 = dlsym(a2, "SSL_get1_peer_certificate");
      if ( !v4 )
        return 0;
    }
    v3 = v2[1];
    v2 += 2;
    *(_QWORD *)v3 = v4;
  }
  while ( v2 != (char **)algn_2C81F90 );
  return 1;
}
