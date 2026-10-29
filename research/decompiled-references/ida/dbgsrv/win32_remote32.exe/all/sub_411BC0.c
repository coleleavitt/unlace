/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411BC0
// Address: 0x00411BC0

//----- (00411BC0) --------------------------------------------------------
char __userpurge sub_411BC0@<al>(
        int a1@<ecx>,
        __m128i a2@<xmm0>,
        int *a3,
        int (__stdcall **a4)(_DWORD, __m128i *, __m128i *),
        int (__stdcall **a5)(_DWORD, __m128i *, __m128i *),
        int (__stdcall **a6)(_DWORD, __m128i *, __m128i *))
{
  int (__stdcall **v7)(_DWORD, __m128i *, __m128i *); // ebx
  char *v8; // esi
  int *v9; // edi
  unsigned __int8 *v10; // eax
  unsigned int v11; // eax
  double v13; // [esp-4h] [ebp-82Ch]
  int (__stdcall **v14)(_DWORD, __m128i *, __m128i *); // [esp+10h] [ebp-818h]
  int (__stdcall **v15)(_DWORD, __m128i *, __m128i *); // [esp+14h] [ebp-814h]
  int v16; // [esp+18h] [ebp-810h] BYREF
  int v17; // [esp+20h] [ebp-808h]
  _BYTE v18[1024]; // [esp+24h] [ebp-804h] BYREF
  CHAR v19[1024]; // [esp+424h] [ebp-404h] BYREF

  v15 = a5;
  v14 = a6;
  sub_408C10(a3, &v16, (unsigned int *)&a4);
  v7 = a4;
  if ( *(_BYTE *)(v17 + 13) || (unsigned int)a4 < *(_DWORD *)(v17 + 16) || v17 == *a3 )
  {
    LODWORD(v13) = a4;
    sub_410500(a1, (int)"get_dll_exports: can't find dll name for imagebase %a", v13);
  }
  else
  {
    if ( *(_DWORD *)(v17 + 36) )
      v8 = *(char **)(v17 + 32);
    else
      v8 = (char *)MultiByteStr;
    sub_45ACB0((unsigned int)v19, v8, 1024);
    v9 = sub_45C5A0((int)v7, (int)a3, a2, v19, 0);
    if ( v9
      || (v10 = sub_456590(v8), !sub_468261((int)v7, 0, v10, "ntdll32.dll"))
      && (!sub_4567D0((unsigned __int8 *)v8)
        ? (v8 = "C:\\Windows\\System32\\ntdll.dll")
        : (sub_45ACB0((unsigned int)v18, v8, 1024),
           v11 = (unsigned int)sub_456590(v18),
           sub_45ACB0(v11, "ntdll.dll", (int)&v19[-v11]),
           v8 = v18),
          (v9 = sub_45C5A0((int)v7, 0, a2, v8, 0)) != nullptr) )
    {
      LOBYTE(v7) = sub_412210(a1, a2, v8, (int)v9, v7, v15, v14);
      sub_45C550((int)v7, (int)v9, v9);
      return (char)v7;
    }
  }
  return 0;
}
// 411CF8: variable 'v13' is possibly undefined
