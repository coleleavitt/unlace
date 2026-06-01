__int64 __fastcall sub_E686A0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 v8; // rdi
  char v9; // al
  const char *v10; // rsi
  size_t v11; // rax
  __int64 result; // rax
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rax
  __int64 v19; // rax
  __int16 *v20; // [rsp+0h] [rbp-88h] BYREF
  __int64 v21; // [rsp+8h] [rbp-80h]
  __int64 v22; // [rsp+10h] [rbp-78h] BYREF
  __int64 v23; // [rsp+18h] [rbp-70h]
  int v24; // [rsp+20h] [rbp-68h]
  __int16 v25; // [rsp+30h] [rbp-58h] BYREF
  __int64 v26; // [rsp+38h] [rbp-50h]
  __int64 v27; // [rsp+40h] [rbp-48h]
  int v28; // [rsp+48h] [rbp-40h]

  v7 = a1 + 1048;
  v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[4] + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = *(_BYTE *)(v8 + 16);
  switch ( v9 )
  {
    case 13:
      if ( (((*(_WORD *)(v8 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      {
LABEL_3:
        v10 = "dictionary";
        goto LABEL_4;
      }
      break;
    case 47:
      v19 = sub_F60F10(v8, a2, a3, a4, a5);
      if ( (*(_BYTE *)(v19 + 74) & 1) == 0 && (*(_QWORD *)(v19 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        goto LABEL_3;
      break;
    case 10:
      break;
    default:
      goto LABEL_3;
  }
  v10 = "array";
LABEL_4:
  sub_E598C0((__int64)&v25, v10);
  v11 = j__strlen("subscriptKind");
  sub_222AB70(v7, "subscriptKind", v11);
  sub_222CAC0(v7, &v25);
  sub_2229BF0(v7);
  result = sub_222B2A0(&v25);
  v13 = a2[5];
  if ( v13 )
  {
    sub_E673B0((__int64)&v22, a1, v13);
    v25 = 7;
    v26 = v22;
    v22 = 0;
    v27 = v23;
    v23 = 0;
    v28 = v24;
    v24 = 0;
    v14 = j__strlen("getter");
    v20 = &v25;
    v21 = v7;
    sub_E585D0(v7, (__int64)"getter", v14, (__int64)sub_E58580, &v20);
    sub_222B2A0(&v25);
    result = sub_E5D2E0(&v22);
  }
  v15 = a2[6];
  if ( v15 )
  {
    sub_E673B0((__int64)&v22, a1, v15);
    v25 = 7;
    v16 = v22;
    v22 = 0;
    v26 = v16;
    v17 = v23;
    v23 = 0;
    v27 = v17;
    LODWORD(v17) = v24;
    v24 = 0;
    v28 = v17;
    v18 = j__strlen("setter");
    v20 = &v25;
    v21 = v7;
    sub_E585D0(v7, (__int64)"setter", v18, (__int64)sub_E58580, &v20);
    sub_222B2A0(&v25);
    return sub_E5D2E0(&v22);
  }
  return result;
}
