void __fastcall sub_E59500(__int64 a1, __int64 a2)
{
  __int64 v3; // r13
  size_t v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int8 v7; // al
  char v8; // di
  unsigned __int8 v9; // si
  __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  int v12; // eax
  unsigned __int64 v13; // rdx
  size_t v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int8 v16; // cl
  _QWORD v17[2]; // [rsp+0h] [rbp-B8h] BYREF
  void *v18; // [rsp+10h] [rbp-A8h] BYREF
  __int64 v19; // [rsp+18h] [rbp-A0h]
  __int64 v20; // [rsp+20h] [rbp-98h] BYREF
  __m128i v21; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v22[16]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE v23[104]; // [rsp+50h] [rbp-68h] BYREF

  v3 = a1 + 1048;
  sub_B86A00((__int64)&v21, (__int64 *)(a2 + 40));
  sub_E59390((__int64)v23, &v21);
  v5 = j__strlen("name");
  sub_222AB70(a1 + 1048, "name", v5);
  sub_222CAC0(a1 + 1048, v23);
  sub_2229BF0(a1 + 1048);
  sub_222B2A0(v23);
  if ( (_BYTE *)v21.m128i_i64[0] != v22 )
    operator delete((void *)v21.m128i_i64[0]);
  v6 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v6 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(v6 + 8) & 0x7F) != 2 && !(unsigned __int8)sub_B8E340(a2) )
  {
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v7 - 40 > 6 )
      goto LABEL_21;
    v8 = *(_BYTE *)(a2 + 96);
    v9 = v8 & 7;
    if ( (v8 & 7) == 0 )
    {
      v10 = *(_QWORD *)&byte_8[*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v10 & 8) != 0
        && (*(_DWORD *)((char *)&qword_18 + (v10 & 0xFFFFFFFFFFFFFFF0LL)) | (unsigned int)(v10 & 7)) >> 9 == 3 )
      {
        goto LABEL_21;
      }
      if ( ((v7 + 85) & 0x7D) == 0 )
        goto LABEL_20;
      v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v11 = *(_QWORD *)(v11 + 8);
      v12 = *(_BYTE *)(sub_B8EAA0(v11) + 8) & 0x7F;
      if ( v12 && v12 != 24 )
      {
        v7 = *(_BYTE *)(a2 + 28) & 0x7F;
        if ( v7 == 43 )
        {
          if ( (*(_BYTE *)(a2 + 96) & 0x18) == 0 )
            return;
          goto LABEL_22;
        }
        v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
          v13 = *(_QWORD *)v13;
        if ( ((*(_BYTE *)(v13 + 8) + 70) & 0x7Fu) <= 3 )
          goto LABEL_21;
        v8 = *(_BYTE *)(a2 + 96);
LABEL_20:
        if ( (v8 & 0x18) == 0 )
          return;
        goto LABEL_21;
      }
LABEL_28:
      v7 = *(_BYTE *)(a2 + 28) & 0x7F;
      goto LABEL_21;
    }
    if ( v9 != 5 )
    {
LABEL_27:
      if ( v9 > 3u )
        return;
      goto LABEL_28;
    }
    if ( v7 != 46 && v7 != 40 )
      goto LABEL_41;
    v15 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v15 = *(_QWORD *)(v15 + 8);
    if ( !v15 )
    {
LABEL_41:
      if ( v7 == 43 )
        return;
      goto LABEL_21;
    }
    v16 = *(_BYTE *)(sub_B8EAA0(v15) + 8) & 0x7F;
    if ( v16 > 0x12u )
    {
      if ( ((v16 + 94) & 0x7Fu) <= 5 )
        goto LABEL_40;
    }
    else if ( ((1LL << v16) & 0x40182) != 0 )
    {
LABEL_40:
      v9 = *(_BYTE *)(a2 + 96) & 7;
      goto LABEL_27;
    }
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( v7 == 43 )
    {
      if ( (*(_BYTE *)(a2 + 96) & 7u) > 3 )
        return;
LABEL_22:
      sub_E70430(&v18, a1 + 1240, a2);
      if ( v19 )
      {
        v21.m128i_i64[0] = (__int64)v22;
        sub_E586C0(&v21, v18, (__int64)v18 + v19);
        sub_E59390((__int64)v23, &v21);
        v14 = j__strlen("mangledName");
        v17[0] = v23;
        v17[1] = v3;
        sub_E585D0(v3, (__int64)"mangledName", v14, (__int64)sub_E58580, v17);
        sub_222B2A0(v23);
        if ( (_BYTE *)v21.m128i_i64[0] != v22 )
          operator delete((void *)v21.m128i_i64[0]);
      }
      if ( v18 != &v20 )
        operator delete(v18);
      return;
    }
LABEL_21:
    if ( v7 == 39 )
      return;
    goto LABEL_22;
  }
}
