void __fastcall sub_101A620(__int64 a1, const char *a2)
{
  size_t v2; // r12
  unsigned __int64 v3; // rax
  unsigned int v4; // eax
  int v5; // eax

  if ( a2 )
  {
    v2 = strlen(a2);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      if ( (_DWORD)v2 == (_DWORD)v3 || v3 / (int)abs32(v2 - v3) > 2 )
      {
        v4 = sub_2246430(a1 + 16, a2, v2, 1, *(unsigned int *)(a1 + 32));
        if ( v4 < *(_DWORD *)(a1 + 36) )
        {
          *(_DWORD *)(a1 + 36) = v4;
          v5 = *(_DWORD *)(a1 + 44);
          *(_QWORD *)a1 = a2;
          *(_QWORD *)(a1 + 8) = v2;
          *(_DWORD *)(a1 + 40) = v5;
        }
        else
        {
          v5 = *(_DWORD *)(a1 + 44);
        }
        *(_DWORD *)(a1 + 44) = v5 + 1;
      }
    }
  }
}
