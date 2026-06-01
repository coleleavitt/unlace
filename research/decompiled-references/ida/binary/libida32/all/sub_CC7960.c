__int64 __fastcall sub_CC7960(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ecx
  unsigned int v5; // r8d
  __int64 v6; // rdx
  unsigned int v7; // r13d
  __int64 result; // rax
  int v9; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // r14d
  __int64 (__fastcall *v12)(__int64, __int64); // rcx

  v3 = *(_DWORD *)(a3 + 20);
  if ( v3 != -1 )
  {
    v5 = *(_DWORD *)(a3 + 16);
    v6 = *(_QWORD *)(a3 + 40);
    v7 = v3 / v5;
    result = *(unsigned int *)(v6 + 28);
    v9 = result + 16;
    if ( v3 >= v5 )
    {
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(__int64 (__fastcall **)(__int64, __int64))(v6 + 72);
        if ( v12 )
          result = v12(a1, a2 + v11 + 16);
        ++v10;
        v11 += v9;
        if ( v10 >= v7 )
          break;
        v6 = *(_QWORD *)(a3 + 40);
      }
    }
  }
  return result;
}

