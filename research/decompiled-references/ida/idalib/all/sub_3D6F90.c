__int64 __fastcall sub_3D6F90(__int64 a1, __int64 a2)
{
  __int64 v4; // r13
  __int16 v5; // dx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  _BYTE v9[4104]; // [rsp+10h] [rbp-1048h] BYREF
  unsigned __int64 v10; // [rsp+1018h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(a1 + 1008) )
  {
    off_2C820B8 = (void (__fastcall __noreturn *)())sub_3B8060;
    sub_592AF0(*(_QWORD *)a1, v9, 4096, "id1");
    v4 = operator new(0x68u);
    sub_8B8810(v4, 33);
    v5 = *(_WORD *)(a1 + 212);
    *(_QWORD *)(a1 + 1016) = v4;
    if ( !v5 )
    {
      v6 = 4 * a2;
      if ( !(4 * a2) )
        v6 = qfilesize(v9);
      v7 = 0x10000000;
      if ( v6 <= 0x10000000 )
        v7 = v6;
      if ( v7 < (unsigned __int64)&stru_10000 )
        v7 = (unsigned __int64)&stru_10000;
      v8 = v7 / *(unsigned __int16 *)(a1 + 214);
      if ( v8 > 0xFFFF )
        LOWORD(v8) = -1;
      *(_WORD *)(a1 + 212) = v8;
    }
    sub_368890();
  }
  return 1;
}
