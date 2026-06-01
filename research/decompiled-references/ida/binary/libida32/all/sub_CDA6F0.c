__int64 __fastcall sub_CDA6F0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ecx
  unsigned int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx

  v4 = *(_DWORD *)(a2 + 24);
  if ( v4 == 1 )
  {
    v11 = *(_QWORD *)(a2 + 32);
    v12 = *(_QWORD *)(a2 + 40);
    *(_QWORD *)a1 = a3;
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 32) = v11;
    *(_DWORD *)(a1 + 24) = 1;
    *(_QWORD *)(a1 + 40) = v12;
    return a1;
  }
  else if ( v4 == 2 )
  {
    v10 = *(_QWORD *)(a2 + 32);
    *(_QWORD *)a1 = a3;
    *(_OWORD *)(a1 + 8) = 0;
    *(_QWORD *)(a1 + 32) = v10;
    *(_DWORD *)(a1 + 24) = 2;
    return a1;
  }
  else
  {
    v5 = *(_DWORD *)(a2 + 40);
    if ( v5 == -1 )
    {
      if ( v4 == 3 )
        BUG();
      sub_DFF4E0(
        a1,
        *(_QWORD *)(a2 + 32),
        0xFFFFFFFFLL,
        *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL) + 20LL));
      return a1;
    }
    else
    {
      v6 = sub_CDA650(a2) * a3;
      v7 = sub_CDA220(a2);
      v8 = v6 + 32;
      if ( *(_QWORD *)(v7 + 40) )
        v8 = v6 + 16;
      sub_DFF4E0(a1, *(_QWORD *)(a2 + 32), v5, v8 + v5);
      return a1;
    }
  }
}

