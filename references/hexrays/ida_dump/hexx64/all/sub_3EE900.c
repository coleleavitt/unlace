unsigned __int64 __fastcall sub_3EE900(_DWORD *a1, __int64 a2)
{
  int v2; // eax
  __m128i si128; // xmm0
  int v4; // eax
  __int64 name_ea; // rax
  _QWORD *v6; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int128 v12; // [rsp+0h] [rbp-188h] BYREF
  __int64 v13; // [rsp+10h] [rbp-178h]
  __int64 v14; // [rsp+18h] [rbp-170h]
  __int64 v15; // [rsp+20h] [rbp-168h]
  _BYTE v16[46]; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int16 v17; // [rsp+56h] [rbp-132h]
  _QWORD v18[4]; // [rsp+168h] [rbp-20h] BYREF

  v2 = a1[101];
  si128 = _mm_load_si128((const __m128i *)&xmmword_424B10);
  v18[0] = __readfsqword(0x28u);
  *(_DWORD *)a2 = v2;
  v4 = a1[155];
  *(_QWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 4) = v4;
  *(__m128i *)(a2 + 8) = si128;
  name_ea = get_name_ea(-1, "runtime.duffzero");
  v13 = -1;
  v6 = v16;
  v12 = -1;
  v14 = 0;
  v15 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v18 != v6 );
  if ( name_ea != -1 && (int)decode_insn(&v12, name_ea, v6, v18, 0, 0, 0.0) > 0 && (_WORD)v14 == 451 && v16[41] == 1 )
    *(_DWORD *)(a2 + 4) = (*(__int64 (__fastcall **)(_DWORD *, _QWORD, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))(*(_QWORD *)a1 + 168LL))(
                            a1,
                            v17,
                            v8,
                            v9,
                            v10,
                            v11,
                            v12,
                            *((_QWORD *)&v12 + 1),
                            v13);
  return v18[0] - __readfsqword(0x28u);
}
