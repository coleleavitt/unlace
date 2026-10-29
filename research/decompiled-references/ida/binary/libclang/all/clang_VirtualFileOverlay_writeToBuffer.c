__int64 __fastcall clang_VirtualFileOverlay_writeToBuffer(__int64 a1, __int64 a2, void **a3, _DWORD *a4)
{
  size_t v6; // r15
  void *v7; // r12
  void *v8; // rax
  __int64 *v10; // [rsp+0h] [rbp-198h] BYREF
  int v11; // [rsp+8h] [rbp-190h]
  __int128 v12; // [rsp+10h] [rbp-188h]
  __int64 v13; // [rsp+20h] [rbp-178h]
  char v14; // [rsp+28h] [rbp-170h]
  int v15; // [rsp+2Ch] [rbp-16Ch]
  void **p_ptr; // [rsp+30h] [rbp-168h]
  void *ptr; // [rsp+40h] [rbp-158h] BYREF
  __m128i si128; // [rsp+48h] [rbp-150h]
  _BYTE v19[320]; // [rsp+58h] [rbp-140h] BYREF

  if ( a4 == nullptr || a3 == nullptr || !a1 )
    return 3;
  p_ptr = &ptr;
  v10 = (__int64 *)&off_49DA340;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E210);
  v12 = 0;
  ptr = v19;
  v11 = 2;
  v14 = 0;
  v15 = 1;
  v13 = 0;
  ((void (__fastcall *)(__int64 **, _QWORD, _QWORD, _QWORD))sub_2623850)(&v10, 0, 0, 0);
  sub_260E690(a1, &v10);
  v6 = (size_t)p_ptr[1];
  v7 = *p_ptr;
  v8 = malloc(v6);
  if ( !v8 && (v6 || (v8 = malloc(1u)) == nullptr) )
    sub_25AA9F0("Allocation failed");
  *a3 = v8;
  *a4 = v6;
  memcpy(*a3, v7, v6);
  v10 = &qword_4A6EA70[2];
  sub_2623770(&v10);
  if ( ptr != v19 )
    free(ptr);
  return 0;
}

