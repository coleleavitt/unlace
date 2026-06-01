__int64 __fastcall sub_BA3BB0(_BYTE *a1, __int64 *a2)
{
  __int64 v2; // rdx
  _QWORD *v3; // rdx
  __int64 result; // rax

  v2 = *a2;
  if ( !*a2
    || (v2 & 6) != 0
    || (v3 = (_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF8LL)) == nullptr
    || (result = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, _QWORD *))(*(_QWORD *)a1 + 136LL))(a1, *v3, v3 + 1),
        (_BYTE)result) )
  {
    if ( (*((_BYTE *)a2 + 28) & 4) != 0 || a1[10] )
      return (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a1 + 96LL))(a1, a2[1]);
    else
      return 1;
  }
  return result;
}

