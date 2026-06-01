__int64 __fastcall sub_3C7A20(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4, _BYTE *a5, _BYTE *a6, int a7)
{
  _BYTE *v7; // r12
  _BYTE *v8; // rbp
  _BYTE *v10; // rdi
  __int64 result; // rax
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h]
  void *v14; // [rsp+28h] [rbp-40h]
  void *v15; // [rsp+30h] [rbp-38h]
  char v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+3Ch] [rbp-2Ch]
  unsigned __int64 v18; // [rsp+48h] [rbp-20h]

  v7 = a5;
  v8 = a6;
  v10 = a4;
  v18 = __readfsqword(0x28u);
  v12[0] = a2;
  *(__m128i *)(a1 + 1584) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v12[1] = a3;
  *(_OWORD *)(a1 + 1600) = -1;
  if ( a4 && !*a4 )
    v10 = nullptr;
  if ( a5 && !*a5 )
    v7 = nullptr;
  if ( a6 && !*a6 )
    v8 = nullptr;
  ptr = (void *)qstrdup(v10);
  v14 = (void *)qstrdup(v7);
  v16 = 0;
  v15 = (void *)qstrdup(v8);
  v17 = a7;
  result = sub_505940(a1 + 1400, v12);
  if ( !(_BYTE)result )
  {
    qfree(ptr);
    qfree(v14);
    qfree(v15);
    return 0;
  }
  return result;
}
