_QWORD *__fastcall sub_1528E60(_QWORD *a1, __int64 a2, __int16 a3, __int64 a4, unsigned __int16 a5)
{
  unsigned int *v8; // r15
  size_t v9; // rbp
  char *v10; // rax
  const char *v11; // rdx
  unsigned int *v13; // rdx
  size_t v14; // r8
  _BYTE *v15; // rcx
  unsigned __int64 v16; // r13
  _BYTE *v17; // rdi
  unsigned __int64 v18; // rax
  _BYTE *v19; // rdi
  void *v20; // [rsp+10h] [rbp-58h] BYREF
  size_t v21; // [rsp+18h] [rbp-50h]
  _QWORD v22[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( (unsigned __int16)(a3 - 7) <= 0xCu || a3 == 1 )
    BUG();
  v8 = *(unsigned int **)(a2 + 16);
  v9 = *v8;
  v20 = v22;
  sub_1520EC0(&v20, "clang loop ", (__int64)"");
  v10 = (char *)(v8 + 4);
  switch ( v9 )
  {
    case 4uLL:
      v9 = v21;
      if ( v8[4] == 1886351212 && ((unsigned __int8)sub_141A630(a5) | (a5 == 1)) != 1 && a4 )
      {
        v13 = *(unsigned int **)(a4 + 16);
        v14 = *v13;
        v15 = v13 + 4;
        if ( v14 > 0x7FFFFFFFFFFFFFFFLL - v9 )
          std::__throw_length_error("basic_string::append");
        v16 = v14 + v9;
        v17 = v20;
        if ( v20 == v22 )
          v18 = 15;
        else
          v18 = v22[0];
        if ( v16 > v18 )
        {
          sub_998B30((__int64)&v20, v9, 0, v15, v14);
          v17 = v20;
        }
        else if ( *v13 )
        {
          v19 = (char *)v20 + v9;
          if ( v14 == 1 )
            *v19 = *((_BYTE *)v13 + 16);
          else
            memcpy(v19, v15, *v13);
          v17 = v20;
        }
        v21 = v16;
        v17[v16] = 0;
        v9 = v21;
      }
      v10 = (char *)v20;
      if ( v8[4] == 1886351212 )
        goto LABEL_24;
      break;
    case 0xEuLL:
      if ( *((_QWORD *)v8 + 2) == 0x615F6C6C6F726E75LL && v8[6] == 1784636526 && *((_WORD *)v8 + 14) == 28001 )
        goto LABEL_24;
      goto LABEL_7;
    case 6uLL:
      if ( v8[4] == 1869770357 && *((_WORD *)v8 + 10) == 27756 )
      {
LABEL_24:
        v11 = &v10[v9];
        goto LABEL_8;
      }
LABEL_7:
      v10 = (char *)&byte_22F0C30;
      v11 = &byte_22F0C30;
      goto LABEL_8;
  }
  v11 = &byte_22F0C30;
  v10 = (char *)&byte_22F0C30;
LABEL_8:
  *a1 = a1 + 2;
  sub_1520EC0(a1, v10, (__int64)v11);
  if ( v20 != v22 )
    operator delete(v20);
  return a1;
}
