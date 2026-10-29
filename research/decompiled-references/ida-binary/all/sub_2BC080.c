void __fastcall sub_2BC080(__int64 a1, __int64 a2, _QWORD *a3, double a4)
{
  int v6; // esi
  __int64 v7; // rcx
  __int64 (__fastcall *v8)(__int64); // rdx
  unsigned int *v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // esi

  if ( a3 )
  {
    v6 = *(_DWORD *)(a2 + 24);
    if ( (unsigned __int64)v6 < a3[6] && (unsigned __int8)sub_29AC50(a3[1], v6) )
    {
      v8 = (__int64 (__fastcall *)(__int64))*(unsigned int *)(a2 + 24);
      if ( (int)v8 >= 0 )
      {
        v9 = (unsigned int *)sub_2B5900(a4, a1, a3, v8, v7);
        v10 = *(__int16 *)(a2 + 28);
        if ( *v9 < v10 )
        {
          *(_WORD *)(a2 + 28) = *v9;
        }
        else if ( (v10 & 0x8000u) != 0 )
        {
          *(_WORD *)(a2 + 28) = 0;
        }
        v11 = v9[1];
        v12 = 0;
        if ( v11 )
          v12 = --v11;
        v13 = *(__int16 *)(a2 + 30);
        if ( v13 <= v12 )
        {
          if ( (v13 & 0x8000u) != 0 )
            *(_WORD *)(a2 + 30) = 0;
        }
        else
        {
          *(_WORD *)(a2 + 30) = v11;
        }
      }
    }
    else
    {
      *(_DWORD *)(a2 + 24) = -1;
    }
  }
}
