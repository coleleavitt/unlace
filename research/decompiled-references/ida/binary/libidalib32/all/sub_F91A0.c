unsigned __int64 __fastcall sub_F91A0(__int64 a1, void *a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  sub_168AD0((TView *)a1, a2);
  v2 = *((_QWORD *)&xmmword_251678 + 1);
  v3 = qword_251670;
  *(_QWORD *)a1 = &unk_2361D8;
  *(_QWORD *)(a1 + 72) = &off_2364C0;
  *(_QWORD *)(a1 + 104) = &unk_2364D8;
  *(_QWORD *)(a1 + 160) = &unk_236508;
  v4 = xmmword_251678;
  *(_QWORD *)(a1 + 1160) = 0;
  *(_DWORD *)(a1 + 1184) = 1065353216;
  *(_OWORD *)(a1 + 1168) = 0;
  if ( v2 < v4 + 1 )
  {
    qword_251670 = qvector_reserve();
    v3 = qword_251670;
    v4 = xmmword_251678;
  }
  *(_QWORD *)(v3 + 8 * v4) = a1;
  *(_QWORD *)&xmmword_251678 = xmmword_251678 + 1;
  return v6 - __readfsqword(0x28u);
}

