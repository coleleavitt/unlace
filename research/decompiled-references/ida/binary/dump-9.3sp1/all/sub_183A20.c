__int64 __fastcall sub_183A20(__int64 *a1, unsigned __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // r12d
  char v9; // al
  int v10; // r15d
  _DWORD *v12; // rdi
  _QWORD v13[11]; // [rsp+0h] [rbp-58h] BYREF

  v13[3] = __readfsqword(0x28u);
  if ( !*(_BYTE *)a2 )
    return 1;
  if ( *(_BYTE *)a2 != 4 || (v12 = *(_DWORD **)(a2 + 8), *v12 != 2) )
  {
    v8 = sub_126F10(a2, (__int64)a1, a3, a4);
    v9 = *(_BYTE *)a2;
    if ( (_BYTE)v8 )
    {
      *(_DWORD *)(a2 + 4) += a3;
      if ( v9 == 4 )
        *(_DWORD *)(*(_QWORD *)(a2 + 8) + 68LL) += a3;
    }
    else
    {
      if ( v9 != 6 )
        return v8;
      v10 = *(_DWORD *)(a2 + 4);
      sub_11C950((unsigned __int8 *)a2, (__int64)a1, v6, v7);
      v13[0] = 0xFFFFFFFF00000000LL;
      v13[1] = 0;
      sub_1838C0((__int64)v13, a1, -1, nullptr, a2, v10);
      if ( !(unsigned __int8)sub_183A20(a1, v13, a3) )
      {
        sub_11CDA0((__int64)v13);
        return v8;
      }
      sub_11CA10((char *)a2, (char *)v13);
      sub_11CDA0((__int64)v13);
    }
    return 1;
  }
  return sub_12CBA0((__int64)v12, (unsigned __int64 *)a1, a3);
}
