time_t __fastcall sub_7977F0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 eah; // rax
  void *v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  time_t result; // rax
  int v9; // ecx
  int v10; // r8d
  int v11; // r9d
  bool v12; // zf

  *(_DWORD *)a1 = 289621065;
  *(_QWORD *)(a1 + 8) = sub_78C130();
  eah = get_eah();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = eah;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = a2;
  *(_WORD *)(a1 + 144) = a3;
  *(_QWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 32) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  if ( !a3 )
  {
    v5 = qword_2CD4690;
    qmutex_lock(qword_2CD4690);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(v6 + 120) + 1;
    *(_DWORD *)(v6 + 120) = v7;
    if ( v7 == 1 && off_2C7C630 )
      off_2C7C630();
    *(_BYTE *)(a1 + 145) = 1;
    qmutex_unlock(v5);
  }
  if ( (unsigned __int8)is_main_thread() )
  {
    if ( *(_BYTE *)(a1 + 144) )
    {
      result = *(_QWORD *)(a1 + 8);
      *(_QWORD *)(result + 112) = -1;
    }
    else
    {
      result = time(nullptr);
      v12 = *(_BYTE *)(a1 + 144) == 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = result;
      if ( v12 )
        callui(25, a2, (int)&callui, v9, v10, v11);
    }
  }
  else
  {
    result = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 144) = 1;
    *(_QWORD *)(result + 112) = -1;
  }
  return result;
}
