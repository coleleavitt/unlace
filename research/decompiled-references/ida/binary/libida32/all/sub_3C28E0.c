__int64 __fastcall sub_3C28E0(__int64 a1, int a2, int a3, _BYTE *a4, _BYTE *a5, _BYTE *a6, int a7)
{
  _BYTE *v8; // rdi
  _BYTE *v9; // rbp
  _BYTE *v10; // rbx
  __int64 result; // rax
  _DWORD v12[2]; // [rsp+10h] [rbp-48h] BYREF
  void *ptr; // [rsp+18h] [rbp-40h]
  void *v14; // [rsp+20h] [rbp-38h]
  void *v15; // [rsp+28h] [rbp-30h]
  char v16; // [rsp+30h] [rbp-28h]
  int v17; // [rsp+34h] [rbp-24h]
  unsigned __int64 v18; // [rsp+38h] [rbp-20h]

  v8 = a4;
  v9 = a5;
  v10 = a6;
  v18 = __readfsqword(0x28u);
  v12[0] = a2;
  v12[1] = a3;
  *(__m128i *)(a1 + 1532) = _mm_load_si128((const __m128i *)&xmmword_2383860);
  if ( a4 && !*a4 )
    v8 = nullptr;
  if ( a5 && !*a5 )
    v9 = nullptr;
  if ( a6 && !*a6 )
    v10 = nullptr;
  ptr = (void *)qstrdup(v8);
  v14 = (void *)qstrdup(v9);
  v16 = 0;
  v15 = (void *)qstrdup(v10);
  v17 = a7;
  result = sub_4EE3F0(a1 + 1360, v12);
  if ( !(_BYTE)result )
  {
    qfree(ptr);
    qfree(v14);
    qfree(v15);
    return 0;
  }
  return result;
}

