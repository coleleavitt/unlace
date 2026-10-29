__int64 __fastcall sub_7ABCE0(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r12
  unsigned int v3; // ebp
  const char *v5; // rax

  v2 = a1[2];
  qmutex_lock(v2);
  v3 = *((unsigned __int8 *)a1 + 56);
  if ( !(_BYTE)v3 )
  {
    if ( !(unsigned __int8)sub_7AB730((__int64)a1) )
    {
      *a2 = "dlopen";
      goto LABEL_3;
    }
    v5 = sub_7ABA10((__int64)a1);
    if ( !v5 )
      goto LABEL_11;
    if ( !(unsigned __int8)sub_7ABA60(a1, (int)v5, 0x1000164u) )
    {
      *a2 = "unsupported_version";
      goto LABEL_3;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 16LL))(*a1, a1[4]) )
    {
LABEL_11:
      *a2 = "dlsym";
      goto LABEL_3;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 24LL))(*a1);
    if ( !(unsigned __int8)sub_7ABC10(a1) )
    {
      *a2 = "openssl";
      goto LABEL_3;
    }
    *((_BYTE *)a1 + 56) = 1;
  }
  v3 = 1;
LABEL_3:
  qmutex_unlock(v2);
  return v3;
}

