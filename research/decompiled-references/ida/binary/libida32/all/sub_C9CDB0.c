__int64 __fastcall sub_C9CDB0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // [rsp-10h] [rbp-88h]
  unsigned int v10; // [rsp+8h] [rbp-70h]
  __int64 v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+28h] [rbp-50h]
  __int64 v13[8]; // [rsp+38h] [rbp-40h] BYREF

  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
    return sub_C9C0A0((__int64)a1, a2, a3, a4);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v11 = sub_CC2440(a1[61], *(_QWORD *)(a2 + 32));
  v12 = sub_CC2440(a1[61], *(_QWORD *)(v5 + 8));
  v7 = sub_CC2440(a1[61], *(_QWORD *)(v6 + 8));
  v8 = sub_CC2440(a1[61], *(_QWORD *)(a2 + 8));
  if ( (*(_BYTE *)(sub_CC2430(a1[61]) + 1) & 0x20) != 0 )
  {
    if ( !BYTE4(v12) || !BYTE4(v7) || !BYTE4(v8) || !BYTE4(v11) )
      return 0;
    if ( (_DWORD)v7 == 12 || (_DWORD)v8 == 12 )
    {
      return sub_C9CAC0((__int64)a1, a2);
    }
    else
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) != 42 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v6) )
        {
          v13[0] = a2 | 2;
          v10 = sub_C9B2B0((__int64)a1, v13, v7, 1u, 0, 1, 0);
          v13[0] = a2 | 4;
          if ( (unsigned __int8)sub_C81650((__int64)a1, v7, v10, v13) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64, __int64))(*a1 + 40LL))(a1, v5, v9) )
            {
              v13[0] = a2 | 4;
              if ( (unsigned __int8)sub_C7E4C0((__int64)a1, v12, v13) )
              {
                if ( (_DWORD)v11 == (_DWORD)v12
                  || (v13[0] = a2 | 4, (unsigned __int8)sub_C7C7D0((__int64)a1, v12, v11, v13)) )
                {
                  v13[0] = a2 | 4;
                  if ( (unsigned __int8)sub_C80B80((__int64)a1, v7, v10, v13) )
                    __asm { jmp     rax }
                }
              }
            }
          }
        }
        return 0;
      }
      return sub_C8CB30((__int64)a1, a2);
    }
  }
  else
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v6)
      || !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 40LL))(a1, v5) )
    {
      return 0;
    }
    v13[0] = a2 | 4;
    return sub_C87CA0((__int64)a1, v13);
  }
}

