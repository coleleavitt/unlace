__int64 __fastcall sub_B97800(__int64 a1, unsigned int *a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rsi

  v3 = *(_QWORD *)(a1 - 40);
  v4 = *(_QWORD *)(v3 + 8656);
  if ( v4 && (v5 = *a2, (unsigned int)v5 < *(_DWORD *)(v4 - 4)) && (v6 = *(_QWORD **)(v4 + 8 * v5)) != nullptr )
    return sub_8EB880(v3, v6, a3);
  else
    return 0;
}

