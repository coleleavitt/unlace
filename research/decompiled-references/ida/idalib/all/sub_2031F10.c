__int64 __fastcall sub_2031F10(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 v5; // r13
  size_t v6; // rax
  size_t v7; // rax
  size_t v9; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  char v11; // [rsp+8h] [rbp-40h]
  char *v12; // [rsp+10h] [rbp-38h]
  __int64 *v13; // [rsp+18h] [rbp-30h]

  sub_995540(a1, "!DIEnumerator(");
  v10 = a1;
  v11 = 1;
  v12 = ", ";
  if ( !(_BYTE)byte_2CFC658 && __cxa_guard_acquire(&byte_2CFC658) )
  {
    qword_2CFC668 = 0;
    qword_2CFC660 = (__int64)off_2BE5D20;
    qword_2CFC670 = 0;
    qword_2CFC678 = 0;
    __cxa_atexit(nullsub_1290, &qword_2CFC660, &off_2B25620);
    __cxa_guard_release(&byte_2CFC658);
  }
  v13 = &qword_2CFC660;
  v2 = sub_2031EC0(a2, 0);
  v4 = v3;
  v5 = v2;
  v6 = j__strlen("name");
  sub_2030D70(&v10, "name", v6, v5, v4, 0);
  LOBYTE(v5) = *(_DWORD *)(a2 + 4) != 0;
  v7 = j__strlen("value");
  sub_2031490(&v10, "value", v7, a2 + 16, v5);
  if ( *(_DWORD *)(a2 + 4) )
  {
    v9 = j__strlen("isUnsigned");
    sub_2030C50((__int64)&v10, "isUnsigned", v9, 1);
  }
  return sub_995540(a1, ")");
}
