/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_473D70
// Address: 0x0000000000473D70

//----- (0000000000473D70) ----------------------------------------------------
__int64 __fastcall sub_473D70(__int64 a1, void *a2)
{
  char **v2; // r14
  char *v3; // rdx
  void *v4; // rax

  if ( !(_BYTE)byte_4C8420 && __cxa_guard_acquire(&byte_4C8420) )
  {
    qword_4C7CE8 = a1 + 8;
    qword_4C7CF8 = a1 + 16;
    qword_4C7D08 = a1 + 24;
    qword_4C7D18 = a1 + 32;
    qword_4C7D28 = a1 + 40;
    qword_4C7D38 = a1 + 48;
    qword_4C7D48 = a1 + 56;
    qword_4C7D58 = a1 + 64;
    qword_4C7D68 = a1 + 72;
    qword_4C7D78 = a1 + 80;
    qword_4C7D88 = a1 + 88;
    qword_4C7D98 = a1 + 96;
    qword_4C7DA8 = a1 + 104;
    qword_4C7DB8 = a1 + 112;
    qword_4C7DC8 = a1 + 120;
    qword_4C7DD8 = a1 + 128;
    qword_4C7DE8 = a1 + 136;
    qword_4C7DF8 = a1 + 144;
    qword_4C7E08 = a1 + 152;
    qword_4C7E18 = a1 + 160;
    qword_4C7E28 = a1 + 168;
    qword_4C7E38 = a1 + 176;
    qword_4C7E48 = a1 + 184;
    qword_4C7E58 = a1 + 192;
    qword_4C7E68 = a1 + 200;
    qword_4C7E78 = a1 + 208;
    qword_4C7E88 = a1 + 216;
    qword_4C7E98 = a1 + 224;
    qword_4C7EA8 = a1 + 232;
    qword_4C7EB8 = a1 + 240;
    qword_4C7EC8 = a1 + 248;
    qword_4C7ED8 = a1 + 256;
    qword_4C7EE8 = a1 + 264;
    qword_4C7EF8 = a1 + 272;
    qword_4C7F08 = a1 + 280;
    qword_4C7F18 = a1 + 288;
    qword_4C7F28 = a1 + 296;
    qword_4C7F38 = a1 + 304;
    qword_4C7F48 = a1 + 312;
    qword_4C7F58 = a1 + 320;
    qword_4C7F68 = a1 + 328;
    qword_4C7F78 = a1 + 336;
    qword_4C7F88 = a1 + 344;
    qword_4C7F98 = a1 + 352;
    qword_4C7FA8 = a1 + 360;
    __cxa_guard_release(&byte_4C8420);
  }
  v2 = &off_4C7CE0;
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
  while ( v2 != (char **)&off_4C7FB0 );
  return 1;
}
// 4C7CE0: using guessed type char *off_4C7CE0;
// 4C7CE8: using guessed type __int64 qword_4C7CE8;
// 4C7CF8: using guessed type __int64 qword_4C7CF8;
// 4C7D08: using guessed type __int64 qword_4C7D08;
// 4C7D18: using guessed type __int64 qword_4C7D18;
// 4C7D28: using guessed type __int64 qword_4C7D28;
// 4C7D38: using guessed type __int64 qword_4C7D38;
// 4C7D48: using guessed type __int64 qword_4C7D48;
// 4C7D58: using guessed type __int64 qword_4C7D58;
// 4C7D68: using guessed type __int64 qword_4C7D68;
// 4C7D78: using guessed type __int64 qword_4C7D78;
// 4C7D88: using guessed type __int64 qword_4C7D88;
// 4C7D98: using guessed type __int64 qword_4C7D98;
// 4C7DA8: using guessed type __int64 qword_4C7DA8;
// 4C7DB8: using guessed type __int64 qword_4C7DB8;
// 4C7DC8: using guessed type __int64 qword_4C7DC8;
// 4C7DD8: using guessed type __int64 qword_4C7DD8;
// 4C7DE8: using guessed type __int64 qword_4C7DE8;
// 4C7DF8: using guessed type __int64 qword_4C7DF8;
// 4C7E08: using guessed type __int64 qword_4C7E08;
// 4C7E18: using guessed type __int64 qword_4C7E18;
// 4C7E28: using guessed type __int64 qword_4C7E28;
// 4C7E38: using guessed type __int64 qword_4C7E38;
// 4C7E48: using guessed type __int64 qword_4C7E48;
// 4C7E58: using guessed type __int64 qword_4C7E58;
// 4C7E68: using guessed type __int64 qword_4C7E68;
// 4C7E78: using guessed type __int64 qword_4C7E78;
// 4C7E88: using guessed type __int64 qword_4C7E88;
// 4C7E98: using guessed type __int64 qword_4C7E98;
// 4C7EA8: using guessed type __int64 qword_4C7EA8;
// 4C7EB8: using guessed type __int64 qword_4C7EB8;
// 4C7EC8: using guessed type __int64 qword_4C7EC8;
// 4C7ED8: using guessed type __int64 qword_4C7ED8;
// 4C7EE8: using guessed type __int64 qword_4C7EE8;
// 4C7EF8: using guessed type __int64 qword_4C7EF8;
// 4C7F08: using guessed type __int64 qword_4C7F08;
// 4C7F18: using guessed type __int64 qword_4C7F18;
// 4C7F28: using guessed type __int64 qword_4C7F28;
// 4C7F38: using guessed type __int64 qword_4C7F38;
// 4C7F48: using guessed type __int64 qword_4C7F48;
// 4C7F58: using guessed type __int64 qword_4C7F58;
// 4C7F68: using guessed type __int64 qword_4C7F68;
// 4C7F78: using guessed type __int64 qword_4C7F78;
// 4C7F88: using guessed type __int64 qword_4C7F88;
// 4C7F98: using guessed type __int64 qword_4C7F98;
// 4C7FA8: using guessed type __int64 qword_4C7FA8;
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
