__int64 __fastcall sub_9CAEA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v6; // rbx
  _BYTE *v7; // rax
  _BYTE *v8; // r14
  signed __int64 v9; // r12
  __int64 v10; // [rsp+8h] [rbp-40h]

  v4 = a2;
  result = *(unsigned int *)(a1 + 8);
  v10 = (a3 - a2) >> 6;
  if ( v10 + result > (unsigned __int64)*(unsigned int *)(a1 + 12) )
  {
    sub_9CAC70(a1, v10 + result);
    result = *(unsigned int *)(a1 + 8);
  }
  v6 = *(_QWORD *)a1 + (result << 6);
  if ( a2 != a3 )
  {
    while ( 1 )
    {
      *(_QWORD *)v6 = *(_QWORD *)v4;
      *(_DWORD *)(v6 + 8) = *(_DWORD *)(v4 + 8);
      *(_QWORD *)(v6 + 12) = *(_QWORD *)(v4 + 12);
      *(_DWORD *)(v6 + 20) = *(_DWORD *)(v4 + 20);
      *(_QWORD *)(v6 + 24) = v6 + 40;
      v8 = *(_BYTE **)(v4 + 24);
      v9 = *(_QWORD *)(v4 + 32);
      if ( &v8[v9] && !v8 )
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      if ( (unsigned __int64)v9 > 0xF )
        break;
      v7 = *(_BYTE **)(v6 + 24);
      if ( v9 == 1 )
      {
        *v7 = *v8;
        v7 = *(_BYTE **)(v6 + 24);
      }
      else if ( v9 )
      {
        goto LABEL_15;
      }
LABEL_6:
      *(_QWORD *)(v6 + 32) = v9;
      v4 += 64;
      v6 += 64;
      v7[v9] = 0;
      *(_BYTE *)(v6 - 8) = *(_BYTE *)(v4 - 8);
      if ( a3 == v4 )
      {
        result = *(unsigned int *)(a1 + 8);
        goto LABEL_17;
      }
    }
    if ( v9 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v7 = (_BYTE *)operator new(v9 + 1);
    *(_QWORD *)(v6 + 40) = v9;
    *(_QWORD *)(v6 + 24) = v7;
LABEL_15:
    memcpy(v7, v8, v9);
    v7 = *(_BYTE **)(v6 + 24);
    goto LABEL_6;
  }
LABEL_17:
  *(_DWORD *)(a1 + 8) = result + v10;
  return result;
}

