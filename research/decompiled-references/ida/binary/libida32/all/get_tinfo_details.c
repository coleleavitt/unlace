__int64 __fastcall get_tinfo_details(
        unsigned __int64 a1,
        char a2,
        char **a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        __int64 a11)
{
  char v13; // bl
  const char **v14; // r14
  __int64 v15; // r13
  __int64 v16; // rdi
  __int64 v17; // r9

  if ( a1 <= 0xFF )
    return 0;
  v13 = a1;
  v14 = *(const char ***)(qword_2CA1698 + 1480);
  v15 = *((_QWORD *)*v14 + 204);
  v16 = sub_51B750(v15, a1);
  if ( (~*(_BYTE *)(v16 + 68) & 0x70) == 0 )
  {
    if ( *(_QWORD *)v16 <= 0xFFu )
      return 0;
    v16 = sub_51B750(v15, *(_QWORD *)v16);
  }
  if ( v16 )
    return sub_530060(v16, *v14, a2, a3, v13, v17, a7, a8, a9, a10, a11);
  return 0;
}

