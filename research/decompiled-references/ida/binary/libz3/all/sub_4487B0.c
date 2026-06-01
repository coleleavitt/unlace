__int64 __fastcall sub_4487B0(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // eax
  __int64 v5; // rbx
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rax
  unsigned int v9; // ebp
  __int64 v10; // rax
  void *v11; // rbx
  int v12; // [rsp+1Ch] [rbp-7Ch] BYREF
  _BYTE v13[32]; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v15[9]; // [rsp+50h] [rbp-48h] BYREF

  v2 = 1;
  v3 = sub_447FE0(*(_QWORD *)(a1 + 40), *(_QWORD *)(a2 + 80) + 8LL);
  if ( (_BYTE)v3 )
  {
    v5 = *(_QWORD *)(a2 + 80);
    v2 = v3;
    sub_16744A0(v13, *(_QWORD *)(a1 + 40));
    v8 = *(_QWORD *)(v5 + 40);
    v14[0] = 0;
    v14[1] = 0;
    v15[0] = 1;
    v15[1] = 0;
    if ( v8 )
    {
      v9 = 0;
      while ( v9 < *(_DWORD *)(v8 - 4) )
      {
        v10 = *(_QWORD *)(v5 + 16)
            + 24LL * (unsigned int)(*(_DWORD *)(v8 + 8LL * v9) + *(_DWORD *)(v5 + 28) * *(_DWORD *)(v8 + 8LL * v9 + 4));
        if ( *(_DWORD *)(v10 + 16) != *(_DWORD *)(v5 + 32) )
        {
          sub_1872CE0("");
          sub_1873130(114, 157);
        }
        if ( !(unsigned __int8)sub_1673B50(
                                 (unsigned int)v13,
                                 *(_QWORD *)v10,
                                 (unsigned int)v14,
                                 (unsigned int)&v12,
                                 v6,
                                 v7)
          || v12 )
        {
          v2 = 0;
          break;
        }
        v8 = *(_QWORD *)(v5 + 40);
        ++v9;
        if ( !v8 )
          break;
      }
    }
    v11 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v14);
    sub_182CBA0(v11, v15);
  }
  return v2;
}

