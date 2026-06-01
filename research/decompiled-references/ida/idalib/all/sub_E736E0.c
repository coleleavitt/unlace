_QWORD *__fastcall sub_E736E0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v6; // rbx
  _UNKNOWN **v7; // rax
  __m128i *v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rax
  __m128i *v12; // [rsp+8h] [rbp-20h] BYREF

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(v3 + 2320);
  if ( (*(_BYTE *)(v4 + 60) & 0x10) != 0 && *(_QWORD *)(v3 + 17456) )
  {
    v5 = *(_QWORD *)(a2 + 232);
    v6 = operator new(0x40u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    v7 = &off_2B4B9E0;
  }
  else
  {
    if ( (*(_BYTE *)(v4 + 96) & 0x30) == 0 )
    {
      v11 = operator new(0x38u);
      *(_OWORD *)v11 = 0;
      *(_OWORD *)(v11 + 32) = 0;
      *(_QWORD *)(v11 + 48) = 0;
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)v11 = &off_2B4B990;
      *(_QWORD *)(v11 + 16) = 0;
      *(_QWORD *)(v11 + 24) = 0;
      *a1 = v11;
      return a1;
    }
    v5 = *(_QWORD *)(a2 + 232);
    v6 = operator new(0x40u);
    *(_DWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_DWORD *)(v6 + 32) = 0;
    *(_QWORD *)(v6 + 40) = 0;
    *(_DWORD *)(v6 + 48) = 0;
    v7 = &off_2B4BA30;
  }
  *(_QWORD *)v6 = v7;
  *(_QWORD *)(v6 + 56) = 0;
  sub_E371F0(&v12, v5);
  v8 = v12;
  v12 = nullptr;
  v9 = *(_QWORD *)(v6 + 56);
  *(_QWORD *)(v6 + 56) = v8;
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
    if ( v12 )
      (*(void (__fastcall **)(__m128i *))(v12->m128i_i64[0] + 8))(v12);
  }
  *a1 = v6;
  return a1;
}
