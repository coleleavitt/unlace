__int64 __fastcall sub_B232F0(__int64 a1, __int64 a2)
{
  int v2; // r12d
  __int64 v3; // rbx
  _DWORD *v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rbp
  unsigned int v7; // ebx

  v2 = 0;
  v3 = a2;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v4 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v4 )
    {
      if ( !*v4 && v4[1] == 8 )
      {
        v2 = *(_DWORD *)(a2 + 24);
        if ( v2 == 1 )
          v3 = *(_QWORD *)(a2 + 32);
        else
          v2 = 0;
      }
    }
  }
  sub_B6F780(*(_QWORD *)(a1 + 16));
  v5 = sub_B645B0(*(_QWORD *)(a1 + 16), v3);
  v6 = *(_QWORD *)(a1 + 16);
  v7 = v5;
  (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v6 + 7488) + 48LL))(
    *(_QWORD *)(v6 + 7488),
    *(_QWORD *)(*(_QWORD *)(v6 + 8840) + 8LL * (v5 >> 1)));
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v6 + 7488) + 64LL))(*(_QWORD *)(v6 + 7488));
  return v2 ^ v7;
}

