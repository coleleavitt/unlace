unsigned __int64 __fastcall sub_3C2810(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        const __m128i *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 module_data; // rax
  int v9; // r8d
  int v10; // r9d
  int v11; // ebx
  size_t v12; // r13
  int v13; // ecx
  const char *v14; // rdi
  void *v16; // rax
  const void *v17; // rsi
  int v18; // esi
  void *v19; // [rsp+0h] [rbp-1058h] BYREF
  __int128 v20; // [rsp+8h] [rbp-1050h]
  int v21; // [rsp+18h] [rbp-1040h]
  _DWORD v22[16]; // [rsp+20h] [rbp-1038h] BYREF
  __int64 v23; // [rsp+60h] [rbp-FF8h]
  unsigned __int64 v24; // [rsp+1028h] [rbp-30h]

  v24 = __readfsqword(0x28u);
  if ( a3 )
    sub_65220((__int64 *)(a1 + 8), a3, a4, (__int64)a4, a5, a6);
  module_data = get_module_data((unsigned int)dword_4BB8D8);
  v11 = module_data;
  if ( *(_QWORD *)(module_data + 1344) && *(_BYTE *)(module_data + 720) )
  {
    qtmpnam(v22, 4096);
    gen_gdl(a1, v22);
    display_gdl(v22);
    return v24 - __readfsqword(0x28u);
  }
  v12 = *(_QWORD *)(a1 + 16);
  v13 = a2;
  v19 = nullptr;
  v20 = 0;
  v14 = s1;
  if ( v12 )
  {
    v16 = (void *)qalloc_or_throw(v12);
    v17 = *(const void **)(a1 + 8);
    *((_QWORD *)&v20 + 1) = v12;
    v19 = v16;
    memcpy(v16, v17, v12);
    *(_QWORD *)&v20 = v12;
    v18 = (int)v19;
    if ( v12 == 1 )
    {
      v13 = a2;
    }
    else
    {
      tag_remove(&v19, v19, 0);
      v13 = a2;
      v14 = s1;
      if ( !(_QWORD)v20 )
        goto LABEL_6;
      v18 = (int)v19;
    }
    LODWORD(v14) = v18;
  }
LABEL_6:
  sub_3C4F60(
    (_DWORD)v14,
    a1,
    v11,
    v13,
    v9,
    v10,
    (_DWORD)v19,
    v20,
    DWORD2(v20),
    v21,
    v22[0],
    v22[2],
    v22[4],
    v22[6],
    v22[8],
    v22[10],
    v22[12],
    v22[14],
    v23);
  if ( v19 )
  {
    *(_QWORD *)&v20 = 0;
    qfree(v19);
  }
  return v24 - __readfsqword(0x28u);
}
