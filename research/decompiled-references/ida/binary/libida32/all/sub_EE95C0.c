void __fastcall sub_EE95C0(__int64 *a1, char *a2, double a3)
{
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  v4 = *a1;
  if ( (*(_WORD *)a2 & 0x1FF) == 0xF9 )
  {
    sub_971800(v4, " ");
    sub_EE8810(a1, (__int64)a2, a3);
    sub_22581D0(*a1, a1[5], a1[6]);
  }
  else
  {
    sub_22581D0(v4, a1[5], a1[6]);
    sub_EE8730((__int64)a1, a2, *((unsigned __int8 *)a1 + 24), v5, v6, v7, a3);
  }
}

