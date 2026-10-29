/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442B60
// Address: 0x0000000000442B60

//----- (0000000000442B60) ----------------------------------------------------
void __fastcall sub_442B60(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rax
  pthread_mutex_t *v5; // rbp
  __int64 v6; // rdx
  int v7; // eax
  void (*v8)(void); // rax
  __int64 v9; // rax
  time_t v10; // rax
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  bool v14; // zf

  *(_DWORD *)a1 = 289621065;
  *(_QWORD *)(a1 + 8) = sub_438630();
  v4 = sub_475E40();
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 16) = v4;
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
    v5 = (pthread_mutex_t *)qword_4C8210;
    sub_482EC0((pthread_mutex_t *)qword_4C8210);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = *(_DWORD *)(v6 + 120) + 1;
    *(_DWORD *)(v6 + 120) = v7;
    if ( v7 == 1 )
    {
      v8 = (void (*)(void))qword_4C56E0[2];
      if ( v8 )
        v8();
    }
    *(_BYTE *)(a1 + 145) = 1;
    sub_482F10(v5);
  }
  if ( sub_482DD0() )
  {
    if ( *(_BYTE *)(a1 + 144) )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = -1;
    }
    else
    {
      v10 = time(nullptr);
      v14 = *(_BYTE *)(a1 + 144) == 0;
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 112LL) = v10;
      if ( v14 )
        off_4C7FB0(25, a2, (unsigned int)&off_4C7FB0, v11, v12, v13);
    }
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 144) = 1;
    *(_QWORD *)(v9 + 112) = -1;
  }
}
// 442C7F: variable 'v11' is possibly undefined
// 442C7F: variable 'v12' is possibly undefined
// 442C7F: variable 'v13' is possibly undefined
// 4C56E0: using guessed type __int64 qword_4C56E0[3];
// 4C7FB0: using guessed type double (*off_4C7FB0)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, ...);
