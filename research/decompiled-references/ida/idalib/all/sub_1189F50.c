void __fastcall sub_1189F50(__int64 *a1, const void **a2, const void **a3)
{
  size_t v4; // rdx
  const void *v5; // rax
  unsigned __int8 *v6[13]; // [rsp+0h] [rbp-68h] BYREF

  v4 = (size_t)a2[1];
  v5 = a3[1];
  if ( (const void *)v4 != v5 )
  {
    if ( !v5 || !v4 )
      return;
LABEL_8:
    sub_FC70B0((__int64)v6, *a1, 0, 586);
    sub_AEC220(v6, *a2, (signed __int64)a2[1]);
    sub_AEC220(v6, *a3, (signed __int64)a3[1]);
    sub_AEA040((__int64)v6);
    return;
  }
  if ( v4 && memcmp(*a2, *a3, v4) )
    goto LABEL_8;
}
