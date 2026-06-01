/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_65D0C
// Address: 0x00065D0C

//----- (00065D0C) --------------------------------------------------------
void __fastcall __noreturn sub_65D0C(int a1, int a2)
{
  int v4; // r5
  int v5; // r4
  int v6; // r0
  int i; // r6
  __int64 v8; // kr00_8
  int v9; // r0

  sub_6946C("got signal #%d, terminating\n", a2);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 8))(*(_DWORD *)(a1 + 44));
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_DWORD *)(v4 + 16);
  v6 = v4 + 4;
  for ( i = v4 + 8; v4 + 8 != v5; i = v4 + 8 )
  {
    v8 = *(_QWORD *)(v5 + 16);
    if ( HIDWORD(v8) )
      sub_79AAC(HIDWORD(v8));
    if ( (_DWORD)v8 )
    {
      if ( *(_DWORD *)(v8 + 68) )
      {
        (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)v8 + 12))(v8, a2);
        sub_65688(v8);
      }
    }
    v9 = sub_81290(v5);
    v4 = *(_DWORD *)(a1 + 44);
    v5 = v9;
    v6 = v4 + 4;
  }
  sub_65B5C(v6, *(_DWORD **)(v4 + 12));
  *(_DWORD *)(v4 + 16) = i;
  *(_DWORD *)(v4 + 20) = i;
  *(_DWORD *)(v4 + 12) = 0;
  *(_DWORD *)(v4 + 24) = 0;
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 44) + 12))(*(_DWORD *)(a1 + 44));
  sub_66588((_DWORD *)(a1 + 40));
  exit(a2 != 15);
}
