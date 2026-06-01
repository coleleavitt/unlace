__int64 __fastcall sub_44E690(__int64 a1, const char *a2, char a3)
{
  int v4; // edi
  int v5; // ecx
  const char *v6; // rdx
  _UNKNOWN **v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rdx
  bool v10; // cc
  __int64 v11; // rsi
  __m128i si128; // xmm0
  __int64 result; // rax
  __int64 v14; // rax
  struct _Unwind_Exception *v15; // rbp

  if ( a3 )
  {
    v4 = 131078;
    v5 = 2;
    v6 = "@";
    v7 = &off_86B8B0;
  }
  else
  {
    v4 = 131590;
    v5 = 3;
    v6 = (const char *)&unk_5EC288;
    v7 = &off_86B8C0;
  }
  *(_DWORD *)(a1 + 12) = v4;
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_DWORD *)(a1 + 8) = 1207959556;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = v5;
  *(_DWORD *)(a1 + 72) = -1;
  *(_QWORD *)(a1 + 56) = v6;
  *(_QWORD *)(a1 + 64) = v7;
  v8 = (_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 16) = -1;
  do
  {
    *v8 = 0;
    v8 += 3;
    *((_OWORD *)v8 - 1) = 0;
  }
  while ( (_QWORD *)(a1 + 176) != v8 );
  *(_DWORD *)(a1 + 176) = 0;
  v9 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v15 = (struct _Unwind_Exception *)interr(3449, a2, v9, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        *(_QWORD *)a1 = &unk_870D58;
        sub_1AB100((_QWORD *)a1, a2);
        _Unwind_Resume(v15);
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v9 & 0xFE07FFFF;
  }
  v10 = *(_QWORD *)(a1 + 120) <= 0x15u;
  *(_QWORD *)(a1 + 184) = a2;
  *(_QWORD *)a1 = opened_files_chooser_t___vtable;
  v11 = *(_QWORD *)(a1 + 104);
  if ( v10 )
  {
    v14 = qvector_reserve(a1 + 104, v11, 22, 1);
    *(_QWORD *)(a1 + 104) = v14;
    v11 = v14;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DDC20);
  *(_QWORD *)(a1 + 112) = 22;
  *(__m128i *)v11 = si128;
  *(_QWORD *)(v11 + 13) = 0x2E2E2E74696D6D6FLL;
  result = *(_QWORD *)(a1 + 104);
  *(_BYTE *)(result + 21) = 0;
  return result;
}
