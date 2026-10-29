__int64 __fastcall sub_567810(__int64 *a1, __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // r12
  unsigned __int64 v6; // r13
  __int64 v7; // rsi
  unsigned int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v14; // [rsp+8h] [rbp-40h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  sub_692CC0(a2, *a1);
  v4 = *a1;
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
      v14 = 0;
      ptr = (void *)qvector_reserve(&ptr, 0, 2, 1);
      *(_QWORD *)&v14 = 2;
      *(_BYTE *)ptr = 35;
      *((_BYTE *)ptr + 1) = 0;
      sub_6926A0(&ptr, *((unsigned int *)a1 + 3));
      v5 = a2[1];
      v6 = 2;
      if ( v5 )
        v6 = v5-- + 1;
      v7 = *a2;
      if ( a2[2] < v6 )
      {
        v10 = qvector_reserve(a2, v7, v6, 1);
        *a2 = v10;
        v7 = v10;
      }
      a2[1] = v6;
      *(_BYTE *)(v7 + v5) = 61;
      *(_BYTE *)(*a2 + v5 + 1) = 0;
      sub_6891C0(a2, ptr);
      if ( (*a1 & 0xF) == 0xB )
        sub_692CC0(a2, *((int *)a1 + 2));
      if ( ptr )
      {
        *(_QWORD *)&v14 = 0;
        qfree(ptr);
      }
      goto LABEL_10;
    case 9LL:
      sub_6926A0(a2, *((unsigned int *)a1 + 5));
      if ( (*((_WORD *)a1 + 10) & 0x1010) == 0 )
      {
        v11 = *((unsigned int *)a1 + 3);
        v12 = 0;
        if ( (_DWORD)v11 )
          v12 = (unsigned int)ea2node(v11);
        sub_692CC0(a2, v12);
      }
      sub_692CC0(a2, *((int *)a1 + 4));
      v9 = ea2node(*((unsigned int *)a1 + 2));
      sub_692CC0(a2, v9);
      v4 = *a1;
      goto LABEL_11;
    case 0xALL:
      sub_6926A0(a2, *((unsigned int *)a1 + 2));
      v4 = *a1;
      goto LABEL_11;
    case 0xCLL:
      sub_6926A0(a2, *((__int16 *)a1 + 4) | (unsigned int)(*((__int16 *)a1 + 5) << 16));
LABEL_10:
      v4 = *a1;
LABEL_11:
      if ( (v4 & 0x1000) == 0 )
        return v15 - __readfsqword(0x28u);
      sub_6926A0(a2, *((unsigned int *)a1 + 6));
      sub_6926A0(a2, *((unsigned int *)a1 + 7));
      return sub_6926A0(a2, *((unsigned int *)a1 + 8));
    default:
      if ( !under_debugger )
        interr(2926);
      BUG();
  }
}

