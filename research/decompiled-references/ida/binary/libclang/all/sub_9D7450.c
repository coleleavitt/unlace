__int64 __fastcall sub_9D7450(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx
  unsigned int v5; // eax
  unsigned int v6; // r12d
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 *v17; // rax
  __int64 v18; // rax
  _QWORD v19[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v20; // [rsp+18h] [rbp-60h]
  unsigned int v21; // [rsp+20h] [rbp-58h]
  int v22; // [rsp+30h] [rbp-48h]

  v4 = sub_A1A5A0(*(_QWORD *)(a1 + 184), 56);
  v5 = sub_9D4FE0(a1, a2, v4, 0);
  if ( !(_BYTE)v5 )
    return 0;
  if ( *(_DWORD *)(v4 + 48) )
  {
    v6 = v5;
    v7 = *(_QWORD *)(a1 + 184);
    v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v9 = sub_A1D2E0(v4 + 24, v8, a3);
    v11 = v10;
    v12 = sub_A1A4E0(v7, 56);
    *(_QWORD *)v12 = 0;
    *(_DWORD *)(v12 + 48) = 1;
    *(_QWORD *)(v12 + 24) = v9;
    *(_QWORD *)(v12 + 32) = v11;
    *(_OWORD *)(v12 + 8) = 0;
    return v6;
  }
  if ( !sub_9D71E0(a1, a2, v4, 0) )
    return 0;
  v6 = 0;
  sub_A1C030(v19, *(_QWORD *)(v4 + 24), a3 + *(_DWORD *)v4, a3 + *(_DWORD *)v4);
  if ( !v22 )
  {
    if ( v20 )
    {
      v14 = v20;
      v15 = *(_QWORD *)(v20 + 32);
      if ( (unsigned __int64)*(unsigned int *)(v15 + 20) >= v19[0] )
      {
        v16 = v21;
        if ( v21 != 0 && *(_DWORD *)(v15 + 16) != v21 )
        {
          v17 = (__int64 *)sub_8E5480((__int64)v19);
          LOBYTE(v6) = ~(*v17 >> 1) & ((unsigned __int64)*v17 > 3);
          if ( (_BYTE)v6 )
          {
            if ( (*(_BYTE *)(v14 + v16 + 28) & 4) != 0 )
            {
              v18 = sub_A1A4E0(*(_QWORD *)(a1 + 184), 56);
              sub_A1BFE0(v18, v19);
            }
            else
            {
              v6 = 0;
            }
          }
        }
      }
    }
  }
  sub_A1C0C0(v19);
  return v6;
}

