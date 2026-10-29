_BYTE *__fastcall sub_88D430(__int64 a1, __int64 a2)
{
  _BYTE *result; // rax
  __int64 v3; // rbx
  unsigned __int64 (__fastcall *v4)(__int64); // rax
  __int64 v5; // rbp

  result = (_BYTE *)get_license_manager(a1, a2);
  if ( !result[536] )
  {
    v3 = (__int64)result;
    v4 = *(unsigned __int64 (__fastcall **)(__int64))(*(_QWORD *)result + 120LL);
    if ( v4 == sub_88D3E0 )
    {
      *(_BYTE *)(v3 + 536) = 1;
      sub_8893C0(v3);
      v5 = *(_QWORD *)(v3 + 424);
      qmutex_lock(v5);
      sub_88A750(v3, 1);
      qmutex_unlock(v5);
      return (_BYTE *)sub_88D1D0(v3);
    }
    else
    {
      return (_BYTE *)v4(v3);
    }
  }
  return result;
}

