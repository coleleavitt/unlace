__int64 __fastcall sub_512540(__int64 a1)
{
  __int64 v1; // rbp
  __int64 v2; // r12
  __int64 v4; // rbp
  unsigned int radix; // r13d
  __int64 v6; // rdi
  __int64 qword; // rdx
  unsigned __int8 v8; // al
  _QWORD v10[23]; // [rsp+0h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 440);
  v2 = *(_QWORD *)(a1 + 432);
  v10[17] = __readfsqword(0x28u);
  v4 = (v1 == 0) + v1 - 1 - tag_strlen(v2);
  radix = get_radix(*(_QWORD *)(a1 + 528), 0);
  v6 = *(unsigned int *)(a1 + 16);
  if ( (unsigned __int8)getinf(9) == 8 )
    qword = (unsigned int)get_qword(v6);
  else
    qword = (unsigned int)get_dword(v6);
  btoa32(v10, 136, qword, radix);
  v8 = getinf(40);
  return sub_359BD0(a1, 0, (__int64)&unk_22B270E, (unsigned int)v4 + v8, v2, v10);
}

