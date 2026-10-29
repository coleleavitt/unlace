__int64 (__fastcall **__fastcall sub_11F45F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4))()
{
  int v6; // eax
  void *v7; // rax
  _BYTE *v8; // r15
  signed __int64 v9; // r12
  int v10; // eax
  void *v11; // rax
  _BYTE *v12; // r13
  signed __int64 v13; // r12
  int v14; // eax

  sub_11F4340(a1, a2, a3, a4);
  *(_QWORD *)(a1 + 2432) = a2;
  *(_QWORD *)a1 = off_2C396F8;
  *(_QWORD *)(a1 + 2440) = a1 + 2456;
  sub_11E4760((_QWORD *)(a1 + 2440), *(_BYTE **)a3, *(_QWORD *)a3 + *(_QWORD *)(a3 + 8));
  *(__m128i *)(a1 + 2472) = _mm_loadu_si128((const __m128i *)(a3 + 32));
  *(_DWORD *)(a1 + 2488) = *(_DWORD *)(a3 + 48);
  v6 = *(_DWORD *)(a3 + 52);
  *(_QWORD *)(a1 + 2496) = a4;
  *(_DWORD *)(a1 + 2492) = v6;
  v7 = (void *)(a1 + 2720);
  *(_BYTE *)(a1 + 2688) = 0;
  *(_QWORD *)(a1 + 2696) = a2;
  *(_QWORD *)(a1 + 2704) = a1 + 2720;
  v8 = *(_BYTE **)a3;
  v9 = *(_QWORD *)(a3 + 8);
  if ( v9 + *(_QWORD *)a3 && !v8 )
LABEL_22:
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v9 > 0xF )
  {
    if ( v9 < 0 )
      goto LABEL_23;
    v7 = (void *)operator new(v9 + 1);
    *(_QWORD *)(a1 + 2720) = v9;
    *(_QWORD *)(a1 + 2704) = v7;
    goto LABEL_18;
  }
  if ( v9 != 1 )
  {
    if ( !v9 )
      goto LABEL_6;
LABEL_18:
    memcpy(v7, v8, v9);
    v7 = *(void **)(a1 + 2704);
    goto LABEL_6;
  }
  *(_BYTE *)(a1 + 2720) = *v8;
LABEL_6:
  *(_QWORD *)(a1 + 2712) = v9;
  *((_BYTE *)v7 + v9) = 0;
  *(__m128i *)(a1 + 2736) = _mm_loadu_si128((const __m128i *)(a3 + 32));
  *(_DWORD *)(a1 + 2752) = *(_DWORD *)(a3 + 48);
  v10 = *(_DWORD *)(a3 + 52);
  *(_QWORD *)(a1 + 2760) = a4;
  *(_DWORD *)(a1 + 2756) = v10;
  v11 = (void *)(a1 + 3872);
  *(_BYTE *)(a1 + 3840) = 0;
  *(_QWORD *)(a1 + 3848) = a2;
  *(_QWORD *)(a1 + 3856) = a1 + 3872;
  v12 = *(_BYTE **)a3;
  v13 = *(_QWORD *)(a3 + 8);
  if ( v13 + *(_QWORD *)a3 && !v12 )
    goto LABEL_22;
  if ( (unsigned __int64)v13 > 0xF )
  {
    if ( v13 >= 0 )
    {
      v11 = (void *)operator new(v13 + 1);
      *(_QWORD *)(a1 + 3872) = v13;
      *(_QWORD *)(a1 + 3856) = v11;
      goto LABEL_21;
    }
LABEL_23:
    std::__throw_length_error("basic_string::_M_create");
  }
  if ( v13 != 1 )
  {
    if ( !v13 )
      goto LABEL_11;
LABEL_21:
    memcpy(v11, v12, v13);
    v11 = *(void **)(a1 + 3856);
    goto LABEL_11;
  }
  *(_BYTE *)(a1 + 3872) = *v12;
LABEL_11:
  *(_QWORD *)(a1 + 3864) = v13;
  *((_BYTE *)v11 + v13) = 0;
  *(__m128i *)(a1 + 3888) = _mm_loadu_si128((const __m128i *)(a3 + 32));
  *(_DWORD *)(a1 + 3904) = *(_DWORD *)(a3 + 48);
  v14 = *(_DWORD *)(a3 + 52);
  *(_QWORD *)(a1 + 3912) = a4;
  *(_DWORD *)(a1 + 3908) = v14;
  *(_BYTE *)(a1 + 3921) = 0;
  *(_BYTE *)(a1 + 3928) = 0;
  *(_QWORD *)(a1 + 3940) = 0;
  *(_QWORD *)(a1 + 3948) = 0;
  *(_QWORD *)(a1 + 3956) = 0;
  *(_QWORD *)(a1 + 3964) = 0;
  *(_BYTE *)(a1 + 4040) = 0;
  *(_BYTE *)(a1 + 4104) = 0;
  *(_QWORD *)a1 = off_2C39D90;
  return off_2C39D90;
}
