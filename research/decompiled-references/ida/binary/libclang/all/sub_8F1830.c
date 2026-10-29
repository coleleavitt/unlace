__int64 __fastcall sub_8F1830(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // r13d
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _BYTE v16[64]; // [rsp+0h] [rbp-F8h] BYREF
  _DWORD v17[6]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+58h] [rbp-A0h]
  unsigned int v19; // [rsp+60h] [rbp-98h]
  int v20; // [rsp+70h] [rbp-88h]
  _BYTE v21[120]; // [rsp+80h] [rbp-78h] BYREF

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 568);
    v6 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v7 = sub_A1A5A0(v5, 56);
    sub_A1C070(v16, v7);
    sub_A1A5E0(v5, 56);
    v3 = sub_9D4FE0(a1 + 384, v6, v16, 0);
    if ( (_BYTE)v3 )
    {
      sub_A1BFE0(v17, v16);
      while ( !v20 )
      {
        if ( !v18 )
          break;
        if ( *(_DWORD *)(*(_QWORD *)(v18 + 32) + 16LL) == v19 )
          break;
        if ( !v19 )
          break;
        v8 = **(_QWORD **)(v18 + v19 + 32);
        if ( (v8 & 2) != 0 || v8 <= 3 || (*(_BYTE *)(v18 + v19 + 28) & 4) == 0 )
          break;
        if ( v19 == -1 )
        {
          v14 = 0;
          v13 = 0xFFFFFFFFLL;
        }
        else
        {
          v13 = v19 - *(_DWORD *)(v18 + v19 + 24);
          v14 = (unsigned int)v13;
        }
        sub_A1C030(v21, v18, v13, v14);
        sub_A1C200(v17, v21, v15);
        sub_A1C0C0(v21);
      }
      v9 = sub_8E5480((__int64)v17);
      v10 = sub_A2C8B0(*(_QWORD *)(v9 + 24), a2);
      v11 = *(_QWORD *)(a1 + 568);
      sub_A1C030(v21, v18, (unsigned int)(v17[0] + *(_DWORD *)(v10 + 8)), (unsigned int)(v17[0] + *(_DWORD *)(v10 + 8)));
      v12 = sub_A1A4E0(v11, 56);
      sub_A1C070(v12, v21);
      sub_A1C0C0(v21);
      sub_A1C0C0(v17);
      sub_A1C0C0(v16);
    }
    else
    {
      sub_A1C0C0(v16);
    }
  }
  return v3;
}

