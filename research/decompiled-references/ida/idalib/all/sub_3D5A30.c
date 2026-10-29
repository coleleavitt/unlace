__int64 __fastcall sub_3D5A30(__int64 *a1, __int64 a2, unsigned int a3, unsigned __int64 *a4, int a5, __int64 a6)
{
  unsigned int v7; // ebx
  unsigned int v10; // eax
  __int64 v13; // [rsp+18h] [rbp-150h] BYREF
  int v14; // [rsp+20h] [rbp-148h] BYREF
  _BYTE v15[256]; // [rsp+28h] [rbp-140h] BYREF
  _BYTE v16[16]; // [rsp+128h] [rbp-40h] BYREF
  unsigned __int64 v17; // [rsp+138h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned int)(a5 - 1) <= 0x1F
    && a4
    && *a4 != -1
    && (unsigned __int8)sub_3D55E0(a1, *(_QWORD *)(a2 + 16), 0xAAAAAA0AA00000LL, a3)
    && (LOBYTE(v10) = sub_3C8980(a1, *(_QWORD *)(a2 + 16), a3, a4, a5, a6), v7 = v10, (_BYTE)v10) )
  {
    if ( (~((unsigned __int16)sub_3BE900(a1, *(_QWORD *)(a2 + 16), 4) >> 8) & 6) == 0 )
    {
      if ( (unsigned __int8)is_call_insn(a2) )
      {
        v14 = sub_4CA520(a1, &v13, v16, v15, *(_QWORD *)(a2 + 16), 0);
        if ( v14 )
          sub_3C83C0(a1, *(_QWORD *)(a2 + 16), v13, &v14);
      }
    }
    sub_39ADA0(0x11u, *(_QWORD *)(a2 + 16), a3);
    sub_3A61A0(a1, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 16) + 1LL, 0x28u);
  }
  else
  {
    return 0;
  }
  return v7;
}
