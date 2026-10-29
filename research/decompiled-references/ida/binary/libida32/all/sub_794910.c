__int64 __fastcall sub_794910(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, __int16 a5)
{
  signed __int64 v5; // rax
  size_t v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD v10[133]; // [rsp+8h] [rbp-428h] BYREF

  v10[129] = __readfsqword(0x28u);
  v5 = sub_7921F0(a2, a3, a4, v10, 1024, a5);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( v5 > 0 )
  {
    v6 = v5;
    v7 = qvector_reserve(a1, 0, v5, 1);
    v8 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)a1 = v7;
    memset((void *)(v7 + v8), 0, v6 - v8);
    *(_QWORD *)(a1 + 8) = v6;
    memcpy(*(void **)a1, v10, v6);
  }
  return a1;
}

