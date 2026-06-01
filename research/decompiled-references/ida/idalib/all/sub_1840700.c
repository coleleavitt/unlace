__int64 __fastcall sub_1840700(__int64 a1, __int64 a2, unsigned __int16 *a3, int a4, double a5)
{
  __int64 v8; // rbx
  __int64 v9; // r12
  char v10; // al
  unsigned __int8 v11; // al
  char v12; // al
  __int64 v13; // rsi
  unsigned __int64 v14; // rax
  unsigned int v15; // r14d
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 *v20; // rdi
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r12
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+18h] [rbp-2060h]
  __int64 v27; // [rsp+20h] [rbp-2058h]
  unsigned __int16 **v28; // [rsp+28h] [rbp-2050h]
  _DWORD *v29; // [rsp+30h] [rbp-2048h]
  int v30; // [rsp+30h] [rbp-2048h]
  char v31; // [rsp+38h] [rbp-2040h]
  unsigned __int64 v32; // [rsp+38h] [rbp-2040h]
  unsigned __int16 *v33; // [rsp+48h] [rbp-2030h] BYREF
  _WORD v34[2]; // [rsp+50h] [rbp-2028h] BYREF
  int v35; // [rsp+54h] [rbp-2024h]
  unsigned int v36; // [rsp+58h] [rbp-2020h]
  int v37; // [rsp+5Ch] [rbp-201Ch]
  int v38; // [rsp+60h] [rbp-2018h] BYREF
  __int64 v39; // [rsp+68h] [rbp-2010h]
  __int64 v40; // [rsp+70h] [rbp-2008h]
  int v41; // [rsp+78h] [rbp-2000h]
  __int64 v42; // [rsp+80h] [rbp-1FF8h]
  __int16 v43; // [rsp+88h] [rbp-1FF0h]
  _BYTE v44[8168]; // [rsp+90h] [rbp-1FE8h] BYREF

  v8 = 0;
  v9 = 0;
  v10 = *(_BYTE *)(a2 + 28);
  v33 = a3;
  v11 = v10 & 0x7F;
  if ( (unsigned int)v11 - 49 <= 2 )
    v9 = a2;
  if ( v11 == 32 )
    v8 = a2;
  v12 = sub_1E534E0(a1, a3, 11);
  if ( v12 || *(char *)(a2 + 28) < 0 )
    return 1;
  v13 = *v33;
  LOWORD(v13) = v13 & 0x1FF;
  if ( (_WORD)v13 == 19 )
  {
    v27 = *((unsigned int *)v33 + 1);
    v28 = (unsigned __int16 **)(v33 + 12);
  }
  else if ( (_WORD)v13 == 53 )
  {
    v28 = *((unsigned __int16 ***)v33 + 2);
    v27 = (unsigned int)((__int64)(*((_QWORD *)v33 + 3) - (_QWORD)v28) >> 3);
  }
  else
  {
    v27 = 1;
    v28 = &v33;
  }
  v31 = v12;
  v29 = v33;
  v14 = sub_EEC8C0((unsigned __int64)v33, v13, a5);
  v15 = v14;
  v26 = HIDWORD(v14);
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 || (*v29 & 0x10000) != 0 )
  {
    sub_18C3E40(a1);
  }
  else
  {
    v13 = (unsigned int)v13;
    v16 = v31;
    if ( (_WORD)v13 == 53 )
    {
      v16 = 1;
      v27 = 1;
      v28 = &v33;
    }
    if ( v9 )
    {
      v17 = *(_QWORD *)(v9 + 48);
      v38 = 6;
      v39 = 0;
      v40 = v17;
      v41 = 0;
      v42 = v9;
    }
    else
    {
      v25 = *(_QWORD *)(*(_QWORD *)(v8 + 56) + 8LL * *(unsigned int *)(v8 + 64) - 8);
      v38 = 6;
      v39 = 0;
      v13 = *(_QWORD *)(v25 + 48);
      v42 = v25;
      v41 = 0;
      v40 = v13;
    }
    v43 = 0;
    if ( v16 )
    {
      v32 = (unsigned __int64)v29;
      v30 = sub_EEC140((unsigned __int64)v29);
      v23 = sub_EEB7E0(v32, v13, a5);
      v35 = a4;
      v34[0] = 1;
      v36 = v23;
      v37 = v30;
    }
    else
    {
      v35 = a4;
      v34[0] = 0;
      v36 = v15;
      v37 = v26;
    }
    sub_1A19220((unsigned int)v44, a1, (unsigned int)&v38, (unsigned int)v34, (_DWORD)v28, v27, 0, 1);
    v18 = sub_1A1D600((unsigned int)v44, a1, (unsigned int)&v38, (unsigned int)v34, (_DWORD)v28, v27, 0);
    if ( v18 == 1 || (v24 = sub_19B4A30(a1, v18 & 0xFFFFFFFFFFFFFFFELL, v15, 0, 0, 0), v24 == 1) )
    {
      v33 = (unsigned __int16 *)(sub_18C4330(a1, v15, (unsigned int)v26, v28, v27, *(_QWORD *)(a2 + 48))
                               & 0xFFFFFFFFFFFFFFFELL);
      if ( !v33 )
      {
        sub_1A0BB10(v44);
        return 1;
      }
    }
    else
    {
      v33 = (unsigned __int16 *)(v24 & 0xFFFFFFFFFFFFFFFELL);
    }
    sub_1A0BB10(v44);
  }
  v20 = (__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL);
  if ( v9 )
  {
    v21 = sub_18406C0(v20, 32, 3u);
    sub_B98A40(v21, *(_QWORD *)(a1 + 248), v9, a4, v15, (__int64)v33, v26);
    return v21;
  }
  else
  {
    v22 = sub_18406C0(v20, 32, 3u);
    sub_B98A70(v22, *(_QWORD *)(a1 + 248), v8, a4, v15, (__int64)v33, v26);
    return v22;
  }
}
