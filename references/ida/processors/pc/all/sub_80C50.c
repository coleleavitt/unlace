__int64 __fastcall sub_80C50(_QWORD *a1)
{
  unsigned int v1; // ebp
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rsi
  int v5; // ecx
  int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // r12d
  __int64 (__fastcall *v9)(_QWORD *, char); // rdx
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v15; // rax

  v2 = sub_63220((__int64)(a1 + 28));
  LOBYTE(v1) = v2 > 0;
  if ( v2 > 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 64LL))(a1, 5);
    v3 = a1[78];
    v4 = 0;
    v5 = *(_DWORD *)(v3 + 104);
    v6 = *((unsigned __int16 *)a1 + 124);
    if ( v6 >= v5 && v6 < *(_DWORD *)(v3 + 108) )
      v4 = *(_QWORD *)(*(_QWORD *)(v3 + 112) + 16LL * (v6 - v5));
    (*(void (__fastcall **)(_QWORD *, __int64, _QWORD))(*a1 + 56LL))(a1, v4, 0);
    if ( *((_WORD *)a1 + 124) == 133 )
      v7 = *((unsigned __int8 *)a1 + 309);
    else
      v7 = *((unsigned __int8 *)a1 + 269);
    v8 = 113;
    v9 = *(__int64 (__fastcall **)(_QWORD *, char))(*a1 + 96LL);
    if ( (unsigned __int8)v7 <= 2u )
      v8 = dword_159FC8[v7];
    if ( v9 != sub_7D640 )
    {
      v9(a1, v8);
      goto LABEL_13;
    }
    v10 = a1[4];
    if ( v10 )
    {
      v11 = v10 + 1;
      v12 = a1[4];
      v13 = a1[3];
      --v10;
      if ( a1[5] >= v11 )
      {
LABEL_12:
        a1[4] = v11;
        *(_BYTE *)(v13 + v10) = v8;
        *(_BYTE *)(a1[3] + v12) = 0;
LABEL_13:
        (*(void (__fastcall **)(_QWORD *, __int64))(*a1 + 72LL))(a1, 5);
        return v1;
      }
    }
    else
    {
      v13 = a1[3];
      v12 = 1;
      v11 = 2;
      if ( a1[5] >= 2u )
        goto LABEL_12;
    }
    v15 = qvector_reserve();
    a1[3] = v15;
    v13 = v15;
    goto LABEL_12;
  }
  return v1;
}
