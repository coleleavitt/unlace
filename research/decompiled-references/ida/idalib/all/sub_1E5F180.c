void *__fastcall sub_1E5F180(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // rbx
  int v4; // eax
  __int64 v5; // rdi
  unsigned int v6; // eax
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v9[5]; // [rsp+10h] [rbp-28h] BYREF

  v3 = a3 + 1;
  v4 = *(_DWORD *)(a1 + 192);
  v5 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  *a3 = v4;
  sub_1E5F010(v5, &v8);
  v6 = sub_F6C520(*(_QWORD *)(a2 + 32));
  v9[0] = *(_QWORD *)(a2 + 32);
  v9[1] = v6 * ((v3 != nullptr) + ((unsigned __int64)v3 - (v3 != nullptr)) / v6);
  return sub_F6C7F0((__int64)v9, *(_QWORD *)v8, (const __m128i *)(v8 + 8));
}
