__int64 __fastcall sub_3CFEB0(_QWORD *a1, __int64 a2, unsigned int a3, int *a4, int a5, unsigned int a6)
{
  unsigned int v7; // ebx
  unsigned int v10; // eax
  unsigned int v13; // [rsp+1Ch] [rbp-BCh] BYREF
  int v14; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v15[128]; // [rsp+24h] [rbp-B4h] BYREF
  _BYTE v16[4]; // [rsp+A4h] [rbp-34h] BYREF
  unsigned __int64 v17; // [rsp+A8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  if ( (unsigned int)(a5 - 1) <= 0x1F
    && a4
    && *a4 != -1
    && (unsigned __int8)sub_3CFA90(a1, *(_DWORD *)(a2 + 8), 0xAAAAAA0AA00000LL, a3)
    && (LOBYTE(v10) = sub_3C36B0(a1, *(_DWORD *)(a2 + 8), a3, a4, a5, a6), v7 = v10, (_BYTE)v10) )
  {
    if ( (~((unsigned __int16)sub_3B9AA0((__int64)a1, *(_DWORD *)(a2 + 8), 4) >> 8) & 6) == 0 )
    {
      if ( (unsigned __int8)is_call_insn(a2) )
      {
        v14 = sub_4B3830(a1, &v13, v16, v15, *(unsigned int *)(a2 + 8), 0);
        if ( v14 )
          sub_3C3150(a1, *(unsigned int *)(a2 + 8), v13, &v14);
      }
    }
    sub_396090(0x11u, *(unsigned int *)(a2 + 8), a3);
    sub_3A1A90(a1, *(_DWORD *)(a2 + 8), *(_DWORD *)(a2 + 8) + 1, 0x28u);
  }
  else
  {
    return 0;
  }
  return v7;
}

