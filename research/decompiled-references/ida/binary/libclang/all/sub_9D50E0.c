__int64 __fastcall sub_9D50E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  unsigned int v6; // r13d
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  _BYTE v17[64]; // [rsp+0h] [rbp-F8h] BYREF
  _DWORD v18[6]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A0h]
  unsigned int v20; // [rsp+60h] [rbp-98h]
  int v21; // [rsp+70h] [rbp-88h]
  _BYTE v22[120]; // [rsp+80h] [rbp-78h] BYREF

  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v17, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9D4FE0(a1, a2, (__int64)v17, 0);
  if ( (_BYTE)v6 )
  {
    sub_A1BFE0(v18, v17);
    v8 = v21;
    if ( v21 )
    {
LABEL_17:
      if ( v8 == 1 )
      {
        v9 = v19;
      }
      else
      {
        if ( (unsigned int)(v8 - 2) <= 1 )
          BUG();
        v9 = *(_QWORD *)(v19 + 32);
      }
    }
    else
    {
      while ( v19 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(v19 + 32) + 16LL) == v20 )
          break;
        if ( !v20 )
          break;
        v13 = **(_QWORD **)(v19 + v20 + 32);
        if ( (v13 & 2) != 0 || v13 <= 3 || (*(_BYTE *)(v19 + v20 + 28) & 4) == 0 )
          break;
        if ( v20 == -1 )
        {
          v15 = 0;
          v14 = 0xFFFFFFFFLL;
        }
        else
        {
          v14 = v20 - *(_DWORD *)(v19 + v20 + 24);
          v15 = (unsigned int)v14;
        }
        sub_A1C030(v22, v19, v14, v15);
        sub_A1C200(v18, v22, v16);
        sub_A1C0C0(v22);
        v8 = v21;
        if ( v21 )
          goto LABEL_17;
      }
      v9 = *(_QWORD *)(v19 + 32);
      if ( v20 != *(_DWORD *)(v9 + 16) && v20 )
        v9 = *(_QWORD *)(v19 + v20 + 32);
    }
    v10 = sub_A2C8B0(*(_QWORD *)(v9 + 24), a3);
    v11 = *(_QWORD *)(a1 + 184);
    sub_A1C030(v22, v19, (unsigned int)(v18[0] + *(_DWORD *)(v10 + 8)), (unsigned int)(v18[0] + *(_DWORD *)(v10 + 8)));
    v12 = sub_A1A4E0(v11, 56);
    sub_A1C070(v12, v22);
    sub_A1C0C0(v22);
    sub_A1C0C0(v18);
  }
  sub_A1C0C0(v17);
  return v6;
}

