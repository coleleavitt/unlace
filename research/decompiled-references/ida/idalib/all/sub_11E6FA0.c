void __fastcall sub_11E6FA0(__int64 a1)
{
  int v1; // eax
  _BYTE v2[88]; // [rsp+0h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 3932);
  if ( (unsigned int)(v1 - 1) > 1 )
  {
    if ( ((v1 - 3) & 0xFFFFFFFD) == 0 )
      return;
    if ( !v1 )
    {
LABEL_4:
      if ( !(unsigned __int8)sub_11E6860(a1, 10, 6, 0) )
        return;
    }
LABEL_5:
    sub_FC70B0((__int64)v2, **(_QWORD **)(a1 + 8), 0, 310);
    sub_AEA040((__int64)v2);
    return;
  }
  if ( *(_DWORD *)(a1 + 3936) > 1u )
  {
    if ( v1 == 1 && *(_DWORD *)(a1 + 3936) == 2 )
      goto LABEL_4;
    goto LABEL_5;
  }
}
