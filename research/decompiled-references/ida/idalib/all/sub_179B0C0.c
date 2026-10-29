__int64 __fastcall sub_179B0C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 *v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  _BYTE v11[184]; // [rsp+0h] [rbp-B8h] BYREF

  result = *(unsigned int *)(a2 + 144);
  v6 = *(__int64 **)(a2 + 136);
  if ( (_DWORD)result )
  {
    v7 = (__int64)&v6[(unsigned int)(result - 1) + 1];
    do
    {
      result = *v6;
      if ( (*(_WORD *)*v6 & 0x200) != 0 )
      {
        v8 = *(_QWORD *)(result + 16);
        if ( v8 )
        {
          v9 = *(_BYTE *)(v8 + 28) & 0x7F;
          if ( (_BYTE)v9 == 43 || (*(_BYTE *)(v8 + 97) & 4) == 0 )
          {
            v10 = sub_C00A40(*(_QWORD *)(result + 8), a2, v8, v9, a5);
            a2 = a1 + 8;
            sub_168B9F0((__int64)v11, (__int64 *)(a1 + 8), v10, 0x1BEFu, 0);
            sub_15F7200(v11);
            result = *v6;
            *(_QWORD *)(*v6 + 16) = 0;
          }
        }
      }
      ++v6;
    }
    while ( (__int64 *)v7 != v6 );
  }
  return result;
}
