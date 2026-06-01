void __fastcall sub_E63E00(__int64 *a1, __int64 a2, unsigned int a3, char *a4)
{
  __int64 v7; // rdi
  unsigned int v8; // r12d
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  size_t v18; // rax
  size_t v19; // rax
  void *v20; // [rsp+10h] [rbp-328h] BYREF
  __int64 v21; // [rsp+18h] [rbp-320h]
  void *ptr; // [rsp+20h] [rbp-318h] BYREF
  __m128i si128; // [rsp+28h] [rbp-310h]
  _BYTE v24[40]; // [rsp+38h] [rbp-300h] BYREF
  __int64 (__fastcall **v25)(); // [rsp+60h] [rbp-2D8h] BYREF
  int v26; // [rsp+68h] [rbp-2D0h]
  __int128 v27; // [rsp+70h] [rbp-2C8h]
  __int64 v28; // [rsp+80h] [rbp-2B8h]
  char v29; // [rsp+88h] [rbp-2B0h]
  int v30; // [rsp+8Ch] [rbp-2ACh]
  void **p_ptr; // [rsp+90h] [rbp-2A8h]
  __int64 v32[83]; // [rsp+A0h] [rbp-298h] BYREF

  si128 = _mm_load_si128((const __m128i *)&xmmword_2384CE0);
  ptr = v24;
  v27 = 0;
  v26 = 2;
  v25 = &off_2BC1F40;
  v29 = 0;
  v30 = 1;
  v28 = 0;
  p_ptr = &ptr;
  sub_2257B70(&v25, 0, 0, 0);
  sub_E54900((__int64)v32, *a1, (__int64)&v25);
  sub_971800((__int64)&v25, "?$");
  v7 = *(_QWORD *)(*a1 + 8);
  if ( *(_BYTE *)(v7 + 17440) )
  {
LABEL_2:
    v8 = sub_A44560(v7, a3 >> 9);
    v9 = j__strlen("_AS");
    sub_E58770((__int64)v32, "_AS", v9);
    LODWORD(v21) = 64;
    v20 = (void *)v8;
    BYTE4(v21) = 1;
    sub_E61AE0(v32, (__int64)&v20, 0, 0);
    if ( (unsigned int)v21 > 0x40 && v20 )
      operator delete[](v20);
  }
  else
  {
    switch ( a3 >> 9 )
    {
      case 0u:
      case 0xAu:
        v11 = j__strlen("_ASCUshared");
        sub_E58770((__int64)v32, "_ASCUshared", v11);
        break;
      case 1u:
        v12 = j__strlen("_ASCLglobal");
        sub_E58770((__int64)v32, "_ASCLglobal", v12);
        break;
      case 2u:
        v13 = j__strlen("_ASCLlocal");
        sub_E58770((__int64)v32, "_ASCLlocal", v13);
        break;
      case 3u:
        v14 = j__strlen("_ASCLconstant");
        sub_E58770((__int64)v32, "_ASCLconstant", v14);
        break;
      case 4u:
        v15 = j__strlen("_ASCLprivate");
        sub_E58770((__int64)v32, "_ASCLprivate", v15);
        break;
      case 5u:
        v16 = j__strlen("_ASCLgeneric");
        sub_E58770((__int64)v32, "_ASCLgeneric", v16);
        break;
      case 6u:
        v17 = j__strlen("_ASCLdevice");
        sub_E58770((__int64)v32, "_ASCLdevice", v17);
        break;
      case 7u:
        v18 = j__strlen("_ASCLhost");
        sub_E58770((__int64)v32, "_ASCLhost", v18);
        break;
      case 8u:
        v19 = j__strlen("_ASCUdevice");
        sub_E58770((__int64)v32, "_ASCUdevice", v19);
        break;
      case 9u:
        v10 = j__strlen("_ASCUconstant");
        sub_E58770((__int64)v32, "_ASCUconstant", v10);
        break;
      default:
        goto LABEL_2;
    }
  }
  sub_E608A0(v32, a2, a4, 2);
  sub_E544F0((__int64)a1, 0, 0);
  v21 = 7;
  v20 = "__clang";
  sub_E58C30((__int64)a1, ptr, si128.m128i_u64[0], (__int64)&v20, 1);
  sub_E56DF0((__int64)v32);
  v25 = (__int64 (__fastcall **)())&unk_2C4C288;
  sub_2257A60(&v25);
  if ( ptr != v24 )
    free(ptr);
}

