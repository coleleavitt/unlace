__int64 __fastcall install_extlang(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __int64 v3; // rsi
  __int64 v4; // r13
  _QWORD *v5; // rdx
  __int64 v6; // rbx
  __int64 v8; // rdx

  if ( !a1 || *(_DWORD *)(a1 + 12) )
    return -1;
  v1 = qword_2CAA640;
  qmutex_lock(qword_2CAA640);
  v2 = xmmword_2CAA628;
  v3 = qword_2CAA620;
  v4 = (int)xmmword_2CAA628;
  if ( (int)xmmword_2CAA628 <= 0 )
  {
    v4 = (int)xmmword_2CAA628;
    v6 = 0;
  }
  else
  {
    v5 = (_QWORD *)qword_2CAA620;
    do
    {
      if ( *v5 == a1 )
      {
        v6 = -1;
        goto LABEL_8;
      }
      ++v5;
    }
    while ( v5 != (_QWORD *)(qword_2CAA620 + 8LL * (unsigned int)(xmmword_2CAA628 - 1) + 8) );
    v6 = 0;
    while ( *(_QWORD *)(qword_2CAA620 + 8 * v6) )
    {
      if ( ++v6 == (int)xmmword_2CAA628 )
        goto LABEL_16;
    }
  }
  if ( v4 == v6 )
  {
LABEL_16:
    v8 = xmmword_2CAA628 + 1;
    if ( *((_QWORD *)&xmmword_2CAA628 + 1) < (unsigned __int64)(xmmword_2CAA628 + 1) )
    {
      qword_2CAA620 = qvector_reserve(&qword_2CAA620, qword_2CAA620, v8, 8);
      v3 = qword_2CAA620;
      v2 = xmmword_2CAA628;
      v8 = xmmword_2CAA628 + 1;
    }
    *(_QWORD *)&xmmword_2CAA628 = v8;
    v6 = v4;
    *(_QWORD *)(v3 + 8 * v2) = a1;
  }
  else
  {
    *(_QWORD *)(qword_2CAA620 + 8 * v6) = a1;
  }
  sub_398230(0, a1, v6);
LABEL_8:
  qmutex_unlock(v1);
  return v6;
}

