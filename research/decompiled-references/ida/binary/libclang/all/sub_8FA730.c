__int64 __fastcall sub_8FA730(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  unsigned __int64 v4; // r13
  unsigned __int64 v7; // rax
  bool v8; // dl
  __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(__int64, unsigned __int64, _QWORD); // r13
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v13; // rdi
  unsigned __int64 v14; // rax
  char v15; // dl
  __int64 v17; // rax
  unsigned __int64 v18[6]; // [rsp+8h] [rbp-30h] BYREF

  v4 = a3 & 0xFFFFFFFFFFFFFFFDLL;
  *(_QWORD *)(a2 + 600) = a3;
  *(_BYTE *)(a2 + 761) = a4;
  *(_QWORD *)(a2 + 752) = a3 & 0xFFFFFFFFFFFFFFFDLL;
  v7 = sub_77BD20((_QWORD *)a3, v18);
  v8 = 0;
  if ( v7 && (*(_BYTE *)(v7 + 1) & 6) == 0 )
    v8 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                               & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL)
        & 0xF7) != 33;
  *(_BYTE *)(a2 + 760) = v8;
  v9 = *(_QWORD *)a2;
  *(_QWORD *)(a2 + 752) = v4;
  v10 = *(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, _QWORD))(v9 + 32);
  v11 = sub_A1AD60(a2 + 384);
  if ( !v10(a2, a3, v11) )
    *(_DWORD *)(a2 + 744) = 3;
  *(_QWORD *)(a2 + 600) = 0;
  sub_8FA130(a2);
  v12 = *(_QWORD *)(a2 + 672);
  *(_BYTE *)(a1 + 64) = -1;
  v13 = a1 + 8;
  *(_QWORD *)a1 = v12;
  v14 = *(char *)(a2 + 736);
  if ( v14 == 2 )
  {
    v17 = *(_QWORD *)(a2 + 696);
    *(__m128i *)(a1 + 8) = _mm_loadu_si128((const __m128i *)(a2 + 680));
    *(_QWORD *)(a1 + 24) = v17;
    v15 = *(_BYTE *)(a2 + 736);
  }
  else if ( v14 <= 2 )
  {
    v15 = 0;
    if ( *(_BYTE *)(a2 + 736) )
    {
      sub_A1C070(v13, a2 + 680);
      v15 = *(_BYTE *)(a2 + 736);
    }
  }
  else
  {
    v15 = -1;
    if ( v14 == 3 )
    {
      sub_69F700(v13, (int *)(a2 + 680));
      v15 = *(_BYTE *)(a2 + 736);
    }
  }
  *(_BYTE *)(a1 + 64) = v15;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 744);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 752);
  return a1;
}

