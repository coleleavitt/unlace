__int64 __fastcall sub_9F1110(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  bool v14; // zf
  unsigned int v15; // r13d
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned int v18; // eax
  size_t v19; // rax
  size_t v20; // rax
  char **v21; // rbx
  char **v22; // rdi
  __int64 v23; // [rsp+8h] [rbp-240h]
  bool v24; // [rsp+8h] [rbp-240h]
  int v25; // [rsp+14h] [rbp-234h]
  int v26; // [rsp+18h] [rbp-230h]
  int v27; // [rsp+1Ch] [rbp-22Ch]
  __int64 v28; // [rsp+28h] [rbp-220h]
  __int64 v29; // [rsp+34h] [rbp-214h]
  _DWORD v30[2]; // [rsp+40h] [rbp-208h] BYREF
  char v31; // [rsp+48h] [rbp-200h]
  __int64 v32; // [rsp+4Ch] [rbp-1FCh]
  char v33; // [rsp+54h] [rbp-1F4h]
  _BYTE *v34; // [rsp+58h] [rbp-1F0h]
  __int64 v35; // [rsp+60h] [rbp-1E8h]
  _BYTE v36[24]; // [rsp+68h] [rbp-1E0h] BYREF
  _BYTE v37[64]; // [rsp+80h] [rbp-1C8h] BYREF
  _BYTE v38[64]; // [rsp+C0h] [rbp-188h] BYREF
  char *v39; // [rsp+100h] [rbp-148h] BYREF
  __int64 v40; // [rsp+108h] [rbp-140h]
  char v41; // [rsp+110h] [rbp-138h] BYREF

  v4 = *(_QWORD *)(a2[2] + 16LL);
  if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 40 > 6 || (unsigned int)sub_9EF070(a3, *(_QWORD *)(a2[2] + 16LL)) != 1 )
    goto LABEL_3;
  v6 = sub_B8C330(v4);
  sub_C3EB00(&v39, a2[5], v6, 0);
  if ( v41 && !BYTE4(v40) && sub_9E9EA0((__int64 *)&v39) )
  {
    *(_BYTE *)(a1 + 272) = 0;
    sub_98E4B0((__int64)&v39);
    return a1;
  }
  sub_98E4B0((__int64)&v39);
  v7 = a2[4];
  v8 = *(_QWORD *)(v6 + 2312);
  v9 = *(_QWORD *)(v6 + 2320);
  v10 = *(_QWORD *)(v7 + 16);
  v23 = *(_QWORD *)(v7 + 24);
  v27 = sub_EEB7E0(v10);
  v26 = *(_DWORD *)(a2[3] + 4LL);
  v11 = sub_EEC140(v10);
  v25 = sub_13DC060(v11, 0, v8, v9);
  if ( v25
    && ((HIDWORD(v28) = sub_EEB7E0(v23),
         LODWORD(v28) = v25,
         v12 = sub_EEC140(*(_QWORD *)(a2[4] + 24LL)),
         v13 = sub_13DC060(v12, 0, v8, v9),
         v14 = v13 == 0,
         v15 = v13,
         v16 = a2[3],
         v24 = !v14,
         *(_BYTE *)(v16 + 2) <= 0xFu)
      ? (v17 = *(unsigned int *)(v16 + 4))
      : (v17 = (unsigned int)sub_EEC140(*(_QWORD *)(v16 + 16))),
        (v18 = sub_13DC060(v17, 0, v8, v9)) != 0 && v24) )
  {
    v29 = __PAIR64__(v18, v15);
    v34 = v36;
    v30[0] = v26;
    v32 = 0;
    v33 = 0;
    v35 = 0;
    v36[0] = 0;
    v36[16] = 0;
    v30[1] = v27;
    v31 = 0;
    v19 = j__strlen("[");
    sub_9EC0C0((__int64)v37, v28, 0, "[", v19);
    v20 = j__strlen("]");
    sub_9EC0C0((__int64)v38, v29, 0, "]", v20);
    v39 = &v41;
    v40 = 0x400000000LL;
    sub_9EEBE0((__int64)&v39, (__int64)v30, (__int64)&v39);
    *(_QWORD *)(a1 + 8) = 0x400000000LL;
    *(_QWORD *)a1 = a1 + 16;
    if ( (_DWORD)v40 )
      sub_9F0880(a1, (__int64)&v39);
    *(_BYTE *)(a1 + 272) = 1;
    v21 = &v39;
    sub_9ED140((__int64)&v39);
    do
    {
      while ( 1 )
      {
        v21 -= 8;
        v22 = (char **)v21[3];
        if ( v22 == v21 + 5 )
          break;
        operator delete(v22);
        if ( v21 == (char **)v30 )
          return a1;
      }
    }
    while ( v21 != (char **)v30 );
  }
  else
  {
LABEL_3:
    *(_BYTE *)(a1 + 272) = 0;
  }
  return a1;
}
