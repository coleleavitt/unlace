__int64 __fastcall sub_4CE330(_BYTE *a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // r12d
  int v4; // ebp
  __int64 (__fastcall *v5)(__int64, _QWORD); // rax
  __int64 (__fastcall *v6)(_BYTE *, _QWORD, __int64); // r15
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 (__fastcall *v9)(_BYTE *, _QWORD, __int64); // r14
  unsigned int v10; // eax

  result = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 448LL))(a1);
  if ( (int)result >= 0 )
  {
    v3 = result;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 464LL))(a2);
    a1[52] = 1;
    v4 = result;
    if ( (_DWORD)result )
    {
      while ( 1 )
      {
        v5 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 456LL);
        if ( v3 < 0 )
          break;
        v6 = *(__int64 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 472LL);
        v7 = v5(a2, 0);
        result = v6(a1, (unsigned int)v3, v7);
        if ( !--v4 )
          goto LABEL_7;
        ++v3;
      }
      while ( 1 )
      {
        v8 = v5(a2, 0);
        v9 = *(__int64 (__fastcall **)(_BYTE *, _QWORD, __int64))(*(_QWORD *)a1 + 472LL);
        v10 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)a1 + 512LL))(a1);
        result = v9(a1, v10, v8);
        if ( !--v4 )
          break;
        v5 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 456LL);
      }
    }
LABEL_7:
    a1[52] = 0;
  }
  return result;
}
