__int64 __fastcall sub_16ED090(__int64 a1, unsigned __int64 a2, double a3)
{
  __int64 (*v3)(); // rax
  unsigned int v4; // eax
  int v5; // ebx
  unsigned int v6; // r13d
  __int64 v8; // r12
  __int64 v9; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v10[184]; // [rsp+10h] [rbp-B8h] BYREF

  v3 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 744LL);
  if ( v3 == sub_102BB20 || !(unsigned __int8)v3() )
  {
    v4 = sub_BF6D70(a2);
    sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), v4, 0xD29u, 0);
    v5 = *(_DWORD *)(a2 + 20);
    LODWORD(v9) = sub_BF6D70(a2);
    HIDWORD(v9) = v5;
    v6 = *(unsigned __int8 *)(sub_1587DB0((__int64)v10, &v9) + 120);
    sub_15F7200(v10);
  }
  else
  {
    v6 = sub_16EC930(a1, a2, 1u, a3);
    if ( !(_BYTE)v6 )
    {
      v8 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
      if ( (*(_DWORD *)v8 & 0x8000) == 0 )
      {
        v9 = *(_QWORD *)(v8 + 8);
        if ( sub_F580C0(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          if ( ((*(_BYTE *)(v8 + 1) >> 1) & 3) == 1 )
            *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) = sub_19146F0(a1, v8)
                                                                               & 0xFFFFFFFFFFFFFFFELL;
          *(_QWORD *)(a2 + 8) = *(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL);
        }
        else
        {
          sub_168B9F0((__int64)v10, (__int64 *)(a1 + 8), *(_DWORD *)(a2 + 20), 0x1491u, 0);
          v6 = *(unsigned __int8 *)(sub_1605D30((__int64)v10, &v9) + 120);
          sub_15F7200(v10);
        }
      }
    }
  }
  return v6;
}
