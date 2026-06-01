_BYTE *__fastcall sub_E8C700(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  _DWORD *v4; // rdx
  _BYTE *result; // rax
  __int64 v6; // rdi
  _BYTE *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  bool v13; // zf
  __int64 v14; // rax
  __int64 v15; // rax
  _WORD *v16; // rdx
  __int64 v17; // rdi
  _WORD *v18; // rdx
  __int64 v19; // rdi

  v3 = *a1;
  v4 = *(_DWORD **)(v3 + 32);
  result = (_BYTE *)(*(_QWORD *)(v3 + 24) - (_QWORD)v4);
  if ( (unsigned __int64)result > 3 )
  {
    *v4 = 1735287143;
    *(_QWORD *)(v3 + 32) += 4LL;
  }
  else
  {
    result = (_BYTE *)sub_22581D0(v3, "gang", 4);
  }
  if ( *(_DWORD *)(a2 + 32) )
  {
    v6 = *a1;
    v7 = *(_BYTE **)(*a1 + 32);
    if ( *(_BYTE **)(*a1 + 24) == v7 )
    {
      sub_22581D0(v6, "(", 1);
    }
    else
    {
      *v7 = 40;
      ++*(_QWORD *)(v6 + 32);
    }
    v8 = *(_QWORD *)(a2 + 32);
    v9 = 0;
    if ( (_DWORD)v8 )
    {
      while ( 1 )
      {
        v10 = *a1;
        v11 = *(_BYTE *)(v9 + a2 + 8LL * (unsigned int)v8 + 40);
        v12 = *(_QWORD *)(*a1 + 32);
        if ( v11 == 1 )
          break;
        v13 = v11 == 0;
        v14 = *(_QWORD *)(v10 + 24);
        if ( v13 )
        {
          if ( (unsigned __int64)(v14 - v12) > 2 )
          {
            *(_BYTE *)(v12 + 2) = 109;
            *(_WORD *)v12 = 30062;
            v16 = (_WORD *)(*(_QWORD *)(v10 + 32) + 3LL);
            *(_QWORD *)(v10 + 32) = v16;
          }
          else
          {
            v15 = sub_22581D0(v10, "num", 3);
            v16 = *(_WORD **)(v15 + 32);
            v10 = v15;
          }
          goto LABEL_11;
        }
        if ( (unsigned __int64)(v14 - v12) > 5 )
        {
          *(_DWORD *)v12 = 1952543859;
          *(_WORD *)(v12 + 4) = 25449;
          v16 = (_WORD *)(*(_QWORD *)(v10 + 32) + 6LL);
          *(_QWORD *)(v10 + 32) = v16;
          goto LABEL_11;
        }
        v10 = sub_22581D0(v10, "static", 6);
        v16 = *(_WORD **)(v10 + 32);
        if ( *(_QWORD *)(v10 + 24) - (_QWORD)v16 <= 1u )
        {
LABEL_12:
          sub_22581D0(v10, ": ", 2);
          goto LABEL_13;
        }
LABEL_21:
        *v16 = 8250;
        *(_QWORD *)(v10 + 32) += 2LL;
LABEL_13:
        sub_EE3EC0(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8 * v9), *a1, 0, a1[1], 0, 0, (__int64)"\n", 1);
        if ( (unsigned int)(v9 + 1) >= *(_DWORD *)(a2 + 32) )
          goto LABEL_24;
        v17 = *a1;
        v18 = *(_WORD **)(*a1 + 32);
        if ( *(_QWORD *)(*a1 + 24) - (_QWORD)v18 > 1u )
        {
          *v18 = 8236;
          *(_QWORD *)(v17 + 32) += 2LL;
        }
        else
        {
          sub_22581D0(v17, ", ", 2);
        }
        v8 = *(_QWORD *)(a2 + 32);
        ++v9;
      }
      if ( (unsigned __int64)(*(_QWORD *)(v10 + 24) - v12) > 2 )
      {
        *(_BYTE *)(v12 + 2) = 109;
        *(_WORD *)v12 = 26980;
        v16 = (_WORD *)(*(_QWORD *)(v10 + 32) + 3LL);
        *(_QWORD *)(v10 + 32) = v16;
      }
      else
      {
        v10 = sub_22581D0(v10, "dim", 3);
        v16 = *(_WORD **)(v10 + 32);
      }
LABEL_11:
      if ( *(_QWORD *)(v10 + 24) - (_QWORD)v16 <= 1u )
        goto LABEL_12;
      goto LABEL_21;
    }
LABEL_24:
    v19 = *a1;
    result = *(_BYTE **)(*a1 + 32);
    if ( result == *(_BYTE **)(*a1 + 24) )
    {
      return (_BYTE *)sub_22581D0(v19, ")", 1);
    }
    else
    {
      *result = 41;
      ++*(_QWORD *)(v19 + 32);
    }
  }
  return result;
}

