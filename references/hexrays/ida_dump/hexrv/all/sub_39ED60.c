_QWORD *__fastcall sub_39ED60(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( a3 && *a3 == 36 && (unsigned int)qsscanf(a3, "$%a", &v9) == 1 && (v5 = v9, v9 != -1) )
  {
    v3 = operator new(0x38u);
    v6 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)v3 = &off_4B96F0;
    *(_DWORD *)(v3 + 8) = 1;
    *(_QWORD *)(v3 + 16) = v6;
    *(_QWORD *)(v3 + 24) = 0;
    *(_DWORD *)(v3 + 48) = -1;
    *(_OWORD *)(v3 + 32) = 0;
    v7 = qvector_reserve(v3 + 24, 0, 1, 8);
    v8 = *(_QWORD *)(v3 + 32);
    *(_QWORD *)(v3 + 24) = v7;
    *(_QWORD *)(v7 + 8 * v8) = v5;
    ++*(_QWORD *)(v3 + 32);
  }
  else
  {
    v3 = 0;
  }
  *a1 = v3;
  return a1;
}
