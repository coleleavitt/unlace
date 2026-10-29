__int64 __fastcall sub_8BD5E0(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdi
  char v9; // al
  __int64 v10; // r9
  unsigned int v11; // r13d
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  unsigned int v15; // ebp
  int v16; // r12d
  unsigned int v17; // eax
  unsigned int v18; // eax

  if ( *a3 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8656LL);
    if ( v5 && (v6 = *a2, (unsigned int)v6 < *(_DWORD *)(v5 - 4)) && (v7 = *(_QWORD *)(v5 + 8 * v6)) != 0 )
    {
      return sub_B39350(v7, *(unsigned int *)(a1 + 8));
    }
    else
    {
      v9 = sub_892DC0((__int64)a2);
      v11 = *(_DWORD *)(a1 + 560);
      if ( v9 )
        v11 = *(_DWORD *)(a1 + 556);
      v12 = sub_B68280(*(_QWORD *)(a1 + 16), a2, 0, 0, 1, v10);
      v13 = a1;
      v14 = a1 + 184;
      v15 = (**(__int64 (__fastcall ***)(__int64, __int64))(v14 - 184))(v13, v12);
      v16 = sub_182D050(qword_1C7F2C0, a3);
      v17 = sub_893C10(v14, v11, v15, v16, 0xFFFFFFFE);
      sub_8BC970(v14, v17);
      v18 = sub_893C10(v14, v15, v11, -v16, 0xFFFFFFFE);
      sub_8BC970(v14, v18);
      return v15;
    }
  }
  else if ( (unsigned __int8)sub_892DC0((__int64)a2) )
  {
    return *(unsigned int *)(a1 + 556);
  }
  else
  {
    return *(unsigned int *)(a1 + 560);
  }
}

