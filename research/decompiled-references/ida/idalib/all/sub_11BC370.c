__int64 __fastcall sub_11BC370(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 result; // rax
  int v8; // edx
  bool v9; // dl
  const char *v10; // rsi
  int v11; // edx
  int v12; // eax
  int v13; // eax

  v6 = (*(__int64 (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)a1 + 616LL))(a1, a4);
  result = (unsigned int)a1[16];
  if ( (_DWORD)result == 49 )
  {
    if ( v6 == 1 )
      goto LABEL_20;
    v8 = a1[15];
    goto LABEL_5;
  }
  v8 = a1[15];
  if ( v8 != 39 )
  {
    if ( v6 == 2 && (_DWORD)result == 17 )
      return result;
LABEL_5:
    if ( v8 == 26 )
      return result;
    if ( a1[17] == 7 )
      return result;
    v9 = v8 == 15;
    if ( (_DWORD)result == 27 && v9 )
      return result;
    goto LABEL_9;
  }
  if ( v6 == 1 )
    goto LABEL_20;
  v9 = (_DWORD)result == 17 && v6 == 2;
  if ( v9 || a1[17] == 7 )
    return result;
LABEL_9:
  if ( ((_DWORD)result || !v9) && v6 )
  {
    result = sub_10DCD30(a4, 0xCDDu);
    if ( !result )
    {
      result = sub_10DCD30(a4, 0xCE3u);
      if ( !result )
      {
        result = sub_10DCD30(a4, 0xCE2u);
        if ( !result && a1[16] != 17 )
        {
          result = sub_10DCD30(a4, 0xCBEu);
          if ( result )
          {
            if ( v6 == 1 )
            {
              v12 = a1[15];
              if ( v12 != 20 )
              {
                if ( v12 == 15 && ((v13 = a1[16], v13 == 29) || v13 == 1) )
                  v10 = "-l:libunwind.dll.a";
                else
                  v10 = "-l:libunwind.so";
                return sub_10DC5D0(a3, (__int64)v10);
              }
              goto LABEL_39;
            }
            goto LABEL_33;
          }
          if ( v6 == 1 )
          {
            result = (unsigned int)a1[16];
            if ( (_DWORD)result == 17 )
            {
LABEL_39:
              v10 = "-lunwind";
              return sub_10DC5D0(a3, (__int64)v10);
            }
          }
          else
          {
            if ( *(_DWORD *)(a2 + 16) == 1 )
              goto LABEL_33;
            result = (unsigned int)a1[16];
            if ( (_DWORD)result == 17 )
              goto LABEL_33;
          }
          v11 = a1[15];
          if ( v11 == 15 )
          {
            if ( (_DWORD)result == 29 || (_DWORD)result == 1 )
            {
LABEL_38:
              if ( v6 == 1 )
                goto LABEL_39;
LABEL_33:
              if ( v6 != 2 )
                return result;
              v10 = "-lgcc_s";
              return sub_10DC5D0(a3, (__int64)v10);
            }
          }
          else if ( v11 == 20 )
          {
            goto LABEL_38;
          }
          sub_11BBC70((__int64)a1, a4, a3, 1);
          if ( v6 == 1 )
          {
            sub_10DC5D0(a3, (__int64)"-lunwind");
          }
          else if ( v6 == 2 )
          {
            sub_10DC5D0(a3, (__int64)"-lgcc_s");
          }
          return sub_11BBC70((__int64)a1, a4, a3, 0);
        }
      }
    }
    if ( v6 != 1 )
    {
      if ( v6 != 2 )
        return result;
      v10 = "-lgcc_eh";
      return sub_10DC5D0(a3, (__int64)v10);
    }
    if ( a1[15] == 20 )
      return result;
LABEL_20:
    v10 = "-l:libunwind.a";
    return sub_10DC5D0(a3, (__int64)v10);
  }
  return result;
}
