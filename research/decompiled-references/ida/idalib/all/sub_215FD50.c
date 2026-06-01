__int64 __fastcall sub_215FD50(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v8; // r13
  char *v9; // rax
  __m128i si128; // xmm0
  __int64 v11; // rax
  __int64 v12; // [rsp+8h] [rbp-50h] BYREF
  void *v13[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+20h] [rbp-38h] BYREF

  if ( (int)a3 <= 0 )
  {
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = 0;
    return a1;
  }
  v4 = a2[6];
  if ( !v4 )
  {
    v5 = *(_DWORD *)(a2[7] + 44LL);
LABEL_4:
    if ( (unsigned int)a3 <= v5 )
    {
      v6 = a2[11];
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_QWORD *)a1 = v6 + 40LL * (int)a3 - 40;
      return a1;
    }
    goto LABEL_8;
  }
  v5 = *(unsigned __int16 *)(v4 + 2);
  if ( (_WORD)v5 != 0xFFFF )
    goto LABEL_4;
LABEL_8:
  v8 = sub_2195B10(a1, a2, a3, a4);
  v13[0] = v14;
  v9 = (char *)operator new(0x1Cu);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23AB5A0);
  strcpy(v9 + 16, "t of bounds");
  *(__m128i *)v9 = si128;
  v13[0] = v9;
  v14[0] = 27;
  v13[1] = &qword_18 + 3;
  sub_22205D0(&v12, v13, 3, v8);
  if ( v13[0] != v14 )
    operator delete(v13[0]);
  v11 = v12;
  *(_BYTE *)(a1 + 8) |= 1u;
  *(_QWORD *)a1 = v11;
  return a1;
}
