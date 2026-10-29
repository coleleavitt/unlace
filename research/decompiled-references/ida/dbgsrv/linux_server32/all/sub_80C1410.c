/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C1410
// Address: 0x080C1410

//----- (080C1410) --------------------------------------------------------
int __cdecl sub_80C1410(int a1, void *handle)
{
  char **v2; // ebp
  char *v3; // ecx
  void *v4; // eax

  if ( !byte_811E840 && __cxa_guard_acquire((__guard *)&byte_811E840) )
  {
    dword_811E404 = a1 + 4;
    dword_811E40C = a1 + 8;
    dword_811E414 = a1 + 12;
    dword_811E41C = a1 + 16;
    dword_811E424 = a1 + 20;
    dword_811E42C = a1 + 24;
    dword_811E434 = a1 + 28;
    dword_811E43C = a1 + 32;
    dword_811E444 = a1 + 36;
    dword_811E44C = a1 + 40;
    dword_811E454 = a1 + 44;
    dword_811E45C = a1 + 48;
    dword_811E464 = a1 + 52;
    dword_811E46C = a1 + 56;
    dword_811E474 = a1 + 60;
    dword_811E47C = a1 + 64;
    dword_811E484 = a1 + 68;
    dword_811E48C = a1 + 72;
    dword_811E494 = a1 + 76;
    dword_811E49C = a1 + 80;
    dword_811E4A4 = a1 + 84;
    dword_811E4AC = a1 + 88;
    dword_811E4B4 = a1 + 92;
    dword_811E4BC = a1 + 96;
    dword_811E4C4 = a1 + 100;
    dword_811E4CC = a1 + 104;
    dword_811E4D4 = a1 + 108;
    dword_811E4DC = a1 + 112;
    dword_811E4E4 = a1 + 116;
    dword_811E4EC = a1 + 120;
    dword_811E4F4 = a1 + 124;
    dword_811E4FC = a1 + 128;
    dword_811E504 = a1 + 132;
    dword_811E50C = a1 + 136;
    dword_811E514 = a1 + 140;
    dword_811E51C = a1 + 144;
    dword_811E524 = a1 + 148;
    dword_811E52C = a1 + 152;
    dword_811E534 = a1 + 156;
    dword_811E53C = a1 + 160;
    dword_811E544 = a1 + 164;
    dword_811E54C = a1 + 168;
    dword_811E554 = a1 + 172;
    dword_811E55C = a1 + 176;
    dword_811E564 = a1 + 180;
    __cxa_guard_release((__guard *)&byte_811E840);
  }
  v2 = &off_811E400;
  do
  {
    v4 = dlsym(handle, *v2);
    if ( !v4 )
    {
      if ( strcmp(*v2, "SSL_get_peer_certificate") )
        return 0;
      v4 = dlsym(handle, "SSL_get1_peer_certificate");
      if ( !v4 )
        return 0;
    }
    v3 = v2[1];
    v2 += 2;
    *(_DWORD *)v3 = v4;
  }
  while ( v2 != (char **)&off_811E568 );
  return 1;
}
// 811E400: using guessed type char *off_811E400;
// 811E404: using guessed type int dword_811E404;
// 811E40C: using guessed type int dword_811E40C;
// 811E414: using guessed type int dword_811E414;
// 811E41C: using guessed type int dword_811E41C;
// 811E424: using guessed type int dword_811E424;
// 811E42C: using guessed type int dword_811E42C;
// 811E434: using guessed type int dword_811E434;
// 811E43C: using guessed type int dword_811E43C;
// 811E444: using guessed type int dword_811E444;
// 811E44C: using guessed type int dword_811E44C;
// 811E454: using guessed type int dword_811E454;
// 811E45C: using guessed type int dword_811E45C;
// 811E464: using guessed type int dword_811E464;
// 811E46C: using guessed type int dword_811E46C;
// 811E474: using guessed type int dword_811E474;
// 811E47C: using guessed type int dword_811E47C;
// 811E484: using guessed type int dword_811E484;
// 811E48C: using guessed type int dword_811E48C;
// 811E494: using guessed type int dword_811E494;
// 811E49C: using guessed type int dword_811E49C;
// 811E4A4: using guessed type int dword_811E4A4;
// 811E4AC: using guessed type int dword_811E4AC;
// 811E4B4: using guessed type int dword_811E4B4;
// 811E4BC: using guessed type int dword_811E4BC;
// 811E4C4: using guessed type int dword_811E4C4;
// 811E4CC: using guessed type int dword_811E4CC;
// 811E4D4: using guessed type int dword_811E4D4;
// 811E4DC: using guessed type int dword_811E4DC;
// 811E4E4: using guessed type int dword_811E4E4;
// 811E4EC: using guessed type int dword_811E4EC;
// 811E4F4: using guessed type int dword_811E4F4;
// 811E4FC: using guessed type int dword_811E4FC;
// 811E504: using guessed type int dword_811E504;
// 811E50C: using guessed type int dword_811E50C;
// 811E514: using guessed type int dword_811E514;
// 811E51C: using guessed type int dword_811E51C;
// 811E524: using guessed type int dword_811E524;
// 811E52C: using guessed type int dword_811E52C;
// 811E534: using guessed type int dword_811E534;
// 811E53C: using guessed type int dword_811E53C;
// 811E544: using guessed type int dword_811E544;
// 811E54C: using guessed type int dword_811E54C;
// 811E554: using guessed type int dword_811E554;
// 811E55C: using guessed type int dword_811E55C;
// 811E564: using guessed type int dword_811E564;
// 811E568: using guessed type _DWORD (__stdcall *off_811E568)(_DWORD);
// 811E840: using guessed type char byte_811E840;
