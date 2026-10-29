__int64 __fastcall sub_D0BA20(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h]

  switch ( a2 )
  {
    case 0:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v11 = *(_QWORD *)(a1 + 560);
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v13 = (char)sub_CFEA20(v11);
        goto LABEL_18;
      }
      break;
    case 1:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v14 = *(_QWORD *)(a1 + 560);
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v13 = (unsigned __int8)sub_CFF120(v14);
        goto LABEL_18;
      }
      break;
    case 2:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v15 = *(_QWORD *)(a1 + 560);
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v13 = (__int16)sub_CFF630(v15);
        goto LABEL_18;
      }
      break;
    case 3:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v16 = *(_QWORD *)(a1 + 560);
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v13 = (unsigned __int16)sub_CFFD50(v16);
        goto LABEL_18;
      }
      break;
    case 4:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v17 = *(_QWORD *)(a1 + 560);
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v13 = (int)sub_CFFE60(v17);
        goto LABEL_18;
      }
      break;
    case 5:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v18 = *(_QWORD *)(a1 + 560);
        v12 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v13 = (unsigned int)sub_D00570(v18);
LABEL_18:
        result = sub_DA9090(a1 + 384, v12, a3, v13, 1);
      }
      break;
    case 6:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v10 = sub_D00680(*(_QWORD *)(a1 + 560));
        goto LABEL_23;
      }
      break;
    case 7:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v19 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v10 = sub_D00DC0(v19);
        goto LABEL_23;
      }
      break;
    case 8:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v21 = sub_D01350(*(_QWORD *)(a1 + 560));
        v22 = v20;
        v10 = (__int64)sub_D0B7C0((__int64)&v21);
        goto LABEL_23;
      }
      break;
    case 9:
      result = 1;
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v7 = *(_QWORD *)(a1 + 560);
        v8 = *(_QWORD *)(a1 + 1232);
        *(_QWORD *)(a1 + 1240) = *a4;
        v21 = sub_D01480(v7);
        v22 = v9;
        v10 = (__int64)sub_D0B940((__int64)&v21);
LABEL_23:
        result = sub_DA9090(a1 + 384, v8, a3, v10, 1);
      }
      break;
  }
  return result;
}

