/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140059960
// Address: 0x0000000140059960

//----- (0000000140059960) ----------------------------------------------------
void __fastcall sub_140059960(__int64 a1, const char *a2, signed __int64 a3, __int64 a4)
{
  signed __int64 v5; // r13
  __int64 v8; // r8
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdi
  unsigned int v11; // edx
  size_t i; // rbx
  int v13; // r9d
  __int64 v14; // rax
  size_t v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r14
  unsigned __int64 v18; // rbp
  const char *v19; // [rsp+20h] [rbp-78h] BYREF
  const char *v20; // [rsp+28h] [rbp-70h]
  char v21; // [rsp+30h] [rbp-68h] BYREF
  char v22; // [rsp+31h] [rbp-67h]

  v20 = a2;
  v5 = a3;
  if ( a3 == -1 )
    v5 = strlen(a2);
  v8 = a4;
  if ( v5 > a4 )
    v8 = v5;
  v9 = v8 + 16;
  if ( v9 > *(_QWORD *)(a1 + 16) )
    *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v9, 1u);
  v19 = a2;
  v10 = (unsigned __int64)a2;
  if ( v5 > 0 )
  {
    while ( 2 )
    {
      v11 = sub_1400615C0((unsigned __int8 **)&v19);
      if ( ((v11 + 1) & 0xFFFFFFFE) == 0 )
        v11 = *(unsigned __int8 *)v19++;
      switch ( v11 )
      {
        case 7u:
          v22 = 97;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 8u:
          v22 = 98;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 9u:
          v22 = 116;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 0xAu:
          v22 = 110;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 0xBu:
          v22 = 118;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 0xCu:
          v22 = 102;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 0xDu:
          v22 = 114;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 0x22u:
          v22 = 34;
          i = 2;
          v21 = 92;
          goto LABEL_24;
        case 0x5Cu:
          v22 = 92;
          v21 = 92;
          i = 2;
          goto LABEL_24;
        default:
          if ( sub_14005A0C0(v11) )
          {
            i = (size_t)&v19[-v10];
          }
          else
          {
            for ( i = 0;
                  v10 < (unsigned __int64)v19;
                  i += (int)sub_14005B0A0((struct __crt_locale_pointers *)(&v21 + i), 16 - i, "\\x%02X", v13) )
            {
              v13 = *(unsigned __int8 *)v10++;
            }
LABEL_24:
            v10 = (unsigned __int64)&v21;
          }
          if ( a4 > 0 )
          {
            v14 = *(_QWORD *)(a1 + 8);
            v15 = i + v14 - 1;
            if ( !v14 )
              v15 = i;
            if ( v15 >= a4 )
              return;
          }
          v16 = *(_QWORD *)(a1 + 8);
          v17 = v16 - 1;
          if ( !v16 )
            v17 = 0;
          v18 = v17 + i + 1;
          if ( v18 > *(_QWORD *)(a1 + 16) )
            *(_QWORD *)a1 = sub_14005ABE0(a1, *(void **)a1, v17 + i + 1, 1u);
          *(_QWORD *)(a1 + 8) = v18;
          *(_BYTE *)(v17 + i + *(_QWORD *)a1) = 0;
          memcpy((void *)(v17 + *(_QWORD *)a1), (const void *)v10, i);
          v10 = (unsigned __int64)v19;
          if ( v19 - v20 >= v5 )
            return;
          continue;
      }
    }
  }
}
