__int64 __fastcall sub_60AE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned __int64 v5; // r10
  unsigned int v6; // r15d
  int v7; // r12d
  __int64 result; // rax
  int v9; // ebx
  int v10; // eax
  unsigned int v11; // r14d
  unsigned int v12; // [rsp+4h] [rbp-44h]

  v4 = sub_605E0(a1, 0);
  v5 = a1[1];
  v6 = v4;
  if ( v4 == (_DWORD)v5 )
    return 0;
  while ( 1 )
  {
    v7 = v6;
    if ( (v6 & 0x80000000) != 0 )
      goto LABEL_19;
    while ( v7 < v5 && (*(_QWORD *)(*a1 + 8LL * (v7 >> 6)) & (1LL << v7)) != 0 )
    {
      if ( ++v7 < 0 )
      {
        v7 = 0x80000000;
        break;
      }
    }
    v12 = v7 - v6;
    if ( (int)(v7 - v6) > 0 )
      break;
LABEL_18:
    v6 = v7;
LABEL_19:
    v6 = sub_605E0(a1, v6);
    if ( v6 == (_DWORD)v5 )
      return 0;
  }
  if ( !a3 )
  {
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v6, v12);
    if ( (_DWORD)result )
      return result;
    goto LABEL_18;
  }
  v9 = v7 - v6;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a3 + 1504) + 32LL))(*(_QWORD *)(a3 + 1504), v6);
    v11 = v10;
    if ( v10 <= 0 || v9 < v10 )
      v11 = v12;
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a2 + 16LL))(a2, v6, v11);
    if ( (_DWORD)result )
      return result;
    v9 -= v11;
    v6 += v11;
    if ( v9 <= 0 )
      goto LABEL_18;
  }
}
