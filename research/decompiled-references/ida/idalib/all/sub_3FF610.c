__int64 __fastcall sub_3FF610(__int64 a1, _QWORD *a2, __int64 a3)
{
  int v4; // r12d
  __int64 v5; // r14
  __int64 result; // rax
  __int64 v7; // r15
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rsi
  __int64 v11; // rax
  unsigned __int64 v12; // [rsp+0h] [rbp-48h]
  __int64 v13; // [rsp+8h] [rbp-40h]

  *(_QWORD *)(a1 + 16) = -1;
  v4 = *(_DWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 24) = a3;
  v5 = a2[4];
  while ( 1 )
  {
    sub_3FEF70(a1, a2);
    *(_BYTE *)(a1 + 40) = 0;
    result = sub_3FF4F0(a1);
    if ( !(_BYTE)result )
      return result;
    if ( --v4 <= 0 )
      return result;
    v7 = a2[4];
    if ( v7 == v5 )
      goto LABEL_9;
    if ( v7 )
    {
      v8 = v7 + 1;
      v9 = a2[4];
      v10 = a2[3];
      --v7;
      if ( a2[5] < v8 )
        goto LABEL_11;
    }
    else
    {
      v10 = a2[3];
      v9 = 1;
      v8 = 2;
      if ( a2[5] < 2u )
      {
LABEL_11:
        v13 = v9;
        v12 = v8;
        v11 = qvector_reserve(a2 + 3, v10, v8, 1);
        v9 = v13;
        v8 = v12;
        a2[3] = v11;
        v10 = v11;
      }
    }
    a2[4] = v8;
    *(_BYTE *)(v10 + v7) = 32;
    *(_BYTE *)(a2[3] + v9) = 0;
LABEL_9:
    (*(void (__fastcall **)(_QWORD *, void *, __int64))(*a2 + 56LL))(a2, &unk_22D372B, 1);
  }
}
