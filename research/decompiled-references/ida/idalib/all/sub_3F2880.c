__int64 sub_3F2880()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  __int64 v2; // rax
  _QWORD *v3; // rax
  __m128i v5; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v6; // [rsp+18h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  v0 = operator new(0x58u);
  *(_QWORD *)(v0 + 8) = 0;
  *(_QWORD *)v0 = &off_2BF9EE0;
  *(_QWORD *)(v0 + 16) = &off_2BF9F20;
  *(_QWORD *)(v0 + 32) = -1;
  v1 = qword_2CCB598;
  *(_QWORD *)(v0 + 40) = 0;
  *(_OWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 24) = v1;
  hook_event_listener(0, v0, 0, 1);
  *(_QWORD *)v0 = off_2B26A60;
  *(_QWORD *)(v0 + 16) = off_2B26AA0;
  v2 = *(_QWORD *)(v0 + 24);
  v5 = 0;
  v3 = *(_QWORD **)(v2 + 1672);
  *(_OWORD *)(v0 + 72) = 0;
  *(_QWORD *)(v0 + 64) = v3;
  sub_630CA0(*v3, 26, &v5, 16);
  *(__m128i *)(v0 + 72) = _mm_load_si128(&v5);
  if ( v0 )
    v0 += 16;
  return v0;
}
