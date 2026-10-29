__int64 __fastcall sub_7CF7E0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // r13
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // r12

  v2 = *(_QWORD *)(a2 + 40);
  if ( !v2 || (v3 = *(_QWORD *)(a2 + 64), !(unsigned __int8)qfileexist(*(_QWORD *)(a2 + 40), a2)) )
  {
    a1[8] = "certchain_not_found";
    return 0;
  }
  if ( !v3 || !(unsigned __int8)qfileexist(v3, a2) )
  {
    a1[8] = "privkey_not_found";
    return 0;
  }
  if ( !(unsigned __int8)sub_7CF140(&qword_2CD47A0, a1 + 8) )
    return 0;
  v5 = sub_7C0E70(0);
  a1[4] = v5;
  if ( !(unsigned __int8)sub_7C0EF0(v5) )
  {
    a1[8] = "irs";
    return 0;
  }
  v6 = qword_2CD47B0;
  qmutex_lock(qword_2CD47B0);
  v7 = qword_2CD47D0;
  if ( qword_2CD47D0 )
  {
    qmutex_unlock(v6);
    a1[10] = v7;
  }
  else
  {
    v8 = sub_7CF290((__int64 **)&qword_2CD47A0, 0, v2, v3);
    qword_2CD47D0 = v8;
    qmutex_unlock(v6);
    a1[10] = v8;
    if ( !v8 )
      goto LABEL_15;
  }
  result = sub_7CF6F0((__int64)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}
