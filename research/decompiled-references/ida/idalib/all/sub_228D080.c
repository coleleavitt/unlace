__int64 __fastcall sub_228D080(size_t *a1, int *a2, int a3, int a4, char a5, unsigned int a6)
{
  _BOOL4 v8; // r13d
  _BOOL4 v9; // ebx
  _BOOL4 v10; // esi
  _BOOL4 v11; // r10d
  Elf64_Rela *v12; // r15
  int v13; // r14d
  int v14; // ecx
  int v15; // eax
  Elf64_Rela *v16; // r9
  Elf64_Rela *v17; // r11
  int v18; // r13d
  int v19; // ebx
  int v20; // esi
  int v21; // r10d
  __m128i si128; // xmm0
  char *v23; // r14
  int *v24; // r15
  int v25; // eax
  unsigned int v26; // ebp
  void *ptr; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v29; // [rsp+8h] [rbp-D0h]
  _BYTE v30[192]; // [rsp+18h] [rbp-C0h] BYREF

  if ( a4 == 1 )
  {
    v12 = &stru_80000;
    v13 = 524352;
    v14 = 525376;
    v15 = 0;
    v16 = &stru_80240;
    v17 = &stru_800C0;
    v18 = 64;
    v19 = 1088;
    v20 = 576;
    v21 = 192;
  }
  else if ( a4 == 2 )
  {
    LODWORD(v12) = 524289;
    v14 = 525377;
    v19 = 1089;
    v13 = 524353;
    LODWORD(v16) = 524865;
    LODWORD(v17) = 524481;
    v20 = 577;
    v18 = 65;
    v21 = 193;
    v15 = 1;
  }
  else
  {
    v16 = (Elf64_Rela *)(a4 == 3);
    v17 = v16;
    v8 = a4 == 3;
    v9 = v8;
    v10 = v8;
    v11 = v8;
    LODWORD(v12) = (unsigned int)&stru_80000 + 2 * (_QWORD)v16;
    v13 = 2 * v8 + 524352;
    v14 = 2 * v8 + 525376;
    v15 = 2 * v8;
    LODWORD(v16) = (unsigned int)&stru_80240 + 2 * (_QWORD)v16;
    LODWORD(v17) = (unsigned int)&stru_800C0 + 2 * (_QWORD)v17;
    v18 = 2 * v8 + 64;
    v19 = 2 * v9 + 1088;
    v20 = 2 * v10 + 576;
    v21 = 2 * v11 + 192;
  }
  if ( (a5 & 4) == 0 )
  {
    if ( a3 == 1 )
    {
      v14 = (int)v17;
      v19 = v21;
    }
    else if ( a3 )
    {
      if ( a3 == 3 )
      {
        v14 = v13;
        v19 = v18;
      }
      else
      {
        v14 = (int)v12;
        v19 = v15;
      }
    }
    else
    {
      v14 = (int)v16;
      v19 = v20;
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
  if ( (a5 & 0x10) == 0 )
    v19 = v14;
  v29 = si128;
  ptr = v30;
  v23 = (char *)sub_2253CC0(a1, &ptr);
  v24 = __errno_location();
  while ( 1 )
  {
    *v24 = 0;
    v25 = open(v23, v19, a6);
    if ( v25 != -1 )
      break;
    if ( *v24 != 4 )
    {
      *a2 = -1;
      goto LABEL_21;
    }
  }
  *a2 = v25;
  if ( v25 >= 0 )
  {
    v26 = 0;
    std::_V2::system_category((std::_V2 *)v23);
    goto LABEL_15;
  }
LABEL_21:
  std::_V2::generic_category((std::_V2 *)v23);
  v26 = *v24;
LABEL_15:
  if ( ptr != v30 )
    free(ptr);
  return v26;
}
