__int64 __fastcall sub_9173E0(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  int v10; // eax
  __int64 v11; // r12
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r12
  unsigned int v14; // r12d
  unsigned int v15; // r12d
  void *v16; // r12
  unsigned __int8 v17; // [rsp+Fh] [rbp-89h]
  char v18; // [rsp+1Bh] [rbp-7Dh] BYREF
  int v19; // [rsp+1Ch] [rbp-7Ch] BYREF
  void *v20; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v21; // [rsp+28h] [rbp-70h]
  char v22; // [rsp+2Ch] [rbp-6Ch]
  void *v23; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-60h]
  char v25; // [rsp+3Ch] [rbp-5Ch]
  int v26; // [rsp+40h] [rbp-58h]
  void *v27; // [rsp+50h] [rbp-48h] BYREF
  unsigned int v28; // [rsp+58h] [rbp-40h]
  char v29; // [rsp+5Ch] [rbp-3Ch]
  int v30; // [rsp+60h] [rbp-38h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = (unsigned __int8)sub_915550(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v21 = 8;
        goto LABEL_20;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v12 = (unsigned __int8)sub_915900(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v21 = 8;
        v20 = (void *)v12;
        v22 = 1;
        goto LABEL_22;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = (unsigned __int16)sub_915930(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v21 = 16;
        goto LABEL_20;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v13 = (unsigned __int16)sub_915CE0(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v21 = 16;
        v20 = (void *)v13;
        v22 = 1;
        goto LABEL_22;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v14 = sub_915D10(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v21 = 32;
        v20 = (void *)v14;
        goto LABEL_21;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v15 = sub_9160C0(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v22 = 1;
        v21 = 32;
        v20 = (void *)v15;
        goto LABEL_22;
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v11 = sub_9160F0(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v21 = 64;
LABEL_20:
        v20 = (void *)v11;
LABEL_21:
        v22 = 0;
        goto LABEL_22;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v16 = (void *)sub_9164A0(*(_QWORD *)(a1 + 568));
        v10 = sub_256E510(a3);
        v21 = 64;
        v20 = v16;
        v22 = 1;
        goto LABEL_22;
      }
      break;
    case 8:
    case 9:
    case 10:
      result = 1;
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        v7 = *(_QWORD *)(a1 + 568);
        v8 = *(_QWORD *)(a1 + 792);
        *(_QWORD *)(a1 + 800) = *a4;
        v9 = (unsigned __int8)sub_8F4170(v7);
        v10 = sub_256E510(a3);
        v21 = 1;
        v20 = (void *)v9;
        v22 = 1;
LABEL_22:
        v19 = v10;
        sub_2574720(&v27, &v20, &v19, &v18);
        v24 = v28;
        v23 = v27;
        v25 = v29;
        v26 = v30;
        if ( v21 > 0x40 && v20 )
          operator delete[](v20);
        if ( !v18 || (result = sub_9C87D0(a1 + 384, v8, &v23), (_BYTE)result) )
        {
          sub_8F5F00(*(_QWORD *)(a1 + 568), (__int64)&v23);
          result = 1;
        }
        if ( v24 > 0x40 )
        {
          if ( v23 )
          {
            v17 = result;
            operator delete[](v23);
            result = v17;
          }
        }
      }
      break;
  }
  return result;
}

