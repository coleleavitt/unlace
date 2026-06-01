__int64 __fastcall sub_7CF2D0(_QWORD *a1, unsigned int a2)
{
  __int64 v2; // rax
  __int64 v4; // rax
  __int16 v5; // dx
  __int64 v6; // rdx
  unsigned int *v7; // rax
  unsigned int v8; // esi
  __int64 v9; // r12
  __int64 v11; // r12
  unsigned int v12; // r13d
  __int64 v13; // rax
  _BYTE v14[48]; // [rsp+0h] [rbp-30h] BYREF

  v2 = a1[291];
  if ( !v2 )
    return 0;
  if ( a2 < *(_DWORD *)(v2 - 4) )
  {
    v4 = *(_QWORD *)(v2 + 8LL * a2);
    if ( v4 )
    {
      v5 = *(_WORD *)(v4 + 4);
      if ( v5 )
      {
        if ( v5 == 2 && *(_DWORD *)(v4 + 16) <= 1u )
        {
          v11 = a1[18];
          sub_180C5A0(v14, "quant");
          v12 = sub_15DA4C0(v11 + 560, v14);
          v13 = a1[300];
          if ( !v13 || v12 >= *(_DWORD *)(v13 - 4) || (v9 = *(_QWORD *)(v13 + 8LL * v12)) == 0 )
          {
            v9 = sub_186B270(0xC60u);
            sub_7D4B20(v9, (_DWORD)a1);
            a1[284] = v9;
            sub_7CDF60(a1, v9);
          }
          return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 216LL))(v9, a2);
        }
      }
      else
      {
        v6 = *(_QWORD *)(v4 + 16);
        v7 = *(unsigned int **)(v6 + 24);
        if ( v7 )
          v8 = *v7;
        else
          v8 = -1;
        v9 = sub_7CEC70((__int64)a1, v8, v6);
        if ( v9 )
          return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 216LL))(v9, a2);
      }
    }
  }
  return 0;
}

