__int64 __fastcall sub_7C25B0(__int64 a1, char **a2, __int64 a3)
{
  char *v3; // r13
  unsigned int v4; // r12d
  char *v6; // r15
  char *v7; // [rsp+8h] [rbp-50h] BYREF
  const void *v8[9]; // [rsp+10h] [rbp-48h] BYREF

  v8[1] = (const void *)__readfsqword(0x28u);
  v7 = *a2;
  v3 = &v7[a3];
  if ( !__CFADD__(a3, v7)
    && (v8[0] = v7, (unsigned __int8)sub_7C23D0(a1, v8, a3))
    && sub_7BFDB0((_DWORD *)(a1 + 88), (unsigned __int64 *)v8)
    && (v7 = (char *)v8[0], (unsigned __int8)sub_7BE9B0((__int64 *)(a1 + 96), (const void **)&v7, (unsigned __int64)v3))
    && (v4 = sub_7C2350(a1 + 120, (const void **)&v7, v3 - v7), (_BYTE)v4)
    && (v6 = v7, v8[0] = v7, *(_QWORD *)(a1 + 160) = unpack_dq(v8, v3) - 1, v6 < v8[0]) )
  {
    *a2 = (char *)v8[0];
  }
  else
  {
    return 0;
  }
  return v4;
}

