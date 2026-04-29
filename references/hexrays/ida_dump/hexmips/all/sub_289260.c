__int64 __fastcall sub_289260(__int64 a1, __int64 a2)
{
  int v2; // ebp
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // eax
  __int64 i; // rdx
  __int64 *v16; // rbx
  int v17; // ecx
  __int64 v18; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(a2 + 24) + 8LL);
  if ( (unsigned int)(v2 - 17) > 1
    || (unsigned __int8)sub_2808E0(a2, 1, 1)
    || (unsigned __int8)sub_2808E0(a2, 66, 1)
    || (unsigned __int8)sub_2809B0(a2) )
  {
    return 0;
  }
  sub_250FD0((__int64 *)a2, *(_QWORD *)(a2 + 24));
  v5 = *(_QWORD *)(a2 + 24);
  *(_DWORD *)(a2 + 8) = (v2 != 18) + 17;
  v9 = sub_23FBE0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v5, v6, v7, v8);
  v10 = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a2 + 24) = v9;
  *(_QWORD *)(a2 + 32) = sub_23FBE0(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 112LL), v10, v11, v12, v13);
  v14 = *(_DWORD *)(a1 + 24) - 1;
  if ( v14 >= 0 )
  {
    for ( i = *(_QWORD *)(a1 + 16) + 8LL * (unsigned int)v14; ; i -= 8 )
    {
      v16 = *(__int64 **)i;
      v17 = *(_DWORD *)(*(_QWORD *)i + 8LL);
      if ( v17 > 69 )
        break;
      if ( --v14 == -1 )
        return 1;
    }
    if ( v17 == 73 )
    {
      v18 = sub_23D030(v16[3]);
      if ( v18 != -1 )
        *v16 = v18;
    }
  }
  return 1;
}
