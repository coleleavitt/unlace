__int64 __fastcall sub_2F30F0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __m128i si128; // xmm0
  __int64 v12; // rdi
  __int64 module_data; // rax
  int *v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax

  v6 = operator new(0xB8u);
  sub_3C8800(v6, a1, a3);
  v7 = *(_QWORD *)(v6 + 8);
  *(_QWORD *)(v6 + 72) = 0;
  *(_QWORD *)v6 = &off_4C2988;
  if ( *(int *)(v7 + 28) > 0 )
  {
    v8 = 0;
    do
    {
      v9 = operator new(0x58u);
      v10 = *(_QWORD *)(v6 + 8);
      si128 = _mm_load_si128((const __m128i *)&xmmword_407240);
      v12 = *(int *)(v10 + 4LL * (int)v8 + 16);
      *(_DWORD *)(v9 + 12) = -1;
      *(_QWORD *)(v9 + 32) = v10;
      *(_DWORD *)(v9 + 8) = v12;
      *(_QWORD *)(v9 + 40) = 0;
      *(_QWORD *)v9 = &off_4C28D0;
      *(_QWORD *)(v9 + 72) = 0;
      *(_QWORD *)(v9 + 80) = a2;
      *(__m128i *)(v9 + 16) = si128;
      *(_OWORD *)(v9 + 48) = 0;
      switch_dbctx(v12);
      module_data = get_module_data((unsigned int)dword_4CF8F8);
      *(_QWORD *)(v6 + 8 * v8 + 56) = v9;
      v7 = *(_QWORD *)(v6 + 8);
      *(_DWORD *)(v9 + 12) = v8++;
      *(_QWORD *)(v9 + 64) = module_data;
    }
    while ( *(_DWORD *)(v7 + 28) > (int)v8 );
  }
  v14 = (int *)&unk_410290;
  do
  {
    v15 = *v14++;
    *(_QWORD *)(v6 + 8 * v15 + 152) = *(_QWORD *)(v6 + 8 * v15 + 56);
  }
  while ( v14 != (int *)&unk_41029C );
  *(_QWORD *)(v6 + 176) = *(int *)(v7 + 28);
  result = sub_2F2300((_QWORD *)v6);
  if ( (_BYTE)result )
  {
    if ( !a4 )
      *(_DWORD *)(v6 + 48) |= 0x100u;
  }
  else if ( v6 )
  {
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
