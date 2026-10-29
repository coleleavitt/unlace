__int64 __fastcall sub_55C9A0(_QWORD *a1, int a2, char a3)
{
  int ordinal_limit; // edx
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rbp
  void (*v9)(__int64, _QWORD, const char *, ...); // r14
  __int64 ash; // rax
  __int64 tlc_for_til; // rax
  int v12[2]; // [rsp+0h] [rbp-48h] BYREF
  int v13[2]; // [rsp+8h] [rbp-40h]
  int v14[2]; // [rsp+10h] [rbp-38h]
  int v15[2]; // [rsp+18h] [rbp-30h]

  *(_QWORD *)v15 = __readfsqword(0x28u);
  ordinal_limit = get_ordinal_limit(0);
  result = 0;
  if ( ordinal_limit )
  {
    v6 = *(_QWORD *)(qword_2CCB598 + 1656);
    v7 = *(_QWORD *)(v6 + 64);
    if ( !v7 )
    {
      tlc_for_til = create_tlc_for_til(0, 1);
      *(_QWORD *)(v6 + 64) = tlc_for_til;
      v7 = tlc_for_til;
    }
    if ( a3 )
    {
      *(_BYTE *)(v7 + 56) = 0;
      v8 = *a1;
      v9 = *(void (**)(__int64, _QWORD, const char *, ...))(*(_QWORD *)*a1 + 32LL);
      ash = get_ash();
      v9(v8, a1[1], "\n%s ===================== TYPES IN ASM SYNTAX\n", *(const char **)(ash + 48));
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, const char *))(*(_QWORD *)*a1 + 32LL))(
        *a1,
        a1[1],
        "\n// ===================== TYPES IN C SYNTAX\n");
    }
    *(_QWORD *)v12 = &off_2B2E3D0;
    *(_QWORD *)v13 = 0;
    *(_QWORD *)v14 = 0;
    return sub_3906F0((int)a1, (__int64)v12, a2, v7);
  }
  return result;
}
