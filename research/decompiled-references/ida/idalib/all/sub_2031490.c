__int64 __fastcall sub_2031490(_QWORD *a1, const void *a2, size_t a3, __int64 a4, unsigned __int8 a5)
{
  bool v8; // zf
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v12; // rax
  size_t v13; // [rsp+8h] [rbp-30h]

  v8 = *((_BYTE *)a1 + 8) == 0;
  v9 = *a1;
  if ( v8 )
  {
    v13 = a3;
    v12 = sub_995540(v9, (const char *)a1[2]);
    a3 = v13;
    v9 = v12;
  }
  else
  {
    *((_BYTE *)a1 + 8) = 0;
  }
  v10 = sub_9954E0(v9, a2, a3);
  sub_995540(v10, ": ");
  return sub_220C370(a4, *a1, a5 ^ 1u);
}
