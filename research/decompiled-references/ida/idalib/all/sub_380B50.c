__int64 __fastcall sub_380B50(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // al
  __int64 (__fastcall *v5)(_QWORD *, char); // rax
  __int64 v6; // r12
  unsigned __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( (unsigned __int8)getinf(41) && (*(_BYTE *)(a1 + 144) & 1) == 0 )
  {
    v4 = getinf(41);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL))(
      a1,
      a1 + 24,
      *(_DWORD *)(a1 + 148) + v4 - 1);
    v5 = *(__int64 (__fastcall **)(_QWORD *, char))(*(_QWORD *)a1 + 96LL);
    if ( v5 == sub_35CB90 )
    {
      v6 = *(_QWORD *)(a1 + 32);
      if ( v6 )
      {
        v7 = v6 + 1;
        v8 = *(_QWORD *)(a1 + 32);
        --v6;
      }
      else
      {
        v8 = 1;
        v7 = 2;
      }
      v9 = *(_QWORD *)(a1 + 24);
      if ( *(_QWORD *)(a1 + 40) < v7 )
      {
        v10 = qvector_reserve(a1 + 24, v9, v7, 1);
        *(_QWORD *)(a1 + 24) = v10;
        v9 = v10;
      }
      *(_QWORD *)(a1 + 32) = v7;
      *(_BYTE *)(v9 + v6) = 32;
      *(_BYTE *)(*(_QWORD *)(a1 + 24) + v8) = 0;
    }
    else
    {
      v5((_QWORD *)a1, 32);
    }
  }
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 64LL))(a1, a2);
  return (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(
           a1,
           *(_QWORD *)(qword_2CCB598 + 1120),
           0);
}
