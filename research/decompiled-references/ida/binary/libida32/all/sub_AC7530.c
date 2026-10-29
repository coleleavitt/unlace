__int64 __fastcall sub_AC7530(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // r14
  __int64 v11; // rax

  v7 = *(_QWORD *)(a2 + 16);
  if ( !*(_BYTE *)(a2 + 143) )
  {
    v10 = sub_A3ED80(v7);
    v11 = sub_A3ED80(*(_QWORD *)(a2 + 8));
    v7 = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v10 + 204) = *(_DWORD *)(v11 + 204);
  }
  *(_BYTE *)(a2 + 143) = 1;
  v8 = sub_A3ED80(v7);
  sub_FA3370(a1, v8, a3, a4);
  return a1;
}

