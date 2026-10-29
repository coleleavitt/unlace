__int64 __fastcall sub_B05AC0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rdi
  int v8; // esi
  int v10; // eax
  __int64 v11; // r8
  int v12; // ecx

  v4 = *(_QWORD *)(a1 + 24);
  ++*(_DWORD *)(a2 + 208);
  v5 = *(_DWORD *)(v4 + 712);
  ++*(_DWORD *)(a1 + 776);
  if ( v5 )
  {
    v10 = sub_186B270(0x28u);
    v11 = *a3;
    if ( *a3 )
      v12 = *(_DWORD *)(v11 - 4);
    else
      v12 = 0;
    sub_B73A10(v10, *(_DWORD *)(a1 + 8), *(_QWORD *)(a1 + 16), v12, v11, 0, 0);
    v6 = *a3;
    v7 = *(_QWORD *)(a1 + 16);
    if ( *a3 )
      goto LABEL_3;
LABEL_8:
    v8 = 0;
    return sub_B68F30(v7, v8);
  }
  v6 = *a3;
  v7 = *(_QWORD *)(a1 + 16);
  if ( !*a3 )
    goto LABEL_8;
LABEL_3:
  v8 = *(_DWORD *)(v6 - 4);
  return sub_B68F30(v7, v8);
}

