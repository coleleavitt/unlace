__int64 __fastcall sub_222EE20(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rax
  _BYTE *v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  unsigned int v9; // ebx
  void *v11[2]; // [rsp+0h] [rbp-1418h] BYREF
  char v12[16]; // [rsp+10h] [rbp-1408h] BYREF
  __int16 v13; // [rsp+20h] [rbp-13F8h]
  __m128i si128; // [rsp+30h] [rbp-13E8h] BYREF
  __int64 v15; // [rsp+40h] [rbp-13D8h]
  _QWORD v16[634]; // [rsp+48h] [rbp-13D0h] BYREF

  v2 = a1 + 464;
  if ( *(_BYTE *)(a1 + 504) != 2 )
    v2 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23ABB10);
  v3 = 1000000000 * a2 + std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)a1);
  strcpy(v12, "default");
  v11[0] = v12;
  v15 = v3;
  v11[1] = &byte_7;
  std::random_device::_M_init(v16, v11);
  if ( v11[0] != v12 )
    operator delete(v11[0]);
  v16[625] = 1;
  do
  {
    if ( !(unsigned __int8)sub_2221E60(&si128) )
    {
      v9 = 2;
      goto LABEL_15;
    }
    v4 = std::_V2::generic_category((std::_V2 *)&si128);
    v5 = *(_QWORD *)(a1 + 168);
    if ( (unsigned __int64)(v5 + 1) > *(_QWORD *)(a1 + 176) )
    {
      sub_2236E10(a1 + 160, a1 + 184, v5 + 1, 1);
      v5 = *(_QWORD *)(a1 + 168);
    }
    *(_BYTE *)(*(_QWORD *)(a1 + 160) + v5) = 0;
    v6 = *(_BYTE **)(a1 + 160);
    v13 = 257;
    if ( *v6 )
    {
      v11[0] = v6;
      LOBYTE(v13) = 3;
    }
    v7 = sub_228C1E0(v11, 0);
    if ( v4 == v8 && v7 == 2 )
    {
      v9 = 0;
      goto LABEL_15;
    }
  }
  while ( (unsigned __int8)sub_222EBE0(*(void **)v2, *(_QWORD *)(v2 + 8), *(_DWORD *)(v2 + 32)) );
  v9 = 1;
LABEL_15:
  std::random_device::_M_fini((std::random_device *)v16);
  return v9;
}
