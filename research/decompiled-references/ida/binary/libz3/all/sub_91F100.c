void __fastcall sub_91F100(__int64 a1, __int64 a2)
{
  unsigned int *v2; // r12
  unsigned int *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // r12
  _QWORD *v7; // rbx
  _DWORD *v8; // rax
  _QWORD v9[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( !(unsigned __int8)sub_186AF30(a1, a2) )
  {
    v2 = *(unsigned int **)(a2 + 32);
    v3 = *(unsigned int **)(a2 + 40);
    if ( !*((_WORD *)v2 + 2)
      && (v4 = *(_DWORD **)(*((_QWORD *)v2 + 2) + 24LL)) != nullptr
      && *v4 == 5
      && v4[1] == 6
      && v2[6] == 2
      && (unsigned __int8)sub_91EF50(a1 + 144, *((_QWORD *)v2 + 5), v9)
      && !*((_WORD *)v3 + 2)
      && (v8 = *(_DWORD **)(*((_QWORD *)v3 + 2) + 24LL)) != nullptr
      && *v8 == 5
      && !v8[1] )
    {
      sub_8E1D30(
        a1 + 160,
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v2),
        *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL) + 8LL * *v3));
    }
    else if ( *(_BYTE *)(*(_QWORD *)(a1 + 136) + 80LL) )
    {
      v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
      v6 = *(_QWORD **)(v5 + 8LL * *v2);
      v7 = *(_QWORD **)(v5 + 8LL * *v3);
      if ( (unsigned int)sub_B39350(v6, *(unsigned int *)(a1 + 8)) != -1
        && (unsigned int)sub_B39350(v7, *(unsigned int *)(a1 + 8)) != -1 )
      {
        sub_8E1D30(a1 + 160, v6, v7);
      }
    }
  }
}

