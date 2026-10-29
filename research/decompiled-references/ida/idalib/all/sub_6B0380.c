_BYTE *__fastcall sub_6B0380(_QWORD *a1, _BYTE *a2, __int64 a3, unsigned int *a4, int a5, unsigned int a6)
{
  __int64 v10; // rsi
  __int64 v12; // rax
  __int64 *v13; // rax
  __int64 v14; // r13
  __int64 v15; // r14
  _BYTE *v16; // r12
  _BYTE *v17; // rax
  _BYTE *v18; // r15
  char *v19; // rdx
  char v20; // si
  __int64 v21; // rdx
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // r8d

  if ( (a6 & 1) != 0 && (unsigned int)sub_6A7D10(a1, a4, (unsigned int)a5, 0, 0) )
  {
    if ( !under_debugger )
      interr(664);
    goto LABEL_36;
  }
  v10 = *a4;
  if ( (_DWORD)v10 == 2 )
  {
    v13 = *((__int64 **)a4 + 1);
    v14 = *v13;
    v15 = *v13 + 24 * v13[1];
    v16 = &a2[a3];
    if ( v15 != *v13 )
    {
      v17 = a2;
      while ( 1 )
      {
        if ( a2 == v17 )
        {
          v21 = a3;
          v18 = a2;
        }
        else
        {
          if ( v17 >= v16 )
          {
            if ( !under_debugger )
              interr(520);
LABEL_36:
            BUG();
          }
          v18 = v16 - 1;
          v19 = ", ";
          if ( v16 - 1 == v17 )
          {
LABEL_30:
            *(v16 - 1) = 0;
            v21 = 1;
          }
          else
          {
            while ( 1 )
            {
              v20 = *v19++;
              *v17 = v20;
              if ( !v20 )
                break;
              if ( ++v17 == v18 )
                goto LABEL_30;
            }
            v18 = v17;
            v21 = v16 - v17;
          }
        }
        v22 = *(unsigned __int16 *)(v14 + 16);
        v23 = v14;
        v24 = *(unsigned __int16 *)(v14 + 18);
        v14 += 24;
        v17 = &sub_6AFDF0(a1, v18, v21, v23, v24, v22, 1)[(_QWORD)v18];
        if ( v14 == v15 )
          return (_BYTE *)(v17 - a2);
      }
    }
    return nullptr;
  }
  if ( (int)v10 > 2 )
  {
    if ( (unsigned int)(v10 - 3) <= 3 )
      return sub_6AFDF0(a1, a2, a3, (__int64)a4, a5, 0, 0);
    v12 = sub_6B1FD0(a1, v10, a3);
    if ( v12 )
      return (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *, __int64, unsigned int *, _QWORD, _QWORD))(v12 + 48))(
                        a2,
                        a3,
                        a4,
                        a5,
                        a6);
LABEL_32:
    if ( !under_debugger )
      interr(659);
    goto LABEL_36;
  }
  if ( !(_DWORD)v10 )
    return (_BYTE *)(qstpncpy(a2, "BADLOC", a3) - (_QWORD)a2);
  if ( (_DWORD)v10 != 1 )
    goto LABEL_32;
  if ( (a6 & 2) == 0 )
  {
    if ( a3 > 0 )
      *a2 = 0;
    return nullptr;
  }
  return sub_6AFDF0(a1, a2, a3, (__int64)a4, a5, 0xFFFF, 1);
}
