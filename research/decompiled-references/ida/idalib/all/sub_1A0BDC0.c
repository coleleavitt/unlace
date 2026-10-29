__int64 __fastcall sub_1A0BDC0(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v10; // rax

  v6 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  sub_C95B50(v6, a2, a3, a4, 0);
  v7 = *(unsigned int *)(a1 + 4624);
  *(_BYTE *)(a1 + 4512) = 1;
  v8 = *(_QWORD *)(a1 + 4616) + 640 * v7 - 640;
  if ( !*(_BYTE *)(v8 + 601) )
    return v6;
  v10 = *(unsigned int *)(v8 + 520);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v8 + 524) )
  {
    sub_2237220(v8 + 512, v8 + 528, v10 + 1, 8);
    v10 = *(unsigned int *)(v8 + 520);
  }
  *(_QWORD *)(*(_QWORD *)(v8 + 512) + 8 * v10) = v6;
  ++*(_DWORD *)(v8 + 520);
  return v6;
}
