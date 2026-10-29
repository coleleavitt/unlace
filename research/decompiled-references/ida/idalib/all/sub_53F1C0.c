__int64 __fastcall sub_53F1C0(__int64 *a1, int *a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 *v6; // r14
  __int64 v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rbp
  int v12; // eax
  int v13; // eax

  v6 = *(__int64 **)(*a1 + 1824);
  if ( a3 <= 0xFF )
    goto LABEL_8;
  v8 = sub_5340D0(*(_QWORD *)(*a1 + 1824), a3);
  if ( (~*(_BYTE *)(v8 + 68) & 0x70) != 0 )
    goto LABEL_3;
  if ( *(_QWORD *)v8 <= 0xFFu )
  {
LABEL_8:
    v9 = (unsigned __int8)a3;
    goto LABEL_9;
  }
  v8 = sub_5340D0((__int64)v6, *(_QWORD *)v8);
LABEL_3:
  v9 = (unsigned __int8)a3;
  if ( v8 )
  {
    v10 = sub_53D190((_BYTE *)v8, *a1, a2, a4, a3);
    sub_53EAE0((__int64)v6, a3);
    return v10;
  }
LABEL_9:
  v10 = sub_565B80(v9);
  if ( (int)v10 <= 0 )
    return -1;
  if ( a2 )
  {
    if ( (getinf(57) & 0xF) == 6 || (getinf(67) & 0x80u) != 0LL || (v13 = sub_53D020(v6, a3)) == 0 )
      v12 = sub_531740(v9, v10, a4);
    else
      v12 = 1 << (v13 - 1);
    *a2 = v12;
  }
  return v10;
}
