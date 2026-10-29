__int64 __fastcall sub_750E0(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_165AE0 && __cxa_guard_acquire(&byte_165AE0) )
  {
    qword_165688 = a1 + 8;
    qword_165698 = a1 + 16;
    qword_1656A8 = a1 + 24;
    qword_1656B8 = a1 + 32;
    qword_1656C8 = a1 + 40;
    qword_1656D8 = a1 + 48;
    qword_1656E8 = a1 + 56;
    qword_1656F8 = a1 + 64;
    qword_165708 = a1 + 72;
    qword_165718 = a1 + 80;
    qword_165728 = a1 + 88;
    qword_165738 = a1 + 96;
    qword_165748 = a1 + 104;
    qword_165758 = a1 + 112;
    qword_165768 = a1 + 120;
    qword_165778 = a1 + 128;
    qword_165788 = a1 + 136;
    qword_165798 = a1 + 144;
    qword_1657A8 = a1 + 152;
    qword_1657B8 = a1 + 160;
    qword_1657C8 = a1 + 168;
    qword_1657D8 = a1 + 176;
    qword_1657E8 = a1 + 184;
    qword_1657F8 = a1 + 192;
    qword_165808 = a1 + 200;
    qword_165818 = a1 + 208;
    qword_165828 = a1 + 216;
    qword_165838 = a1 + 224;
    qword_165848 = a1 + 232;
    qword_165858 = a1 + 240;
    qword_165868 = a1 + 248;
    qword_165878 = a1 + 256;
    qword_165888 = a1 + 264;
    qword_165898 = a1 + 272;
    qword_1658A8 = a1 + 280;
    qword_1658B8 = a1 + 288;
    qword_1658C8 = a1 + 296;
    qword_1658D8 = a1 + 304;
    qword_1658E8 = a1 + 312;
    qword_1658F8 = a1 + 320;
    qword_165908 = a1 + 328;
    qword_165918 = a1 + 336;
    qword_165928 = a1 + 344;
    qword_165938 = a1 + 352;
    qword_165948 = a1 + 360;
    __cxa_guard_release(&byte_165AE0);
  }
  v2 = &off_165680;
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
  while ( v2 != &off_165680 + 90 );
  return 1;
}

