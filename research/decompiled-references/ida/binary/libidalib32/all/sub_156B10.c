void __fastcall sub_156B10(int *a1, __int64 a2, void (*a3)(void))
{
  int *v3; // rbx
  int v4; // r12d
  int v5; // r14d
  const char **v6; // rbx
  const char *v7; // rdi
  int v8; // edx
  size_t v9; // rax
  size_t v10; // r11
  size_t v11; // rdx
  void *v12; // rdi
  void *v13; // rax
  void *src; // [rsp+18h] [rbp-50h]
  size_t v17; // [rsp+20h] [rbp-48h]
  size_t v18; // [rsp+20h] [rbp-48h]
  size_t v19; // [rsp+28h] [rbp-40h]

  v3 = a1;
  v4 = *a1;
  if ( *a1 > 1 )
  {
    v5 = 1;
    while ( 1 )
    {
      v6 = (const char **)(a2 + 8LL * v5);
      v7 = *v6;
      if ( **v6 != 45 )
        break;
      switch ( v7[1] )
      {
        case '-':
          if ( strcmp(v7, "--help") )
            goto LABEL_7;
          goto LABEL_12;
        case '?':
        case 'H':
        case 'h':
LABEL_12:
          a3();
          goto LABEL_13;
        case 'L':
          goto LABEL_13;
        case 'M':
          if ( (v7[2] & 0xEF) == 0x42 )
            set_merge_state();
          goto LABEL_7;
        case 'T':
          src = (void *)(v7 + 2);
          v9 = strlen(v7 + 2);
          v10 = v9;
          if ( v9 )
          {
            v11 = v9 + 1;
            v12 = qword_2530C0;
            if ( *((_QWORD *)&xmmword_2530C8 + 1) < v9 + 1 )
            {
              v18 = v9 + 1;
              v19 = v9;
              v13 = (void *)qvector_reserve();
              v10 = v19;
              v11 = v18;
              qword_2530C0 = v13;
              v12 = v13;
            }
            *(_QWORD *)&xmmword_2530C8 = v11;
            v17 = v10;
            memmove(v12, src, v10);
            *((_BYTE *)qword_2530C0 + v17) = 0;
          }
          else
          {
            *(_QWORD *)&xmmword_2530C8 = 0;
          }
          goto LABEL_13;
        case 'W':
          qstrncpy();
          qstrncpy();
LABEL_13:
          v8 = v4--;
          memmove((void *)(a2 + 8LL * v5), (const void *)(a2 + 8LL * (v5 + 1)), 8LL * (v8 - v5));
          break;
        default:
LABEL_7:
          ++v5;
          break;
      }
      if ( v4 <= v5 )
      {
        v3 = a1;
        goto LABEL_10;
      }
    }
    v3 = a1;
    if ( v5 < v4 && **(_BYTE **)(a2 + 8LL * v5) == 63 )
      a3();
  }
LABEL_10:
  *v3 = v4;
}

