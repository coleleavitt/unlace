__int64 __fastcall sub_8E7230(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // rbx
  unsigned int *v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r13
  __int64 (__fastcall *v9)(); // rax
  __int64 v10; // r12
  _DWORD *v11; // rax

  v4 = a2;
  v5 = *(unsigned int **)(sub_15D1F10(a2) + 24);
  if ( !v5 )
    return sub_15E1B70(*(_QWORD *)(a1 + 104));
  v6 = *v5;
  if ( (_DWORD)v6 == -1 )
    return sub_15E1B70(*(_QWORD *)(a1 + 104));
  v7 = *(_QWORD *)(a1 + 8672);
  if ( !v7 )
    return sub_15E1B70(*(_QWORD *)(a1 + 104));
  if ( (unsigned int)v6 >= *(_DWORD *)(v7 - 4) )
    return sub_15E1B70(*(_QWORD *)(a1 + 104));
  v8 = *(_QWORD **)(v7 + 8 * v6);
  if ( !v8 )
    return sub_15E1B70(*(_QWORD *)(a1 + 104));
  v9 = *(__int64 (__fastcall **)())(*v8 + 296LL);
  if ( v9 != sub_8FEA20 )
    return ((__int64 (__fastcall *)(_QWORD *, _DWORD *, _DWORD *))v9)(v8, a2, a3);
  v10 = v8[3];
  if ( *a3 >= *a2 )
  {
    v11 = a3;
    a3 = a2;
    v4 = v11;
  }
  if ( (unsigned __int8)sub_15D27F0(v8[3], a3, v4) )
    return *(_QWORD *)(v10 + 864);
  if ( (unsigned __int8)sub_15D2760(v10, a3, v4) )
    return *(_QWORD *)(v10 + 856);
  return sub_15E1B70(v8[3]);
}

