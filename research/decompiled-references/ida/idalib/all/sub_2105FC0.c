unsigned __int64 __fastcall sub_2105FC0(__int64 a1)
{
  unsigned __int64 v1; // rbx
  int v2; // eax
  unsigned __int64 v3; // rax

  v1 = sub_2105F40((__int64 *)(a1 + 864), 176, 3u);
  v2 = j__strlen(&byte_22F0C30);
  sub_2113B00(v1, 6, (unsigned int)&byte_22F0C30, v2, 1, 0, 0);
  *(_QWORD *)v1 = off_2C72AE8;
  v3 = sub_2105F80(a1);
  *(_QWORD *)(v3 + 8) = v1;
  **(_QWORD **)(v1 + 8) = v3;
  *(_QWORD *)(*(_QWORD *)(v1 + 8) + 8LL) = v3;
  return v1;
}
