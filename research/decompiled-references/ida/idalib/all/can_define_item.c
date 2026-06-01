__int64 __fastcall can_define_item(unsigned __int64 a1, __int64 a2, int *a3)
{
  unsigned int v3; // ebx
  __m128i v5; // [rsp+0h] [rbp-48h] BYREF
  void (__fastcall *v6)(__m128i *, __m128i *, __int64); // [rsp+10h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-30h]
  unsigned __int64 v8; // [rsp+28h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = 0;
  v6 = nullptr;
  v7 = 0;
  v3 = sub_3D4AC0(*(__m128i **)(qword_2CCB598 + 1672), a1, a2, a3, &v5);
  if ( v6 )
    v6(&v5, &v5, 3);
  return v3;
}
