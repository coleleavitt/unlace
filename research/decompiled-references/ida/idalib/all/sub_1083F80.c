__int64 __fastcall sub_1083F80(__int64 a1, _WORD *a2, size_t a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rcx
  unsigned int v7; // r12d
  int v8; // eax
  __int64 v10; // r12
  _BYTE *v11; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // [rsp+8h] [rbp-70h]
  void *v14; // [rsp+8h] [rbp-70h]
  unsigned __int8 v15; // [rsp+17h] [rbp-61h]
  void *s2; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-50h]
  _QWORD v18[9]; // [rsp+30h] [rbp-48h] BYREF

  v4 = *(_QWORD *)(a1 + 552);
  LOBYTE(v18[0]) = 0;
  v5 = v4 + 4;
  v17 = 0;
  s2 = v18;
  if ( (unsigned __int64)v5 > 0xF )
  {
    if ( v5 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v10 = 30;
    if ( (unsigned __int64)v5 >= 0x1E )
      v10 = v5;
    v11 = (_BYTE *)operator new(v10 + 1);
    v12 = s2;
    *v11 = *(_BYTE *)s2;
    if ( v12 == v18 )
    {
      s2 = v11;
      v18[0] = v10;
    }
    else
    {
      v14 = v11;
      operator delete(v12);
      s2 = v14;
      v18[0] = v10;
      if ( (unsigned __int64)(0x7FFFFFFFFFFFFFFFLL - v17) <= 3 )
        std::__throw_length_error("basic_string::append");
    }
  }
  sub_9EE560(&s2, "hvxv", 4u);
  sub_9EE560(&s2, *(_BYTE **)(a1 + 544), *(_QWORD *)(a1 + 552));
  v6 = s2;
  if ( v17 != a3 || (v7 = 1, a3) && (v13 = s2, v8 = memcmp(a2, s2, a3), v6 = v13, v8) )
  {
    switch ( a3 )
    {
      case 7uLL:
        if ( *(_DWORD *)a2 != 1635280232 || a2[2] != 28519 || (v7 = 1, *((_BYTE *)a2 + 6) != 110) )
          v7 = 0;
        v15 = 1;
        goto LABEL_24;
      case 3uLL:
        if ( *a2 == 30312 && *((_BYTE *)a2 + 2) == 120 )
        {
          v15 = *(_BYTE *)(a1 + 576);
          v7 = 1;
          goto LABEL_24;
        }
        break;
      case 0xDuLL:
        if ( *(_QWORD *)a2 == 0x676E656C2D787668LL && *((_DWORD *)a2 + 2) == 875980916 && *((_BYTE *)a2 + 12) == 98 )
        {
          v15 = *(_BYTE *)(a1 + 577);
          v7 = 1;
        }
        else
        {
          v7 = 0;
          v15 = 1;
        }
LABEL_10:
        if ( (unsigned __int8)v7 | (a3 != 5) )
          goto LABEL_11;
        if ( *(_DWORD *)a2 == 1768191329 && *((_BYTE *)a2 + 4) == 111 )
        {
          v7 = *(unsigned __int8 *)(a1 + 579);
          goto LABEL_13;
        }
LABEL_30:
        v7 = 0;
        goto LABEL_13;
      case 0xEuLL:
        if ( *(_QWORD *)a2 != 0x676E656C2D787668LL || *((_DWORD *)a2 + 2) != 842098804 || a2[6] != 25144 )
          goto LABEL_30;
        v15 = *(_BYTE *)(a1 + 578);
        goto LABEL_12;
      default:
        v15 = 1;
        break;
    }
    v7 = 0;
LABEL_24:
    if ( (unsigned __int8)v7 | (a3 != 10) )
      goto LABEL_10;
    if ( *(_QWORD *)a2 != 0x6C61632D676E6F6CLL || a2[4] != 29548 )
    {
LABEL_11:
      if ( !(_BYTE)v7 )
        goto LABEL_13;
      goto LABEL_12;
    }
    v15 = *(_BYTE *)(a1 + 580);
LABEL_12:
    v7 = v15;
  }
LABEL_13:
  if ( v6 != v18 )
    operator delete(v6);
  return v7;
}
