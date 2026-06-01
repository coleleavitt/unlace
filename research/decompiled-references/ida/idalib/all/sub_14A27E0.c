__int64 __fastcall sub_14A27E0(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // bp
  unsigned int v5; // r13d
  char v6; // al
  __int64 v7; // rdx
  unsigned int v8; // eax
  char v9; // al
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebp
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // r15
  __int64 v23; // rax
  __int64 *v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // r14
  int v30; // eax
  _QWORD *v31; // rdx
  unsigned int v32; // eax
  __int64 *v33; // rdi
  __int64 v34; // [rsp+8h] [rbp-E0h]
  unsigned int v35; // [rsp+8h] [rbp-E0h]
  unsigned int v36; // [rsp+1Ch] [rbp-CCh] BYREF
  _BYTE *v37; // [rsp+20h] [rbp-C8h] BYREF
  char v38; // [rsp+28h] [rbp-C0h]
  __int64 v39; // [rsp+30h] [rbp-B8h]
  int v40; // [rsp+38h] [rbp-B0h]
  __int16 v41; // [rsp+3Ch] [rbp-ACh]
  __int64 (__fastcall *v42)(__int64); // [rsp+40h] [rbp-A8h]
  __int64 v43; // [rsp+48h] [rbp-A0h]
  __int64 v44; // [rsp+50h] [rbp-98h]
  unsigned __int8 *v45[17]; // [rsp+60h] [rbp-88h] BYREF

  v4 = *(_WORD *)(a1 + 32);
  v5 = *(_DWORD *)(a1 + 16);
  if ( v4 == 424 )
  {
    v18 = *(_DWORD *)(a1 + 20);
    v29 = *(_QWORD *)(a1 + 24);
    *(_DWORD *)(a2 + 212) = 0;
    if ( !v18 )
      v18 = v5;
    *(_DWORD *)(a2 + 216) = v18;
    v30 = *(_DWORD *)(a1 + 20);
    if ( !v30 )
      v30 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 40) = v30;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    if ( v29 == 1 )
      goto LABEL_33;
    v19 = v29 & 0xFFFFFFFFFFFFFFFELL;
    v20 = v29 & 0xFFFFFFFFFFFFFFFELL;
  }
  else
  {
    v6 = sub_141A630(v4);
    if ( v4 == 1 || v6 )
      BUG();
    v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
    v8 = v5;
    if ( *(_DWORD *)v7 == 8 && *(_QWORD *)(v7 + 16) == 0x657079746C636564LL )
    {
      sub_1564840(v45, a1, a1 + 16, 2113);
      sub_AEA040((__int64)v45);
      v8 = *(_DWORD *)(a1 + 16);
    }
    *(_DWORD *)(a1 + 40) = v8;
    sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
    v37 = (_BYTE *)(a1 + 1952);
    v9 = *(_BYTE *)(a1 + 1952);
    *(_BYTE *)(a1 + 1952) = 1;
    v38 = v9;
    v41 = 63;
    v39 = a1;
    v40 = 1507350;
    v42 = sub_146A990;
    v43 = 0;
    v44 = 0;
    if ( (unsigned __int8)sub_156A040(&v37, 1625, "decltype", 23) )
    {
      sub_15AEFC0(a2);
      result = v5;
      if ( (_DWORD)v44 != *(_DWORD *)(a1 + 16) )
        result = (unsigned int)v44;
      goto LABEL_14;
    }
    if ( *(_WORD *)(a1 + 32) == 76
      && ((v10 = *(_QWORD *)(a1 + 8), v11 = *(_QWORD *)(v10 + 2944), v11 >= *(unsigned int *)(v10 + 2912))
        ? (v12 = sub_14180A0(v10, 1u))
        : (v12 = *(_QWORD *)(v10 + 2904) + 24 * v11),
          *(_WORD *)(v12 + 16) == 23) )
    {
      sub_1564820(
        v45,
        a1,
        *(unsigned int *)(a1 + 16),
        (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x20) == 0 ? 1966 : 2079);
      sub_AEA040((__int64)v45);
      v13 = *(__int64 **)(a1 + 8);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
      sub_14634E0(v13, (int *)(a1 + 16));
      sub_14808E0((__int64)&v37, (__int64 *)(a1 + 16), v14, v15, v16, v17);
      v18 = HIDWORD(v44);
      v19 = 0;
      v20 = 0;
      *(_QWORD *)(a2 + 212) = v44;
      if ( !v18 )
        goto LABEL_11;
    }
    else
    {
      v22 = *(_QWORD *)(a1 + 96);
      sub_18C74E0(v22, 0, 0, 0);
      v23 = sub_14BFC10(a1, 0);
      if ( v23 == 1 )
      {
        sub_15AEFC0(a2);
        LOWORD(v45[0]) = 23;
        if ( (unsigned __int8)sub_15680D0(a1, v45, 1, 3) )
        {
          v32 = sub_146A990(a1);
        }
        else
        {
          v31 = *(_QWORD **)(a1 + 8);
          v32 = *(_DWORD *)(a1 + 16);
          if ( v31[370] != v31[369] && *(_WORD *)(a1 + 32) == 63 )
          {
            v31[368] -= 2LL;
            v33 = *(__int64 **)(a1 + 8);
            *(_DWORD *)(a1 + 40) = v32;
            sub_14634E0(v33, (int *)(a1 + 16));
            v32 = sub_149F520(a1, 0);
          }
        }
        v35 = v32;
        sub_190D5E0(v22);
        result = v35;
        goto LABEL_14;
      }
      v24 = (__int64 *)(v23 & 0xFFFFFFFFFFFFFFFELL);
      v34 = sub_19A4070(*(_QWORD *)(a1 + 96), v23 & 0xFFFFFFFFFFFFFFFELL);
      sub_190D5E0(v22);
      sub_14808E0((__int64)&v37, v24, v25, v26, v27, v28);
      v18 = HIDWORD(v44);
      *(_QWORD *)(a2 + 212) = v44;
      if ( !v18 || v34 == 1 )
      {
LABEL_11:
        sub_15AEFC0(a2);
        result = HIDWORD(v44);
LABEL_14:
        *v37 = v38;
        return result;
      }
      v19 = v34 & 0xFFFFFFFFFFFFFFFELL;
      v20 = v34 & 0xFFFFFFFFFFFFFFFELL;
    }
    *v37 = v38;
  }
  v37 = nullptr;
  if ( v19 )
  {
    if ( !(unsigned __int8)sub_15AD4E0(a2, 33, v5, &v37, &v36, v20, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL) )
      return v18;
  }
  else if ( !(unsigned __int8)sub_15AE040(a2, 51, v5, &v37, &v36, *(_QWORD *)(*(_QWORD *)(a1 + 96) + 248LL) + 17464LL) )
  {
    return v18;
  }
  sub_1564820(v45, a1, v5, v36);
  sub_149E970(v45, (__int64)v37);
  sub_AEA040((__int64)v45);
LABEL_33:
  sub_15AEFC0(a2);
  return v18;
}
