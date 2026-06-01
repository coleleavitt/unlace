__int64 __fastcall sub_752020(__int64 a1)
{
  __int64 result; // rax
  __int16 v2; // cx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int16 v5; // cx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx

  result = *(unsigned int *)(a1 + 5940);
  if ( (_DWORD)result == 16 )
  {
    v4 = *(_QWORD *)(a1 + 40);
    v5 = *(_WORD *)(a1 + 5936);
    v6 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v4 + 1;
    *(_BYTE *)(v6 + v4) = v5;
    v7 = *(_QWORD *)(a1 + 40);
    LOBYTE(v5) = *(_BYTE *)(a1 + 5937);
    v8 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = v7 + 1;
    *(_BYTE *)(v8 + v7) = v5;
    *(_WORD *)(a1 + 5936) = 0;
    *(_DWORD *)(a1 + 5940) = 0;
    return 0;
  }
  else if ( (int)result > 7 )
  {
    result = *(_QWORD *)(a1 + 40);
    v2 = *(_WORD *)(a1 + 5936);
    v3 = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(a1 + 40) = result + 1;
    *(_BYTE *)(v3 + result) = v2;
    *(_DWORD *)(a1 + 5940) -= 8;
    *(_WORD *)(a1 + 5936) >>= 8;
  }
  return result;
}
