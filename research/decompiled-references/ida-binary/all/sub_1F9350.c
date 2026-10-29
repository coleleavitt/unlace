__int64 __fastcall sub_1F9350(__int64 a1, unsigned int *a2, __int64 a3, unsigned int *a4, double a5)
{
  unsigned int v5; // r12d
  int v8; // eax
  __int64 v9; // rdi
  __int64 (*v10)(); // rax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 result; // rax

  v5 = a3;
  if ( *(_BYTE *)(a1 + 968) )
  {
    if ( !*(_QWORD *)(a1 + 424) )
    {
      sub_1E69C0(a5, a1, (__int64)a2, a3, (__int64)a4);
      return sub_1F94C0();
    }
    v8 = *(_DWORD *)(a1 + 416);
    if ( v8 == 2 )
    {
      v9 = *(_QWORD *)(a1 + 896);
    }
    else if ( v8 == 3 )
    {
      v9 = *(_QWORD *)(a1 + 904);
    }
    else
    {
      v9 = 0;
      if ( v8 == 1 )
        v9 = *(_QWORD *)(a1 + 888);
    }
  }
  else
  {
    v9 = 0;
  }
  v10 = *(__int64 (**)())(*(_QWORD *)v9 + 448LL);
  if ( v10 != sub_1E66A0 )
    ((void (__fastcall *)(__int64, unsigned int *, _QWORD, unsigned int *))v10)(v9, a2, (unsigned int)a3, a4);
  if ( !*(_QWORD *)(a1 + 272) )
    goto LABEL_14;
  if ( *(_BYTE *)(a1 + 560) )
  {
    v11 = *a2;
  }
  else
  {
    v11 = sub_3EA8F0(a4);
    if ( !*(_BYTE *)(a1 + 560) )
    {
      v12 = v5;
      goto LABEL_13;
    }
  }
  v12 = (unsigned int)QT::QKeyEvent::modifiers((QT::QKeyEvent *)a4);
LABEL_13:
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(a1 + 272))(a1, v11, v12, *(_QWORD *)(a1 + 376));
  if ( !(_BYTE)result )
  {
LABEL_14:
    sub_1F4990(2u, a1, a4[16], v5);
    return 0;
  }
  *a2 = 0;
  return result;
}
