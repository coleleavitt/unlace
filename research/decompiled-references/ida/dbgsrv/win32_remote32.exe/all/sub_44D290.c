/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44D290
// Address: 0x0044D290

//----- (0044D290) --------------------------------------------------------
DWORD __usercall sub_44D290@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, void *a3)
{
  void *v3; // ebp
  int v5; // edi
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // esi
  HANDLE *v9; // eax
  _DWORD *v10; // eax
  int v12; // [esp+Ch] [ebp-8h] BYREF
  int v13; // [esp+10h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+14h] [ebp+0h] BYREF

  v3 = a3;
  sub_44D450(a1, a2, "got signal #%d, terminating\n", a3);
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 48) + 4))(*(_DWORD *)(a1 + 48));
  v5 = *(_DWORD *)(a1 + 48);
  sub_439D40((_DWORD **)(v5 + 4), &a3);
  v6 = sub_439D90((_DWORD *)(v5 + 4), &v13);
  if ( sub_439C20(&a3, v6) )
  {
    do
    {
      v7 = sub_439C30(&a3);
      v8 = *(_DWORD **)v7;
      v9 = *(HANDLE **)(v7 + 4);
      if ( v9 )
        sub_4564E0(v9);
      if ( v8 && v8[18] )
      {
        (*(void (__thiscall **)(_DWORD *, void *))(*v8 + 8))(v8, v3);
        sub_44DC20(v8);
      }
      sub_40B5E0((int *)&retaddr);
      v5 = *(_DWORD *)(a1 + 48);
      v10 = sub_439D90((_DWORD *)(v5 + 4), &v12);
    }
    while ( sub_439C20(&retaddr, v10) );
  }
  sub_44CA70((_DWORD *)(v5 + 4));
  (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 48) + 8))(*(_DWORD *)(a1 + 48));
  sub_44D810((_DWORD *)(a1 + 44), -1);
  sub_46BC59(v3 != (void *)15);
  __debugbreak();
  __debugbreak();
  __debugbreak();
  __debugbreak();
  __debugbreak();
  __debugbreak();
  __debugbreak();
  __debugbreak();
  return sub_44D370(a2, a3);
}
