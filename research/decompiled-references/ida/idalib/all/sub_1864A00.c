unsigned __int64 __fastcall sub_1864A00(__int64 a1, int a2, const char *a3, _BYTE *a4)
{
  unsigned __int64 v4; // rbp
  size_t v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r15
  unsigned __int8 v12; // al
  __int64 v13; // r15
  unsigned int v14; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+8h] [rbp-180h] BYREF
  _QWORD v24[2]; // [rsp+10h] [rbp-178h] BYREF
  __int64 v25; // [rsp+20h] [rbp-168h]
  unsigned __int8 *v26; // [rsp+30h] [rbp-158h] BYREF
  char v27; // [rsp+88h] [rbp-100h]
  unsigned int v28; // [rsp+90h] [rbp-F8h]
  char v29; // [rsp+94h] [rbp-F4h]
  __int64 v30; // [rsp+A0h] [rbp-E8h] BYREF
  _QWORD *v31; // [rsp+A8h] [rbp-E0h]
  __int64 v32; // [rsp+B0h] [rbp-D8h]
  _OWORD v33[5]; // [rsp+B8h] [rbp-D0h] BYREF
  __int64 v34; // [rsp+108h] [rbp-80h]
  __int64 v35; // [rsp+110h] [rbp-78h]
  __int64 v36; // [rsp+118h] [rbp-70h]
  int v37; // [rsp+120h] [rbp-68h]
  __int64 v38; // [rsp+128h] [rbp-60h] BYREF
  __int128 v39; // [rsp+130h] [rbp-58h]
  __int64 v40; // [rsp+140h] [rbp-48h]

  if ( (*(_BYTE *)(a1 + 4168) & 1) != 0 || (v4 = *(_QWORD *)(a1 + 4168)) != 0 )
  {
    v7 = 0;
    v8 = *(_QWORD *)(a1 + 240) + 552LL;
    if ( a3 )
      v7 = j__strlen(a3);
    v9 = sub_6F3470(v8, a3, v7);
    v31 = v33;
    v32 = 0x800000000LL;
    v33[4] = 0;
    v36 = v9;
    v30 = 0;
    v34 = 0;
    v35 = a1;
    v37 = a2;
    sub_B85890(&v38, v9);
    v39 = 0;
    v40 = 0x101010000LL;
    sub_1A395A0(&v30);
    v10 = sub_183D350(a1);
    if ( v10 )
      v10 += 48;
    if ( (unsigned __int8)sub_1A48440(a1, &v30, v10, 0) )
    {
      v11 = v31;
      if ( (_DWORD)v30 != 2 )
        goto LABEL_23;
      v4 = *v31 & 0xFFFFFFFFFFFFFFF8LL;
      v12 = *(_BYTE *)(v4 + 28) & 0x7F;
      if ( (unsigned int)v12 - 53 <= 1 || ((v12 + 52) & 0x7Fu) <= 1 )
      {
        v4 = sub_B72ED0(*v31 & 0xFFFFFFFFFFFFFFF8LL);
        v12 = *(_BYTE *)(v4 + 28) & 0x7F;
      }
      if ( v12 == 72 )
      {
        v13 = *(_QWORD *)(v4 + 56);
        if ( (unsigned int)sub_BBD6F0(v13) == 1 && (*(_BYTE *)(*(_QWORD *)(v13 + 24) + 28LL) & 0x7F) == 0x43 )
          goto LABEL_21;
        v14 = *(_DWORD *)(v4 + 24);
      }
      else
      {
LABEL_23:
        *(_WORD *)((char *)&v40 + 3) = 0;
        v14 = *(_DWORD *)((*v11 & 0xFFFFFFFFFFFFFFF8LL) + 24);
      }
      sub_168B9F0((__int64)v24, (__int64 *)(a1 + 8), v14, 0x1023u, 0);
      if ( v27 )
      {
        sub_AE9DF0(&v26, (__int64)a3, 1u);
      }
      else if ( v29 )
      {
        v18 = sub_168B9E0(v24);
        v21 = v25;
        if ( v25 )
          v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v25 + 32LL))(v25);
        v23 = v21;
        v22 = sub_1587BC0(v18, &v23, v16, v17, v19, v20);
        sub_AE9DF0((unsigned __int8 **)(*v22 + 32LL * v28 + 8), (__int64)a3, 1u);
      }
      sub_15F7200(v24);
      if ( a4 )
        *a4 = 1;
    }
    v4 = 0;
LABEL_21:
    sub_169D230((__int64)&v30);
  }
  return v4;
}
