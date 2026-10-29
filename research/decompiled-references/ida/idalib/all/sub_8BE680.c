__int64 __fastcall sub_8BE680(__int64 a1, __int64 *a2)
{
  _QWORD *v2; // rbx
  int v3; // r8d
  int v4; // r9d
  unsigned int v5; // r12d
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 (__fastcall **v9)(); // [rsp+0h] [rbp-48h] BYREF
  __int16 v10; // [rsp+8h] [rbp-40h]
  unsigned __int64 v11; // [rsp+18h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v9 = off_2B3E488;
  v10 = 30;
  v2 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)()))(*(_QWORD *)(a1 + 40) + 80LL))(
                   a1 + 40,
                   &v9);
  v5 = sub_8BE300((_QWORD *)(a1 + 40), (__int64)v2, 31, nullptr, v3, v4);
  if ( !v5 )
  {
    v6 = *a2;
    v7 = _mm_loadu_si128((const __m128i *)(a2 + 1));
    *a2 = v2[2];
    a2[1] = v2[3];
    a2[2] = v2[4];
    v2[2] = v6;
    *(__m128i *)(v2 + 3) = v7;
  }
  if ( v2 )
    (*(void (__fastcall **)(_QWORD *))(*v2 + 8LL))(v2);
  nullsub_315(&v9);
  return v5;
}
