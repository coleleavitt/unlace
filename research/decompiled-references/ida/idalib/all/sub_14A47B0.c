__int64 __fastcall sub_14A47B0(
        __int64 a1,
        int *a2,
        int a3,
        unsigned int *a4,
        _DWORD *a5,
        unsigned int a6,
        __m128i a7,
        __m128 a8,
        __int64 a9,
        unsigned __int8 **a10)
{
  size_t v13; // rax
  int v14; // ecx
  int v15; // eax
  unsigned int v16; // eax
  __int64 v17; // rdx
  unsigned int v18; // eax
  unsigned int v19; // edx
  int v20; // ecx
  char v21; // dl
  const char *v22; // r14
  size_t v23; // rax
  __int64 *v24; // rcx
  int v25; // r8d
  __int64 v27; // r13
  __int64 v28; // rax
  unsigned int v29; // r12d
  unsigned int v30; // ebp
  __int64 v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // edx
  unsigned int v34; // eax
  __int64 v36; // [rsp+10h] [rbp-D8h]
  char v37; // [rsp+18h] [rbp-D0h]
  unsigned __int64 v38; // [rsp+20h] [rbp-C8h] BYREF
  char v39; // [rsp+28h] [rbp-C0h]
  __int64 v40; // [rsp+2Ch] [rbp-BCh]
  char v41; // [rsp+34h] [rbp-B4h]
  void *v42; // [rsp+38h] [rbp-B0h]
  __int64 v43; // [rsp+40h] [rbp-A8h]
  _BYTE v44[16]; // [rsp+48h] [rbp-A0h] BYREF
  char v45; // [rsp+58h] [rbp-90h]
  unsigned __int8 *v46[17]; // [rsp+60h] [rbp-88h] BYREF

  v13 = j__strlen(&byte_22F0C30);
  if ( (unsigned __int8)sub_1569A00(a1, 64, 14, &byte_22F0C30, v13) )
  {
    LOWORD(v46[0]) = 63;
    sub_15680D0(a1, v46, 1, 0);
    return 0;
  }
  v14 = -((*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x10) == 0);
  LOBYTE(v14) = v14 & 0x54;
  sub_1564820(v46, a1, *(unsigned int *)(a1 + 16), (unsigned int)(v14 + 2109));
  sub_AEA040((__int64)v46);
  v15 = *a2;
  if ( *a2 != 1 )
  {
    if ( v15 == 2 )
    {
      v27 = 1;
    }
    else
    {
      if ( v15 != 3 )
      {
        v16 = a4[14];
        goto LABEL_6;
      }
      v27 = 2;
    }
    v28 = sub_154F1B0(a2);
    v29 = v28;
    v30 = HIDWORD(v28);
LABEL_27:
    sub_1564820(v46, a1, v29, 1538);
    sub_AE9DF0(v46, v27, 2u);
    v38 = __PAIR64__(v30, v29);
    v39 = 1;
    sub_AEC610((__int64 *)v46, (__int64 *)&v38);
LABEL_28:
    sub_AEA040((__int64)v46);
    LOWORD(v46[0]) = 63;
    sub_15680D0(a1, v46, 1, 0);
    return 0;
  }
  v16 = a4[14];
  if ( v16 == 7 )
  {
    v31 = *((_QWORD *)a4 + 8);
    v27 = 0;
    v29 = *(_DWORD *)(v31 + 36);
    v30 = *(_DWORD *)(v31 + 40);
    goto LABEL_27;
  }
LABEL_6:
  if ( v16 )
  {
    sub_1564820(v46, a1, a4[20], 1536);
    goto LABEL_28;
  }
  if ( !*a4 )
  {
    v17 = a4[2];
    if ( (!(_DWORD)v17 || !a4[3]) && !*((_QWORD *)a4 + 2) )
      goto LABEL_15;
    sub_1564820(v46, a1, v17, 1536);
    v18 = a4[2];
    v19 = a4[3];
    v41 = 0;
    v40 = 0;
    v42 = v44;
    v43 = 0;
    v44[0] = 0;
    v45 = 0;
    v38 = __PAIR64__(v19, v18);
    v39 = 1;
    if ( v18 && v19 )
      goto LABEL_12;
    goto LABEL_14;
  }
  sub_1564820(v46, a1, *a4, 1536);
  if ( a4[2] )
  {
    v34 = a4[3];
    v33 = *a4;
    if ( v34 )
      goto LABEL_41;
  }
  else
  {
    v33 = *a4;
  }
  v34 = v33;
  if ( *((_QWORD *)a4 + 2) )
    v34 = a4[3];
LABEL_41:
  v41 = 0;
  v44[0] = 0;
  v40 = 0;
  v42 = v44;
  v43 = 0;
  v45 = 0;
  v38 = __PAIR64__(v34, v33);
  v39 = 1;
  if ( v33 && v34 )
  {
LABEL_12:
    sub_14A2370((__int64 *)v46, (unsigned __int64)&v38);
    if ( v42 != v44 )
      operator delete(v42);
  }
LABEL_14:
  sub_AEA040((__int64)v46);
LABEL_15:
  if ( a4[22] )
  {
    sub_1564820(v46, a1, a4[22], 1537);
    v32 = a4[22];
    v40 = 0;
    v41 = 0;
    v42 = v44;
    v43 = 0;
    v44[0] = 0;
    v45 = 0;
    LODWORD(v38) = v32;
    HIDWORD(v38) = v32;
    v39 = 1;
    if ( v32 )
    {
      sub_14A2370((__int64 *)v46, (unsigned __int64)&v38);
      if ( v42 != v44 )
        operator delete(v42);
    }
    sub_AEA040((__int64)v46);
  }
  v20 = *a2;
  v46[0] = nullptr;
  v36 = sub_1496480(a1, nullptr, (unsigned int)(v20 != 0) + 24, a6, v46, a9, a7, a8);
  v37 = v21;
  if ( a10 )
    *a10 = v46[0];
  *a5 = *(_DWORD *)(a1 + 16);
  v22 = "attributes list";
  if ( !*(_DWORD *)(a9 + 16) )
    v22 = "alias declaration";
  v23 = j__strlen(v22);
  if ( (unsigned __int8)sub_1569A00(a1, 63, 15, v22, v23) )
  {
    LOWORD(v38) = 63;
    sub_15680D0(a1, &v38, 1, 0);
  }
  v24 = *((__int64 **)a2 + 1);
  v25 = 0;
  if ( v24 )
  {
    v25 = *((_DWORD *)v24 + 2);
    v24 = (__int64 *)*v24;
  }
  return sub_18575A0(
           *(_QWORD *)(a1 + 96),
           *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
           a6,
           (_DWORD)v24,
           v25,
           a3,
           (__int64)(a4 + 14),
           a9,
           v36,
           v37,
           (__int64)v46[0]);
}
