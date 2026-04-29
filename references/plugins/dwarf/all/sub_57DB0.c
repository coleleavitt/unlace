__int64 __fastcall sub_57DB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 idati; // rax
  _QWORD v11[2]; // [rsp+10h] [rbp-28h] BYREF
  __int16 v12; // [rsp+20h] [rbp-18h]
  unsigned __int64 v13; // [rsp+28h] [rbp-10h]

  v13 = __readfsqword(0x28u);
  v7 = a2;
  v8 = *(unsigned int *)(a1 + 276);
  idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL) + 8LL);
  v12 = 1;
  v11[1] = (unsigned int)v8;
  if ( !idati )
  {
    idati = get_idati(a2, a2, v8, 1, a5, a6);
    v7 = a2;
  }
  v11[0] = idati;
  create_tinfo(v7, 61, 189, v11);
  return 1;
}
