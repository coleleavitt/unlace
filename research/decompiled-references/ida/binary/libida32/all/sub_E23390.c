void __fastcall sub_E23390(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r8

  v3 = a2 & 7;
  switch ( v3 )
  {
    case 7:
      v4 = a2 & 0xFFFFFFFFFFFFFFF8LL;
      if ( *(_DWORD *)(a2 & 0xFFFFFFFFFFFFFFF8LL) == 1 )
      {
        sub_971800(*(_QWORD *)(a1 + 8), "li");
        if ( *(_DWORD *)v4 == 1 )
          v5 = *(_QWORD *)(v4 + 16);
        else
          v5 = 0;
        sub_E15750(*(_QWORD *)(a1 + 8), v5);
      }
      break;
    case 5:
      sub_971800(*(_QWORD *)(a1 + 8), "cv");
      sub_E1BE40(a1, *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 8), v6, v7, v8);
      break;
    case 6:
      sub_E16500((__int64 *)(a1 + 8), *(unsigned int *)(a2 & 0xFFFFFFFFFFFFFFF8LL), a3);
      break;
  }
}

