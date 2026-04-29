unsigned __int64 __fastcall sub_8DE80(__int64 a1, const char *a2)
{
  size_t v2; // r13
  const char *v3; // rbp
  __int64 v4; // rax
  void *dest; // [rsp+0h] [rbp-68h] BYREF
  __int128 v7; // [rsp+8h] [rbp-60h]
  __int64 v8; // [rsp+18h] [rbp-50h]
  __m128i si128; // [rsp+20h] [rbp-48h]
  int v10; // [rsp+30h] [rbp-38h]
  __int16 v11; // [rsp+34h] [rbp-34h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v2 = 1;
  v3 = (const char *)&unk_3F5793;
  v12 = __readfsqword(0x28u);
  v7 = 0;
  dest = nullptr;
  v8 = 0;
  v10 = 0;
  v11 = 256;
  si128 = _mm_load_si128((const __m128i *)&xmmword_400180);
  if ( a2 )
  {
    v3 = a2;
    v2 = strlen(a2) + 1;
  }
  dest = (void *)qvector_reserve(&dest, 0, v2, 1);
  memset((char *)dest + v7, 0, v2 - v7);
  *(_QWORD *)&v7 = v2;
  memcpy(dest, v3, v2);
  v10 = 0;
  sub_8CA60(a1, (__int64)&dest);
  v4 = sub_2B0DF0(*(_QWORD *)(a1 + 1496), *(_QWORD *)(a1 + 40), 1);
  netnode_setblob(v4, dest, v7, 0, 65);
  sub_7BF90((__int64 *)&dest);
  return v12 - __readfsqword(0x28u);
}
