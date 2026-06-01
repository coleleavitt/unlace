__int64 __fastcall sub_B6CD60(_QWORD *a1, unsigned int *a2, char a3, double a4, double a5, __m128 a6)
{
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi

  sub_B6C890(a1, a2, a3, a4, a5, a6);
  v7 = *((_QWORD *)a2 + 4);
  v8 = *(unsigned int *)(a1[1104] + 4LL * *a2);
  *(_QWORD *)(a1[1109] + 16 * v8 + 8) |= 0x80000010000000uLL;
  result = *(_QWORD *)(sub_15D1F10(v7) + 24);
  if ( result )
  {
    result = *(unsigned int *)result;
    if ( (_DWORD)result != -1 )
    {
      v10 = a1[1084];
      if ( v10 )
      {
        if ( (unsigned int)result < *(_DWORD *)(v10 - 4) )
        {
          v11 = *(_QWORD *)(v10 + 8 * result);
          if ( v11 )
          {
            result = *(_QWORD *)(*(_QWORD *)v11 + 24LL);
            if ( (void (*)())result != nullsub_541 )
              return ((__int64 (__fastcall *)(__int64, unsigned int *, _QWORD))result)(v11, a2, (unsigned int)v8);
          }
        }
      }
    }
  }
  return result;
}

