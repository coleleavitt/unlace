__int64 __fastcall sub_3E5820(__int64 a1, __int64 a2, double a3)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  int v5; // r13d
  __int64 v6; // r15
  void *(*v7)(); // rdx
  int v8; // eax
  int v9; // r13d
  __int64 v10; // r15
  void *(*v11)(); // rdx
  int v12; // eax
  int v13; // eax
  int v14; // edx
  unsigned __int64 v15; // rax
  __int64 v17; // r13

  v3 = getinf_flag(67, 16);
  if ( (_BYTE)v3 )
  {
    if ( !under_debugger )
      sub_37E160(0xCC0Eu, 16, a3);
    BUG();
  }
  v4 = v3;
  if ( !*(_BYTE *)(a1 + 392) )
  {
    if ( *(_QWORD *)(a2 + 8) != -1 )
      goto LABEL_4;
LABEL_24:
    if ( *(_DWORD *)(a2 + 24) )
      return v4;
    goto LABEL_4;
  }
  v17 = *(_QWORD *)a2;
  if ( v17 > (int)(sub_EEB80(*(_QWORD *)(a1 + 280)) + 4
                                                    * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 280) + 1504LL) + 80LL)) )
    return v4;
  if ( *(_QWORD *)(a2 + 8) == -1 )
    goto LABEL_24;
LABEL_4:
  if ( *(_QWORD *)(a2 + 16) != -1 || !*(_DWORD *)(a2 + 28) )
  {
    sub_195520(a1, a2);
    v5 = *(_DWORD *)(a2 + 24);
    if ( v5 >= 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v7 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
      v8 = 4;
      if ( v7 != sub_3E4BE0 )
        v8 = *(char *)(((__int64 (__fastcall *)(__int64))v7)(a1) + 12);
      if ( v5 <= (int)v6 * v8 )
      {
        v9 = *(_DWORD *)(a2 + 28);
        if ( v9 >= 0 )
        {
          v10 = *(_QWORD *)(a1 + 48);
          v11 = *(void *(**)())(*(_QWORD *)a1 + 24LL);
          v12 = 4;
          if ( v11 != sub_3E4BE0 )
            v12 = *(char *)(((__int64 (__fastcall *)(__int64))v11)(a1) + 13);
          if ( v9 <= (int)v10 * v12 )
          {
            v13 = *(_DWORD *)(a2 + 24);
            if ( (v13 & 3) == 0 )
            {
              v14 = *(_DWORD *)(a2 + 28);
              if ( (v14 & 3) == 0 && v13 >= *(_DWORD *)(a1 + 384) && v14 >= *(_DWORD *)(a1 + 388) )
              {
                if ( *(_BYTE *)(a1 + 392) )
                {
                  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 280) + 144LL);
                  if ( v15 >= *(_QWORD *)(a2 + 8) )
                    LOBYTE(v4) = v15 >= *(_QWORD *)(a2 + 16);
                }
                else
                {
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  return v4;
}
