__int64 __fastcall sub_838DD0(__int64 a1, unsigned __int8 *a2)
{
  const char *v2; // rax
  const char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r13
  size_t v6; // r12
  void *v7; // rax
  _QWORD v9[11]; // [rsp+0h] [rbp-58h] BYREF

  v9[5] = __readfsqword(0x28u);
  v2 = (const char *)sub_838D50(a2, (__int64)v9, 33);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    v5 = v4 + 1;
    v6 = v4;
    v7 = (void *)qvector_reserve(a1, 0, v4 + 1, 1);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v5;
    memmove(v7, v3, v6);
    *(_BYTE *)(*(_QWORD *)a1 + v6) = 0;
  }
  return a1;
}
