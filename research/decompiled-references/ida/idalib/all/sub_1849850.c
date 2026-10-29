unsigned __int64 __fastcall sub_1849850(__int64 a1, char *a2, __int64 a3, unsigned __int64 a4, __int64 a5, double a6)
{
  int v7; // r13d
  __int64 v8; // r12
  unsigned int v9; // ebp
  unsigned int v11; // eax
  _BYTE *v12; // rcx
  size_t v13; // r15
  size_t v14; // rdx
  char v15; // r15
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  unsigned int v24; // eax
  unsigned __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  _BYTE *s1; // [rsp+8h] [rbp-E0h]
  _BYTE *s1a; // [rsp+8h] [rbp-E0h]
  __int64 v32; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v33[200]; // [rsp+20h] [rbp-C8h] BYREF

  v7 = a5;
  v8 = (__int64)a2;
  v9 = a3;
  v11 = *(_DWORD *)(a4 + 16) * ((*(_WORD *)(a4 + 2) >> 6) & 7);
  v12 = (_BYTE *)(a4 + 4LL * *(unsigned int *)(a4 + 4) + 20);
  v13 = v11;
  if ( v11 == 1 )
  {
    if ( *v12 == 67 )
    {
      v15 = 1;
      goto LABEL_6;
    }
    s1 = v12;
    if ( j__strlen("C++") != 1 )
    {
LABEL_14:
      v24 = sub_C00A40(a4, (__int64)a2, a3, (__int64)v12, a5);
      sub_168B9F0((__int64)v33, (__int64 *)(a1 + 8), v24, 0x1002u, 0);
      v25 = a4;
      v19 = 0;
      v32 = sub_EEC8C0(v25, a1 + 8, a6);
      sub_1587DB0((__int64)v33, &v32);
      sub_15F7200(v33);
      return v19;
    }
    v12 = s1;
  }
  else
  {
    s1a = v12;
    if ( v11 != j__strlen("C++") )
      goto LABEL_14;
    v12 = s1a;
    if ( !v13 )
    {
      v15 = 2;
      goto LABEL_6;
    }
  }
  v14 = v13;
  a2 = "C++";
  v15 = 2;
  if ( memcmp(v12, "C++", v14) )
    goto LABEL_14;
LABEL_6:
  v16 = sub_C00A40(a4, (__int64)a2, a3, (__int64)v12, a5);
  v19 = sub_B99790(*(_QWORD **)(a1 + 248), *(_QWORD *)(a1 + 544), v9, v16, v15, v7 != 0);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 21LL) & 4) != 0 && (unsigned __int8)sub_1A7C010(a1) )
  {
    *(_QWORD *)(v19 - 8) = sub_1A7FEA0(a1, v9);
    sub_B94AD0(*(__m128i **)(a1 + 544), v19, v26, v27, v28, v29);
    goto LABEL_8;
  }
  sub_B94AD0(*(__m128i **)(a1 + 544), v19, v17, v18, v20, v21);
  v22 = 0;
  if ( v19 )
LABEL_8:
    v22 = v19 + 40;
  sub_17A2E00(a1, v8, v22);
  return v19;
}
