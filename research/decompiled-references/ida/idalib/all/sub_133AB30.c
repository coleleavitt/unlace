__int64 *__fastcall sub_133AB30(__int64 *a1, int a2, int a3)
{
  char v3; // r13
  __int64 v6; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // eax
  void **v10; // rbp
  void **v11; // rdi
  void **v12; // r13
  char v14; // [rsp+8h] [rbp-1C0h] BYREF
  char v15; // [rsp+Ch] [rbp-1BCh] BYREF
  void *v16[2]; // [rsp+10h] [rbp-1B8h] BYREF
  _BYTE v17[32]; // [rsp+20h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v18)(); // [rsp+40h] [rbp-188h] BYREF
  void *v19; // [rsp+48h] [rbp-180h]
  _QWORD v20[18]; // [rsp+58h] [rbp-170h] BYREF
  unsigned int v21; // [rsp+E8h] [rbp-E0h]
  void *ptr; // [rsp+F0h] [rbp-D8h]
  __int64 v23; // [rsp+100h] [rbp-C8h] BYREF
  void *v24[9]; // [rsp+180h] [rbp-48h] BYREF

  v3 = 1;
  v6 = operator new(0x108u);
  v7 = *(_QWORD *)(v6 + 24) & 0xFFFFFFFE00000000LL;
  *(_QWORD *)(v6 + 8) = 0xA00000006LL;
  *(_QWORD *)(v6 + 48) = v6 + 64;
  *(_QWORD *)(v6 + 80) = v6 + 96;
  *(_QWORD *)(v6 + 112) = v6 + 128;
  v8 = *(_QWORD *)v6;
  *(_QWORD *)(v6 + 16) = 0x320000000ALL;
  *(_QWORD *)(v6 + 56) = 0;
  *(_BYTE *)(v6 + 64) = 0;
  *(_QWORD *)v6 = (unsigned int)v8 & 0xFF800000 | 0x6F0LL;
  *(_QWORD *)(v6 + 88) = 0;
  *(_QWORD *)(v6 + 24) = v7 | 0x100000010LL;
  *(_BYTE *)(v6 + 96) = 0;
  *(_QWORD *)(v6 + 120) = 0;
  *(_BYTE *)(v6 + 128) = 0;
  *(_QWORD *)(v6 + 144) = 0;
  *(_QWORD *)(v6 + 152) = 0;
  *(_QWORD *)(v6 + 160) = 0;
  *(_QWORD *)(v6 + 168) = 0;
  *(_QWORD *)(v6 + 176) = 0;
  *(_QWORD *)(v6 + 184) = 0;
  *(_QWORD *)(v6 + 192) = 0;
  *(_QWORD *)(v6 + 200) = 0;
  *(_QWORD *)(v6 + 208) = 0;
  *(_QWORD *)(v6 + 216) = 0;
  *(_QWORD *)(v6 + 224) = 0;
  *(_QWORD *)(v6 + 232) = 0;
  *(_QWORD *)(v6 + 240) = 0;
  *(_QWORD *)(v6 + 248) = 0;
  *(_QWORD *)(v6 + 256) = 0;
  *(_QWORD *)(v6 + 32) = 8;
  *(_BYTE *)(v6 + 40) = 0;
  *a1 = v6;
  v9 = (unsigned int)sub_1105E80();
  sub_21BCF70((unsigned int)&v18, v9, a2 + 8, a3 - 1, (unsigned int)&v14, (unsigned int)&v15, -1);
  sub_2290A40(v16, "NO_COLOR", 8);
  if ( v17[16] )
  {
    v3 = v16[1] == nullptr;
    if ( v16[0] != v17 )
      operator delete(v16[0]);
  }
  sub_1338610(*a1, (__int64)&v18, nullptr, v3);
  v18 = off_2BE9900;
  sub_21B6780(&v18);
  v10 = (void **)v24[0];
  if ( v24[0] != v24 )
  {
    while ( 1 )
    {
      v11 = (void **)v10[2];
      v12 = (void **)*v10;
      if ( v11 == v10 + 4 )
      {
        operator delete(v10);
        if ( v12 == v24 )
          break;
      }
      else
      {
        operator delete(v11);
        operator delete(v10);
        if ( v12 == v24 )
          break;
      }
      v10 = v12;
    }
  }
  if ( ptr != &v23 )
    free(ptr);
  v18 = (__int64 (__fastcall **)())&off_2C35EF8;
  operator delete(v20[16], 12LL * v21, 4);
  if ( v19 != v20 )
    free(v19);
  return a1;
}
