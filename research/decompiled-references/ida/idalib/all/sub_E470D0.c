void *__fastcall sub_E470D0(__int64 a1, __int64 a2, int a3)
{
  void *result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi

  result = (void *)(a2 & 7);
  switch ( (_DWORD)result )
  {
    case 7:
      v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) == 1 )
      {
        sub_995540(*(_QWORD *)(a1 + 8), "li");
        if ( *(_DWORD *)v4 == 1 )
          v5 = *(_QWORD *)(v4 + 16);
        else
          v5 = 0;
        return sub_E39490(*(_QWORD *)(a1 + 8), v5);
      }
      break;
    case 5:
      sub_995540(*(_QWORD *)(a1 + 8), "cv");
      return (void *)sub_E3FB80(a1, *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 8));
    case 6:
      return (void *)sub_E3A240((__int64 *)(a1 + 8), *(unsigned int *)(a2 & 0xFFFFFFFFFFFFFFF8LL), a3);
  }
  return result;
}
