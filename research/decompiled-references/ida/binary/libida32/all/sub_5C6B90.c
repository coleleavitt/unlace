__int64 __fastcall sub_5C6B90(__int64 a1)
{
  unsigned __int8 v1; // bp
  char v2; // r13
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v8; // rax
  unsigned __int8 v9; // al

  switch ( *(_WORD *)(a1 + 64) )
  {
    case 3:
    case 5:
      v3 = *(unsigned int *)(a1 + 68);
      if ( *(_WORD *)(a1 + 64) == 5 )
      {
        v1 = 1;
        v2 = 1;
      }
      else
      {
        v1 = *(_BYTE *)(a1 + 72) ^ 1;
        v2 = *(_BYTE *)(*(_QWORD *)(a1 + 96) + 1328LL);
        v9 = getinf(59);
        if ( v3 == extend_sign(v3, v9, v1) )
          v2 = getinf(59);
      }
      break;
    case 4:
    case 7:
      v1 = 0;
      v2 = 8;
      v3 = 0;
      break;
    case 8:
      v3 = *(_QWORD *)(a1 + 80);
      v2 = 8;
      v1 = *(_BYTE *)(a1 + 72) ^ 1;
      break;
    default:
      if ( !under_debugger )
        interr(88);
      BUG();
  }
  v4 = *(_QWORD *)(a1 + 392);
  v5 = *(_QWORD *)(a1 + 384);
  if ( *(_QWORD *)(a1 + 400) < (unsigned __int64)(v4 + 1) )
  {
    v8 = qvector_reserve(a1 + 384, v5, v4 + 1, 16);
    *(_QWORD *)(a1 + 384) = v8;
    v5 = v8;
    v4 = *(_QWORD *)(a1 + 392);
  }
  v6 = 16 * v4 + v5;
  *(_QWORD *)v6 = v3;
  *(_BYTE *)(v6 + 8) = v2;
  *(_BYTE *)(v6 + 9) = v1;
  ++*(_QWORD *)(a1 + 392);
  return 0;
}

