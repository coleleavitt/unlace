unsigned __int64 __fastcall sub_1FBFE60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  __int64 v15; // r12
  unsigned __int64 v16; // rbx
  __int64 (__fastcall **v17)(_QWORD); // rdx
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax

  sub_1FBFD10((__int64 *)a1, a2, a3, a4, a5, a6);
  if ( ((*(_BYTE *)(a2 + 64) | (unsigned __int8)(*(__int64 *)(a2 + 64) >> 1)) & 1) != 0 )
    sub_1FB8C80(a1, (char *)a2);
  result = *(_QWORD *)a1;
  if ( *(_BYTE *)(*(_QWORD *)a1 + 157LL) )
  {
    v8 = sub_B87960(*(_QWORD *)(a1 + 8) + 17536LL, a2);
    v13 = *(_QWORD *)(a2 + 16);
    v14 = (v13 & 4) != 0 ? *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL) : v13 & 0xFFFFFFFFFFFFFFF8LL;
    result = sub_B94050(v14, v8, v9, v10, v11, v12);
    if ( result )
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)a1;
        v16 = result & 0xFFFFFFFFFFFFFFF8LL;
        v17 = *(__int64 (__fastcall ***)(_QWORD))(result & 0xFFFFFFFFFFFFFFF8LL);
        if ( (result & 4) == 0 )
        {
          v19 = v17[4](result & 0xFFFFFFFFFFFFFFF8LL);
          result = sub_1F92240(v15, v19);
          *(_DWORD *)(a1 + 224) = 108;
          return result;
        }
        if ( !v16 )
          break;
        v18 = (*((__int64 (__fastcall **)(_QWORD))*v17 + 4))(v17);
        sub_1F92240(v15, v18);
        result = *(_QWORD *)(v16 + 8);
        if ( !result )
          goto LABEL_4;
      }
      v20 = v17[4](0);
      result = sub_1F92240(v15, v20);
    }
  }
LABEL_4:
  *(_DWORD *)(a1 + 224) = 108;
  return result;
}
