const char *__fastcall sub_FB07A0(unsigned int a1, __int64 a2, __int64 a3)
{
  unsigned __int16 *v3; // r15
  __int64 v5; // rdi
  size_t v6; // rax
  unsigned int v7; // r14d
  __int16 *v8; // r11
  unsigned int v9; // r8d
  char v10; // r10
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // eax
  __int64 v14; // rax
  unsigned __int16 *v15; // rax
  __int16 *v16; // r8
  __int64 v17; // rax
  unsigned int v18; // r14d
  char v19; // r12
  __int16 *v20; // rbx
  char v21; // al
  _BYTE *v22; // rdx
  const char *v23; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rdx
  unsigned int v27; // [rsp+Ch] [rbp-9Ch]
  unsigned int v29; // [rsp+20h] [rbp-88h]
  _BYTE *v30; // [rsp+20h] [rbp-88h]
  unsigned int v31; // [rsp+20h] [rbp-88h]
  __int16 *v32; // [rsp+28h] [rbp-80h]
  const char *v33; // [rsp+30h] [rbp-78h]
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __int64 v35; // [rsp+48h] [rbp-60h]
  _BYTE v36[88]; // [rsp+50h] [rbp-58h] BYREF

  v3 = (unsigned __int16 *)&unk_2B23900;
  v27 = a3 + 1;
  v33 = nullptr;
  do
  {
    while ( 1 )
    {
      if ( (*(_QWORD *)v3 & 0xFFFFFFFF0000LL) == 0 )
        goto LABEL_53;
      v5 = *v3;
      v6 = 0;
      if ( &byte_23EDAC0[v5] )
        v6 = strlen(&byte_23EDAC0[v5]);
      ptr = &byte_23EDAC0[v5];
      v35 = v6;
      v7 = sub_22226F0(&ptr, a2, a3, 1, v27);
      if ( v7 > v27 )
        goto LABEL_53;
      ptr = v36;
      v35 = 0x800000000LL;
      if ( (*(_QWORD *)v3 & 0xFFFFFFFF0000LL) == 0 )
        goto LABEL_53;
      v8 = (__int16 *)((char *)&unk_23F40A0 + 2 * v3[1]);
      v9 = *v8;
      if ( *v8 != -1 )
      {
        v10 = 1;
        do
        {
          v11 = v9 - 1;
          if ( v9 - 1 > 0x233A )
            goto LABEL_64;
          if ( v9 > 0x12C )
          {
            v11 = v9 - 301;
            v12 = 493;
            v13 = 160;
          }
          else
          {
            v12 = 333;
            v13 = 0;
          }
          if ( v9 > 0x2BC )
          {
            v11 -= 400;
            v13 = v12;
          }
          if ( v9 > 0x384 )
          {
            v13 += 154;
            v11 -= 200;
          }
          if ( v9 > 0x3FC )
          {
            v13 += 53;
            v11 -= 120;
          }
          if ( v9 > 0x5F0 )
          {
            v13 += 406;
            v11 -= 500;
          }
          if ( v9 > 0x910 )
          {
            v13 += 709;
            v11 -= 800;
          }
          if ( v9 > 0xA3C )
          {
            v13 += 270;
            v11 -= 300;
          }
          if ( v9 > 0xAA0 )
          {
            v13 += 35;
            v11 -= 100;
          }
          if ( v9 > 0xB04 )
          {
            v13 += 4;
            v11 -= 100;
          }
          if ( v9 > 0x1E8C )
          {
            v13 += 4755;
            v11 -= 5000;
          }
          if ( v9 > 0x1EF0 )
            v11 -= 100;
          if ( v9 > 0x22D8 )
          {
            v13 += 6;
            v11 -= 1000;
          }
          v14 = v11 + v13;
          if ( (unsigned int)v14 > 0x1B14 || (v15 = (unsigned __int16 *)((char *)&unk_23F5940 + 10 * v14), v9 != *v15) )
LABEL_64:
            BUG();
          if ( a1 == ((v15[1] & 0x38) == 16) )
          {
            v25 = (unsigned int)v35;
            v26 = (unsigned int)v35 + 1LL;
            if ( v26 > HIDWORD(v35) )
            {
              v32 = v8;
              v31 = v9;
              sub_22134E0(&ptr, v36, v26, 4);
              v25 = (unsigned int)v35;
              v8 = v32;
              v9 = v31;
            }
            v10 = 0;
            *((_DWORD *)ptr + v25) = v9;
            LODWORD(v35) = v35 + 1;
          }
          v9 = *++v8;
        }
        while ( *v8 != -1 );
        v16 = &word_23F3A00[v3[2]];
        v17 = *v16;
        if ( (_WORD)v17 == 0xFFFF )
          goto LABEL_45;
        goto LABEL_40;
      }
      v10 = 1;
      v16 = &word_23F3A00[v3[2]];
      v17 = *v16;
      if ( (_WORD)v17 == 0xFFFF )
        break;
LABEL_40:
      v29 = v7;
      v18 = a1;
      v19 = v10;
      v20 = v16;
      do
      {
        if ( (*((_QWORD *)&unk_2B23900 + 3 * (__int16)v17) & 0xFFFFFFFF0000LL) != 0 )
          v21 = sub_FAF120(v18, (__int64)&unk_2B23900 + 24 * v17, (__int64)&ptr, 0);
        else
          v21 = v18 == 1;
        ++v20;
        v19 &= v21;
        v17 = *v20;
      }
      while ( (_WORD)v17 != 0xFFFF );
      v10 = v19;
      a1 = v18;
      v7 = v29;
LABEL_45:
      v22 = ptr;
      if ( !v10 && (_DWORD)v35 )
      {
        if ( v7 == v27 )
        {
          v33 = &byte_22CD811;
        }
        else if ( v7 < v27 )
        {
          v23 = &byte_23EDAC0[*v3];
          v33 = v23;
          if ( v23 )
          {
            v30 = ptr;
            strlen(v23);
            v27 = v7;
            v22 = v30;
          }
          else
          {
            v27 = v7;
          }
        }
      }
      if ( v22 != v36 )
        free(v22);
LABEL_53:
      v3 += 12;
      if ( &unk_2B2A248 == (_UNKNOWN *)v3 )
        return v33;
    }
    v3 += 12;
  }
  while ( &unk_2B2A248 != (_UNKNOWN *)v3 );
  return v33;
}

