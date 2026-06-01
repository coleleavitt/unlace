void __fastcall sub_FFCD0(_QWORD *a1, int a2)
{
  __int64 v3; // rbp
  int v4; // ebp
  unsigned int v5; // r12d
  __int64 v6; // rdx
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  int v10; // ebp
  int v11; // eax
  int v12; // edi
  int v13; // ecx

  *((_BYTE *)a1 + 16) = a2 == -1;
  if ( a2 != -1 )
  {
LABEL_2:
    *((_DWORD *)a1 + 3) = a2;
    return;
  }
  v3 = *a1;
  if ( (unsigned int)sub_15E0C0(*a1) == 1 && *(_QWORD *)(v3 + 848) )
  {
    v4 = *(_DWORD *)(*a1 + 16LL);
    v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 416LL))(*a1, 0);
    v10 = v4 - 4 - sub_FFC20(*a1, v5, v6, v7, v8, v9);
    v11 = sub_FF570(a1);
    v12 = *((_DWORD *)a1 + 2);
    v13 = v11 + 1;
    if ( *((_BYTE *)a1 + 28) )
    {
      v13 += v12;
      --v10;
    }
    a2 = (v10 / v13) & 0xFFFFFFFD;
    if ( v12 != 1 )
      a2 = v10 / v13;
    if ( !a2 )
      a2 = 1;
    goto LABEL_2;
  }
}

