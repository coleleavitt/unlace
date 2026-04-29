__int64 __fastcall sub_26E80(__int64 a1, int a2, _DWORD *a3, char *a4, int a5, _DWORD *a6)
{
  __int64 v11; // rdi
  unsigned int v12; // edx
  unsigned int v14[10]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a3 )
    *a3 = 0;
  if ( a4 )
    *(_WORD *)a4 = 0;
  if ( a6 )
    *a6 = 0;
  v11 = *(_QWORD *)(a1 + 8);
  v12 = 1;
  if ( *(_BYTE *)(v11 + 112) )
  {
    if ( (unsigned __int8)sub_227B0(v11, v11 + 112, (a2 & 0xFFFFFFu) - 1, (__int64)v14) )
    {
      if ( a3 )
        *a3 = sub_22C80(*(_QWORD *)(a1 + 8), 0x6Au, v14[0]);
      sub_26C20(a1, a4, a5, a6, v14[1], v14[2]);
      return 0;
    }
    else
    {
      return (unsigned int)-2147024883;
    }
  }
  return v12;
}
