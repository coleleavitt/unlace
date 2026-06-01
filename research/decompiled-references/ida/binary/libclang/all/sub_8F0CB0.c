__int64 __fastcall sub_8F0CB0(__int64 a1, unsigned int a2, _QWORD *a3)
{
  unsigned int v3; // ebp
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rax
  _QWORD v18[3]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v19; // [rsp+18h] [rbp-60h]
  unsigned int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+30h] [rbp-48h]

  v3 = 1;
  if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
  {
    v5 = *(_QWORD *)(a1 + 792);
    *(_QWORD *)(a1 + 800) = *a3;
    v6 = sub_A1A5A0(*(_QWORD *)(a1 + 568), 56);
    v3 = sub_9D4FE0(a1 + 384, v5, v6, 0);
    if ( !(_BYTE)v3 )
      return 0;
    if ( *(_DWORD *)(v6 + 48) )
    {
      v7 = *(_QWORD *)(a1 + 568);
      v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 408) + 104LL))(*(_QWORD *)(a1 + 408));
      v9 = sub_A1D2E0(v6 + 24, v8, a2);
      v11 = v10;
      v12 = sub_A1A4E0(v7, 56);
      *(_QWORD *)v12 = 0;
      *(_DWORD *)(v12 + 48) = 1;
      *(_QWORD *)(v12 + 24) = v9;
      *(_QWORD *)(v12 + 32) = v11;
      *(_OWORD *)(v12 + 8) = 0;
      return v3;
    }
    if ( !(unsigned __int8)sub_9D71E0(a1 + 384, v5, v6, 0) )
      return 0;
    v3 = 0;
    sub_A1C030(v18, *(_QWORD *)(v6 + 24), a2 + *(_DWORD *)v6, a2 + *(_DWORD *)v6);
    if ( !v21 )
    {
      if ( v19 )
      {
        v13 = v19;
        v14 = *(_QWORD *)(v19 + 32);
        if ( (unsigned __int64)*(unsigned int *)(v14 + 20) >= v18[0] )
        {
          v15 = v20;
          if ( v20 != 0 && *(_DWORD *)(v14 + 16) != v20 )
          {
            v16 = (__int64 *)sub_8E5480((__int64)v18);
            LOBYTE(v3) = ~(*v16 >> 1) & ((unsigned __int64)*v16 > 3);
            if ( (_BYTE)v3 )
            {
              if ( (*(_BYTE *)(v13 + v15 + 28) & 4) != 0 )
              {
                v17 = sub_A1A4E0(*(_QWORD *)(a1 + 568), 56);
                sub_A1BFE0(v17, v18);
              }
              else
              {
                v3 = 0;
              }
            }
          }
        }
      }
    }
    sub_A1C0C0(v18);
  }
  return v3;
}

