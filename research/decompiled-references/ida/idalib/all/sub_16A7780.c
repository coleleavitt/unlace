__int64 __fastcall sub_16A7780(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        char a9)
{
  unsigned __int64 v10; // r10
  unsigned int v12; // ebx
  char v13; // r11
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rbx
  unsigned int v17; // ebx
  char v19; // al
  __int64 v20; // [rsp-10h] [rbp-2078h]
  unsigned __int64 v21; // [rsp+8h] [rbp-2060h]
  unsigned __int64 v22; // [rsp+8h] [rbp-2060h]
  int v23; // [rsp+18h] [rbp-2050h]
  unsigned int v24; // [rsp+24h] [rbp-2044h]
  unsigned __int64 v25; // [rsp+38h] [rbp-2030h] BYREF
  _WORD v26[2]; // [rsp+40h] [rbp-2028h] BYREF
  unsigned int v27; // [rsp+44h] [rbp-2024h]
  unsigned int v28; // [rsp+48h] [rbp-2020h]
  int v29; // [rsp+4Ch] [rbp-201Ch]
  int v30; // [rsp+50h] [rbp-2018h] BYREF
  __int64 v31; // [rsp+58h] [rbp-2010h]
  __int64 v32; // [rsp+60h] [rbp-2008h]
  int v33; // [rsp+68h] [rbp-2000h]
  __int64 v34; // [rsp+70h] [rbp-1FF8h]
  __int64 (__fastcall **v35)(); // [rsp+80h] [rbp-1FE8h] BYREF
  int v36; // [rsp+88h] [rbp-1FE0h]

  v10 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v12 = a5;
  v13 = a9;
  v24 = HIDWORD(a5);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
  {
    v23 = a6;
    v22 = a3 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (unsigned __int8)sub_1E63CF0(a1, (unsigned int)a5, a3, 1, 3277)
      || (v35 = off_2BC6500, v36 = 2984, v19 = sub_1866EA0(a1, v12, a3, &v35), v10 = v22, v13 = a9, a6 = v23, v19) )
    {
      v17 = 3;
      *a7 = 0;
      return v17;
    }
  }
  v14 = *a2;
  v30 = 9;
  v31 = 0;
  v32 = a3;
  v15 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v33 = 0;
  v34 = 0;
  if ( a4 == 1 )
  {
    LOBYTE(v26[0]) = v13;
    HIBYTE(v26[0]) = 4;
    v27 = v12;
    v28 = v12;
    v29 = a6;
  }
  else
  {
    if ( a4 != 2 )
    {
      v27 = v12;
      v26[0] = 768;
      v28 = v12;
      v29 = a6;
      v21 = v10;
      v25 = v15;
      sub_1A19220((unsigned int)&v35, a1, (unsigned int)&v30, (unsigned int)v26, (unsigned int)&v25, 1, 0, 1);
      if ( (_DWORD)v35
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
        goto LABEL_6;
      }
      goto LABEL_12;
    }
    LOBYTE(v26[0]) = v13;
    HIBYTE(v26[0]) = 5;
    v27 = v12;
    v28 = v24;
    v29 = a6;
  }
  v25 = v15;
  sub_1A19220((unsigned int)&v35, a1, (unsigned int)&v30, (unsigned int)v26, (unsigned int)&v25, 1, 0, 1);
  if ( (_DWORD)v35 )
  {
LABEL_6:
    v16 = sub_1A1D600((unsigned int)&v35, a1, (unsigned int)&v30, (unsigned int)v26, (unsigned int)&v25, 1, 0);
    if ( v16 == 1 )
    {
      v17 = 3;
      *a7 = 0;
    }
    else
    {
      *a8 = (unsigned __int8)sub_1A0B820(&v35, v20) == 0 ? 5 : 20;
      *a2 = v16;
      v17 = 1;
    }
    goto LABEL_8;
  }
LABEL_12:
  v17 = 0;
LABEL_8:
  sub_1A0BB10(&v35);
  return v17;
}
