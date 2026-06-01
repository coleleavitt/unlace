unsigned __int64 __fastcall sub_1E6A200(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i *a7)
{
  unsigned int v8; // r13d
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // r8
  char v13; // r15
  int v14; // eax
  __int64 *v15; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  char v18; // cl
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __int16 v22; // ax
  _BYTE *v23; // rdi
  __int64 (*v24)(void); // rax
  char v25; // al
  bool v26; // al
  __int64 v27; // rax
  unsigned __int64 result; // rax
  __int64 v29; // r15
  size_t v30; // rax
  char v31; // [rsp+7h] [rbp-141h]
  __int64 v34; // [rsp+28h] [rbp-120h] BYREF
  int v35; // [rsp+34h] [rbp-114h] BYREF
  __int64 v36; // [rsp+38h] [rbp-110h] BYREF
  int v37[6]; // [rsp+40h] [rbp-108h] BYREF
  void *v38; // [rsp+58h] [rbp-F0h]
  char v39; // [rsp+68h] [rbp-E0h] BYREF
  _DWORD v40[50]; // [rsp+80h] [rbp-C8h] BYREF

  v8 = a5;
  v10 = a4;
  v34 = a2;
  v13 = sub_1E64090((__int64 *)a1, a2, a5, a4, a5, a6);
  if ( v10 )
  {
    v14 = v10;
    v15 = a3;
    v16 = (__int64)&a3[(unsigned int)(v14 - 1) + 1];
    do
    {
      v36 = sub_A75DA0(*(_QWORD *)(a1 + 248), *v15);
      v20 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
      v21 = *(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v21 + 16) == 13 )
      {
        v22 = (*(_WORD *)(v21 + 18) >> 3) & 0x1FF;
        if ( v22 == 435 )
        {
          sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), v8, 0x12BAu, 0);
LABEL_20:
          v13 = 1;
          sub_15F7200(v40);
          v17 = v36;
          v18 = v36 & 7;
          goto LABEL_4;
        }
        if ( v22 == 480 && (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 60LL) & 8) == 0 )
        {
          v23 = *(_BYTE **)(*(_QWORD *)(a1 + 248) + 17448LL);
          v24 = *(__int64 (**)(void))(*(_QWORD *)v23 + 88LL);
          if ( (char *)v24 == (char *)sub_102B7F0 )
            v25 = v23[277];
          else
            v25 = v24();
          if ( !v25 )
          {
            sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), v8, 0x12BCu, 0);
            v35 = 0;
            v29 = sub_1587D10((__int64)v40, &v35);
            v30 = j__strlen("*");
            sub_9EC740((__int64)v37, v8, "*", v30, 0);
            sub_1589170(v29, v37);
            if ( v38 != &v39 )
              operator delete(v38);
            goto LABEL_20;
          }
          v20 = *(_QWORD *)(v36 & 0xFFFFFFFFFFFFFFF0LL);
        }
      }
      v26 = sub_F65F60(v20);
      if ( v26 )
      {
        v31 = v26;
        sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), v8, 0x1561u, 0);
        sub_15F7200(v40);
        v17 = v36;
        v13 = v31;
        v18 = v36 & 7;
      }
      else
      {
        v17 = v36;
        v18 = v36 & 7;
        v19 = *(_QWORD *)&byte_8[v36 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v19 & 8) != 0 && *(_DWORD *)((char *)&qword_18 + (v19 & 0xFFFFFFFFFFFFFFF0LL) + 4) )
        {
          sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), v8, 0x130Cu, 0);
          v27 = sub_1605D30((__int64)v40, &v34);
          v37[0] = 1;
          sub_1587D10(v27, v37);
          goto LABEL_20;
        }
      }
LABEL_4:
      v11 = v18 & 4;
      if ( ((_DWORD)v11 || (byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0) && *(char *)(*(_QWORD *)(a1 + 232) + 1LL) < 0 )
      {
        sub_168B9F0((__int64)v40, (__int64 *)(a1 + 8), v8, 0x1ABCu, 0);
        sub_1605D30((__int64)v40, &v36);
        sub_15F7200(v40);
      }
      *v15++ = v36;
    }
    while ( (__int64 *)v16 != v15 );
  }
  if ( a7[4].m128i_i64[1] )
  {
    v40[0] = v8;
    sub_1E69BD0(a1, a4, a7);
  }
  if ( a7->m128i_i8[0] >= 0 )
  {
    result = 0;
    if ( v13 )
      return result;
    return sub_A73610(*(_QWORD *)(a1 + 248), v34, a3, a4, a7, 0);
  }
  sub_1A913B0(*(__int64 **)(a1 + 736), v8, v34, v11, v12);
  result = 0;
  if ( !v13 )
    return sub_A73610(*(_QWORD *)(a1 + 248), v34, a3, a4, a7, 0);
  return result;
}
