char *__fastcall sub_4D2BA0(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // r15
  __int64 v7; // rsi
  int v8; // r12d
  char v9; // bl
  _QWORD *v10; // r14
  int v11; // eax
  _QWORD *v12; // rax
  void *v13; // rdi
  char *result; // rax
  int v16; // [rsp+8h] [rbp-40h]
  char v17; // [rsp+Ch] [rbp-3Ch]

  v6 = (_QWORD *)a1[1];
  LODWORD(v7) = a2 & 0x80;
  v17 = a3;
  v8 = v7;
  if ( v6 )
  {
    v16 = 0;
    v9 = 0;
LABEL_3:
    v10 = nullptr;
    while ( 1 )
    {
      v7 = (__int64)v6;
      v6 = (_QWORD *)*v6;
      v11 = *(_DWORD *)(v7 + 144);
      if ( (v11 & 0x4000) != 0 && (unsigned __int8)v16 != 1 )
        goto LABEL_14;
      if ( v8 || (~(_BYTE)v11 & 0x28) == 0 )
        goto LABEL_9;
      if ( (v11 & 0x80u) != 0 )
        goto LABEL_14;
      a3 = a2;
      if ( a2 )
      {
        if ( (v11 & a2) == 0 )
          goto LABEL_14;
        if ( (v11 & 0x20) != 0 )
        {
          a4 = dbg;
          if ( *(_QWORD *)(v7 + 48) == dbg )
          {
            v10 = (_QWORD *)v7;
            goto LABEL_15;
          }
        }
LABEL_9:
        v9 |= (*(_DWORD *)(v7 + 144) & 0x10) == 0;
        sub_4D2A60((__int64)a1, v7, a3, a4, a5, a6);
        if ( v10 )
          *v10 = v6;
        else
          a1[1] = (__int64)v6;
        if ( !v6 )
        {
LABEL_16:
          if ( v16 != 1 )
          {
            v12 = (_QWORD *)a1[1];
            goto LABEL_18;
          }
          goto LABEL_19;
        }
      }
      else
      {
        if ( (v11 & 0xC0) == 0 )
          goto LABEL_9;
LABEL_14:
        v10 = (_QWORD *)v7;
LABEL_15:
        if ( !v6 )
          goto LABEL_16;
      }
    }
  }
  v12 = nullptr;
  v9 = 0;
LABEL_18:
  v16 = 1;
  v6 = v12;
  if ( v12 )
    goto LABEL_3;
LABEL_19:
  if ( v9 )
    callui(51, v7, (int)&callui, a4, a5, a6);
  if ( v8 )
  {
    if ( a1[1] )
    {
      if ( !under_debugger )
        interr(147);
    }
    else
    {
      if ( !a1[3] )
      {
        if ( v17 )
          sub_49E8A0(*a1);
        goto LABEL_26;
      }
      if ( !under_debugger )
        interr(148);
    }
    BUG();
  }
LABEL_26:
  v13 = qword_2CA2088;
  if ( !qword_2CA2088 )
  {
    result = (char *)qword_2CA2080;
    qword_2CA2078 = 0;
    if ( !qword_2CA2080 )
      return result;
    goto LABEL_30;
  }
  qmutex_lock(qword_2CA2088);
  result = (char *)qword_2CA2080;
  qword_2CA2078 = 0;
  v13 = qword_2CA2088;
  if ( qword_2CA2080 )
  {
    do
    {
LABEL_30:
      if ( result[144] < 0 )
        break;
      qword_2CA2078 = (__int64)result;
      result = *(char **)result;
    }
    while ( result );
  }
  if ( v13 )
    return (char *)qmutex_unlock(v13);
  return result;
}

