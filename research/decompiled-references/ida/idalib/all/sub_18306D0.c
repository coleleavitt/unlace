__int64 __fastcall sub_18306D0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, double a5)
{
  __int64 v8; // rbx
  _DWORD *v9; // rbx
  unsigned int v10; // r14d
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdi
  __int64 *v19; // r15
  __int64 v20; // rdx
  char v21; // al
  unsigned int v22; // eax
  __int64 v23; // rbp
  _QWORD *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // [rsp+8h] [rbp-E0h]
  int v29; // [rsp+14h] [rbp-D4h] BYREF
  __int64 v30; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v31[200]; // [rsp+20h] [rbp-C8h] BYREF

  v8 = *(_QWORD *)(a3 + 8LL * a4 + 80);
  v29 = 0;
  v9 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  v10 = sub_1830010(a1, a2, a3, a4 + 1, v9, (__int64)&v29, 0, 0);
  if ( !(_BYTE)v10 )
    return v10;
  v13 = (v29 & 0x3FFFFFFF) - 1 - (unsigned int)((v29 & 0x40000000) != 0);
  v14 = sub_18064C0(a2, v13) & 0xFFFFFFFFFFFFFFF0LL;
  v18 = *(_QWORD *)v14;
  v19 = (__int64 *)v14;
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v21 = *(_BYTE *)(v20 + 16);
  if ( v21 == 13 )
  {
    if ( (((*(_WORD *)(v20 + 18) >> 3) + 76) & 0x1FFu) <= 0x13 )
      return v10;
    goto LABEL_5;
  }
  if ( v21 != 47 )
  {
    if ( v21 == 10 )
      return v10;
    goto LABEL_5;
  }
  v28 = v20;
  v24 = sub_F60F10(v20, v13, v20, v15, v16, v17);
  if ( (*((_BYTE *)v24 + 74) & 1) == 0 && (v24[16] & 0xFFFFFFFFFFFFFFF8LL) == 0
    || *((char *)sub_F60F10(v28, v13, v28, v25, v26, v27) + 76) < 0 )
  {
    v18 = *v19;
LABEL_5:
    if ( !(unsigned __int8)sub_F57EE0(v18) )
    {
      v10 = 0;
      v22 = sub_EEB7E0((unsigned __int64)v9, v13, a5);
      sub_168B9F0((__int64)v31, (__int64 *)(a1 + 8), v22, 0xC6Fu, 0);
      v23 = sub_15DD120((__int64)v31, a3);
      v30 = sub_1806530(a2, (v29 & 0x3FFFFFFF) - 1 - (unsigned int)((v29 & 0x40000000) != 0));
      sub_1587DB0(v23, &v30);
      sub_15F7200(v31);
    }
  }
  return v10;
}
