/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_432890
// Address: 0x0000000000432890

//----- (0000000000432890) ----------------------------------------------------
__int64 __fastcall sub_432890(__int64 a1)
{
  void **v3; // rbp
  _BYTE *v4; // rax
  void *v5; // rsi
  unsigned __int64 v6; // rbp
  unsigned __int16 v7; // esi^2
  void **v8; // rbp
  _BYTE *v9; // rax
  void *v10; // rsi
  char **v11; // rdi
  size_t v12; // rdx
  const char *v13; // rsi
  void *v14; // rax
  void *v15; // rax
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v18 = __readfsqword(0x28u);
  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      sub_432650(a1, *(_QWORD *)(a1 + 72));
      break;
    case 4:
      ptr = nullptr;
      v17 = 0;
      sub_42E3C0(&ptr, a1 + 40);
      v12 = v17;
      v13 = s1;
      if ( (_QWORD)v17 )
      {
        v13 = (const char *)ptr;
        v12 = v17 - 1;
      }
      sub_432270(a1, v13, v12);
      if ( ptr )
      {
        *(_QWORD *)&v17 = 0;
        j__free(ptr);
      }
      break;
    case 7:
      v8 = *(void ***)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -46;
      v9 = v8[1];
      v10 = *v8;
      if ( v8[2] < v9 + 1 )
      {
        v14 = sub_481540((__int64)v8, v10, (unsigned __int64)(v9 + 1), 1u);
        *v8 = v14;
        v10 = v14;
        v9 = v8[1];
      }
      v9[(_QWORD)v10] = -46;
      v8[1] = (char *)v8[1] + 1;
      v11 = *(char ***)(a1 + 200);
      ++*(_DWORD *)(a1 + 208);
      sub_438B30(v11, (const void *)(a1 + 88), 0x10u);
      *(_DWORD *)(a1 + 208) += 16;
      break;
    case 8:
      v3 = *(void ***)(a1 + 200);
      *(_BYTE *)(a1 + 212) = -45;
      v4 = v3[1];
      v5 = *v3;
      if ( v3[2] < v4 + 1 )
      {
        v15 = sub_481540((__int64)v3, v5, (unsigned __int64)(v4 + 1), 1u);
        *v3 = v15;
        v5 = v15;
        v4 = v3[1];
      }
      v4[(_QWORD)v5] = -45;
      v3[1] = (char *)v3[1] + 1;
      v6 = *(_QWORD *)(a1 + 88);
      ++*(_DWORD *)(a1 + 208);
      sub_4313E0(a1, v6);
      v7 = WORD1(v6);
      v6 >>= 32;
      sub_4313E0(a1, v7);
      sub_4313E0(a1, v6);
      sub_4313E0(a1, WORD1(v6));
      break;
    default:
      if ( !byte_4C94E1 )
        sub_481AC0(275);
      BUG();
  }
  return 0;
}
// 4C94E1: using guessed type char byte_4C94E1;
