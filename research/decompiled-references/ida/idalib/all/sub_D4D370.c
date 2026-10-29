__int64 __fastcall sub_D4D370(__int64 a1, int a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v7 = a1 + 384;
      *(_QWORD *)(v7 + 856) = *a5;
      result = sub_D0C620(v7, a3, a4);
      break;
    case 1:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v8 = a1 + 384;
      *(_QWORD *)(v8 + 856) = *a5;
      result = sub_D0C830(v8, a3, a4);
      break;
    case 2:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v9 = a1 + 384;
      *(_QWORD *)(v9 + 856) = *a5;
      result = sub_D0CC20(v9, a3, a4);
      break;
    case 3:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v10 = a1 + 384;
      *(_QWORD *)(v10 + 856) = *a5;
      result = sub_D0CE30(v10, a3, a4);
      break;
    case 4:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v11 = a1 + 384;
      *(_QWORD *)(v11 + 856) = *a5;
      result = sub_D0D220(v11, a3, a4);
      break;
    case 5:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v12 = a1 + 384;
      *(_QWORD *)(v12 + 856) = *a5;
      result = sub_D0D640(v12, a3, a4);
      break;
    case 6:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v13 = a1 + 384;
      *(_QWORD *)(v13 + 856) = *a5;
      result = sub_D0DA10(v13, a3, a4);
      break;
    case 7:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v14 = a1 + 384;
      *(_QWORD *)(v14 + 856) = *a5;
      result = sub_D0DE40(v14, a3, a4);
      break;
    case 8:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v15 = a1 + 384;
      *(_QWORD *)(v15 + 856) = *a5;
      result = sub_D49A90(v15, a3, a4);
      break;
    case 9:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v16 = a1 + 384;
      *(_QWORD *)(v16 + 856) = *a5;
      result = sub_D4D1A0(v16, a3, a4);
      break;
    case 10:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v17 = a1 + 384;
      *(_QWORD *)(v17 + 856) = *a5;
      result = sub_D0E800(v17, a3, a4);
      break;
    case 11:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v18 = a1 + 384;
      *(_QWORD *)(v18 + 856) = *a5;
      result = sub_D0F210(v18, a3, a4);
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v19 = a1 + 384;
      *(_QWORD *)(v19 + 856) = *a5;
      result = sub_D0E470(v19, a3, a4);
      break;
    case 13:
      if ( *(_DWORD *)(a1 + 1252) != *(_DWORD *)(a1 + 1256) )
        goto LABEL_3;
      v20 = a1 + 384;
      *(_QWORD *)(v20 + 856) = *a5;
      result = sub_D0EB30(v20, a3, a4);
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
      {
        v6 = a1 + 384;
        *(_QWORD *)(v6 + 856) = *a5;
        result = sub_D0EF90(v6, a3, a4);
      }
      else
      {
LABEL_3:
        result = 1;
      }
      break;
  }
  return result;
}
