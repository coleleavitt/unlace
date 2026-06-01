__int64 __fastcall sub_933450(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  void *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // r13
  void *v20; // rax
  unsigned __int8 v21; // [rsp+Fh] [rbp-49h]
  void *v22; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v23; // [rsp+18h] [rbp-40h]
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+28h] [rbp-30h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v10 = *(_QWORD *)(a1 + 568);
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = (char)sub_915550(v10);
        goto LABEL_25;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v13 = *(_QWORD *)(a1 + 568);
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = (unsigned __int8)sub_915900(v13);
        goto LABEL_25;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v14 = *(_QWORD *)(a1 + 568);
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = (__int16)sub_915930(v14);
        goto LABEL_25;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = (unsigned __int16)sub_915CE0(*(_QWORD *)(a1 + 568));
        goto LABEL_25;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v15 = *(_QWORD *)(a1 + 568);
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = (int)sub_915D10(v15);
        goto LABEL_25;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = (unsigned int)sub_9160C0(*(_QWORD *)(a1 + 568));
        goto LABEL_25;
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v16 = *(_QWORD *)(a1 + 568);
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v17 = sub_9160F0(v16);
        goto LABEL_24;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v11 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v17 = sub_9164A0(*(_QWORD *)(a1 + 568));
LABEL_24:
        v12 = v17;
LABEL_25:
        LOBYTE(v25) = 1;
        v24 = v12;
        result = sub_9E3ED0(a1 + 384, v11, a3, v12, v25);
      }
      break;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v18 = *(_QWORD *)(a1 + 568);
        v19 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_919FD0((__int64)&v22, v18);
        v20 = sub_9301F0((__int64)&v22);
        LOBYTE(v25) = 1;
        v24 = (__int64)v20;
        result = sub_9E3ED0(a1 + 384, v19, a3, v20, v25);
        if ( v23 > 0x40 )
          goto LABEL_6;
      }
      break;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v7 = *(_QWORD *)(a1 + 568);
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        sub_91A020((__int64)&v22, v7);
        v9 = sub_930AB0((__int64)&v22);
        LOBYTE(v25) = 1;
        v24 = (__int64)v9;
        result = sub_9E3ED0(a1 + 384, v8, a3, v9, v25);
        if ( v23 > 0x40 )
        {
LABEL_6:
          if ( v22 )
          {
            v21 = result;
            operator delete[](v22);
            result = v21;
          }
        }
      }
      break;
  }
  return result;
}

