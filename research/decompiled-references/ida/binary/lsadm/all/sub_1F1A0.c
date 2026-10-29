__int64 __fastcall sub_1F1A0(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_7AAC0 && __cxa_guard_acquire(&byte_7AAC0) )
  {
    qword_7A628 = a1 + 8;
    qword_7A638 = a1 + 16;
    qword_7A648 = a1 + 24;
    qword_7A658 = a1 + 32;
    qword_7A668 = a1 + 40;
    qword_7A678 = a1 + 48;
    qword_7A688 = a1 + 56;
    qword_7A698 = a1 + 64;
    qword_7A6A8 = a1 + 72;
    qword_7A6B8 = a1 + 80;
    qword_7A6C8 = a1 + 88;
    qword_7A6D8 = a1 + 96;
    qword_7A6E8 = a1 + 104;
    qword_7A6F8 = a1 + 112;
    qword_7A708 = a1 + 120;
    qword_7A718 = a1 + 128;
    qword_7A728 = a1 + 136;
    qword_7A738 = a1 + 144;
    qword_7A748 = a1 + 152;
    qword_7A758 = a1 + 160;
    qword_7A768 = a1 + 168;
    qword_7A778 = a1 + 176;
    qword_7A788 = a1 + 184;
    qword_7A798 = a1 + 192;
    qword_7A7A8 = a1 + 200;
    qword_7A7B8 = a1 + 208;
    qword_7A7C8 = a1 + 216;
    qword_7A7D8 = a1 + 224;
    qword_7A7E8 = a1 + 232;
    qword_7A7F8 = a1 + 240;
    qword_7A808 = a1 + 248;
    qword_7A818 = a1 + 256;
    qword_7A828 = a1 + 264;
    qword_7A838 = a1 + 272;
    qword_7A848 = a1 + 280;
    qword_7A858 = a1 + 288;
    qword_7A868 = a1 + 296;
    qword_7A878 = a1 + 304;
    qword_7A888 = a1 + 312;
    qword_7A898 = a1 + 320;
    qword_7A8A8 = a1 + 328;
    qword_7A8B8 = a1 + 336;
    qword_7A8C8 = a1 + 344;
    qword_7A8D8 = a1 + 352;
    qword_7A8E8 = a1 + 360;
    __cxa_guard_release(&byte_7AAC0);
  }
  v2 = &off_7A620;
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
  while ( v2 != &off_7A620 + 90 );
  return 1;
}

