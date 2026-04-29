__int64 __fastcall sub_36D0(__int64 a1)
{
  unsigned int v1; // r12d
  int v2; // eax
  unsigned int v3; // eax
  unsigned __int64 v4; // rax
  char v6; // dl
  __int64 v7; // r12
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  unsigned int v11; // eax

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 )
    return 0;
  v2 = *(_DWORD *)(a1 + 56);
  if ( v2 == -1 || (v3 = v2 + 1, *(_DWORD *)(a1 + 56) = v3, v3 <= 0x400) )
  {
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 < *(_QWORD *)(a1 + 8) )
    {
      v6 = *(_BYTE *)(*(_QWORD *)a1 + v4);
      if ( v6 == 66 )
      {
        *(_QWORD *)(a1 + 32) = v4 + 1;
        v9 = sub_1430(a1);
        if ( !*(_DWORD *)(a1 + 44) )
        {
          v10 = *(_QWORD *)(a1 + 32);
          *(_QWORD *)(a1 + 32) = v9;
          v11 = sub_36D0(a1);
          *(_QWORD *)(a1 + 32) = v10;
          v1 = v11;
        }
        v3 = *(_DWORD *)(a1 + 56);
        goto LABEL_6;
      }
      if ( v6 == 73 )
      {
        *(_QWORD *)(a1 + 32) = v4 + 1;
        sub_3070(a1, 0);
        if ( !*(_QWORD *)(a1 + 40) )
          (*(void (__fastcall **)(char *, __int64, _QWORD))(a1 + 24))("<", 1, *(_QWORD *)(a1 + 16));
        v7 = 0;
        if ( !*(_DWORD *)(a1 + 40) )
        {
          while ( 1 )
          {
            v8 = *(_QWORD *)(a1 + 32);
            if ( v8 < *(_QWORD *)(a1 + 8) && *(_BYTE *)(*(_QWORD *)a1 + v8) == 69 )
              break;
            if ( v7 && !*(_QWORD *)(a1 + 40) )
              (*(void (__fastcall **)(const char *, __int64, _QWORD))(a1 + 24))(", ", 2, *(_QWORD *)(a1 + 16));
            ++v7;
            sub_3000(a1);
            if ( *(_DWORD *)(a1 + 40) )
              goto LABEL_15;
          }
          *(_QWORD *)(a1 + 32) = v8 + 1;
        }
LABEL_15:
        v3 = *(_DWORD *)(a1 + 56);
        v1 = 1;
        goto LABEL_6;
      }
    }
    sub_3070(a1, 0);
    v3 = *(_DWORD *)(a1 + 56);
  }
  else
  {
    *(_DWORD *)(a1 + 40) = 1;
  }
LABEL_6:
  if ( v3 != -1 )
    *(_DWORD *)(a1 + 56) = v3 - 1;
  return v1;
}
