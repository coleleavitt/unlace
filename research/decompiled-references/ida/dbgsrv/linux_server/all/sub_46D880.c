/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D880
// Address: 0x000000000046D880

//----- (000000000046D880) ----------------------------------------------------
__int64 __fastcall sub_46D880(__int64 a1, const char *a2, const __m128i *a3)
{
  __time_t v3; // rax
  const char *v4; // rcx
  unsigned int v5; // ebx
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  __int128 v8; // [rsp+8h] [rbp-60h]
  char v9[40]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  sub_4171E0((__int64)&ptr, a2, a3);
  v3 = sub_481E10();
  sub_46F290(v9, 25, v3, 0);
  v4 = s1;
  if ( (_QWORD)v8 )
    v4 = (const char *)ptr;
  v5 = sub_4724D0("%s [%u] %s", v9, *(_DWORD *)(a1 + 168), v4);
  if ( ptr )
  {
    *(_QWORD *)&v8 = 0;
    j__free(ptr);
  }
  return v5;
}
