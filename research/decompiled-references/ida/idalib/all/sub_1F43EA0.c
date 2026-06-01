void __fastcall sub_1F43EA0(__int64 *a1, unsigned __int64 *a2, __int64 a3)
{
  unsigned __int64 *v4; // r12
  __int64 v5; // rdx
  __int64 *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  _BYTE v9[16]; // [rsp-10h] [rbp-58h] BYREF
  __int64 v10; // [rsp+0h] [rbp-48h]

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 144) + 2320LL) + 21LL) & 2) != 0
    && ((*(_BYTE *)a2 | (unsigned __int8)((__int64)*a2 >> 1)) & 1) != 0 )
  {
    v4 = a2 - 9;
    v5 = *(_QWORD *)a3;
    if ( v5 )
    {
      v6 = a1 + 1;
      if ( a2 != (unsigned __int64 *)&qword_48 )
        v4 = a2;
      v7 = 0;
      if ( *(_BYTE *)(a3 + 16) )
        v7 = *(_QWORD *)(a3 + 8);
      sub_1F3D610(v6, v4, v5, v7);
    }
    else
    {
      sub_1F43500((__int64)v9, (__int64)a1, (__int64)(a2 - 9));
      if ( v10 && (*(_BYTE *)(v10 + 28) & 0x7Fu) - 40 <= 6 )
      {
        if ( a2 != (unsigned __int64 *)&qword_48 )
          v4 = a2;
        v8 = 0;
        if ( *(_BYTE *)(a3 + 16) )
          v8 = *(_QWORD *)(a3 + 8);
        sub_1F3D610(a1 + 1, v4, v10, v8);
      }
      sub_1F42E40((__int64)v9);
    }
  }
}
