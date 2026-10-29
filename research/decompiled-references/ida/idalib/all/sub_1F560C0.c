char *__fastcall sub_1F560C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax

  v2 = a1[2];
  v3 = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 8 * v3);
  v5 = v4 >> 1;
  v6 = v4 & 1;
  if ( (_DWORD)v6 )
    v6 = sub_1F6A0A0(*(_QWORD *)(v2 + 8), *(_QWORD *)(v2 + 16)) & 0xFFFFFFFFFFFFFFFCLL;
  *(_QWORD *)(a2 + 168) = (unsigned int)v5 | v6;
  return sub_1F56000(a1, (char *)a2);
}
