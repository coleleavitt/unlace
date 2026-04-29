unsigned __int64 __fastcall sub_23D050(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r14
  __int64 v10; // r8
  __int64 v11; // rbp
  unsigned __int64 v12; // r9
  size_t v13; // r10
  const void *v14; // r11
  void *v15; // rax
  __int64 v16; // rbp
  char v18; // al
  __int64 v19; // rax
  bool v20; // [rsp+Fh] [rbp-69h]
  __int64 v21; // [rsp+10h] [rbp-68h]
  unsigned __int64 v22; // [rsp+10h] [rbp-68h]
  unsigned __int64 v23; // [rsp+18h] [rbp-60h]
  size_t v24; // [rsp+18h] [rbp-60h]
  const void *v25; // [rsp+20h] [rbp-58h]
  __int64 v26; // [rsp+28h] [rbp-50h]
  _BYTE v27[8]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v28; // [rsp+38h] [rbp-40h]

  v28 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 8) != 61 )
  {
    if ( !under_debugger )
      sub_37EEE0(50369);
    BUG();
  }
  v6 = *(_QWORD **)(a1 + 24);
  v20 = a5 != 2;
  *v6 = sub_326890(a3, a4, a5 != 2);
  if ( a6 )
  {
    v10 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)a1 = *a6;
    v11 = a6[3];
    *(_DWORD *)(v10 + 8) = *(_DWORD *)(v11 + 8);
    *(_BYTE *)(v10 + 12) = *(_BYTE *)(v11 + 12);
    *(_BYTE *)(v10 + 13) = *(_BYTE *)(v11 + 13);
    *(_BYTE *)(v10 + 14) = *(_BYTE *)(v11 + 14);
    *(_BYTE *)(v10 + 15) = *(_BYTE *)(v11 + 15);
    if ( v10 + 16 != v11 + 16 )
    {
      v12 = *(_QWORD *)(v11 + 24);
      if ( !v12 || (v13 = v12 - 1, v12 == 1) )
      {
        *(_QWORD *)(v10 + 24) = 0;
      }
      else
      {
        v14 = *(const void **)(v11 + 16);
        v15 = *(void **)(v10 + 16);
        if ( *(_QWORD *)(v10 + 32) < v12 )
        {
          v26 = v10;
          v25 = *(const void **)(v11 + 16);
          v24 = v12 - 1;
          v22 = *(_QWORD *)(v11 + 24);
          v15 = (void *)qvector_reserve(v10 + 16, *(_QWORD *)(v10 + 16), v22, 1);
          v10 = v26;
          v14 = v25;
          v13 = v24;
          v12 = v22;
          *(_QWORD *)(v26 + 16) = v15;
        }
        *(_QWORD *)(v10 + 24) = v12;
        v23 = v12;
        v21 = v10;
        memmove(v15, v14, v13);
        v10 = v21;
        *(_BYTE *)(*(_QWORD *)(v21 + 16) + v23 - 1) = 0;
      }
    }
    *(_QWORD *)(v10 + 40) = *(_QWORD *)(v11 + 40);
  }
  v16 = *(_QWORD *)(a1 + 24);
  if ( !*(_BYTE *)(v16 + 13) && v20 && *(__int64 *)v16 < 0 )
  {
    if ( !(unsigned __int8)is_enum(*(_QWORD *)(v16 + 40), (unsigned int)*(char *)(v16 + 12))
      && !(unsigned __int8)is_char(*(_QWORD *)(v16 + 40), (unsigned int)*(char *)(v16 + 12)) )
    {
      v18 = is_stroff(*(_QWORD *)(v16 + 40), (unsigned int)*(char *)(v16 + 12));
      v16 = *(_QWORD *)(a1 + 24);
      if ( v18 )
        goto LABEL_12;
      v19 = sub_23A800(*(_DWORD *)(a2 + 640), *(_QWORD *)v16, a4, a5);
      sub_325B00(v16 + 8, v19);
    }
    v16 = *(_QWORD *)(a1 + 24);
  }
LABEL_12:
  sub_23CC00(v27, v16, a2, a4, a5);
  copy_tinfo_t(a1 + 48, v27);
  clear_tinfo_t(v27);
  return v28 - __readfsqword(0x28u);
}
