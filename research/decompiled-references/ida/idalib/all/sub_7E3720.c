__int64 __fastcall sub_7E3720(__int64 a1, const void **a2, __int64 a3)
{
  unsigned int v3; // r13d
  char *v5; // rbx
  int v6; // r15d
  _WORD *v7; // rax
  unsigned int v8; // eax
  int v9; // [rsp+Ch] [rbp-4Ch] BYREF
  const void *v10[9]; // [rsp+10h] [rbp-48h] BYREF

  v10[1] = (const void *)__readfsqword(0x28u);
  v10[0] = *a2;
  if ( !__CFADD__(a3, v10[0])
    && (v5 = (char *)v10[0] + a3, sub_7E30F0((_DWORD *)(a1 + 12), (unsigned __int64 *)v10))
    && (v6 = *(_DWORD *)(a1 + 12), (unsigned __int8)sub_7E1980((__int64 *)(a1 + 16), (size_t *)v10, (size_t)v5))
    && (v7 = v10[0], v5 >= (char *)v10[0] + 6)
    && (v10[0] = (char *)v10[0] + 6,
        *(_DWORD *)(a1 + 40) = *(_DWORD *)v7,
        *(_WORD *)(a1 + 44) = v7[2],
        LOBYTE(v8) = sub_7E30F0(&v9, (unsigned __int64 *)v10),
        v3 = v8,
        (_BYTE)v8)
    && ((*(_BYTE *)(a1 + 46) = v9 != 0, v6 <= 2)
     || (unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 48), v10, (unsigned __int64)v5)
     && (unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 72), v10, (unsigned __int64)v5)) )
  {
    *a2 = v10[0];
  }
  else
  {
    return 0;
  }
  return v3;
}
