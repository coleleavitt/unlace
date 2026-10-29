__int64 __fastcall sub_D001E0(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // r12
  __int64 v7; // r13
  void *v8; // rax
  void *v9; // rax
  void *v10; // rax
  void *v11; // rax
  void *v12; // rax
  void *v13; // [rsp+0h] [rbp-38h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-30h]
  char v15; // [rsp+Ch] [rbp-2Ch]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v9 = (void *)*(unsigned __int8 *)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 8;
          v15 = 0;
          v13 = v9;
          goto LABEL_29;
        }
      }
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v8 = (void *)*(unsigned __int8 *)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 8;
          goto LABEL_25;
        }
      }
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v10 = (void *)*(unsigned __int16 *)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 16;
          v15 = 0;
          v13 = v10;
          goto LABEL_29;
        }
      }
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v8 = (void *)*(unsigned __int16 *)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 16;
          goto LABEL_25;
        }
      }
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v11 = (void *)*(unsigned int *)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 32;
          v15 = 0;
          v13 = v11;
          goto LABEL_29;
        }
      }
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v8 = (void *)*(unsigned int *)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 32;
          goto LABEL_25;
        }
      }
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v12 = *(void **)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 64;
          v15 = 0;
          v13 = v12;
          goto LABEL_29;
        }
      }
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v8 = *(void **)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 64;
          goto LABEL_25;
        }
      }
      break;
    case 8:
    case 9:
    case 10:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        v7 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        if ( (unsigned __int8)sub_E21C70(a1 + 384) )
        {
          v8 = (void *)*(unsigned __int8 *)sub_E21760(*(_QWORD *)(a1 + 560), 8);
          v14 = 1;
LABEL_25:
          v13 = v8;
          v15 = 1;
LABEL_29:
          sub_DF9DA0(v6, v7, a3, &v13);
          if ( v14 > 0x40 && v13 )
            operator delete[](v13);
        }
      }
      break;
  }
  return 1;
}
