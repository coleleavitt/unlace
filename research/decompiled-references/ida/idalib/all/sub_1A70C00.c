__int64 __fastcall sub_1A70C00(__int64 *a1, char *a2, int a3, __int64 a4, double a5)
{
  char *v6; // rdi
  __int64 (*v9)(); // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // rdi
  unsigned int v12; // ecx
  __int64 (*v13)(); // rax
  unsigned int v14; // ebx
  __int64 (*v15)(); // rax
  unsigned __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  _BYTE v19[168]; // [rsp+0h] [rbp-A8h] BYREF

  v6 = a2;
  if ( (unsigned int)(a3 - 1499) <= 0x5B )
  {
    v13 = *(__int64 (**)())(*(_QWORD *)a2 + 584LL);
    if ( v13 == sub_A55EE0
      || (a2 = "dsp", !((unsigned __int8 (__fastcall *)(char *, char *, __int64))v13)(v6, "dsp", 3)) )
    {
      if ( (*(_BYTE *)(a4 + 3) & 1) != 0 )
      {
        v10 = *(_DWORD *)(a4 + 24);
      }
      else if ( *(char *)(a4 + 2) >= 0
             || (v10 = sub_EEB7E0(*(_QWORD *)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32), (__int64)a2, a5)) == 0 )
      {
        v10 = sub_EEB7E0(*(_QWORD *)(a4 + 32), (__int64)a2, a5);
        if ( !v10 )
        {
          v17 = *(unsigned int *)(a4 + 16);
          if ( (_DWORD)v17 )
          {
            v18 = *(_QWORD *)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32);
            if ( v18 )
              v10 = sub_EEB7E0(v18, v17, a5);
          }
        }
      }
      v12 = 4170;
      goto LABEL_17;
    }
    return 0;
  }
  if ( (unsigned int)(a3 - 1591) <= 0x2A )
  {
    v15 = *(__int64 (**)())(*(_QWORD *)a2 + 584LL);
    if ( v15 == sub_A55EE0
      || (a2 = "dspr2", !((unsigned __int8 (__fastcall *)(char *, char *, __int64))v15)(v6, "dspr2", 5)) )
    {
      if ( (*(_BYTE *)(a4 + 3) & 1) != 0 )
      {
        v10 = *(_DWORD *)(a4 + 24);
      }
      else if ( *(char *)(a4 + 2) >= 0
             || (v10 = sub_EEB7E0(*(_QWORD *)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32), (__int64)a2, a5)) == 0 )
      {
        v10 = sub_EEB7E0(*(_QWORD *)(a4 + 32), (__int64)a2, a5);
        if ( !v10 )
        {
          if ( *(_DWORD *)(a4 + 16) )
          {
            v16 = *(_QWORD *)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32);
            if ( v16 )
              v10 = sub_EEB7E0(v16, (__int64)a2, a5);
          }
        }
      }
      v12 = 4171;
      goto LABEL_17;
    }
    return 0;
  }
  if ( (unsigned int)(a3 - 1634) > 0x215 )
    return 0;
  v9 = *(__int64 (**)())(*(_QWORD *)a2 + 584LL);
  if ( v9 != sub_A55EE0 )
  {
    a2 = "msa";
    if ( ((unsigned __int8 (__fastcall *)(char *, char *, __int64))v9)(v6, "msa", 3) )
      return 0;
  }
  if ( (*(_BYTE *)(a4 + 3) & 1) != 0 )
  {
    v10 = *(_DWORD *)(a4 + 24);
  }
  else if ( *(char *)(a4 + 2) >= 0
         || (v10 = sub_EEB7E0(*(_QWORD *)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32), (__int64)a2, a5)) == 0 )
  {
    v10 = sub_EEB7E0(*(_QWORD *)(a4 + 32), (__int64)a2, a5);
    if ( !v10 && *(_DWORD *)(a4 + 16) )
    {
      v11 = *(_QWORD *)(a4 + 8 * (((*(_BYTE *)(a4 + 2) & 8) != 0) + 1LL) + 32);
      if ( v11 )
        v10 = sub_EEB7E0(v11, (__int64)a2, a5);
    }
  }
  v12 = 4172;
LABEL_17:
  sub_168B9F0((__int64)v19, a1, v10, v12, 0);
  v14 = v19[120];
  sub_15F7200(v19);
  return v14;
}
