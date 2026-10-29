__int64 __fastcall sub_16C7CA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // rdx
  int v4; // r12d
  int v6; // r14d
  __int64 v7; // rdx
  __int64 *v8; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v9; // [rsp+8h] [rbp-40h]
  char v10; // [rsp+10h] [rbp-38h]

  v2 = *(unsigned int *)(a2 + 64);
  if ( (unsigned int)v2 > 0x26 || (v3 = 0x4001000001LL, !_bittest64(&v3, v2)) )
  {
    if ( !*(_BYTE *)(a2 + 120) )
    {
      if ( (_DWORD)v2 == 21 || (_DWORD)v2 == 39 )
      {
        v4 = 1;
      }
      else
      {
        v4 = 0;
        if ( (_DWORD)v2 != 1 )
          return 1;
      }
      if ( *(_DWORD *)(a2 + 28) == 1 )
      {
        v6 = *(_DWORD *)(a2 + 32);
        (*(void (__fastcall **)(__int64 **, _QWORD, _QWORD))(a1 + 8))(
          &v8,
          *(_QWORD *)(a1 + 16),
          *(unsigned int *)(a2 + 100));
        if ( v10 )
        {
          LODWORD(v7) = (_DWORD)v8;
          if ( v9 > 0x40 )
            v7 = *v8;
          if ( v4 + v6 > (unsigned int)v7 )
            (*(void (__fastcall **)(_QWORD, _QWORD))(a1 + 24))(*(_QWORD *)(a1 + 32), *(unsigned int *)(a2 + 100));
        }
        sub_98E4B0((__int64)&v8);
      }
      return 1;
    }
  }
  return 1;
}
