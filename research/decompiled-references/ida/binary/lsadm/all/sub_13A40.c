__int64 __fastcall sub_13A40(__int64 a1, int *a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // r12d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __m128i v14; // xmm0
  __int64 v15; // rdx
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-48h] BYREF
  char v20; // [rsp+8h] [rbp-40h]
  unsigned __int64 v21; // [rsp+18h] [rbp-30h]

  v21 = __readfsqword(0x28u);
  v20 = 13;
  v19 = off_79640;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)a1 + 80LL))(a1, &v19);
  v5 = sub_14400(a1, v4, 14, a3, 0);
  if ( !v5 )
  {
    v6 = *a2;
    *a2 = *(_DWORD *)(v4 + 16);
    v7 = *(_QWORD *)(v4 + 24);
    *(_DWORD *)(v4 + 16) = v6;
    v8 = *((_QWORD *)a2 + 1);
    *((_QWORD *)a2 + 1) = v7;
    v9 = _mm_loadu_si128((const __m128i *)a2 + 1);
    *((_QWORD *)a2 + 2) = *(_QWORD *)(v4 + 32);
    *((_QWORD *)a2 + 3) = *(_QWORD *)(v4 + 40);
    v10 = *(_QWORD *)(v4 + 48);
    *(_QWORD *)(v4 + 24) = v8;
    *(__m128i *)(v4 + 32) = v9;
    v11 = *((_QWORD *)a2 + 4);
    *((_QWORD *)a2 + 4) = v10;
    v12 = *(_QWORD *)(v4 + 56);
    *(_QWORD *)(v4 + 48) = v11;
    v13 = *((_QWORD *)a2 + 5);
    *((_QWORD *)a2 + 5) = v12;
    v14 = _mm_loadu_si128((const __m128i *)a2 + 3);
    *((_QWORD *)a2 + 6) = *(_QWORD *)(v4 + 64);
    *((_QWORD *)a2 + 7) = *(_QWORD *)(v4 + 72);
    v15 = *(_QWORD *)(v4 + 80);
    *(_QWORD *)(v4 + 56) = v13;
    *(__m128i *)(v4 + 64) = v14;
    v16 = *((_QWORD *)a2 + 8);
    v17 = _mm_loadu_si128((const __m128i *)(a2 + 18));
    *((_QWORD *)a2 + 8) = v15;
    *((_QWORD *)a2 + 9) = *(_QWORD *)(v4 + 88);
    *((_QWORD *)a2 + 10) = *(_QWORD *)(v4 + 96);
    *(_QWORD *)(v4 + 80) = v16;
    *(__m128i *)(v4 + 88) = v17;
  }
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  nullsub_13(&v19);
  return v5;
}

