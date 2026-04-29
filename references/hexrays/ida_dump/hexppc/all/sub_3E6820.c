__int64 __fastcall sub_3E6820(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // r12
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // r13
  void *(*v7)(); // rcx
  int v8; // edx

  *(_BYTE *)(a1 + 400) = a3;
  v3 = *(_QWORD *)(a2 + 16);
  result = *(_QWORD *)(a1 + 360);
  *(_QWORD *)(a1 + 376) = v3;
  if ( v3 != -1 && *(_BYTE *)(result + 4413) )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
    v8 = 4;
    if ( v7 != sub_3E5F90 )
    {
      v8 = *(char *)(((__int64 (__fastcall *)(__int64, void *(*)(), __int64))v7)(a1, sub_3E5F90, 4) + 12);
      result = *(_QWORD *)(a1 + 360);
    }
    *(_QWORD *)(a1 + 384) = v3 + (int)v6 * v8;
  }
  *(_DWORD *)(a1 + 392) = *(_DWORD *)(a2 + 24);
  v5 = 0;
  if ( *(_BYTE *)(result + 4413) )
    v5 = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 396) = v5;
  return result;
}
