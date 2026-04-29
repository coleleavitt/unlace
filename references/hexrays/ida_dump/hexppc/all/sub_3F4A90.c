__int64 __fastcall sub_3F4A90(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6, int a7)
{
  unsigned __int64 v11; // rcx
  int v13; // eax
  char v15; // al
  __int64 v16; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rbx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 qword; // rdx
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rsi
  int v27; // ecx
  _QWORD v28[7]; // [rsp+0h] [rbp-38h] BYREF

  v11 = *(_QWORD *)(a4 + 24);
  v28[1] = __readfsqword(0x28u);
  v13 = sub_3358E0(a1, a2, a3, v11, a5, (char *)a6);
  if ( !v13 )
    return 0;
  if ( v13 == 1 )
    return 1;
  v15 = *(_BYTE *)a6;
  if ( *(_BYTE *)a6 == 5 )
  {
    if ( *(_QWORD *)(a1 + 4416) == -1 )
      return 0;
    v26 = *(_QWORD *)(a1 + 4440);
    if ( v26 == -1 || sub_1CC3E0((__int64)a3, v26, *(_QWORD *)(a4 + 24)) != *(_QWORD *)(*(_QWORD *)(a6 + 8) + 8LL) )
      return 0;
    v18 = *(_QWORD *)(a1 + 4416);
    goto LABEL_27;
  }
  if ( (unsigned __int8)v15 > 5u )
  {
    if ( v15 == 6 )
    {
      v19 = *(_DWORD *)(a1 + 80);
      if ( v19 == a7
        && *(_DWORD *)a4 == 2
        && (*(_BYTE *)(a6 + 1) & 1) == 0
        && (unsigned int)sub_33F2E0(a3[187], *(_QWORD *)(a6 + 8), v19) == 2 )
      {
        sub_121740(a2, (unsigned __int8 *)a6);
        v22 = *(_QWORD *)(a6 + 8);
        if ( *(_DWORD *)(a1 + 80) == 8 )
          qword = get_qword(v22);
        else
          qword = (unsigned int)get_dword(v22, a6, v20, v21);
        *(_BYTE *)a2 = 6;
        v24 = 0;
        v25 = 8 * *(_DWORD *)(a1 + 84);
        if ( (unsigned __int64)v25 <= 0x3F )
          v24 = 1LL << v25;
        *(_BYTE *)(a2 + 1) |= 1u;
        *(_QWORD *)(a2 + 8) = qword & (v24 - 1);
        return 1;
      }
    }
    return 0;
  }
  if ( v15 == 1 )
  {
    v18 = sub_3F4920(a1, *(_QWORD *)(a4 + 24), *(_DWORD *)(a6 + 8), (__int64)a3);
    if ( v18 == -1 )
      return 0;
LABEL_27:
    sub_119360(a2);
    *(_BYTE *)a2 = 6;
    v27 = 8 * *(_DWORD *)(a1 + 84);
    if ( (unsigned __int64)v27 <= 0x3F )
      v18 &= ~(-1LL << v27);
    *(_QWORD *)(a2 + 8) = v18;
    return 1;
  }
  if ( v15 == 4 )
  {
    if ( (unsigned __int8)sub_3F49C0(a1, v28, a3, *(_QWORD *)(a4 + 24), *(_QWORD *)(a6 + 8)) )
    {
      v16 = v28[0];
      if ( v28[0] >= 0LL )
      {
        sub_119360(a2);
        *(_BYTE *)a2 = 5;
        v17 = (_QWORD *)j__qalloc_or_throw(16);
        *v17 = a3;
        v17[1] = v16;
        *(_QWORD *)(a2 + 8) = v17;
        return 1;
      }
    }
  }
  return 0;
}
