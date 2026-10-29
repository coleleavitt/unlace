__int64 __fastcall sub_19A99F0(
        __int64 *a1,
        unsigned int a2,
        __m128i a3,
        __m128 a4,
        __int64 a5,
        char a6,
        unsigned __int64 a7,
        unsigned int a8)
{
  __int64 v9; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rbp
  __int64 *v23; // rsi
  unsigned int v24; // ecx
  __int64 v25; // rbp
  size_t v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  _QWORD *v34; // rcx
  _BYTE *v35; // rax
  __int64 v36; // rsi
  _QWORD *v37; // rax
  unsigned __int8 v38; // dl
  unsigned __int8 v39[144]; // [rsp+0h] [rbp-178h] BYREF
  _QWORD *v40; // [rsp+90h] [rbp-E8h] BYREF
  _QWORD *v41; // [rsp+98h] [rbp-E0h]
  unsigned __int8 *v42; // [rsp+B0h] [rbp-C8h] BYREF
  char v43; // [rsp+108h] [rbp-70h]
  char v44; // [rsp+114h] [rbp-64h]

  if ( (*(_BYTE *)(a1[29] + 52) & 1) != 0 )
  {
    sub_168B9F0((__int64)&v40, a1 + 1, a2, 0x32u, 0);
    if ( v43 )
    {
      sub_AE9DF0(&v42, (__int64)"typeid", 1u);
    }
    else if ( v44 )
    {
      sub_19A9980((__int64)&v40, (__int64)"typeid");
    }
    goto LABEL_5;
  }
  if ( !sub_183D350((__int64)a1) )
  {
    v23 = a1 + 1;
    v24 = 4254;
    goto LABEL_21;
  }
  if ( !a1[1236] )
  {
    v25 = a1[30] + 552;
    v26 = j__strlen("type_info");
    v27 = sub_6F3470(v25, "type_info", v26);
    sub_199FDE0((__int64)&v40, (__int64)a1, v27, 0, 1);
    v28 = sub_183D350((__int64)a1);
    if ( v28 )
      v28 += 48;
    sub_1A48440(a1, &v40, v28, 0);
    if ( (_DWORD)v40 == 2 )
    {
      v33 = sub_16C47B0(*v41 & 0xFFFFFFFFFFFFFFF8LL);
      v29 = (*(_BYTE *)(v33 + 28) & 0x7Fu) - 58;
      if ( (unsigned int)v29 <= 3 )
        goto LABEL_27;
    }
    v35 = (_BYTE *)a1[29];
    a1[1236] = 0;
    if ( (*v35 & 0x20) != 0 )
    {
      v36 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264) + 80LL);
      v37 = sub_704780((__int64 *)(v36 + 72), v36, v29, v30, v31, v32);
      if ( v37 )
        v37 += 5;
      sub_1A48440(a1, &v40, v37, 0);
      if ( (_DWORD)v40 == 2 )
      {
        v33 = *v41 & 0xFFFFFFFFFFFFFFF8LL;
        v38 = *(_BYTE *)(v33 + 28) & 0x7F;
        if ( ((v38 + 52) & 0x7Fu) <= 1 || (unsigned int)v38 - 53 <= 1 )
          v33 = sub_B72ED0(*v41 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_BYTE *)(v33 + 28) & 0x7Fu) - 58 <= 3 )
        {
LABEL_27:
          a1[1236] = v33;
          sub_169D230((__int64)&v40);
          goto LABEL_9;
        }
      }
      a1[1236] = 0;
    }
    v9 = 1;
    sub_168B9F0((__int64)v39, a1 + 1, a2, 0x109Eu, 0);
    sub_15F7200(v39);
    sub_169D230((__int64)&v40);
    return v9;
  }
LABEL_9:
  if ( (*(_BYTE *)(a1[29] + 14) & 8) == 0 )
  {
    v23 = a1 + 1;
    v24 = 4285;
LABEL_21:
    sub_168B9F0((__int64)&v40, v23, a2, v24, 0);
LABEL_5:
    v9 = 1;
    sub_15F7200(&v40);
    return v9;
  }
  v18 = a1[1236];
  v19 = *(_QWORD *)(v18 + 48);
  if ( v19 )
    v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
  else
    v20 = sub_A7AA70(a1[31], v18, v14, v15, v16, v17);
  if ( a6 )
  {
    v40 = nullptr;
    v21 = sub_1E5F010(a7, &v40);
    if ( (v21 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v34 = v40;
      if ( !v40 )
      {
        v34 = sub_A81910((_QWORD *)a1[31], v21, a2);
        v40 = v34;
      }
      return sub_19A7F40((__int64)a1, v20, a2, (__int64)v34, a8);
    }
    else
    {
      return 1;
    }
  }
  else
  {
    v22 = sub_19A8E90((__int64)a1, v20, a2, a7, a8, v17, a3, a4);
    if ( (*(_BYTE *)(a1[29] + 14) & 0x10) == 0
      && v22 != 1
      && (*(_WORD *)(v22 & 0xFFFFFFFFFFFFFFFELL) & 0x1FF) == 0x60
      && sub_C960B0(v22 & 0xFFFFFFFFFFFFFFFELL)
      && !(unsigned __int8)sub_C93D70(v22 & 0xFFFFFFFFFFFFFFFELL, a1[31], *(double *)a3.m128i_i64) )
    {
      sub_168B9F0((__int64)&v40, a1 + 1, a2, 0x1BDAu, 0);
      v39[0] = ((*(_BYTE *)(*(_QWORD *)(a1[33] + 40) + 40LL) >> 1) & 3) == 1;
      sub_1588420((__int64)&v40, v39);
      sub_15F7200(&v40);
    }
    return v22;
  }
}
