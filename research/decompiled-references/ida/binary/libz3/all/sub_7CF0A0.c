__int64 __fastcall sub_7CF0A0(_QWORD *a1, __int64 a2)
{
  __int16 v2; // dx
  __int64 v3; // rdx
  unsigned int *v4; // rax
  unsigned int v5; // esi
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned int v8; // ebp
  __int64 v9; // rax
  __int64 v10; // [rsp+8h] [rbp-30h]
  _BYTE v11[32]; // [rsp+18h] [rbp-20h] BYREF

  v2 = *(_WORD *)(a2 + 4);
  if ( v2 )
  {
    result = 0;
    if ( v2 == 2 && *(_DWORD *)(a2 + 16) <= 1u )
    {
      v7 = a1[18];
      sub_180C5A0(v11, "quant");
      v8 = sub_15DA4C0(v7 + 560, v11);
      v9 = a1[300];
      if ( !v9 || v8 >= *(_DWORD *)(v9 - 4) || (result = *(_QWORD *)(v9 + 8LL * v8)) == 0 )
      {
        v10 = sub_186B270(0xC60u);
        sub_7D4B20(v10, (_DWORD)a1);
        a1[284] = v10;
        sub_7CDF60(a1, v10);
        return v10;
      }
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 16);
    v4 = *(unsigned int **)(v3 + 24);
    if ( v4 )
      v5 = *v4;
    else
      v5 = -1;
    return sub_7CEC70((__int64)a1, v5, v3);
  }
  return result;
}

