__int64 __fastcall sub_22051B0(__m128i *a1, __int64 a2, char *a3, size_t a4)
{
  char *v4; // rdx
  size_t v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // r13
  __int64 *v10; // rbp
  _QWORD *v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h] BYREF
  _QWORD *v17; // [rsp+30h] [rbp-38h] BYREF
  char v18; // [rsp+38h] [rbp-30h]

  if ( (_UNKNOWN *)a2 == &unk_26F7B20 )
  {
    a1->m128i_i64[0] = (__int64)&unk_26F7B20;
    v8 = (_QWORD *)operator new[](0x38u);
    *v8 = 2;
    v9 = v8 + 1;
    v10 = v8 + 4;
    sub_21FBA00(v8 + 1, (__int64)dword_26F7D20);
    sub_21F9140(v10, (__int64)dword_26F7D20);
    sub_21FB9A0(v10, 0);
    a1->m128i_i64[1] = (__int64)v9;
    v4 = a3;
    v5 = a4;
  }
  else
  {
    sub_21F9140(a1, a2);
    if ( *(_BYTE *)(a2 + 24) )
      sub_21FB9A0(a1->m128i_i64, 0);
    else
      sub_21FAB90(a1->m128i_i64, 0);
    v4 = a3;
    v5 = a4;
  }
  if ( (_UNKNOWN *)a1->m128i_i64[0] == &unk_26F7B20 )
    sub_2203D40((__int64)&v17, a1, v4, v5, 1u);
  else
    sub_2203BB0((__int64)&v17, (__int64)a1, v4, v5, 1);
  v6 = nullptr;
  if ( (v18 & 1) != 0 )
  {
    v6 = v17;
    v17 = nullptr;
  }
  v15 = v6;
  sub_A05760(&v16, &v15);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD *))(*v15 + 8LL))(v15);
  return sub_13E4420((__int64 *)&v17);
}
