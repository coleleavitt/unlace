__int64 __fastcall sub_56B780(__int64 a1, _QWORD **a2)
{
  __int64 (__fastcall *v4)(); // rax
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rsi
  __int64 v14; // rdi
  unsigned int *v15; // r9
  __int64 v16; // rdx
  __int64 *v17; // rax
  __int64 v18; // [rsp+8h] [rbp-40h] BYREF
  __int64 v19; // [rsp+10h] [rbp-38h] BYREF
  __int64 v20; // [rsp+18h] [rbp-30h] BYREF
  _BYTE v21[40]; // [rsp+20h] [rbp-28h] BYREF

  sub_644D80(v21, "ensure_fact", 2);
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v4 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 40LL);
    if ( v4 == sub_56BA10 )
    {
      sub_56B5A0(a1, *a2);
      v5 = *(_QWORD *)(a1 + 152);
      v19 = 0;
      v20 = v5;
      sub_568330(a1 + 96, &v20, &v19);
      if ( *(_QWORD *)(v19 + 8) == *(_QWORD *)(a1 + 152) )
        *(_QWORD *)(a1 + 152) = 0xFFFFFFFFLL;
      return sub_644EE0(v21);
    }
LABEL_13:
    ((void (__fastcall *)(__int64, _QWORD **))v4)(a1, a2);
    return sub_644EE0(v21);
  }
  sub_56B5A0(a1, *a2);
  v18 = *(_QWORD *)(a1 + 152);
  v7 = sub_570B70(a1 + 96, &v18);
  if ( !v7 )
  {
    v4 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 40LL);
    if ( v4 == sub_56BA10 )
    {
      sub_56B5A0(a1, *a2);
      sub_568D80(a1 + 72);
      return sub_644EE0(v21);
    }
    goto LABEL_13;
  }
  v8 = *(_QWORD *)(a1 + 16);
  if ( v8 )
  {
    v9 = *(_DWORD *)(v8 - 4);
    v10 = *(_DWORD *)(a1 + 24);
    v11 = v9 - v10;
    if ( (unsigned int)v11 < v9 )
    {
      v12 = *(_QWORD *)(v7 + 8);
      v13 = 8 * v11;
      v14 = 8 * (v11 + (unsigned int)(v10 - 1) + 1);
      do
      {
        v15 = (unsigned int *)(*(_QWORD *)(a1 + 40) + 4 * v13);
        v16 = (*a2)[(unsigned __int64)v13 / 8];
        v13 += 8;
        v17 = (__int64 *)(*(_QWORD *)(a1 + 88) + v12 + *v15);
        *v17 = *((_QWORD *)v15 + 2) & *v17 | (v16 << v15[1]);
      }
      while ( v14 != v13 );
    }
  }
  return sub_644EE0(v21);
}

