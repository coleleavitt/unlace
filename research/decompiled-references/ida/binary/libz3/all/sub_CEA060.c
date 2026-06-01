__int64 __fastcall sub_CEA060(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rsi

  v3 = sub_186B270(0x30u);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = v3;
  v6 = a2[1];
  if ( v6 == *a2 )
  {
    v8 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    v7 = sub_15CFF50(a2, *(_QWORD *)(a1 + 32));
    v8 = *(_QWORD *)(a1 + 16);
    v4 = v7;
    v6 = a2[1];
    if ( *a2 != v6 )
    {
      v8 = sub_15CFF50(a2, v8);
      v6 = a2[1];
    }
  }
  *(_DWORD *)(v5 + 8) = 0;
  *(_QWORD *)v5 = &off_1C59AA8;
  *(_QWORD *)(v5 + 16) = v8;
  *(_QWORD *)(v5 + 24) = v6;
  if ( v8 )
    ++*(_DWORD *)(v8 + 8);
  *(_QWORD *)(v5 + 32) = v4;
  *(_QWORD *)(v5 + 40) = v6;
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  return v5;
}

