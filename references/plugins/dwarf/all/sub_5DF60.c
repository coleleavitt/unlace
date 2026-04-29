__int64 __fastcall sub_5DF60(__int64 a1, __int64 *a2, __int64 a3, __m128i *a4, __int64 *a5, __int64 a6)
{
  bool v6; // zf
  __int64 v8; // rdx
  __int64 idati; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-28h] BYREF
  __int16 v11; // [rsp+10h] [rbp-18h]
  unsigned __int64 v12; // [rsp+18h] [rbp-10h]

  v6 = *(_DWORD *)(a1 + 384) == 5;
  v12 = __readfsqword(0x28u);
  if ( !v6 )
    return sub_5D880(a1, a2, a3, a4, a5);
  v8 = *(unsigned int *)(a1 + 276);
  idati = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 144LL) + 8LL);
  v11 = 1;
  v10[1] = (unsigned int)v8;
  if ( !idati )
    idati = get_idati(a1, a2, v8, 1, a5, a6);
  v10[0] = idati;
  create_tinfo(a2, 61, 189, v10);
  return 1;
}
