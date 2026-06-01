__int64 __fastcall sub_187290(__int64 *a1, unsigned int *a2, char a3, unsigned __int16 *a4, __int64 a5)
{
  __int64 v9; // rax
  void (*v11)(); // rax
  char v12; // al
  __int64 v13; // rdi
  __int64 result; // rax
  __int64 v15; // rdi
  char *v16; // rsi
  unsigned int v17; // r12d
  char *i; // rax
  bool v19; // zf
  unsigned int v20; // ebp
  int utf8_char; // eax
  const char *v22; // rdx
  const char *v23; // rdi
  const char *v24; // [rsp+10h] [rbp-48h] BYREF
  __int128 v25; // [rsp+18h] [rbp-40h]
  unsigned __int64 v26; // [rsp+28h] [rbp-30h]

  v9 = *a1;
  v26 = __readfsqword(0x28u);
  v11 = *(void (**)())(v9 + 216);
  if ( v11 == nullsub_56 )
  {
    v12 = a3 - 32;
    goto LABEL_3;
  }
  v11();
  v12 = a3 - 32;
  if ( (unsigned __int8)(a3 - 32) <= 0x54u )
  {
LABEL_3:
    switch ( v12 )
    {
      case 0:
        v17 = 1;
        (*(void (__fastcall **)(unsigned int *, unsigned __int16 *))(*(_QWORD *)a2 + 184LL))(a2, a4);
        for ( i = strchr((const char *)a4, 10); i; i = strchr(i + 1, 10) )
          ++v17;
        v19 = *(_BYTE *)a4 == 0;
        v24 = (const char *)a4;
        v20 = 0;
        if ( !v19 )
        {
          do
          {
            utf8_char = get_utf8_char();
            v22 = v24;
            if ( utf8_char == -1 )
            {
              ++v24;
              utf8_char = *(unsigned __int8 *)v22++;
            }
            v20 += utf8_char != 126;
          }
          while ( *v22 );
        }
        sub_18C0C0(a2, a2[8], a2[9], v20, v17);
        TView::drawView((TView *)a2);
        return 1;
      case 34:
      case 75:
        delStr(*((const char **)a2 + 9));
        *((_QWORD *)a2 + 9) = qstrdup();
        (*(void (__fastcall **)(unsigned int *))(*(_QWORD *)a2 + 80LL))(a2);
        return 1;
      case 35:
      case 50:
      case 67:
      case 82:
        (*(void (__fastcall **)(unsigned int *, _QWORD, _QWORD))(*(_QWORD *)a2 + 184LL))(
          a2,
          *(unsigned int *)(a5 + 48),
          *a4);
        TView::drawView((TView *)a2);
        return 1;
      case 37:
        v15 = *((_QWORD *)a2 + 20);
        if ( v15 && a4 )
          sub_197720(v15, a4, -1);
        return 1;
      case 39:
      case 71:
        (*(void (__fastcall **)(unsigned int *, unsigned __int16 *))(*(_QWORD *)a2 + 104LL))(a2, a4);
        return 1;
      case 43:
        result = 0;
        break;
      case 66:
        if ( *((_BYTE *)a2 + 116) )
        {
          THistory::setCurrentIndex(**(THistory ***)(a5 + 8), *(_DWORD *)a4);
        }
        else
        {
          if ( *((_QWORD *)a4 + 1) )
            v16 = *(char **)a4;
          else
            v16 = &byte_251020;
          (*(void (__fastcall **)(unsigned int *, char *))(*(_QWORD *)a2 + 104LL))(a2, v16);
        }
        return 1;
      case 84:
        sub_18DB00(a2, a4 + 4);
        return 1;
      default:
        goto LABEL_5;
    }
    return result;
  }
LABEL_5:
  v13 = sub_18BE40((unsigned int)a3);
  if ( v13 )
    return (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *, unsigned __int16 *))(*(_QWORD *)v13 + 32LL))(
             v13,
             a5,
             a2,
             a4);
  v25 = 0;
  v24 = nullptr;
  result = sub_184C00((__int64)a1, (__int64)a4, a3, &v24, 0);
  v23 = v24;
  if ( (_BYTE)result )
  {
    if ( (unsigned __int64)v25 > 1 )
    {
      (*(void (__fastcall **)(unsigned int *, const char *))(*(_QWORD *)a2 + 104LL))(a2, v24);
      v23 = v24;
    }
    if ( v23 )
    {
      *(_QWORD *)&v25 = 0;
      qfree();
    }
    return 1;
  }
  else if ( v24 )
  {
    *(_QWORD *)&v25 = 0;
    qfree();
    return 0;
  }
  return result;
}

