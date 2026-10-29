__int64 __fastcall sub_1021920(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ebp
  _DWORD *v4; // rax
  __int64 v5; // rbx
  _BYTE v7[41]; // [rsp+Fh] [rbp-29h] BYREF

  v2 = a2 & 0x7FFFFFFF;
  if ( (a2 & 0x7FFFFFFFu) < *(_DWORD *)(a1 + 476) || v2 >= *(_DWORD *)(a1 + 480) )
  {
    v3 = 0;
    if ( v2 )
    {
      if ( v2 < *(_DWORD *)(a1 + 312) )
      {
        v3 = sub_101D3D0(a1, v2);
      }
      else if ( v2 >= *(_DWORD *)(a1 + 316) )
      {
        v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 464) + 24LL))(*(_QWORD *)(a1 + 464), v2);
      }
    }
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 472);
  }
  v7[0] = 0;
  v4 = (_DWORD *)sub_101FA50(a1, v3, v7);
  if ( v7[0] || !v4 )
    return 0;
  v5 = v2 - (*v4 & 0x7FFFFFFF);
  if ( a2 < 0 )
    return sub_10217D0(a1, v4, v5);
  else
    return (v5 << 32) | v3;
}
