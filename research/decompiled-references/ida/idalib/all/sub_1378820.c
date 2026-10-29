void __fastcall sub_1378820(__int64 a1, int a2, unsigned __int8 *a3, __int64 *a4)
{
  unsigned __int8 v6; // bl
  char *v7; // rax
  size_t v8; // rcx
  char *v9; // r12
  unsigned int v10; // eax
  __int64 v11; // [rsp+8h] [rbp-40h]

  v6 = sub_102DCD0(a2);
  v7 = sub_102DA20((__int64)a3, a2);
  v8 = 0;
  v9 = v7;
  if ( v7 )
    v8 = strlen(v7);
  v11 = v8;
  v10 = sub_102DB30(a3, a2);
  sub_1378540(a1, v10, v9, v11, v6, a4);
}
