__int64 __fastcall sub_8F5330(__int64 a1, __m128i a2, __m128 a3)
{
  unsigned int v4; // ebp
  __int64 v6; // r12
  unsigned int v7; // r15d
  char v8; // r14
  unsigned int v9; // eax
  __int64 v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // r13d
  __int64 i; // r15
  __int64 *v14; // rdi
  __int64 v15; // r8
  _QWORD *v16; // rax
  _QWORD *v17; // r13
  _QWORD *v18; // r15
  unsigned int v19; // [rsp+Ch] [rbp-3Ch]

  while ( 1 )
  {
    if ( qword_1C7EC50 != *(_QWORD *)(a1 + 8984) || *(_BYTE *)(a1 + 2416) )
      return 0;
    v6 = *(_QWORD *)(a1 + 104);
    v7 = *(_DWORD *)(a1 + 8936);
    v8 = *(_BYTE *)(v6 + 4);
    v19 = v7;
    *(_BYTE *)(v6 + 4) = v8 | (*(_DWORD *)(a1 + 9464) == *(_DWORD *)(a1 + 9468));
    if ( !(unsigned __int8)sub_8F2BA0(a1) || !(unsigned __int8)sub_8F3860(a1, v7) )
      goto LABEL_17;
    v9 = *(_DWORD *)(*(_QWORD *)(a1 + 112) + 476LL);
    if ( v9 > *(_DWORD *)(a1 + 184) )
      v9 = *(_DWORD *)(a1 + 184);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 8920);
      if ( v10 )
        v11 = *(_DWORD *)(v10 - 4);
      else
        v11 = 0;
      v12 = v7;
      for ( i = 4LL * v7; ; i += 4 )
      {
        v14 = *(__int64 **)(a1 + 7488);
        v15 = *v14;
        if ( v12 >= v11 )
          break;
        ++v12;
        (*(void (__fastcall **)(__int64 *, _QWORD, bool))(v15 + 40))(
          v14,
          *(_QWORD *)(*(_QWORD *)(a1 + 8840) + 8LL * (*(_DWORD *)(*(_QWORD *)(a1 + 8920) + i) >> 1)),
          (*(_DWORD *)(*(_QWORD *)(a1 + 8920) + i) & 1) == 0);
      }
      (*(void (**)(void))(v15 + 64))();
    }
    if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 )
      goto LABEL_17;
    if ( *(_BYTE *)(a1 + 2416) )
      goto LABEL_17;
    if ( !(unsigned __int8)sub_8F4FD0(a1, a2, a3) )
      goto LABEL_17;
    v4 = sub_8F4C60(a1, *(double *)a2.m128i_i64, a3);
    if ( !(_BYTE)v4 )
      goto LABEL_17;
    sub_8E83D0(a1);
    sub_8E8470(a1);
    if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
      goto LABEL_17;
    v16 = *(_QWORD **)(a1 + 8688);
    if ( v16 )
    {
      v17 = &v16[*((unsigned int *)v16 - 1)];
      if ( v16 != v17 )
      {
        v18 = *(_QWORD **)(a1 + 8688);
        while ( 1 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 184LL))(*v18);
          if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
            break;
          if ( v17 == ++v18 )
            goto LABEL_29;
        }
LABEL_17:
        *(_BYTE *)(v6 + 4) = v8;
        return 0;
      }
    }
LABEL_29:
    *(_BYTE *)(v6 + 4) = v8;
    if ( !(unsigned __int8)sub_8E6FA0(a1) )
      sub_9552F0(*(_QWORD *)(a1 + 7472));
    if ( *(_QWORD *)(a1 + 8984) != qword_1C7EC50 || *(_BYTE *)(a1 + 2416) )
      return 0;
    if ( (unsigned __int8)sub_8EAFC0(a1) )
      break;
    if ( !(unsigned __int8)sub_8E8560(a1) )
      return v4;
  }
  *(_DWORD *)(a1 + 8936) = v19;
  return v4;
}

