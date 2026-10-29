__int64 __fastcall sub_8E9800(__int64 a1, __int64 a2, __int64 a3, bool a4, unsigned __int8 a5)
{
  bool v5; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  char v13; // dl
  __int64 v15; // rax

  v5 = a4;
  *(_DWORD *)(a2 + 592) = sub_8124E0(a3);
  if ( a4 )
    v5 = (*(_WORD *)a3 & 0x1FF) != 62;
  *(_BYTE *)(a2 + 760) = v5;
  *(_BYTE *)(a2 + 761) = (*(_WORD *)a3 & 0x1FF) == 62;
  *(_QWORD *)(a2 + 752) = a3 | 2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 24LL))(a2, a3, a5) )
    *(_DWORD *)(a2 + 744) = 3;
  v10 = *(_QWORD *)(a2 + 672);
  *(_BYTE *)(a1 + 64) = -1;
  v11 = a1 + 8;
  *(_QWORD *)a1 = v10;
  v12 = *(char *)(a2 + 736);
  if ( v12 == 2 )
  {
    v15 = *(_QWORD *)(a2 + 696);
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 680));
    *(_QWORD *)(a1 + 24) = v15;
    v13 = *(_BYTE *)(a2 + 736);
  }
  else if ( v12 <= 2 )
  {
    v13 = 0;
    if ( *(_BYTE *)(a2 + 736) )
    {
      sub_A1C070(v11, a2 + 680);
      v13 = *(_BYTE *)(a2 + 736);
    }
  }
  else
  {
    v13 = -1;
    if ( v12 == 3 )
    {
      sub_69F700(v11, (int *)(a2 + 680));
      v13 = *(_BYTE *)(a2 + 736);
    }
  }
  *(_BYTE *)(a1 + 64) = v13;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 744);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 752);
  return a1;
}

