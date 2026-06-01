__int64 __fastcall sub_10362F0(__int64 a1, unsigned int a2)
{
  __int64 (*v2)(void); // rax
  unsigned int v3; // esi

  v2 = *(__int64 (**)(void))(*(_QWORD *)a1 + 936LL);
  if ( (char *)v2 != (char *)sub_1034230 )
    return v2();
  if ( a2 <= 0x18 )
  {
    v3 = *(_DWORD *)(*(_QWORD *)(a1 + 352) + 4LL * a2);
    if ( v3 - 270 > 1 )
      goto LABEL_4;
    return 32;
  }
  v3 = a2 - 25;
  if ( v3 - 270 <= 1 )
    return 32;
LABEL_4:
  if ( v3 == 272 )
    return 64;
  else
    return *(unsigned __int8 *)(a1 + 8);
}
