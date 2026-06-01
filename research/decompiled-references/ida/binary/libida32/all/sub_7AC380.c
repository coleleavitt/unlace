__int64 __fastcall sub_7AC380(_QWORD *a1, __int64 a2)
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
  if ( !(unsigned __int8)sub_7ABCE0(&qword_2CAA880, a1 + 8) )
    return 0;
  v5 = sub_79DA20(0);
  a1[4] = v5;
  if ( !(unsigned __int8)sub_79DAA0(v5) )
  {
    a1[8] = "irs";
    return 0;
  }
  v6 = qword_2CAA890;
  qmutex_lock(qword_2CAA890);
  v7 = qword_2CAA8B0;
  if ( qword_2CAA8B0 )
  {
    qmutex_unlock(v6);
    a1[10] = v7;
  }
  else
  {
    v8 = sub_7ABE30((__int64 **)&qword_2CAA880, 0, v2, v3);
    qword_2CAA8B0 = v8;
    qmutex_unlock(v6);
    a1[10] = v8;
    if ( !v8 )
      goto LABEL_15;
  }
  result = sub_7AC290((__int64)a1);
  if ( !(_BYTE)result )
  {
LABEL_15:
    a1[8] = "openssl";
    return 0;
  }
  return result;
}

