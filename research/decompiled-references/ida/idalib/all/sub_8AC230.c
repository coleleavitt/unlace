__int64 __fastcall sub_8AC230(__int64 a1, time_t a2, int *a3)
{
  time_t v4; // rbp
  __int64 (__fastcall *v5)(); // rax
  __int64 v6; // rbx
  time_t v7; // rdx
  int v8; // eax
  time_t v9; // rdx

  v4 = a2;
  if ( *(_BYTE *)(a1 + 72) && *(_QWORD *)(a1 + 488) <= a2 )
  {
    *a3 = 6;
    return 1;
  }
  v5 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 88LL);
  if ( v5 == sub_8AFF40 )
  {
    if ( *(_DWORD *)(a1 + 208) )
    {
      v6 = a1 + 200;
LABEL_6:
      if ( !a2 )
        v4 = time(nullptr);
      v7 = *(_QWORD *)(v6 + 104);
      if ( v7 == -1 || (v8 = 0, v7 <= v4) )
      {
        v9 = *(_QWORD *)(v6 + 112);
        v8 = 1;
        if ( v9 )
        {
          if ( v4 >= v9 - 2592000 )
          {
            v8 = 2;
            if ( v4 >= v9 - 1296000 )
            {
              v8 = 3;
              if ( v9 <= v4 )
              {
                v8 = 4;
                if ( v4 >= v9 + 1296000 )
                  v8 = (v4 >= v9 + 2592000) + 5;
              }
            }
          }
        }
      }
      *a3 = v8;
      return 1;
    }
  }
  else
  {
    v6 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v5)(a1, 0, 0);
    if ( v6 )
      goto LABEL_6;
  }
  return 0;
}
