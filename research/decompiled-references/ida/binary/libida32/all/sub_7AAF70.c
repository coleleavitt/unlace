__int64 __fastcall sub_7AAF70(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_2CAA8C0 && __cxa_guard_acquire(&byte_2CAA8C0) )
  {
    qword_2C57DC8 = a1 + 8;
    qword_2C57DD8 = a1 + 16;
    qword_2C57DE8 = a1 + 24;
    qword_2C57DF8 = a1 + 32;
    qword_2C57E08 = a1 + 40;
    qword_2C57E18 = a1 + 48;
    qword_2C57E28 = a1 + 56;
    qword_2C57E38 = a1 + 64;
    qword_2C57E48 = a1 + 72;
    qword_2C57E58 = a1 + 80;
    qword_2C57E68 = a1 + 88;
    qword_2C57E78 = a1 + 96;
    qword_2C57E88 = a1 + 104;
    qword_2C57E98 = a1 + 112;
    qword_2C57EA8 = a1 + 120;
    qword_2C57EB8 = a1 + 128;
    qword_2C57EC8 = a1 + 136;
    qword_2C57ED8 = a1 + 144;
    qword_2C57EE8 = a1 + 152;
    qword_2C57EF8 = a1 + 160;
    qword_2C57F08 = a1 + 168;
    qword_2C57F18 = a1 + 176;
    qword_2C57F28 = a1 + 184;
    qword_2C57F38 = a1 + 192;
    qword_2C57F48 = a1 + 200;
    qword_2C57F58 = a1 + 208;
    qword_2C57F68 = a1 + 216;
    qword_2C57F78 = a1 + 224;
    qword_2C57F88 = a1 + 232;
    qword_2C57F98 = a1 + 240;
    qword_2C57FA8 = a1 + 248;
    qword_2C57FB8 = a1 + 256;
    qword_2C57FC8 = a1 + 264;
    qword_2C57FD8 = a1 + 272;
    qword_2C57FE8 = a1 + 280;
    qword_2C57FF8 = a1 + 288;
    qword_2C58008 = a1 + 296;
    qword_2C58018 = a1 + 304;
    qword_2C58028 = a1 + 312;
    qword_2C58038 = a1 + 320;
    qword_2C58048 = a1 + 328;
    qword_2C58058 = a1 + 336;
    qword_2C58068 = a1 + 344;
    qword_2C58078 = a1 + 352;
    qword_2C58088 = a1 + 360;
    __cxa_guard_release(&byte_2CAA8C0);
  }
  v2 = &off_2C57DC0;
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
  while ( v2 != (char **)algn_2C58090 );
  return 1;
}

