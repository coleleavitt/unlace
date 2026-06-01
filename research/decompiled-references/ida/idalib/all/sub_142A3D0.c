void __fastcall sub_142A3D0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char v9; // al
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rdx
  unsigned int v15; // [rsp+0h] [rbp-B8h]
  unsigned __int16 v16; // [rsp+Ch] [rbp-ACh]
  unsigned int v17[4]; // [rsp+10h] [rbp-A8h] BYREF
  __int16 v18; // [rsp+20h] [rbp-98h]
  unsigned int v19[34]; // [rsp+30h] [rbp-88h] BYREF

  if ( !(unsigned __int8)sub_1464550(a1, v17, 1) )
  {
    if ( v18 == 16 )
    {
      v16 = *(_WORD *)(a3 + 16);
      v9 = sub_141A630(v16);
      if ( v16 == 1 || v9 )
        BUG();
      v10 = sub_1421C50((__int64)a1, *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) + 16LL, 1);
      v11 = a6;
      v15 = v10;
      v12 = sub_14271E0((__int64)a1, a2, (unsigned int *)a3, v17, v10, v11, a4, a5);
      if ( v12 == 2 )
      {
        sub_141AE30((__int64)a1, ((unsigned __int64)v15 << 32) | a2, 456, v13);
      }
      else if ( v12 <= 2 )
      {
        if ( v12 == 1 )
          sub_141AE30((__int64)a1, ((unsigned __int64)v15 << 32) | a2, 457, v13);
      }
      else if ( v12 == 3 )
      {
        sub_141AE30((__int64)a1, ((unsigned __int64)v15 << 32) | a2, 459, v13);
      }
      else if ( v12 == 5 )
      {
        *(_BYTE *)(a1[14] + 9LL) = 1;
        *(_WORD *)(a3 + 16) = 1;
        *(_QWORD *)(a1[139] + 152LL) = *(_QWORD *)(a1[139] + 120LL);
      }
    }
    else if ( v18 == 5 && *(_BYTE *)(a1[5] + 234LL)
           || (sub_FC70B0((__int64)v19, a1[6], v17[0], 1127), sub_AEA040((__int64)v19), v18 != 2) )
    {
      sub_141A820((__int64)a1, v19);
    }
  }
}
