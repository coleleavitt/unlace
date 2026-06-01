__int64 __fastcall sub_581110(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r12
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v12; // [rsp+8h] [rbp-40h]
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  sub_6B3440(a2, *a1);
  v3 = *a1;
  switch ( *a1 & 0xF )
  {
    case 0LL:
    case 1LL:
    case 2LL:
    case 3LL:
    case 4LL:
    case 5LL:
    case 6LL:
    case 7LL:
      goto LABEL_11;
    case 8LL:
    case 0xBLL:
      ptr = nullptr;
      v12 = 0;
      ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
      *(_QWORD *)&v12 = 2;
      *(_BYTE *)ptr = 35;
      *((_BYTE *)ptr + 1) = 0;
      sub_6B2E10(&ptr, *((unsigned int *)a1 + 4));
      v4 = a2[1];
      v5 = 2;
      if ( v4 )
        v5 = v4-- + 1;
      v6 = *a2;
      if ( a2[2] < v5 )
      {
        v9 = qvector_reserve(a2, v6, v5, 1);
        *a2 = v9;
        v6 = v9;
      }
      a2[1] = v5;
      *(_BYTE *)(v6 + v4) = 61;
      *(_BYTE *)(*a2 + v4 + 1) = 0;
      sub_6A99B0(a2, ptr);
      if ( (*a1 & 0xF) == 0xB )
        sub_6B3440(a2, a1[1]);
      if ( ptr )
      {
        *(_QWORD *)&v12 = 0;
        qfree(ptr);
      }
      goto LABEL_10;
    case 9LL:
      sub_6B2E10(a2, *((unsigned int *)a1 + 8));
      if ( (a1[4] & 0x1010) == 0 )
      {
        v10 = a1[2];
        if ( v10 )
          v10 = ea2node(a1[2]);
        sub_6B3440(a2, v10);
      }
      sub_6B3440(a2, a1[3]);
      v8 = ea2node(a1[1]);
      sub_6B3440(a2, v8);
      v3 = *a1;
      goto LABEL_11;
    case 0xALL:
      sub_6B2E10(a2, *((unsigned int *)a1 + 2));
      v3 = *a1;
      goto LABEL_11;
    case 0xCLL:
      sub_6B2E10(a2, *((__int16 *)a1 + 4) | (unsigned int)(*((__int16 *)a1 + 5) << 16));
LABEL_10:
      v3 = *a1;
LABEL_11:
      if ( (v3 & 0x1000) == 0 )
        return v13 - __readfsqword(0x28u);
      sub_6B2E10(a2, *((unsigned int *)a1 + 10));
      sub_6B2E10(a2, *((unsigned int *)a1 + 11));
      return sub_6B2E10(a2, *((unsigned int *)a1 + 12));
    default:
      if ( !under_debugger )
        interr(2926);
      BUG();
  }
}
