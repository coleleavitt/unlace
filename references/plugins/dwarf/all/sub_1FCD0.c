void __fastcall sub_1FCD0(__int64 a1, unsigned __int64 *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8

  v7 = a5;
  if ( a5 == -1 )
    v7 = qlseek(a1, 0, 1);
  if ( a6 == -1 )
    a6 = qlsize(a1);
  v9 = a6 - v7;
  if ( ((v9 | v7) & 0x8000000000000000LL) != 0LL )
  {
    v11 = 0;
LABEL_12:
    *a2 = v11;
    if ( (unsigned int)sub_172B0() != 1 )
      sub_179E0(0, "AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s");
    return;
  }
  v10 = *a2;
  if ( *a2 && a3 && !is_mul_ok(v10, a3) || v9 < a3 * v10 )
  {
    v11 = v9 / a3;
    goto LABEL_12;
  }
}
