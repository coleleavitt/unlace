unsigned __int64 __fastcall sub_63FD20(__int64 a1, __int64 a2)
{
  void *v2; // r12
  __int64 v3; // rax
  Elf64_Sym *v4; // rbp
  __int64 v5; // r13
  Elf64_Sym *v6; // rdx
  Elf64_Sym *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[96]; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v16[112]; // [rsp+80h] [rbp-E8h] BYREF
  char v17[16]; // [rsp+F0h] [rbp-78h] BYREF
  char v18[40]; // [rsp+100h] [rbp-68h] BYREF
  unsigned __int64 v19; // [rsp+128h] [rbp-40h]

  v19 = __readfsqword(0x28u);
  v2 = (void *)operator new[]((unsigned __int64)&stru_10000);
  memset(v15, 0, 0x58u);
  MD5Init(v15);
  sha256_init(v16);
  qlseek(a2, 0, 0);
  v3 = qlsize(a2);
  if ( v3 )
  {
    v4 = (Elf64_Sym *)v3;
    LODWORD(v5) = 0;
    while ( 1 )
    {
      v6 = &stru_10000;
      if ( v4 <= &stru_10000 )
        v6 = v4;
      v7 = v6;
      v8 = qlread(a2, v2, v6);
      v9 = v8;
      if ( (Elf64_Sym *)v8 != v7 )
        break;
      v5 = (unsigned int)calc_crc32((unsigned int)v5, v2, v8);
      MD5Update(v15, v2, v9);
      sha256_update(v16, v2, (unsigned int)v9);
      v4 = (Elf64_Sym *)((char *)v4 - v9);
      if ( !v4 )
        goto LABEL_10;
    }
    if ( v2 )
      operator delete[](v2);
  }
  else
  {
    v5 = 0;
LABEL_10:
    MD5Final(v17, v15);
    sha256_final(v18, v16);
    if ( v2 )
      operator delete[](v2);
    sub_632610(a1, 92, v5);
    sub_632C30(a1, 76, v17, 0x10u, v10, v11);
    sub_632C30(a1, 80, v18, 0x20u, v12, v13);
  }
  return v19 - __readfsqword(0x28u);
}
