bool __fastcall sub_7AC3F0(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rdx
  unsigned int v5; // r12d
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // r8d
  __int64 (__fastcall *v9)(); // rdx
  unsigned int v10; // eax
  unsigned int v11; // eax
  __int64 (__fastcall *v12)(); // rax
  unsigned int v14; // [rsp+0h] [rbp-3Ch]

  if ( *(_DWORD *)(a2 + 60) < a3[15] )
    return 0;
  v4 = *(unsigned int *)(a2 + 32);
  v5 = a3[8];
  if ( v5 < (unsigned int)v4 )
    return 0;
  if ( v5 )
  {
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      v12 = *(__int64 (__fastcall **)())(*(_QWORD *)a3 + 88LL);
      if ( v12 == sub_7C5560 )
        v7 = a3[v6 + 16];
      else
        v7 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64, __int64 (__fastcall *)()))v12)(a3, v6, v4, sub_7C5570);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 24) + 3848LL) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3840LL) + 4LL * v7) )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(a1 + 976) + 4LL * v7);
        v9 = *(__int64 (__fastcall **)())(*(_QWORD *)a3 + 160LL);
        v10 = 1;
        if ( v9 != sub_7C5570 )
        {
          v14 = v8;
          v10 = ((__int64 (__fastcall *)(_DWORD *, _QWORD, __int64 (__fastcall *)(), __int64 (__fastcall *)()))v9)(
                  a3,
                  v6,
                  v9,
                  sub_7C5570);
          v8 = v14;
        }
        v5 -= (v10 < v8) - 1;
      }
      v4 = *(unsigned int *)(a2 + 32);
      v11 = a3[8];
      if ( v11 + v5 < (unsigned int)v4 + v6 )
        break;
      if ( ++v6 >= v11 )
        return v5 == (_DWORD)v4;
    }
    return 0;
  }
  return v5 == (_DWORD)v4;
}

