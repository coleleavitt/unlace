__int64 __fastcall sub_B0F0F0(__int64 a1, _DWORD *a2, __int64 *a3)
{
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rdi
  int v7; // esi
  int v8; // eax
  __int64 v9; // r8
  int v10; // ecx

  ++*(_DWORD *)(a1 + 776);
  ++a2[5];
  result = sub_B0E620(a1, a2, (__int64)a3);
  if ( !(_BYTE)result )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 712LL) )
    {
      v8 = sub_186B270(0x28u);
      v9 = *a3;
      if ( *a3 )
        v10 = *(_DWORD *)(v9 - 4);
      else
        v10 = 0;
      sub_B73A10(v8, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v10, v9, 0, 0);
      v5 = *a3;
      v6 = *(_QWORD *)(a1 + 16);
      if ( *a3 )
        goto LABEL_4;
    }
    else
    {
      v5 = *a3;
      v6 = *(_QWORD *)(a1 + 16);
      if ( *a3 )
      {
LABEL_4:
        v7 = *(_DWORD *)(v5 - 4);
        return sub_B68F30(v6, v7);
      }
    }
    v7 = 0;
    return sub_B68F30(v6, v7);
  }
  return result;
}

