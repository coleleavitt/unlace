/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A3184
// Address: 0x00000000000A3184

//----- (00000000000A3184) ----------------------------------------------------
long double __fastcall sub_A3184(__int64 a1, __int64 a2, char a3)
{
  pthread_mutex_t *v3; // x20
  int v4; // w8
  __time_t v7; // x0
  __int64 v8; // x8
  __int64 v9; // x0
  size_t v10; // x21
  void *v11; // x8
  __int64 v12; // x22
  long double result; // q0

  *(_QWORD *)(a1 + 136) = a2;
  *(_QWORD *)(a1 + 152) = 0;
  *(_QWORD *)(a1 + 160) = 0;
  *(_QWORD *)a1 = off_15F0A0;
  *(_QWORD *)(a1 + 144) = 0;
  v3 = (pthread_mutex_t *)(a1 + 144);
  v4 = dword_1668F8++;
  *(_DWORD *)(a1 + 168) = v4;
  v7 = qtime64();
  v8 = *(_QWORD *)(a1 + 136);
  *(_QWORD *)(a1 + 176) = v7;
  *(_BYTE *)(a1 + 184) = a3 & 1;
  if ( (sub_A4968(v8, (__int64)v3, 0) & 1) == 0 )
  {
    v9 = __strlen_chk("(unknown)", 10);
    v10 = v9;
    if ( v9 )
    {
      v11 = *(void **)(a1 + 144);
      v12 = v9 + 1;
      if ( *(_QWORD *)(a1 + 160) < (unsigned __int64)(v9 + 1) )
      {
        v11 = qvector_reserve(v3, *(void **)(a1 + 144), v9 + 1, 1u);
        v3->__align = (__int64)v11;
      }
      *(_QWORD *)(a1 + 152) = v12;
      memmove(v11, "(unknown)", v10);
      *(_BYTE *)(*(_QWORD *)(a1 + 144) + v10) = 0;
    }
    else
    {
      *(_QWORD *)(a1 + 152) = 0;
    }
  }
  *(_OWORD *)(a1 + 120) = 0u;
  *(_OWORD *)(a1 + 104) = 0u;
  *(_OWORD *)(a1 + 88) = 0u;
  *(_OWORD *)(a1 + 72) = 0u;
  *(_OWORD *)(a1 + 56) = 0u;
  *(_OWORD *)(a1 + 40) = 0u;
  *(_OWORD *)(a1 + 24) = 0u;
  *(_OWORD *)(a1 + 8) = 0u;
  *(_OWORD *)&result = 0u;
  return result;
}
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 15F0A0: using guessed type __int64 (__fastcall *off_15F0A0[2])();
// 1668F8: using guessed type int dword_1668F8;
