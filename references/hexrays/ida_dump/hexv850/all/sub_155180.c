__int64 __fastcall sub_155180(_BYTE *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _BYTE *v5; // rax
  __int64 v7; // rsi
  _QWORD v8[9]; // [rsp+0h] [rbp-48h] BYREF

  v8[7] = __readfsqword(0x28u);
  v5 = a1;
  LODWORD(a1) = 1;
  if ( *v5 == 4 )
  {
    v7 = *(_QWORD *)(a2 + 96);
    v8[1] = 0;
    v8[0] = &off_4B16B8;
    a1 = *((_BYTE **)v5 + 1);
    v8[5] = v7;
    v8[4] = 0;
    v8[6] = a5;
    v8[2] = a3;
    v8[3] = a4;
    LOBYTE(a1) = (unsigned int)sub_11ABA0(a1, v8) == 0;
  }
  return (unsigned int)a1;
}
