void __fastcall sub_E56510(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbp
  __int64 v4; // rdi
  _BYTE *v5; // rdx
  _BYTE *v6; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  _BYTE *v11; // rax
  _BYTE *v12; // rax
  void *v13; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v14; // [rsp+8h] [rbp-20h]

  v2 = a2;
  v4 = *a2;
  switch ( sub_21D5100(*a2) )
  {
    case 0LL:
      v4 = *(_QWORD *)(a1 + 8);
      v8 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v8 >= *(_QWORD *)(v4 + 24) )
      {
        a2 = &qword_50 + 6;
        sub_2257CD0(v4, 86);
      }
      else
      {
        v5 = v8 + 1;
        *(_QWORD *)(v4 + 32) = v8 + 1;
        *v8 = 86;
      }
      break;
    case 1LL:
      v4 = *(_QWORD *)(a1 + 8);
      v9 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v9 >= *(_QWORD *)(v4 + 24) )
      {
        a2 = &qword_50 + 7;
        sub_2257CD0(v4, 87);
      }
      else
      {
        v5 = v9 + 1;
        *(_QWORD *)(v4 + 32) = v9 + 1;
        *v9 = 87;
      }
      break;
    case 2LL:
      v4 = *(_QWORD *)(a1 + 8);
      v10 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v10 >= *(_QWORD *)(v4 + 24) )
      {
        a2 = (_QWORD *)(&dword_40 + 1);
        sub_2257CD0(v4, 65);
      }
      else
      {
        v5 = v10 + 1;
        *(_QWORD *)(v4 + 32) = v10 + 1;
        *v10 = 65;
      }
      break;
    case 3LL:
      v4 = *(_QWORD *)(a1 + 8);
      v11 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v11 >= *(_QWORD *)(v4 + 24) )
      {
        a2 = (_QWORD *)(&dword_40 + 2);
        sub_2257CD0(v4, 66);
      }
      else
      {
        v5 = v11 + 1;
        *(_QWORD *)(v4 + 32) = v11 + 1;
        *v11 = 66;
      }
      break;
    case 4LL:
      v4 = *(_QWORD *)(a1 + 8);
      v12 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v12 >= *(_QWORD *)(v4 + 24) )
      {
        a2 = &qword_58 + 1;
        sub_2257CD0(v4, 89);
      }
      else
      {
        v5 = v12 + 1;
        *(_QWORD *)(v4 + 32) = v12 + 1;
        *v12 = 89;
      }
      break;
    case 5LL:
      v4 = *(_QWORD *)(a1 + 8);
      v6 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v6 >= *(_QWORD *)(v4 + 24) )
      {
        a2 = &qword_58 + 2;
        sub_2257CD0(v4, 90);
      }
      else
      {
        v5 = v6 + 1;
        *(_QWORD *)(v4 + 32) = v6 + 1;
        *v6 = 90;
      }
      break;
    case 19LL:
      v4 = *(_QWORD *)(a1 + 8);
      v7 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v7 >= *(_QWORD *)(v4 + 24) )
      {
        a2 = &qword_58;
        sub_2257CD0(v4, 88);
      }
      else
      {
        v5 = v7 + 1;
        *(_QWORD *)(v4 + 32) = v7 + 1;
        *v7 = 88;
      }
      break;
    default:
      break;
  }
  if ( *v2 == sub_21D5390(v4, a2, v5) )
    sub_21DD3B0(&v13, v2);
  else
    sub_21DB0C0(&v13, v2);
  sub_E55B70((__int64 *)(a1 + 8), (__int64)&v13);
  if ( v14 > 0x40 )
  {
    if ( v13 )
      operator delete[](v13);
  }
}

