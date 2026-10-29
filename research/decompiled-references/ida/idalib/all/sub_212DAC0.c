__int64 __fastcall sub_212DAC0(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v8; // rbx

  if ( a2[14] == 32 && a2[17] == 16 )
  {
    v8 = operator new(0x3A0u);
    sub_212A770(v8, a1, a2, a3, a4, a5);
    *(_QWORD *)(v8 + 920) = a3;
    *(_QWORD *)v8 = &off_2BE93C0;
    *(_QWORD *)(v8 + 912) = v8 + 48;
    *(_BYTE *)(v8 + 192) = 0;
    *(_BYTE *)(v8 + 194) = 1;
    *(_WORD *)(v8 + 208) = 257;
  }
  else
  {
    v8 = operator new(0x390u);
    sub_212A770(v8, a1, a2, a3, a4, a5);
  }
  return v8;
}
