__int64 __fastcall sub_1655430(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // [rsp+8h] [rbp-30h]
  __int64 v17; // [rsp+8h] [rbp-30h]

  v3 = a1 + 24;
  v4 = a1 + 72;
  v5 = a2;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a1 + 24;
  *(_QWORD *)(a1 + 16) = 0x400000000LL;
  *(_QWORD *)(a1 + 56) = a1 + 72;
  *(_QWORD *)(a1 + 64) = 0x400000000LL;
  *(_BYTE *)(a1 + 104) = sub_B8E180(a2);
  LOBYTE(result) = *(_BYTE *)(a2 + 8) & 0x7F;
  if ( (_BYTE)result == 39 )
  {
    if ( a2 == 72 )
    {
      LOBYTE(result) = 0;
    }
    else if ( (*(_BYTE *)(a2 - 43) & 2) != 0 )
    {
      result = *(_QWORD *)(a2 + 96);
      if ( result )
      {
        v5 = result + 72;
        LOBYTE(result) = *(_BYTE *)(result + 80) & 0x7F;
      }
      else
      {
        if ( (*(_DWORD *)(a2 - 32) & 7) != 7 || (v15 = *(_QWORD *)(a2 - 32) & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v15) )
          BUG();
        v5 = sub_B8D340(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 48LL));
        LOBYTE(result) = *(_BYTE *)(v5 + 8) & 0x7F;
      }
    }
  }
  while ( 1 )
  {
    result = (unsigned __int8)result;
    if ( (unsigned int)(unsigned __int8)result - 59 <= 2 )
    {
      v7 = v5 - 64;
      v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 - 64) + 32LL);
      if ( v8 == sub_A01140 )
        v9 = sub_B70A60(v7);
      else
        v9 = v8(v7);
      v10 = *(unsigned int *)(a1 + 64);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 68) )
      {
        v16 = v9;
        sub_2237220(a1 + 56, v4, v10 + 1, 8);
        v10 = *(unsigned int *)(a1 + 64);
        v9 = v16;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v10) = v9;
      ++*(_DWORD *)(a1 + 64);
      v11 = *(_QWORD *)(v5 - 48);
      if ( (v11 & 4) == 0 )
      {
LABEL_10:
        v5 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        goto LABEL_11;
      }
      goto LABEL_20;
    }
    if ( (unsigned int)(unsigned __int8)result - 34 > 5 )
      break;
    v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v5 - 72) + 32LL))(v5 - 72);
    v13 = *(unsigned int *)(a1 + 16);
    if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 20) )
    {
      v17 = v12;
      sub_2237220(a1 + 8, v3, v13 + 1, 8);
      v13 = *(unsigned int *)(a1 + 16);
      v12 = v17;
    }
    *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v13) = v12;
    ++*(_DWORD *)(a1 + 16);
    v14 = *(_QWORD *)(v5 - 56);
    if ( (*(_WORD *)(v5 - 42) & 0x180) != 0 )
    {
      v5 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 4) != 0 )
        v5 = *(_QWORD *)(v5 + 8);
    }
    else
    {
      v5 = v14 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v14 & 4) != 0 )
        goto LABEL_21;
    }
LABEL_11:
    LOBYTE(result) = *(_BYTE *)(v5 + 8) & 0x7F;
  }
  if ( (unsigned __int8)result != 24 && (_BYTE)result )
  {
    v11 = *(_QWORD *)(sub_B8C1B0(v5) + 16);
    if ( (v11 & 4) == 0 )
      goto LABEL_10;
LABEL_20:
    v5 = v11 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_21:
    v5 = *(_QWORD *)v5;
    goto LABEL_11;
  }
  return result;
}
