__int64 __fastcall sub_CF9620(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rax
  _BYTE v7[88]; // [rsp+0h] [rbp-58h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  sub_DFDA20(v2, 48);
  sub_DFF520(v7);
  sub_DFDA50(v2, 48);
  v3 = sub_DFDA20(*(_QWORD *)(a1 + 176), 48);
  v4 = sub_DA8220(a1, a2, v3);
  if ( (_BYTE)v4 )
  {
    if ( !*(_DWORD *)(v3 + 24) && *(_QWORD *)(v3 + 32) && *(_DWORD *)(v3 + 40) )
    {
      sub_E00FC0(v3);
      sub_DFFFB0(v3);
    }
    v5 = sub_CEACF0(v3);
    sub_DFF5C0(v5, v7);
  }
  sub_DFF560(v7);
  return v4;
}

