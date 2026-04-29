__int64 __fastcall sub_3EBD60(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v7; // rcx
  int v9; // eax
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v23[7]; // [rsp+10h] [rbp-38h] BYREF

  v7 = *(_QWORD *)(a4 + 24);
  v23[1] = __readfsqword(0x28u);
  v9 = sub_339FD0(a1, a2, a3, v7, a5, (char *)a6);
  if ( !v9 )
    return 0;
  if ( v9 != 1 )
  {
    if ( *(_BYTE *)a6 != 4 )
      return 0;
    if ( (unsigned __int8)sub_3EBA20(&v22, *(_QWORD *)(a6 + 8), *(_QWORD *)(a1 + 720)) )
      goto LABEL_6;
    v13 = *(_QWORD *)(a6 + 8);
    if ( *(_DWORD *)v13 != 12 )
      return 0;
    if ( *(_BYTE *)(v13 + 32) == 10 )
    {
      v17 = *(_QWORD *)(v13 + 40);
      if ( *(_BYTE *)v17 == 6 && *(_BYTE *)(v13 + 48) == 10 )
      {
        v18 = *(_QWORD *)(v13 + 56);
        if ( *(_BYTE *)v18 == 6 )
        {
          v19 = *(_QWORD *)(v17 + 8);
          v20 = *(_QWORD *)(v18 + 8);
          if ( !v19 )
          {
            v22 = v20;
LABEL_6:
            v11 = v22;
            sub_11C7E0(a2);
            *(_BYTE *)a2 = 6;
            v12 = 8 * *(_DWORD *)(a1 + 84);
            if ( (unsigned __int64)v12 <= 0x3F )
              v11 &= ~(-1LL << v12);
            *(_QWORD *)(a2 + 8) = v11;
            return 1;
          }
          if ( !v20 )
          {
            v22 = v19;
            goto LABEL_6;
          }
        }
      }
    }
    v14 = sub_11C320(v13, v23, 13);
    if ( !v14 || *(_BYTE *)v23[0] != 4 )
      return 0;
    v15 = *(_QWORD *)(v23[0] + 8LL);
    if ( *(_DWORD *)v15 == 10 )
    {
      v21 = *(_BYTE *)(v15 + 32) == 4;
      v23[0] = v15 + 32;
      if ( !v21 )
        return 0;
      v15 = *(_QWORD *)(v15 + 40);
    }
    if ( !(unsigned __int8)sub_11FFA0(v15, "_ReadStatusReg") )
      return 0;
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 72) + 24LL);
    if ( *(_BYTE *)v16 != 11
      || strcmp(*(const char **)(v16 + 8), "TPIDR_EL0")
      || !(unsigned __int8)sub_32AC10(&v22, v14) )
    {
      return 0;
    }
    goto LABEL_6;
  }
  return 1;
}
