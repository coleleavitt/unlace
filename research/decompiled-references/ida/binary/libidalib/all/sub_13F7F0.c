__int64 __fastcall sub_13F7F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+8h] [rbp-20h]
  int v7; // [rsp+Ch] [rbp-1Ch]

  v6 = a2;
  v5 = a1;
  v2 = sub_10AEC0(a1, a2);
  v7 = HIDWORD(a1) + 1;
  v3 = operator new(0x60u);
  TMenuBar::TMenuBar(v3, &v5, v2);
  return v3;
}

