__int64 __fastcall sub_812870(__int64 a1, int *a2, __int64 a3, __int64 *a4, __int64 a5)
{
  _QWORD *v7; // rbx
  unsigned int v8; // ebp
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 (__fastcall **v12)(); // [rsp+0h] [rbp-48h] BYREF
  char v13; // [rsp+8h] [rbp-40h]
  int v14; // [rsp+9h] [rbp-3Fh]
  __int16 v15; // [rsp+Dh] [rbp-3Bh]
  __int64 v16; // [rsp+10h] [rbp-38h]
  unsigned __int64 v17; // [rsp+18h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v13 = 20;
  v16 = a3;
  v12 = off_2B3C590;
  v14 = *a2;
  v15 = *((_WORD *)a2 + 2);
  v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v12);
  v8 = sub_812BF0(a1, v7, 23, a5, 0);
  if ( !v8 )
  {
    v9 = *a4;
    v10 = _mm_loadu_si128((const __m128i *)(a4 + 1));
    *a4 = v7[2];
    a4[1] = v7[3];
    a4[2] = v7[4];
    v7[2] = v9;
    *(__m128i *)(v7 + 3) = v10;
  }
  if ( v7 )
    (*(void (__fastcall **)(_QWORD *))(*v7 + 8LL))(v7);
  nullsub_284();
  return v8;
}
