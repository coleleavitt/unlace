_BYTE *__fastcall sub_E5EEC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rax

  v7 = a1[1];
  switch ( *(_BYTE *)(a2 + 73) >> 5 )
  {
    case 0:
    case 1:
      v11 = *(_BYTE **)(v7 + 32);
      if ( (unsigned __int64)v11 >= *(_QWORD *)(v7 + 24) )
      {
        sub_2257CD0(v7, 85);
      }
      else
      {
        *(_QWORD *)(v7 + 32) = v11 + 1;
        *v11 = 85;
      }
      break;
    case 2:
      v10 = *(_BYTE **)(v7 + 32);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v7 + 24) )
      {
        sub_2257CD0(v7, 84);
      }
      else
      {
        *(_QWORD *)(v7 + 32) = v10 + 1;
        *v10 = 84;
      }
      break;
    case 3:
      v9 = *(_BYTE **)(v7 + 32);
      if ( (unsigned __int64)v9 >= *(_QWORD *)(v7 + 24) )
      {
        sub_2257CD0(v7, 86);
      }
      else
      {
        *(_QWORD *)(v7 + 32) = v9 + 1;
        *v9 = 86;
      }
      break;
    case 4:
      sub_971800(v7, "W4");
      break;
    default:
      return sub_E5E850(a1, a2, 0, a4, a5, a6);
  }
  return sub_E5E850(a1, a2, 0, a4, a5, a6);
}

