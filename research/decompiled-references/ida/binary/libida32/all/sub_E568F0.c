void __fastcall sub_E568F0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  _BYTE *v6; // rax
  __int64 v7; // rdi
  _BYTE *v8; // rax
  __int64 v9; // rdi
  _BYTE *v10; // rax
  __int64 v11; // rdi
  _BYTE *v12; // rax
  __int64 v13; // rdi
  _BYTE *v14; // rax
  __int64 v15; // rdi
  _BYTE *v16; // rax
  __int64 v17; // rdi
  _BYTE *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  _BYTE *v21; // rax
  __int64 v22; // rdi
  _BYTE *v23; // rax
  __int64 v24; // rdi
  _BYTE *v25; // rax
  size_t v26; // rax
  __int64 v27; // [rsp+4h] [rbp-74h] BYREF
  char v28; // [rsp+Ch] [rbp-6Ch]
  __int64 v29[13]; // [rsp+10h] [rbp-68h] BYREF

  switch ( a2 )
  {
    case 0LL:
    case 6LL:
    case 7LL:
      v7 = a1[1];
      v8 = *(_BYTE **)(v7 + 32);
      if ( *(_QWORD *)(v7 + 24) <= (unsigned __int64)v8 )
      {
        sub_2257CD0(v7, 65);
      }
      else
      {
        *(_QWORD *)(v7 + 32) = v8 + 1;
        *v8 = 65;
      }
      break;
    case 1LL:
      v9 = a1[1];
      v10 = *(_BYTE **)(v9 + 32);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v9 + 24) )
      {
        sub_2257CD0(v9, 71);
      }
      else
      {
        *(_QWORD *)(v9 + 32) = v10 + 1;
        *v10 = 71;
      }
      break;
    case 2LL:
      v11 = a1[1];
      v12 = *(_BYTE **)(v11 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
      {
        sub_2257CD0(v11, 73);
      }
      else
      {
        *(_QWORD *)(v11 + 32) = v12 + 1;
        *v12 = 73;
      }
      break;
    case 3LL:
      v13 = a1[1];
      v14 = *(_BYTE **)(v13 + 32);
      if ( (unsigned __int64)v14 >= *(_QWORD *)(v13 + 24) )
      {
        sub_2257CD0(v13, 69);
      }
      else
      {
        *(_QWORD *)(v13 + 32) = v14 + 1;
        *v14 = 69;
      }
      break;
    case 4LL:
      v15 = a1[1];
      v16 = *(_BYTE **)(v15 + 32);
      if ( (unsigned __int64)v16 >= *(_QWORD *)(v15 + 24) )
      {
        sub_2257CD0(v15, 81);
      }
      else
      {
        *(_QWORD *)(v15 + 32) = v16 + 1;
        *v16 = 81;
      }
      break;
    case 5LL:
      v17 = a1[1];
      v18 = *(_BYTE **)(v17 + 32);
      if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
      {
        sub_2257CD0(v17, 67);
      }
      else
      {
        *(_QWORD *)(v17 + 32) = v18 + 1;
        *v18 = 67;
      }
      break;
    case 8LL:
      v19 = a1[1];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*a1 + 8) + 2320LL) + 164LL) & 4) != 0 )
        sub_971800(v19, "x");
      else
        sub_971800(v19, "w");
      break;
    case 14LL:
      v20 = a1[1];
      v21 = *(_BYTE **)(v20 + 32);
      if ( (unsigned __int64)v21 >= *(_QWORD *)(v20 + 24) )
      {
        sub_2257CD0(v20, 83);
      }
      else
      {
        *(_QWORD *)(v20 + 32) = v21 + 1;
        *v21 = 83;
      }
      break;
    case 15LL:
      v22 = a1[1];
      v23 = *(_BYTE **)(v22 + 32);
      if ( (unsigned __int64)v23 >= *(_QWORD *)(v22 + 24) )
      {
        sub_2257CD0(v22, 87);
      }
      else
      {
        *(_QWORD *)(v22 + 32) = v23 + 1;
        *v23 = 87;
      }
      break;
    case 16LL:
      v24 = a1[1];
      v25 = *(_BYTE **)(v24 + 32);
      if ( (unsigned __int64)v25 >= *(_QWORD *)(v24 + 24) )
      {
        sub_2257CD0(v24, 85);
      }
      else
      {
        *(_QWORD *)(v24 + 32) = v25 + 1;
        *v25 = 85;
      }
      break;
    case 21LL:
      v5 = a1[1];
      v6 = *(_BYTE **)(v5 + 32);
      if ( (unsigned __int64)v6 >= *(_QWORD *)(v5 + 24) )
      {
        sub_2257CD0(v5, 86);
      }
      else
      {
        *(_QWORD *)(v5 + 32) = v6 + 1;
        *v6 = 86;
      }
      break;
    default:
      v26 = j__strlen("calling convention");
      sub_E55260((__int64)v29, *a1, a3, "calling convention", v26);
      v27 = a3;
      v28 = 1;
      sub_AC88D0(v29, &v27);
      sub_AC6300((__int64)v29);
      break;
  }
}

