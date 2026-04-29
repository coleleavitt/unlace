__int64 __fastcall sub_709A0(__int64 a1, __int64 a2)
{
  int v4; // eax
  unsigned int i; // ebp
  int j; // ebx
  __int64 v7; // r15
  __int64 *v8; // rdi
  __int64 v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // rax
  unsigned __int64 v12; // rdx
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 result; // rax
  int v21; // [rsp+0h] [rbp-44h]

  *(_BYTE *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)a1 = off_4E7B78;
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 36) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0;
  *(_OWORD *)(a1 + 16) = 0;
  *(_OWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 80) = 0;
  *(_OWORD *)(a1 + 104) = 0;
  *(_OWORD *)(a1 + 128) = 0;
  *(_OWORD *)(a1 + 160) = 0;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  sub_66DC0(a1, v4);
  v21 = 0;
  for ( i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, 0);
        (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2) != i;
        i = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 160LL))(a2, i + 1) )
  {
    for ( j = 0; j < (*(int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 96LL))(a2, i); ++j )
    {
      v7 = (*(int (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 112LL))(a2, i, (unsigned int)j);
      v8 = (__int64 *)(24LL * (int)i + *(_QWORD *)(a1 + 48));
      v9 = v8[1];
      v10 = (_DWORD *)(*v8 + 4 * v9);
      if ( (_DWORD *)*v8 == v10 )
        goto LABEL_11;
      v11 = (_DWORD *)*v8;
      while ( (_DWORD)v7 != *v11 )
      {
        if ( v10 == ++v11 )
          goto LABEL_11;
      }
      if ( v11 == v10 )
      {
LABEL_11:
        v12 = v9 + 1;
        if ( v8[2] < v12 )
        {
          v18 = qvector_reserve(v8, *v8, v12, 4);
          v19 = v8[1];
          *v8 = v18;
          v10 = (_DWORD *)(v18 + 4 * v19);
        }
        *v10 = v7;
        ++v8[1];
        v13 = (__int64 *)(*(_QWORD *)(a1 + 72) + 24 * v7);
        v14 = v13[1];
        v15 = *v13;
        if ( v13[2] < (unsigned __int64)(v14 + 1) )
        {
          v17 = qvector_reserve(v13, v15, v14 + 1, 4);
          *v13 = v17;
          v15 = v17;
          v14 = v13[1];
        }
        *(_DWORD *)(v15 + 4 * v14) = i;
        ++v13[1];
      }
    }
    if ( v21 < (int)i )
    {
      v16 = 4LL * v21;
      do
      {
        *(_DWORD *)(*(_QWORD *)(a1 + 96) + v16) = -2;
        v16 += 4;
      }
      while ( 4 * (v21 + (unsigned __int64)(i - v21)) != v16 );
      v21 = i;
    }
    ++v21;
  }
  sub_66C40(a1);
  *(_DWORD *)(a1 + 36) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 88LL))(a2);
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
